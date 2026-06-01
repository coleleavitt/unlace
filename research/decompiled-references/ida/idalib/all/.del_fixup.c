// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC860
// Name:            .del_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC860 jmp     cs:off_2C7BC18
//
// Resolved target: del_fixup
// Target address:  0x41C5B0
// GOT/IAT slot:    0x2C7BC18
// Slot symbol:     off_2C7BC18
// Target type:     <no type info>
// ============================================================

void .del_fixup(/* see target signature */)
{
    // Tail-call to del_fixup via GOT/IAT indirection
    return del_fixup(/* forwarded args */);
}

