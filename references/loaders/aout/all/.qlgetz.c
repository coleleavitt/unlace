// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1100
// Name:            .qlgetz
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1100 jmp     cs:off_6068
//
// Resolved target: qlgetz
// Target address:  0x61F0
// GOT/IAT slot:    0x6068
// Slot symbol:     off_6068
// Target type:     <no type info>
// ============================================================

void .qlgetz(/* see target signature */)
{
    // Tail-call to qlgetz via GOT/IAT indirection
    return qlgetz(/* forwarded args */);
}

