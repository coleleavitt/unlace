// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C130
// Name:            .equal_bytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C130 jmp     cs:off_4C0080
//
// Resolved target: equal_bytes
// Target address:  0x4C35B0
// GOT/IAT slot:    0x4C0080
// Slot symbol:     off_4C0080
// Target type:     <no type info>
// ============================================================

void .equal_bytes(/* see target signature */)
{
    // Tail-call to equal_bytes via GOT/IAT indirection
    return equal_bytes(/* forwarded args */);
}

