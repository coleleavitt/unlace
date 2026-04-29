// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x31B0
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x31B0 jmp     cs:off_1A0C0
//
// Resolved target: qvector_reserve
// Target address:  0x1A378
// GOT/IAT slot:    0x1A0C0
// Slot symbol:     off_1A0C0
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

