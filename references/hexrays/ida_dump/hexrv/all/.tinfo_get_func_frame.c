// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD80
// Name:            .tinfo_get_func_frame
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD80 jmp     cs:off_4BF6A8
//
// Resolved target: tinfo_get_func_frame
// Target address:  0x4C2B98
// GOT/IAT slot:    0x4BF6A8
// Slot symbol:     off_4BF6A8
// Target type:     <no type info>
// ============================================================

void .tinfo_get_func_frame(/* see target signature */)
{
    // Tail-call to tinfo_get_func_frame via GOT/IAT indirection
    return tinfo_get_func_frame(/* forwarded args */);
}

