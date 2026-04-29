// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10C0
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10C0 jmp     cs:off_4048
//
// Resolved target: qvector_reserve
// Target address:  0x4170
// GOT/IAT slot:    0x4048
// Slot symbol:     off_4048
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

