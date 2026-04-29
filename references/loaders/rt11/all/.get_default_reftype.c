// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1140
// Name:            .get_default_reftype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1140 jmp     cs:off_5088
//
// Resolved target: get_default_reftype
// Target address:  0x5208
// GOT/IAT slot:    0x5088
// Slot symbol:     off_5088
// Target type:     <no type info>
// ============================================================

void .get_default_reftype(/* see target signature */)
{
    // Tail-call to get_default_reftype via GOT/IAT indirection
    return get_default_reftype(/* forwarded args */);
}

