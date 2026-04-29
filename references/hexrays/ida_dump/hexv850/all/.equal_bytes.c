// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C140
// Name:            .equal_bytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C140 jmp     cs:off_4C1088
//
// Resolved target: equal_bytes
// Target address:  0x4C40B8
// GOT/IAT slot:    0x4C1088
// Slot symbol:     off_4C1088
// Target type:     <no type info>
// ============================================================

void .equal_bytes(/* see target signature */)
{
    // Tail-call to equal_bytes via GOT/IAT indirection
    return equal_bytes(/* forwarded args */);
}

