// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7150
// Name:            .btoa64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7150 jmp     cs:off_1D090
//
// Resolved target: btoa64
// Target address:  0x1D3C0
// GOT/IAT slot:    0x1D090
// Slot symbol:     off_1D090
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .btoa64(/* see target signature */)
{
    // Tail-call to btoa64 via GOT/IAT indirection
    return btoa64(/* forwarded args */);
}

