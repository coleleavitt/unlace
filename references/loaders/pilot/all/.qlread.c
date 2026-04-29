// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2190
// Name:            .qlread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2190 jmp     cs:off_80B0
//
// Resolved target: qlread
// Target address:  0x8290
// GOT/IAT slot:    0x80B0
// Slot symbol:     off_80B0
// Target type:     <no type info>
// ============================================================

void .qlread(/* see target signature */)
{
    // Tail-call to qlread via GOT/IAT indirection
    return qlread(/* forwarded args */);
}

