// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A78E0
// Name:            .mallinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A78E0 jmp     cs:off_2C79458
//
// Resolved target: mallinfo
// Target address:  0x2D11430
// GOT/IAT slot:    0x2C79458
// Slot symbol:     off_2C79458
// Target type:     struct mallinfo *(struct mallinfo *__return_ptr __struct_ptr retstr)
// ============================================================

/* see target sig */ .mallinfo(/* see target signature */)
{
    // Tail-call to mallinfo via GOT/IAT indirection
    return mallinfo(/* forwarded args */);
}

