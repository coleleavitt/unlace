// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D500
// Name:            .lower_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D500 jmp     cs:off_4E9268
//
// Resolved target: lower_type
// Target address:  0x4EBC58
// GOT/IAT slot:    0x4E9268
// Slot symbol:     off_4E9268
// Target type:     <no type info>
// ============================================================

void .lower_type(/* see target signature */)
{
    // Tail-call to lower_type via GOT/IAT indirection
    return lower_type(/* forwarded args */);
}

