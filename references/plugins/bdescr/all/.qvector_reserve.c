// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20F0
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20F0 jmp     cs:off_7060
//
// Resolved target: qvector_reserve
// Target address:  0x7190
// GOT/IAT slot:    0x7060
// Slot symbol:     off_7060
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

