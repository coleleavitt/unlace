// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C2D0
// Name:            .get_default_reftype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C2D0 jmp     cs:off_4ED950
//
// Resolved target: get_default_reftype
// Target address:  0x4F1C70
// GOT/IAT slot:    0x4ED950
// Slot symbol:     off_4ED950
// Target type:     <no type info>
// ============================================================

void .get_default_reftype(/* see target signature */)
{
    // Tail-call to get_default_reftype via GOT/IAT indirection
    return get_default_reftype(/* forwarded args */);
}

