// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x63B0
// Name:            .tinfo_get_func_frame
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x63B0 jmp     cs:off_2F1C0
//
// Resolved target: tinfo_get_func_frame
// Target address:  0x2F830
// GOT/IAT slot:    0x2F1C0
// Slot symbol:     off_2F1C0
// Target type:     <no type info>
// ============================================================

void .tinfo_get_func_frame(/* see target signature */)
{
    // Tail-call to tinfo_get_func_frame via GOT/IAT indirection
    return tinfo_get_func_frame(/* forwarded args */);
}

