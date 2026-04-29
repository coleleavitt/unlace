// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21F0
// Name:            .get_default_reftype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21F0 jmp     cs:off_80E0
//
// Resolved target: get_default_reftype
// Target address:  0x82D0
// GOT/IAT slot:    0x80E0
// Slot symbol:     off_80E0
// Target type:     <no type info>
// ============================================================

void .get_default_reftype(/* see target signature */)
{
    // Tail-call to get_default_reftype via GOT/IAT indirection
    return get_default_reftype(/* forwarded args */);
}

