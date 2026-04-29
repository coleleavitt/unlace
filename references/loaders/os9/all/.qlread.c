// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1100
// Name:            .qlread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1100 jmp     cs:off_4068
//
// Resolved target: qlread
// Target address:  0x4180
// GOT/IAT slot:    0x4068
// Slot symbol:     off_4068
// Target type:     <no type info>
// ============================================================

void .qlread(/* see target signature */)
{
    // Tail-call to qlread via GOT/IAT indirection
    return qlread(/* forwarded args */);
}

