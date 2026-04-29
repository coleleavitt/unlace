// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29480
// Name:            .add_frame
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29480 jmp     cs:off_4B9228
//
// Resolved target: add_frame
// Target address:  0x4BBBF8
// GOT/IAT slot:    0x4B9228
// Slot symbol:     off_4B9228
// Target type:     <no type info>
// ============================================================

void .add_frame(/* see target signature */)
{
    // Tail-call to add_frame via GOT/IAT indirection
    return add_frame(/* forwarded args */);
}

