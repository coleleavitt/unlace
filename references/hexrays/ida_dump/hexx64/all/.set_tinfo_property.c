// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C190
// Name:            .set_tinfo_property
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C190 jmp     cs:off_4ED8B0
//
// Resolved target: set_tinfo_property
// Target address:  0x4F1BD0
// GOT/IAT slot:    0x4ED8B0
// Slot symbol:     off_4ED8B0
// Target type:     <no type info>
// ============================================================

void .set_tinfo_property(/* see target signature */)
{
    // Tail-call to set_tinfo_property via GOT/IAT indirection
    return set_tinfo_property(/* forwarded args */);
}

