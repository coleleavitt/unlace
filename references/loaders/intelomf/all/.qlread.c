// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1170
// Name:            .qlread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1170 jmp     cs:off_50A0
//
// Resolved target: qlread
// Target address:  0x52E8
// GOT/IAT slot:    0x50A0
// Slot symbol:     off_50A0
// Target type:     <no type info>
// ============================================================

void .qlread(/* see target signature */)
{
    // Tail-call to qlread via GOT/IAT indirection
    return qlread(/* forwarded args */);
}

