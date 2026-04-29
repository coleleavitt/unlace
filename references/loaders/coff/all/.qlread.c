// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4470
// Name:            .qlread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4470 jmp     cs:off_23220
//
// Resolved target: qlread
// Target address:  0x23640
// GOT/IAT slot:    0x23220
// Slot symbol:     off_23220
// Target type:     <no type info>
// ============================================================

void .qlread(/* see target signature */)
{
    // Tail-call to qlread via GOT/IAT indirection
    return qlread(/* forwarded args */);
}

