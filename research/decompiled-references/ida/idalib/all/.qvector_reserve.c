// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACEB0
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACEB0 jmp     cs:off_2C7BF40
//
// Resolved target: qvector_reserve
// Target address:  0x83FE00
// GOT/IAT slot:    0x2C7BF40
// Slot symbol:     off_2C7BF40
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

