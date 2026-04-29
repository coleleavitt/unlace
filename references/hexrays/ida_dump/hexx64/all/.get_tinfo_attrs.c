// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B6F0
// Name:            .get_tinfo_attrs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B6F0 jmp     cs:off_4ED360
//
// Resolved target: get_tinfo_attrs
// Target address:  0x4F1658
// GOT/IAT slot:    0x4ED360
// Slot symbol:     off_4ED360
// Target type:     <no type info>
// ============================================================

void .get_tinfo_attrs(/* see target signature */)
{
    // Tail-call to get_tinfo_attrs via GOT/IAT indirection
    return get_tinfo_attrs(/* forwarded args */);
}

