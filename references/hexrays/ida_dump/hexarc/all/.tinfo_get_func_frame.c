// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29D80
// Name:            .tinfo_get_func_frame
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29D80 jmp     cs:off_4B96A8
//
// Resolved target: tinfo_get_func_frame
// Target address:  0x4BC0A0
// GOT/IAT slot:    0x4B96A8
// Slot symbol:     off_4B96A8
// Target type:     <no type info>
// ============================================================

void .tinfo_get_func_frame(/* see target signature */)
{
    // Tail-call to tinfo_get_func_frame via GOT/IAT indirection
    return tinfo_get_func_frame(/* forwarded args */);
}

