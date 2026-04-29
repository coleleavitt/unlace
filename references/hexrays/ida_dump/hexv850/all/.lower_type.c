// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A4F0
// Name:            .lower_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A4F0 jmp     cs:off_4C0260
//
// Resolved target: lower_type
// Target address:  0x4C3228
// GOT/IAT slot:    0x4C0260
// Slot symbol:     off_4C0260
// Target type:     <no type info>
// ============================================================

void .lower_type(/* see target signature */)
{
    // Tail-call to lower_type via GOT/IAT indirection
    return lower_type(/* forwarded args */);
}

