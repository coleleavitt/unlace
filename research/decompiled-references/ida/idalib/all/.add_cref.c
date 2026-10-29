// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9A80
// Name:            .add_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9A80 jmp     cs:off_2C7A528
//
// Resolved target: add_cref
// Target address:  0x3E2880
// GOT/IAT slot:    0x2C7A528
// Slot symbol:     off_2C7A528
// Target type:     __int64 __fastcall(int, int)
// ============================================================

/* see target sig */ .add_cref(/* see target signature */)
{
    // Tail-call to add_cref via GOT/IAT indirection
    return add_cref(/* forwarded args */);
}

