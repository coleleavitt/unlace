//! Combine the call sites of one callee into a prototype guess.

use unlace_ir::signature::{ArgLoc, FunctionSignature, SignatureParam, SignatureRank};
use unlace_ir::ssa::{CallingConvention, PrimitiveType};

use super::site::CallSiteArgs;

/// Guess the prototype of a callee from every call site that targets it.
///
/// Each count is the minimum over the call sites, since a site that sets up
/// fewer arguments bounds what the callee can take; Hex-Rays takes the
/// stack-argument size the same way (`sub_E0380` interprets every call to the
/// callee and keeps the smallest). Sites that write no argument register at
/// all say nothing about register arguments (they may forward every one of
/// the caller's own arguments), so they only count when no site writes one.
/// Stack arguments are only possible once the integer registers are
/// exhausted (`sub_DE780`), so a site that uses fewer registers proves
/// there are none.
///
/// The guess is variadic when every site sets the System V vector-register
/// count in AL, which the convention only requires for variadic callees
/// (and unprototyped ones, where a variadic shape is the honest answer);
/// the named parameters are then the minimum, and each site passes as many
/// as it sets up.
pub fn guess_from_call_sites(
    cc: CallingConvention,
    sites: &[CallSiteArgs],
) -> Option<FunctionSignature> {
    if sites.is_empty() || cc == CallingConvention::Unknown {
        return None;
    }
    let informative: Vec<&CallSiteArgs> = {
        let writing: Vec<&CallSiteArgs> = sites
            .iter()
            .filter(|s| s.int_regs != 0 || s.float_regs != 0)
            .collect();
        if writing.is_empty() {
            sites.iter().collect()
        } else {
            writing
        }
    };
    let int_reg_count = cc.int_arg_regs().len();
    let int_args = informative.iter().map(|s| s.int_args()).min().unwrap_or(0);
    let float_args = informative
        .iter()
        .map(|s| s.float_args())
        .min()
        .unwrap_or(0);
    let stack_bytes = sites
        .iter()
        .map(|s| {
            if s.int_args() >= int_reg_count {
                s.stack_bytes
            } else {
                0
            }
        })
        .min()
        .unwrap_or(0);
    let variadic =
        cc == CallingConvention::SystemV && sites.iter().all(|s| s.vector_count.is_some());

    let mut params: Vec<SignatureParam> = Vec::new();
    let unknown = |loc| SignatureParam {
        loc,
        ty: PrimitiveType::Unknown,
    };
    if cc == CallingConvention::MicrosoftX64 {
        // One position per argument; each uses either its integer or its
        // floating-point register; a position no site writes as an
        // integer but some site writes as floating point is floating point.
        let positions = int_args.max(float_args);
        let int_bits = informative.iter().fold(0u32, |acc, s| acc | s.int_regs);
        let float_bits = informative.iter().fold(0u32, |acc, s| acc | s.float_regs);
        for i in 0..positions {
            let is_float = float_bits & (1 << i) != 0 && int_bits & (1 << i) == 0;
            let regs = if is_float {
                cc.float_arg_regs()
            } else {
                cc.int_arg_regs()
            };
            params.push(unknown(ArgLoc::Reg(regs[i])));
        }
    } else {
        params.extend(
            cc.int_arg_regs()[..int_args]
                .iter()
                .map(|&r| unknown(ArgLoc::Reg(r))),
        );
        // A variadic callee's vector registers carry unnamed arguments.
        if !variadic {
            params.extend(
                cc.float_arg_regs()[..float_args]
                    .iter()
                    .map(|&r| unknown(ArgLoc::Reg(r))),
            );
        }
    }
    let slot = cc.stack_slot_size();
    let start = cc.stack_args_start();
    params.extend((0..stack_bytes / slot).map(|i| unknown(ArgLoc::Stack(start + i * slot))));

    Some(FunctionSignature {
        return_type: PrimitiveType::Unknown,
        params,
        calling_convention: cc,
        rank: SignatureRank::CallSite,
        variadic,
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    fn site(int_regs: u32) -> CallSiteArgs {
        CallSiteArgs {
            int_regs,
            ..CallSiteArgs::default()
        }
    }

    fn arity(sig: &FunctionSignature) -> usize {
        sig.params.len()
    }

    #[test]
    fn minimum_over_call_sites() {
        let sig = guess_from_call_sites(
            CallingConvention::SystemV,
            &[site(0b111), site(0b011), site(0b111)],
        )
        .unwrap();
        assert_eq!(arity(&sig), 2);
        assert_eq!(sig.rank, SignatureRank::CallSite);
        assert!(!sig.variadic);
    }

    #[test]
    fn sites_writing_nothing_do_not_lower_the_minimum() {
        let sig =
            guess_from_call_sites(CallingConvention::SystemV, &[site(0), site(0b11)]).unwrap();
        assert_eq!(arity(&sig), 2);
        let none = guess_from_call_sites(CallingConvention::SystemV, &[site(0)]).unwrap();
        assert_eq!(arity(&none), 0);
    }

    #[test]
    fn stack_arguments_need_exhausted_registers_at_every_site() {
        let full = CallSiteArgs {
            int_regs: 0b11_1111,
            stack_bytes: 16,
            ..CallSiteArgs::default()
        };
        let sig = guess_from_call_sites(CallingConvention::SystemV, &[full, full]).unwrap();
        assert_eq!(arity(&sig), 8);
        assert_eq!(sig.params[6].loc, ArgLoc::Stack(0));
        assert_eq!(sig.params[7].loc, ArgLoc::Stack(8));

        let short = CallSiteArgs {
            stack_bytes: 8,
            ..site(0b1)
        };
        let sig = guess_from_call_sites(CallingConvention::SystemV, &[full, short]).unwrap();
        assert_eq!(
            arity(&sig),
            1,
            "a site using one register has no stack arguments"
        );
    }

    #[test]
    fn cdecl_minimum_stack_bytes() {
        let a = CallSiteArgs {
            stack_bytes: 12,
            ..CallSiteArgs::default()
        };
        let b = CallSiteArgs {
            stack_bytes: 8,
            ..CallSiteArgs::default()
        };
        let sig = guess_from_call_sites(CallingConvention::Cdecl, &[a, b]).unwrap();
        assert_eq!(
            sig.params.iter().map(|p| p.loc).collect::<Vec<_>>(),
            vec![ArgLoc::Stack(0), ArgLoc::Stack(4)]
        );
    }

    #[test]
    fn vector_count_at_every_site_means_variadic() {
        let printf_like = |int_regs| CallSiteArgs {
            int_regs,
            vector_count: Some(0),
            ..CallSiteArgs::default()
        };
        let sig = guess_from_call_sites(
            CallingConvention::SystemV,
            &[printf_like(0b1), printf_like(0b111)],
        )
        .unwrap();
        assert!(sig.variadic);
        assert_eq!(arity(&sig), 1);

        let mixed =
            guess_from_call_sites(CallingConvention::SystemV, &[printf_like(0b1), site(0b1)])
                .unwrap();
        assert!(!mixed.variadic);
    }

    #[test]
    fn msx64_positions_pick_integer_or_float_registers() {
        let s = CallSiteArgs {
            int_regs: 0b01,
            float_regs: 0b10,
            ..CallSiteArgs::default()
        };
        let sig = guess_from_call_sites(CallingConvention::MicrosoftX64, &[s]).unwrap();
        let int = CallingConvention::MicrosoftX64.int_arg_regs();
        let float = CallingConvention::MicrosoftX64.float_arg_regs();
        assert_eq!(
            sig.params.iter().map(|p| p.loc).collect::<Vec<_>>(),
            vec![ArgLoc::Reg(int[0]), ArgLoc::Reg(float[1])]
        );
    }
}
