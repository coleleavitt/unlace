// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA470
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA470 jmp     cs:off_35220
//
// Resolved target: qvector_reserve
// Target address:  0x35870
// GOT/IAT slot:    0x35220
// Slot symbol:     off_35220
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

