// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB990
// Name:            .get_source_linnum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB990 jmp     cs:off_2C7B4B0
//
// Resolved target: get_source_linnum
// Target address:  0x3C7290
// GOT/IAT slot:    0x2C7B4B0
// Slot symbol:     off_2C7B4B0
// Target type:     <no type info>
// ============================================================

void .get_source_linnum(/* see target signature */)
{
    // Tail-call to get_source_linnum via GOT/IAT indirection
    return get_source_linnum(/* forwarded args */);
}

