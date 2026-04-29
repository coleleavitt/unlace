// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A0
// Name:            .auto_mark_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A0 jmp     cs:off_70B8
//
// Resolved target: auto_mark_range
// Target address:  0x71B0
// GOT/IAT slot:    0x70B8
// Slot symbol:     off_70B8
// Target type:     <no type info>
// ============================================================

void .auto_mark_range(/* see target signature */)
{
    // Tail-call to auto_mark_range via GOT/IAT indirection
    return auto_mark_range(/* forwarded args */);
}

