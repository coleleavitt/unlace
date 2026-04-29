// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3090
// Name:            .set_source_linnum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3090 jmp     cs:off_14030
//
// Resolved target: set_source_linnum
// Target address:  0x14618
// GOT/IAT slot:    0x14030
// Slot symbol:     off_14030
// Target type:     <no type info>
// ============================================================

void .set_source_linnum(/* see target signature */)
{
    // Tail-call to set_source_linnum via GOT/IAT indirection
    return set_source_linnum(/* forwarded args */);
}

