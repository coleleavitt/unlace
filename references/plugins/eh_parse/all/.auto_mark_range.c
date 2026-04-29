// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6A50
// Name:            .auto_mark_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6A50 jmp     cs:off_2F510
//
// Resolved target: auto_mark_range
// Target address:  0x2FBA0
// GOT/IAT slot:    0x2F510
// Slot symbol:     off_2F510
// Target type:     <no type info>
// ============================================================

void .auto_mark_range(/* see target signature */)
{
    // Tail-call to auto_mark_range via GOT/IAT indirection
    return auto_mark_range(/* forwarded args */);
}

