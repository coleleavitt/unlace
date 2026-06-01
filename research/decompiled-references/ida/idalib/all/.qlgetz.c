// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAAA0
// Name:            .qlgetz
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAAA0 jmp     cs:off_2C7AD38
//
// Resolved target: qlgetz
// Target address:  0x837AF0
// GOT/IAT slot:    0x2C7AD38
// Slot symbol:     off_2C7AD38
// Target type:     <no type info>
// ============================================================

void .qlgetz(/* see target signature */)
{
    // Tail-call to qlgetz via GOT/IAT indirection
    return qlgetz(/* forwarded args */);
}

