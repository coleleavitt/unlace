// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6700
// Name:            .equal_bytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6700 jmp     cs:off_1D368
//
// Resolved target: equal_bytes
// Target address:  0x1D878
// GOT/IAT slot:    0x1D368
// Slot symbol:     off_1D368
// Target type:     <no type info>
// ============================================================

void .equal_bytes(/* see target signature */)
{
    // Tail-call to equal_bytes via GOT/IAT indirection
    return equal_bytes(/* forwarded args */);
}

