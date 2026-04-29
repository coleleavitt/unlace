// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D500
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D500 jmp     cs:off_B3268
//
// Resolved target: qvector_reserve
// Target address:  0xB3A08
// GOT/IAT slot:    0xB3268
// Slot symbol:     off_B3268
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

