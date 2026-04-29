// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5420
// Name:            .get_default_reftype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5420 jmp     cs:off_151F8
//
// Resolved target: get_default_reftype
// Target address:  0x16288
// GOT/IAT slot:    0x151F8
// Slot symbol:     off_151F8
// Target type:     <no type info>
// ============================================================

void .get_default_reftype(/* see target signature */)
{
    // Tail-call to get_default_reftype via GOT/IAT indirection
    return get_default_reftype(/* forwarded args */);
}

