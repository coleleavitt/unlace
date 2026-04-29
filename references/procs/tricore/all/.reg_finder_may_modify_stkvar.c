// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6540
// Name:            .reg_finder_may_modify_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6540 jmp     cs:off_24288
//
// Resolved target: reg_finder_may_modify_stkvar
// Target address:  0x26058
// GOT/IAT slot:    0x24288
// Slot symbol:     off_24288
// Target type:     <no type info>
// ============================================================

void .reg_finder_may_modify_stkvar(/* see target signature */)
{
    // Tail-call to reg_finder_may_modify_stkvar via GOT/IAT indirection
    return reg_finder_may_modify_stkvar(/* forwarded args */);
}

