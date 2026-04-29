// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6500
// Name:            .hide_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6500 jmp     cs:off_2D268
//
// Resolved target: hide_name
// Target address:  0x2D768
// GOT/IAT slot:    0x2D268
// Slot symbol:     off_2D268
// Target type:     <no type info>
// ============================================================

void .hide_name(/* see target signature */)
{
    // Tail-call to hide_name via GOT/IAT indirection
    return hide_name(/* forwarded args */);
}

