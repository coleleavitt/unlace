// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA550
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA550 jmp     cs:off_CA290
//
// Resolved target: qvector_reserve
// Target address:  0xD0BC8
// GOT/IAT slot:    0xCA290
// Slot symbol:     off_CA290
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

