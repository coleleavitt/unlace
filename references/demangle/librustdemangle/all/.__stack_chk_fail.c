// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10E0
// Name:            .__stack_chk_fail
// Size:            11 bytes (2 instructions)
// Disassembly:
//   0x10E0 endbr64
//   0x10E4 bnd jmp cs:off_6030
//
// Resolved target: __stack_chk_fail
// Target address:  0x6078
// GOT/IAT slot:    0x6030
// Slot symbol:     off_6030
// Target type:     <no type info>
// ============================================================

void .__stack_chk_fail(/* see target signature */)
{
    // Tail-call to __stack_chk_fail via GOT/IAT indirection
    return __stack_chk_fail(/* forwarded args */);
}

