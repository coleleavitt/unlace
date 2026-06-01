// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7EC0
// Name:            .qlsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7EC0 jmp     cs:off_2C79748
//
// Resolved target: qlsize
// Target address:  0x8376F0
// GOT/IAT slot:    0x2C79748
// Slot symbol:     off_2C79748
// Target type:     <no type info>
// ============================================================

void .qlsize(/* see target signature */)
{
    // Tail-call to qlsize via GOT/IAT indirection
    return qlsize(/* forwarded args */);
}

