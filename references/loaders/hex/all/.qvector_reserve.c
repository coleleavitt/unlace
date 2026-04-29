// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1150
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1150 jmp     cs:off_5090
//
// Resolved target: qvector_reserve
// Target address:  0x5260
// GOT/IAT slot:    0x5090
// Slot symbol:     off_5090
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

