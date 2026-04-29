// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x294F0
// Name:            .lower_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x294F0 jmp     cs:off_4B9260
//
// Resolved target: lower_type
// Target address:  0x4BBC30
// GOT/IAT slot:    0x4B9260
// Slot symbol:     off_4B9260
// Target type:     <no type info>
// ============================================================

void .lower_type(/* see target signature */)
{
    // Tail-call to lower_type via GOT/IAT indirection
    return lower_type(/* forwarded args */);
}

