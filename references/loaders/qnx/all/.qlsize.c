// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A0
// Name:            .qlsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A0 jmp     cs:off_50B8
//
// Resolved target: qlsize
// Target address:  0x51E0
// GOT/IAT slot:    0x50B8
// Slot symbol:     off_50B8
// Target type:     <no type info>
// ============================================================

void .qlsize(/* see target signature */)
{
    // Tail-call to qlsize via GOT/IAT indirection
    return qlsize(/* forwarded args */);
}

