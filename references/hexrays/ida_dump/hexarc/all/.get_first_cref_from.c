// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29DA0
// Name:            .get_first_cref_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29DA0 jmp     cs:off_4B96B8
//
// Resolved target: get_first_cref_from
// Target address:  0x4BC0B0
// GOT/IAT slot:    0x4B96B8
// Slot symbol:     off_4B96B8
// Target type:     <no type info>
// ============================================================

void .get_first_cref_from(/* see target signature */)
{
    // Tail-call to get_first_cref_from via GOT/IAT indirection
    return get_first_cref_from(/* forwarded args */);
}

