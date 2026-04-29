// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3560
// Name:            .qlsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3560 jmp     cs:off_14298
//
// Resolved target: qlsize
// Target address:  0x148A8
// GOT/IAT slot:    0x14298
// Slot symbol:     off_14298
// Target type:     <no type info>
// ============================================================

void .qlsize(/* see target signature */)
{
    // Tail-call to qlsize via GOT/IAT indirection
    return qlsize(/* forwarded args */);
}

