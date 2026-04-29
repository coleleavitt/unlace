// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x47A0
// Name:            .get_tinfo_property
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x47A0 jmp     cs:off_283B8
//
// Resolved target: get_tinfo_property
// Target address:  0x29D70
// GOT/IAT slot:    0x283B8
// Slot symbol:     off_283B8
// Target type:     <no type info>
// ============================================================

void .get_tinfo_property(/* see target signature */)
{
    // Tail-call to get_tinfo_property via GOT/IAT indirection
    return get_tinfo_property(/* forwarded args */);
}

