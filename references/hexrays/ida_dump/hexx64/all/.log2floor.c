// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BBE0
// Name:            .log2floor
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BBE0 jmp     cs:off_4ED5D8
//
// Resolved target: log2floor
// Target address:  0x4F18E0
// GOT/IAT slot:    0x4ED5D8
// Slot symbol:     off_4ED5D8
// Target type:     <no type info>
// ============================================================

void .log2floor(/* see target signature */)
{
    // Tail-call to log2floor via GOT/IAT indirection
    return log2floor(/* forwarded args */);
}

