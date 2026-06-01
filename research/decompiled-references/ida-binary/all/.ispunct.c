// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1178F0
// Name:            .ispunct
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1178F0 jmp     cs:ispunct_ptr
//
// Resolved target: ispunct
// Target address:  0x8D7390
// GOT/IAT slot:    0x8A2918
// Slot symbol:     ispunct_ptr
// Target type:     int(int)
// ============================================================

/* see target sig */ .ispunct(/* see target signature */)
{
    // Tail-call to ispunct via GOT/IAT indirection
    return ispunct(/* forwarded args */);
}

