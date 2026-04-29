// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B500
// Name:            .lower_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B500 jmp     cs:off_4ED268
//
// Resolved target: lower_type
// Target address:  0x4F1560
// GOT/IAT slot:    0x4ED268
// Slot symbol:     off_4ED268
// Target type:     <no type info>
// ============================================================

void .lower_type(/* see target signature */)
{
    // Tail-call to lower_type via GOT/IAT indirection
    return lower_type(/* forwarded args */);
}

