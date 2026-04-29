// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1130
// Name:            .qlread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1130 jmp     cs:off_5080
//
// Resolved target: qlread
// Target address:  0x51D8
// GOT/IAT slot:    0x5080
// Slot symbol:     off_5080
// Target type:     <no type info>
// ============================================================

void .qlread(/* see target signature */)
{
    // Tail-call to qlread via GOT/IAT indirection
    return qlread(/* forwarded args */);
}

