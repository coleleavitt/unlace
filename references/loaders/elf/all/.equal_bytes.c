// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9AC0
// Name:            .equal_bytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9AC0 jmp     cs:off_89548
//
// Resolved target: equal_bytes
// Target address:  0x8C878
// GOT/IAT slot:    0x89548
// Slot symbol:     off_89548
// Target type:     <no type info>
// ============================================================

void .equal_bytes(/* see target signature */)
{
    // Tail-call to equal_bytes via GOT/IAT indirection
    return equal_bytes(/* forwarded args */);
}

