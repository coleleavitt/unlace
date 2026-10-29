// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A890
// Name:            .get_tinfo_property
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A890 jmp     cs:get_tinfo_property_ptr
//
// Resolved target: get_tinfo_property
// Target address:  0x8D91A8
// GOT/IAT slot:    0x8A40E8
// Slot symbol:     get_tinfo_property_ptr
// Target type:     <no type info>
// ============================================================

void .get_tinfo_property(/* see target signature */)
{
    // Tail-call to get_tinfo_property via GOT/IAT indirection
    return get_tinfo_property(/* forwarded args */);
}

