// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1280
// Name:            .auto_mark_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1280 jmp     cs:off_5128
//
// Resolved target: auto_mark_range
// Target address:  0x52B8
// GOT/IAT slot:    0x5128
// Slot symbol:     off_5128
// Target type:     <no type info>
// ============================================================

void .auto_mark_range(/* see target signature */)
{
    // Tail-call to auto_mark_range via GOT/IAT indirection
    return auto_mark_range(/* forwarded args */);
}

