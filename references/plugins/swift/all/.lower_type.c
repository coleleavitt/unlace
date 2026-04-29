// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4140
// Name:            .lower_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4140 jmp     cs:off_28088
//
// Resolved target: lower_type
// Target address:  0x29A20
// GOT/IAT slot:    0x28088
// Slot symbol:     off_28088
// Target type:     <no type info>
// ============================================================

void .lower_type(/* see target signature */)
{
    // Tail-call to lower_type via GOT/IAT indirection
    return lower_type(/* forwarded args */);
}

