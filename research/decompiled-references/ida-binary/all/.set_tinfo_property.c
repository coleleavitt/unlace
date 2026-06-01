// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A090
// Name:            .set_tinfo_property
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A090 jmp     cs:set_tinfo_property_ptr
//
// Resolved target: set_tinfo_property
// Target address:  0x8D8C70
// GOT/IAT slot:    0x8A3CE8
// Slot symbol:     set_tinfo_property_ptr
// Target type:     <no type info>
// ============================================================

void .set_tinfo_property(/* see target signature */)
{
    // Tail-call to set_tinfo_property via GOT/IAT indirection
    return set_tinfo_property(/* forwarded args */);
}

