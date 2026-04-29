// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21B0
// Name:            .qlread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21B0 jmp     cs:off_80C0
//
// Resolved target: qlread
// Target address:  0x87A0
// GOT/IAT slot:    0x80C0
// Slot symbol:     off_80C0
// Target type:     <no type info>
// ============================================================

void .qlread(/* see target signature */)
{
    // Tail-call to qlread via GOT/IAT indirection
    return qlread(/* forwarded args */);
}

