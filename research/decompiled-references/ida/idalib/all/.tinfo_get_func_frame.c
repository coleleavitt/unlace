// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9130
// Name:            .tinfo_get_func_frame
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9130 jmp     cs:off_2C7A080
//
// Resolved target: tinfo_get_func_frame
// Target address:  0x54C4F0
// GOT/IAT slot:    0x2C7A080
// Slot symbol:     off_2C7A080
// Target type:     <no type info>
// ============================================================

void .tinfo_get_func_frame(/* see target signature */)
{
    // Tail-call to tinfo_get_func_frame via GOT/IAT indirection
    return tinfo_get_func_frame(/* forwarded args */);
}

