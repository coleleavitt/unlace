// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D680
// Name:            .qlread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D680 jmp     cs:off_B3328
//
// Resolved target: qlread
// Target address:  0xB3AC8
// GOT/IAT slot:    0xB3328
// Slot symbol:     off_B3328
// Target type:     <no type info>
// ============================================================

void .qlread(/* see target signature */)
{
    // Tail-call to qlread via GOT/IAT indirection
    return qlread(/* forwarded args */);
}

