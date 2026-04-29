// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x98B0
// Name:            .qlsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x98B0 jmp     cs:off_89440
//
// Resolved target: qlsize
// Target address:  0x8C768
// GOT/IAT slot:    0x89440
// Slot symbol:     off_89440
// Target type:     <no type info>
// ============================================================

void .qlsize(/* see target signature */)
{
    // Tail-call to qlsize via GOT/IAT indirection
    return qlsize(/* forwarded args */);
}

