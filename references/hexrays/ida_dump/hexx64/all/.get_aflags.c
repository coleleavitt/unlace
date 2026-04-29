// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C4B0
// Name:            .get_aflags
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C4B0 jmp     cs:off_4EDA40
//
// Resolved target: get_aflags
// Target address:  0x4F1D60
// GOT/IAT slot:    0x4EDA40
// Slot symbol:     off_4EDA40
// Target type:     <no type info>
// ============================================================

void .get_aflags(/* see target signature */)
{
    // Tail-call to get_aflags via GOT/IAT indirection
    return get_aflags(/* forwarded args */);
}

