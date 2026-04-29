// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x41F0
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x41F0 jmp     cs:off_1F0E0
//
// Resolved target: qvector_reserve
// Target address:  0x1F390
// GOT/IAT slot:    0x1F0E0
// Slot symbol:     off_1F0E0
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

