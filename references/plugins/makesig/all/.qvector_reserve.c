// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x32B0
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x32B0 jmp     cs:off_20140
//
// Resolved target: qvector_reserve
// Target address:  0x21A50
// GOT/IAT slot:    0x20140
// Slot symbol:     off_20140
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

