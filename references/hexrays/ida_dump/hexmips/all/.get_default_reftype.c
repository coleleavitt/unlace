// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B220
// Name:            .get_default_reftype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B220 jmp     cs:off_4CD8F8
//
// Resolved target: get_default_reftype
// Target address:  0x4D0318
// GOT/IAT slot:    0x4CD8F8
// Slot symbol:     off_4CD8F8
// Target type:     <no type info>
// ============================================================

void .get_default_reftype(/* see target signature */)
{
    // Tail-call to get_default_reftype via GOT/IAT indirection
    return get_default_reftype(/* forwarded args */);
}

