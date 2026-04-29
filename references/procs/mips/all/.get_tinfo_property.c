// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19C70
// Name:            .get_tinfo_property
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19C70 jmp     cs:off_75620
//
// Resolved target: get_tinfo_property
// Target address:  0x75E88
// GOT/IAT slot:    0x75620
// Slot symbol:     off_75620
// Target type:     <no type info>
// ============================================================

void .get_tinfo_property(/* see target signature */)
{
    // Tail-call to get_tinfo_property via GOT/IAT indirection
    return get_tinfo_property(/* forwarded args */);
}

