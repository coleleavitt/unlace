// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3530
// Name:            .qlsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3530 jmp     cs:off_13280
//
// Resolved target: qlsize
// Target address:  0x13618
// GOT/IAT slot:    0x13280
// Slot symbol:     off_13280
// Target type:     <no type info>
// ============================================================

void .qlsize(/* see target signature */)
{
    // Tail-call to qlsize via GOT/IAT indirection
    return qlsize(/* forwarded args */);
}

