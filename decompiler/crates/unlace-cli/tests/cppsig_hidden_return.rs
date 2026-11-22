//! cppsig on i386 System V: a function returning a struct by value ends in
//! `ret $4` (the callee pops the hidden return pointer), so its demangled
//! parameter list gains that pointer in front.

use crate::common;

#[test]
fn hidden_struct_return_pointer_leads_the_demangled_parameters() {
    let binary = common::fixture("hiddenret_i386");
    let (stdout, stderr, rc) = common::run_kuna(&["decompile", &binary, "0x8049000", "--addr"]);
    assert_eq!(rc, 0, "{stderr}");
    assert!(stdout.contains("mk(void *rethidden,int a1,int a2)"), "{stdout}");
    let (stdout, _, _) = common::run_kuna(&["decompile", &binary, "0x8049020", "--addr"]);
    assert!(stdout.contains("mk(v1,a0,2)"), "{stdout}");
}
