// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3080
// Name:            .strarray
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3080 jmp     cs:off_14028
//
// Resolved target: strarray
// Target address:  0x14610
// GOT/IAT slot:    0x14028
// Slot symbol:     off_14028
// Target type:     <no type info>
// ============================================================

void .strarray(/* see target signature */)
{
    // Tail-call to strarray via GOT/IAT indirection
    return strarray(/* forwarded args */);
}

