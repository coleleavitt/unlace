// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116930
// Name:            .auto_mark_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116930 jmp     cs:auto_mark_range_ptr
//
// Resolved target: auto_mark_range
// Target address:  0x8D69C0
// GOT/IAT slot:    0x8A2138
// Slot symbol:     auto_mark_range_ptr
// Target type:     <no type info>
// ============================================================

void .auto_mark_range(/* see target signature */)
{
    // Tail-call to auto_mark_range via GOT/IAT indirection
    return auto_mark_range(/* forwarded args */);
}

