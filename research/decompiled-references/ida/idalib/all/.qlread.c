// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA6E0
// Name:            .qlread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA6E0 jmp     cs:off_2C7AB58
//
// Resolved target: qlread
// Target address:  0x837490
// GOT/IAT slot:    0x2C7AB58
// Slot symbol:     off_2C7AB58
// Target type:     <no type info>
// ============================================================

void .qlread(/* see target signature */)
{
    // Tail-call to qlread via GOT/IAT indirection
    return qlread(/* forwarded args */);
}

