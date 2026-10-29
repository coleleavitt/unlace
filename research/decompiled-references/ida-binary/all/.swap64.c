// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117140
// Name:            .swap64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117140 jmp     cs:swap64_ptr
//
// Resolved target: swap64
// Target address:  0x8D6EA0
// GOT/IAT slot:    0x8A2540
// Slot symbol:     swap64_ptr
// Target type:     <no type info>
// ============================================================

void .swap64(/* see target signature */)
{
    // Tail-call to swap64 via GOT/IAT indirection
    return swap64(/* forwarded args */);
}

