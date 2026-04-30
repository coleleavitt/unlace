// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1193C0
// Name:            .b2a64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1193C0 jmp     cs:b2a64_ptr
//
// Resolved target: b2a64
// Target address:  0x8D8430
// GOT/IAT slot:    0x8A3680
// Slot symbol:     b2a64_ptr
// Target type:     <no type info>
// ============================================================

void .b2a64(/* see target signature */)
{
    // Tail-call to b2a64 via GOT/IAT indirection
    return b2a64(/* forwarded args */);
}

