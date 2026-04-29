// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6380
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6380 jmp     cs:off_241A8
//
// Resolved target: qvector_reserve
// Target address:  0x25F78
// GOT/IAT slot:    0x241A8
// Slot symbol:     off_241A8
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

