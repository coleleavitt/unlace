// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29E30
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29E30 jmp     cs:off_4B9700
//
// Resolved target: qvector_reserve
// Target address:  0x4BC0F8
// GOT/IAT slot:    0x4B9700
// Slot symbol:     off_4B9700
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

