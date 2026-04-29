// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10F0
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10F0 jmp     cs:off_5060
//
// Resolved target: qvector_reserve
// Target address:  0x51C0
// GOT/IAT slot:    0x5060
// Slot symbol:     off_5060
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

