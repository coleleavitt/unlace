// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8990
// Name:            .get_reftype_by_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8990 jmp     cs:off_2C79CB0
//
// Resolved target: get_reftype_by_size
// Target address:  0x60BBB0
// GOT/IAT slot:    0x2C79CB0
// Slot symbol:     off_2C79CB0
// Target type:     <no type info>
// ============================================================

void .get_reftype_by_size(/* see target signature */)
{
    // Tail-call to get_reftype_by_size via GOT/IAT indirection
    return get_reftype_by_size(/* forwarded args */);
}

