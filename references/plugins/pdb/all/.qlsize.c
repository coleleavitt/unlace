// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DA20
// Name:            .qlsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DA20 jmp     cs:off_B34F8
//
// Resolved target: qlsize
// Target address:  0xB3CB8
// GOT/IAT slot:    0xB34F8
// Slot symbol:     off_B34F8
// Target type:     <no type info>
// ============================================================

void .qlsize(/* see target signature */)
{
    // Tail-call to qlsize via GOT/IAT indirection
    return qlsize(/* forwarded args */);
}

