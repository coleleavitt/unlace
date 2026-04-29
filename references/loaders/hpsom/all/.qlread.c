// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1140
// Name:            .qlread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1140 jmp     cs:off_5088
//
// Resolved target: qlread
// Target address:  0x5228
// GOT/IAT slot:    0x5088
// Slot symbol:     off_5088
// Target type:     <no type info>
// ============================================================

void .qlread(/* see target signature */)
{
    // Tail-call to qlread via GOT/IAT indirection
    return qlread(/* forwarded args */);
}

