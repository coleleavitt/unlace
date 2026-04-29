// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4490
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4490 jmp     cs:off_4E230
//
// Resolved target: qvector_reserve
// Target address:  0x4F840
// GOT/IAT slot:    0x4E230
// Slot symbol:     off_4E230
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

