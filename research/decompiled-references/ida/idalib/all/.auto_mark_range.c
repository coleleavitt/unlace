// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA810
// Name:            .auto_mark_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA810 jmp     cs:off_2C7ABF0
//
// Resolved target: auto_mark_range
// Target address:  0x3A61F0
// GOT/IAT slot:    0x2C7ABF0
// Slot symbol:     off_2C7ABF0
// Target type:     <no type info>
// ============================================================

void .auto_mark_range(/* see target signature */)
{
    // Tail-call to auto_mark_range via GOT/IAT indirection
    return auto_mark_range(/* forwarded args */);
}

