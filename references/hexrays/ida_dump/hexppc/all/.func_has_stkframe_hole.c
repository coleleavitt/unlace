// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B320
// Name:            .func_has_stkframe_hole
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B320 jmp     cs:off_4DA978
//
// Resolved target: func_has_stkframe_hole
// Target address:  0x4DD378
// GOT/IAT slot:    0x4DA978
// Slot symbol:     off_4DA978
// Target type:     <no type info>
// ============================================================

void .func_has_stkframe_hole(/* see target signature */)
{
    // Tail-call to func_has_stkframe_hole via GOT/IAT indirection
    return func_has_stkframe_hole(/* forwarded args */);
}

