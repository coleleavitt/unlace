// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D2B0
// Name:            .equal_bytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D2B0 jmp     cs:off_4EE140
//
// Resolved target: equal_bytes
// Target address:  0x4F2498
// GOT/IAT slot:    0x4EE140
// Slot symbol:     off_4EE140
// Target type:     <no type info>
// ============================================================

void .equal_bytes(/* see target signature */)
{
    // Tail-call to equal_bytes via GOT/IAT indirection
    return equal_bytes(/* forwarded args */);
}

