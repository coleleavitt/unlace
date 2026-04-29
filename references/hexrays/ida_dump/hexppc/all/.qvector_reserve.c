// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AE30
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AE30 jmp     cs:off_4DA700
//
// Resolved target: qvector_reserve
// Target address:  0x4DD0F8
// GOT/IAT slot:    0x4DA700
// Slot symbol:     off_4DA700
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

