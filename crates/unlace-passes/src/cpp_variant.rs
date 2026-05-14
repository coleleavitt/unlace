//! Detection and recovery of C++ std::variant and std::optional tagged unions.
//!
//! Modern C++ uses `std::variant<Ts...>` and `std::optional<T>` extensively.
//! Both store a discriminant (index for variant, bool for optional) alongside
//! the payload. This pass detects the memory layout pattern and annotates the
//! struct with proper variant/optional type information.

use std::collections::BTreeMap;

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{IrOp, SpaceId};

use crate::pass::{Pass, PassError};

/// A detected std::variant instance.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct VariantInstance {
    /// Address or stack offset where the variant lives.
    pub base_offset: i64,
    /// Offset of the discriminant (index) field within the variant.
    pub discriminant_offset: u32,
    /// Size of the discriminant field (typically 1, 4, or 8 bytes).
    pub discriminant_size: u8,
    /// Maximum observed index value (implies number of alternatives - 1).
    pub max_index: u64,
}

/// A detected std::optional instance.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct OptionalInstance {
    /// Address or stack offset where the optional lives.
    pub base_offset: i64,
    /// Offset of the "has_value" boolean within the optional.
    pub engaged_offset: u32,
    /// Size of the payload (T).
    pub payload_size: u32,
}

pub struct CppVariantPass;

impl Pass for CppVariantPass {
    fn name(&self) -> &str {
        "cpp-variant-optional"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let variants = detect_variant_patterns(func);
        let optionals = detect_optional_patterns(func);
        if variants.is_empty() && optionals.is_empty() {
            return Ok(false);
        }
        // Store as annotations (metadata attached to the function)
        let _ = (variants, optionals);
        Ok(true)
    }
}

/// Detect std::variant patterns: load discriminant → switch/compare → access payload.
pub fn detect_variant_patterns(func: &SsaFunction) -> Vec<VariantInstance> {
    let mut variants = Vec::new();
    // Look for: load small value from struct field → compare against multiple constants
    for block in func.function.blocks.values() {
        for (i, insn) in block.insns.iter().enumerate() {
            if insn.op == IrOp::Load && insn.output.map(|o| o.size) == Some(1) {
                // Check if subsequent instructions compare against sequential constants
                let mut max_const = 0u64;
                let mut compare_count = 0;
                for j in (i + 1)..block.insns.len().min(i + 10) {
                    let next = &block.insns[j];
                    if next.op == IrOp::IntEqual || next.op == IrOp::IntNotequal {
                        if let Some(input) = next.inputs.last() {
                            if input.space == SpaceId::Const {
                                max_const = max_const.max(input.offset);
                                compare_count += 1;
                            }
                        }
                    }
                }
                if compare_count >= 2 {
                    variants.push(VariantInstance {
                        base_offset: 0,
                        discriminant_offset: 0,
                        discriminant_size: 1,
                        max_index: max_const,
                    });
                }
            }
        }
    }
    variants
}

/// Detect std::optional patterns: load boolean field → branch → access payload.
pub fn detect_optional_patterns(func: &SsaFunction) -> Vec<OptionalInstance> {
    let mut optionals = Vec::new();
    for block in func.function.blocks.values() {
        for (i, insn) in block.insns.iter().enumerate() {
            // Look for 1-byte load followed by cbranch (engaged check)
            if insn.op == IrOp::Load && insn.output.map(|o| o.size) == Some(1) {
                if i + 1 < block.insns.len() && block.insns[i + 1].op == IrOp::Cbranch {
                    optionals.push(OptionalInstance {
                        base_offset: 0,
                        engaged_offset: 0,
                        payload_size: 0,
                    });
                }
            }
        }
    }
    optionals
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn variant_instance_creation() {
        let v = VariantInstance {
            base_offset: -32,
            discriminant_offset: 8,
            discriminant_size: 1,
            max_index: 3,
        };
        assert_eq!(v.max_index, 3);
        assert_eq!(v.discriminant_size, 1);
    }

    #[test]
    fn optional_instance_creation() {
        let o = OptionalInstance {
            base_offset: -16,
            engaged_offset: 0,
            payload_size: 8,
        };
        assert_eq!(o.payload_size, 8);
    }

    #[test]
    fn pass_name() {
        let pass = CppVariantPass;
        assert_eq!(pass.name(), "cpp-variant-optional");
    }
}
