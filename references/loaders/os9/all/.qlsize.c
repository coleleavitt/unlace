// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B0
// Name:            .qlsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B0 jmp     cs:off_40C0
//
// Resolved target: qlsize
// Target address:  0x41E0
// GOT/IAT slot:    0x40C0
// Slot symbol:     off_40C0
// Target type:     <no type info>
// ============================================================

void .qlsize(/* see target signature */)
{
    // Tail-call to qlsize via GOT/IAT indirection
    return qlsize(/* forwarded args */);
}

