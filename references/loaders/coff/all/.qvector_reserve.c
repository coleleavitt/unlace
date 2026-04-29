// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4360
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4360 jmp     cs:off_23198
//
// Resolved target: qvector_reserve
// Target address:  0x235B8
// GOT/IAT slot:    0x23198
// Slot symbol:     off_23198
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

