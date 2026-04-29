// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x208C0
// Name:            .get_default_reftype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x208C0 jmp     cs:off_95448
//
// Resolved target: get_default_reftype
// Target address:  0x95E80
// GOT/IAT slot:    0x95448
// Slot symbol:     off_95448
// Target type:     <no type info>
// ============================================================

void .get_default_reftype(/* see target signature */)
{
    // Tail-call to get_default_reftype via GOT/IAT indirection
    return get_default_reftype(/* forwarded args */);
}

