// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x70E0
// Name:            .add_frame
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x70E0 jmp     cs:off_19058
//
// Resolved target: add_frame
// Target address:  0x19588
// GOT/IAT slot:    0x19058
// Slot symbol:     off_19058
// Target type:     <no type info>
// ============================================================

void .add_frame(/* see target signature */)
{
    // Tail-call to add_frame via GOT/IAT indirection
    return add_frame(/* forwarded args */);
}

