// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7430
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7430 jmp     cs:off_1D200
//
// Resolved target: qfree
// Target address:  0x1D550
// GOT/IAT slot:    0x1D200
// Slot symbol:     off_1D200
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

