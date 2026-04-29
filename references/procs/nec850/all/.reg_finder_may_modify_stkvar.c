// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9610
// Name:            .reg_finder_may_modify_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9610 jmp     cs:off_2E2F0
//
// Resolved target: reg_finder_may_modify_stkvar
// Target address:  0x2E960
// GOT/IAT slot:    0x2E2F0
// Slot symbol:     off_2E2F0
// Target type:     <no type info>
// ============================================================

void .reg_finder_may_modify_stkvar(/* see target signature */)
{
    // Tail-call to reg_finder_may_modify_stkvar via GOT/IAT indirection
    return reg_finder_may_modify_stkvar(/* forwarded args */);
}

