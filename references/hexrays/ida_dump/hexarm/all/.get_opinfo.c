// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D410
// Name:            .get_opinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D410 jmp     cs:off_4E91F0
//
// Resolved target: get_opinfo
// Target address:  0x4EBBE0
// GOT/IAT slot:    0x4E91F0
// Slot symbol:     off_4E91F0
// Target type:     <no type info>
// ============================================================

void .get_opinfo(/* see target signature */)
{
    // Tail-call to get_opinfo via GOT/IAT indirection
    return get_opinfo(/* forwarded args */);
}

