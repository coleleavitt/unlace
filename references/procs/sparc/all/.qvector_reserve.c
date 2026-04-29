// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7340
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7340 jmp     cs:off_19188
//
// Resolved target: qvector_reserve
// Target address:  0x196B8
// GOT/IAT slot:    0x19188
// Slot symbol:     off_19188
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

