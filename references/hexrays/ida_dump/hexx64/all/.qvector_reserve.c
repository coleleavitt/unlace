// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BE90
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BE90 jmp     cs:off_4ED730
//
// Resolved target: qvector_reserve
// Target address:  0x4F1A40
// GOT/IAT slot:    0x4ED730
// Slot symbol:     off_4ED730
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

