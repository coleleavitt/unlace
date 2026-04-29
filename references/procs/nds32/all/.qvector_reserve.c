// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8340
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8340 jmp     cs:off_2A188
//
// Resolved target: qvector_reserve
// Target address:  0x2A6F8
// GOT/IAT slot:    0x2A188
// Slot symbol:     off_2A188
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

