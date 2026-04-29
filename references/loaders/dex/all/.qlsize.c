// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3660
// Name:            .qlsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3660 jmp     cs:off_28318
//
// Resolved target: qlsize
// Target address:  0x287E0
// GOT/IAT slot:    0x28318
// Slot symbol:     off_28318
// Target type:     <no type info>
// ============================================================

void .qlsize(/* see target signature */)
{
    // Tail-call to qlsize via GOT/IAT indirection
    return qlsize(/* forwarded args */);
}

