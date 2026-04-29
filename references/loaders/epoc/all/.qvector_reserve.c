// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3240
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3240 jmp     cs:off_13108
//
// Resolved target: qvector_reserve
// Target address:  0x137F8
// GOT/IAT slot:    0x13108
// Slot symbol:     off_13108
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

