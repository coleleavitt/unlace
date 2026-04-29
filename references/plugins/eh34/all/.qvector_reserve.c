// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6360
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6360 jmp     cs:off_8D198
//
// Resolved target: qvector_reserve
// Target address:  0x8D730
// GOT/IAT slot:    0x8D198
// Slot symbol:     off_8D198
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

