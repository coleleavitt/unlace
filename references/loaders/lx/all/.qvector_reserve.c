// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2200
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2200 jmp     cs:off_B0E8
//
// Resolved target: qvector_reserve
// Target address:  0xB390
// GOT/IAT slot:    0xB0E8
// Slot symbol:     off_B0E8
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

