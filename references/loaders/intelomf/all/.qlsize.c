// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1240
// Name:            .qlsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1240 jmp     cs:off_5108
//
// Resolved target: qlsize
// Target address:  0x5360
// GOT/IAT slot:    0x5108
// Slot symbol:     off_5108
// Target type:     <no type info>
// ============================================================

void .qlsize(/* see target signature */)
{
    // Tail-call to qlsize via GOT/IAT indirection
    return qlsize(/* forwarded args */);
}

