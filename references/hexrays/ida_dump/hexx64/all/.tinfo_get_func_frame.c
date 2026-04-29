// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BDD0
// Name:            .tinfo_get_func_frame
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BDD0 jmp     cs:off_4ED6D0
//
// Resolved target: tinfo_get_func_frame
// Target address:  0x4F19E0
// GOT/IAT slot:    0x4ED6D0
// Slot symbol:     off_4ED6D0
// Target type:     <no type info>
// ============================================================

void .tinfo_get_func_frame(/* see target signature */)
{
    // Tail-call to tinfo_get_func_frame via GOT/IAT indirection
    return tinfo_get_func_frame(/* forwarded args */);
}

