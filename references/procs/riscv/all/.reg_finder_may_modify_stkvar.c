// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA690
// Name:            .reg_finder_may_modify_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA690 jmp     cs:off_35330
//
// Resolved target: reg_finder_may_modify_stkvar
// Target address:  0x35980
// GOT/IAT slot:    0x35330
// Slot symbol:     off_35330
// Target type:     <no type info>
// ============================================================

void .reg_finder_may_modify_stkvar(/* see target signature */)
{
    // Tail-call to reg_finder_may_modify_stkvar via GOT/IAT indirection
    return reg_finder_may_modify_stkvar(/* forwarded args */);
}

