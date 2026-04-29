// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10F0
// Name:            .qlread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10F0 jmp     cs:off_7060
//
// Resolved target: qlread
// Target address:  0x7158
// GOT/IAT slot:    0x7060
// Slot symbol:     off_7060
// Target type:     <no type info>
// ============================================================

void .qlread(/* see target signature */)
{
    // Tail-call to qlread via GOT/IAT indirection
    return qlread(/* forwarded args */);
}

