// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B110
// Name:            .equal_bytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B110 jmp     cs:off_4BA070
//
// Resolved target: equal_bytes
// Target address:  0x4BCAA8
// GOT/IAT slot:    0x4BA070
// Slot symbol:     off_4BA070
// Target type:     <no type info>
// ============================================================

void .equal_bytes(/* see target signature */)
{
    // Tail-call to equal_bytes via GOT/IAT indirection
    return equal_bytes(/* forwarded args */);
}

