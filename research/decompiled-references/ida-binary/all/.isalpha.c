// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111930
// Name:            .isalpha
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111930 jmp     cs:isalpha_ptr
//
// Resolved target: isalpha
// Target address:  0x8D3680
// GOT/IAT slot:    0x89F938
// Slot symbol:     isalpha_ptr
// Target type:     int(int)
// ============================================================

/* see target sig */ .isalpha(/* see target signature */)
{
    // Tail-call to isalpha via GOT/IAT indirection
    return isalpha(/* forwarded args */);
}

