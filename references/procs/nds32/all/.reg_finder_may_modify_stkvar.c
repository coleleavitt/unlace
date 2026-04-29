// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x84C0
// Name:            .reg_finder_may_modify_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x84C0 jmp     cs:off_2A248
//
// Resolved target: reg_finder_may_modify_stkvar
// Target address:  0x2A7B8
// GOT/IAT slot:    0x2A248
// Slot symbol:     off_2A248
// Target type:     <no type info>
// ============================================================

void .reg_finder_may_modify_stkvar(/* see target signature */)
{
    // Tail-call to reg_finder_may_modify_stkvar via GOT/IAT indirection
    return reg_finder_may_modify_stkvar(/* forwarded args */);
}

