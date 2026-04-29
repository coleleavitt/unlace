// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10E0
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10E0 jmp     cs:off_4058
//
// Resolved target: qvector_reserve
// Target address:  0x5198
// GOT/IAT slot:    0x4058
// Slot symbol:     off_4058
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

