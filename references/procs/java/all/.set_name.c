// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6450
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6450 jmp     cs:off_2D210
//
// Resolved target: set_name
// Target address:  0x2D710
// GOT/IAT slot:    0x2D210
// Slot symbol:     off_2D210
// Target type:     <no type info>
// ============================================================

void .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}

