// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7310
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7310 jmp     cs:off_1D170
//
// Resolved target: get_dword
// Target address:  0x1D4A8
// GOT/IAT slot:    0x1D170
// Slot symbol:     off_1D170
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

