// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DDA0
// Name:            .tinfo_get_func_frame
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DDA0 jmp     cs:off_4E96B8
//
// Resolved target: tinfo_get_func_frame
// Target address:  0x4EC0D0
// GOT/IAT slot:    0x4E96B8
// Slot symbol:     off_4E96B8
// Target type:     <no type info>
// ============================================================

void .tinfo_get_func_frame(/* see target signature */)
{
    // Tail-call to tinfo_get_func_frame via GOT/IAT indirection
    return tinfo_get_func_frame(/* forwarded args */);
}

