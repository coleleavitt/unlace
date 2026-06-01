// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114260
// Name:            .tinfo_get_func_frame
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114260 jmp     cs:tinfo_get_func_frame_ptr
//
// Resolved target: tinfo_get_func_frame
// Target address:  0x8D50D8
// GOT/IAT slot:    0x8A0DD0
// Slot symbol:     tinfo_get_func_frame_ptr
// Target type:     <no type info>
// ============================================================

void .tinfo_get_func_frame(/* see target signature */)
{
    // Tail-call to tinfo_get_func_frame via GOT/IAT indirection
    return tinfo_get_func_frame(/* forwarded args */);
}

