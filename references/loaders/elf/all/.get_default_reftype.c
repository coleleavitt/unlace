// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x95D0
// Name:            .get_default_reftype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x95D0 jmp     cs:off_892D0
//
// Resolved target: get_default_reftype
// Target address:  0x8C5D8
// GOT/IAT slot:    0x892D0
// Slot symbol:     off_892D0
// Target type:     <no type info>
// ============================================================

void .get_default_reftype(/* see target signature */)
{
    // Tail-call to get_default_reftype via GOT/IAT indirection
    return get_default_reftype(/* forwarded args */);
}

