// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DBB0
// Name:            .log2floor
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DBB0 jmp     cs:off_4E95C0
//
// Resolved target: log2floor
// Target address:  0x4EBFD0
// GOT/IAT slot:    0x4E95C0
// Slot symbol:     off_4E95C0
// Target type:     <no type info>
// ============================================================

void .log2floor(/* see target signature */)
{
    // Tail-call to log2floor via GOT/IAT indirection
    return log2floor(/* forwarded args */);
}

