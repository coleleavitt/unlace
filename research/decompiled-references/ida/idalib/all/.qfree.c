// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA210
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA210 jmp     cs:off_2C7A8F0
//
// Resolved target: qfree
// Target address:  0x83FCD0
// GOT/IAT slot:    0x2C7A8F0
// Slot symbol:     off_2C7A8F0
// Target type:     void(void *ptr)
// ============================================================

/* see target sig */ .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

