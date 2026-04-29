// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34C0
// Name:            .auto_mark_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x34C0 jmp     cs:off_13248
//
// Resolved target: auto_mark_range
// Target address:  0x13950
// GOT/IAT slot:    0x13248
// Slot symbol:     off_13248
// Target type:     <no type info>
// ============================================================

void .auto_mark_range(/* see target signature */)
{
    // Tail-call to auto_mark_range via GOT/IAT indirection
    return auto_mark_range(/* forwarded args */);
}

