// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2340
// Name:            .qlsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2340 jmp     cs:off_A188
//
// Resolved target: qlsize
// Target address:  0xA450
// GOT/IAT slot:    0xA188
// Slot symbol:     off_A188
// Target type:     <no type info>
// ============================================================

void .qlsize(/* see target signature */)
{
    // Tail-call to qlsize via GOT/IAT indirection
    return qlsize(/* forwarded args */);
}

