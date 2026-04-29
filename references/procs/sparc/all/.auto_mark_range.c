// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x77A0
// Name:            .auto_mark_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x77A0 jmp     cs:off_193B8
//
// Resolved target: auto_mark_range
// Target address:  0x19900
// GOT/IAT slot:    0x193B8
// Slot symbol:     off_193B8
// Target type:     <no type info>
// ============================================================

void .auto_mark_range(/* see target signature */)
{
    // Tail-call to auto_mark_range via GOT/IAT indirection
    return auto_mark_range(/* forwarded args */);
}

