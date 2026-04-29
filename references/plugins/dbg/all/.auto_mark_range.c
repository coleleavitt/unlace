// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x35F0
// Name:            .auto_mark_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x35F0 jmp     cs:off_132E0
//
// Resolved target: auto_mark_range
// Target address:  0x13680
// GOT/IAT slot:    0x132E0
// Slot symbol:     off_132E0
// Target type:     <no type info>
// ============================================================

void .auto_mark_range(/* see target signature */)
{
    // Tail-call to auto_mark_range via GOT/IAT indirection
    return auto_mark_range(/* forwarded args */);
}

