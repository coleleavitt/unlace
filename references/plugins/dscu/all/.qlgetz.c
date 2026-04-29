// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x41C0
// Name:            .qlgetz
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x41C0 jmp     cs:off_1F0C8
//
// Resolved target: qlgetz
// Target address:  0x1F378
// GOT/IAT slot:    0x1F0C8
// Slot symbol:     off_1F0C8
// Target type:     <no type info>
// ============================================================

void .qlgetz(/* see target signature */)
{
    // Tail-call to qlgetz via GOT/IAT indirection
    return qlgetz(/* forwarded args */);
}

