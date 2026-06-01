// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113940
// Name:            .isprint
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113940 jmp     cs:isprint_ptr
//
// Resolved target: isprint
// Target address:  0x8D4B18
// GOT/IAT slot:    0x8A0940
// Slot symbol:     isprint_ptr
// Target type:     int(int)
// ============================================================

/* see target sig */ .isprint(/* see target signature */)
{
    // Tail-call to isprint via GOT/IAT indirection
    return isprint(/* forwarded args */);
}

