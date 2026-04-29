// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4460
// Name:            .set_tinfo_property
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4460 jmp     cs:off_28218
//
// Resolved target: set_tinfo_property
// Target address:  0x29BB0
// GOT/IAT slot:    0x28218
// Slot symbol:     off_28218
// Target type:     <no type info>
// ============================================================

void .set_tinfo_property(/* see target signature */)
{
    // Tail-call to set_tinfo_property via GOT/IAT indirection
    return set_tinfo_property(/* forwarded args */);
}

