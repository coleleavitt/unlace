// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9A60
// Name:            .auto_mark_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9A60 jmp     cs:off_89518
//
// Resolved target: auto_mark_range
// Target address:  0x8C848
// GOT/IAT slot:    0x89518
// Slot symbol:     off_89518
// Target type:     <no type info>
// ============================================================

void .auto_mark_range(/* see target signature */)
{
    // Tail-call to auto_mark_range via GOT/IAT indirection
    return auto_mark_range(/* forwarded args */);
}

