// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DE50
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DE50 jmp     cs:off_4E9710
//
// Resolved target: qvector_reserve
// Target address:  0x4EC128
// GOT/IAT slot:    0x4E9710
// Slot symbol:     off_4E9710
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

