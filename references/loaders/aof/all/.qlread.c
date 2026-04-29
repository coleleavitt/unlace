// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21D0
// Name:            .qlread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21D0 jmp     cs:off_70D0
//
// Resolved target: qlread
// Target address:  0x7288
// GOT/IAT slot:    0x70D0
// Slot symbol:     off_70D0
// Target type:     <no type info>
// ============================================================

void .qlread(/* see target signature */)
{
    // Tail-call to qlread via GOT/IAT indirection
    return qlread(/* forwarded args */);
}

