// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9600
// Name:            .qlread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9600 jmp     cs:off_892E8
//
// Resolved target: qlread
// Target address:  0x8C5F0
// GOT/IAT slot:    0x892E8
// Slot symbol:     off_892E8
// Target type:     <no type info>
// ============================================================

void .qlread(/* see target signature */)
{
    // Tail-call to qlread via GOT/IAT indirection
    return qlread(/* forwarded args */);
}

