// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29FF0
// Name:            .get_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29FF0 jmp     cs:off_4B97E0
//
// Resolved target: get_fixup
// Target address:  0x4BC1D8
// GOT/IAT slot:    0x4B97E0
// Slot symbol:     off_4B97E0
// Target type:     <no type info>
// ============================================================

void .get_fixup(/* see target signature */)
{
    // Tail-call to get_fixup via GOT/IAT indirection
    return get_fixup(/* forwarded args */);
}

