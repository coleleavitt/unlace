// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5280
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5280 jmp     cs:off_1A128
//
// Resolved target: qvector_reserve
// Target address:  0x1A4B0
// GOT/IAT slot:    0x1A128
// Slot symbol:     off_1A128
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

