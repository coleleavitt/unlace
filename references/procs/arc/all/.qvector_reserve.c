// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x83C0
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x83C0 jmp     cs:off_2A1C8
//
// Resolved target: qvector_reserve
// Target address:  0x2BBD8
// GOT/IAT slot:    0x2A1C8
// Slot symbol:     off_2A1C8
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

