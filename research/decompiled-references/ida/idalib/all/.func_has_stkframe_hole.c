// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC2D0
// Name:            .func_has_stkframe_hole
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC2D0 jmp     cs:off_2C7B950
//
// Resolved target: func_has_stkframe_hole
// Target address:  0x60EA10
// GOT/IAT slot:    0x2C7B950
// Slot symbol:     off_2C7B950
// Target type:     <no type info>
// ============================================================

void .func_has_stkframe_hole(/* see target signature */)
{
    // Tail-call to func_has_stkframe_hole via GOT/IAT indirection
    return func_has_stkframe_hole(/* forwarded args */);
}

