// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C3E0
// Name:            .func_has_stkframe_hole
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C3E0 jmp     cs:off_4ED9D8
//
// Resolved target: func_has_stkframe_hole
// Target address:  0x4F1CF8
// GOT/IAT slot:    0x4ED9D8
// Slot symbol:     off_4ED9D8
// Target type:     <no type info>
// ============================================================

void .func_has_stkframe_hole(/* see target signature */)
{
    // Tail-call to func_has_stkframe_hole via GOT/IAT indirection
    return func_has_stkframe_hole(/* forwarded args */);
}

