// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1196D0
// Name:            .htons
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1196D0 jmp     cs:htons_ptr
//
// Resolved target: htons
// Target address:  0x8D8668
// GOT/IAT slot:    0x8A3808
// Slot symbol:     htons_ptr
// Target type:     uint16_t(uint16_t hostshort)
// ============================================================

/* see target sig */ .htons(/* see target signature */)
{
    // Tail-call to htons via GOT/IAT indirection
    return htons(/* forwarded args */);
}

