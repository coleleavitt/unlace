// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9060
// Name:            .strarray
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9060 jmp     cs:off_26018
//
// Resolved target: strarray
// Target address:  0x26328
// GOT/IAT slot:    0x26018
// Slot symbol:     off_26018
// Target type:     <no type info>
// ============================================================

void .strarray(/* see target signature */)
{
    // Tail-call to strarray via GOT/IAT indirection
    return strarray(/* forwarded args */);
}

