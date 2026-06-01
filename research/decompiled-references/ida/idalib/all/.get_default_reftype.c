// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACAA0
// Name:            .get_default_reftype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACAA0 jmp     cs:off_2C7BD38
//
// Resolved target: get_default_reftype
// Target address:  0x4E3B50
// GOT/IAT slot:    0x2C7BD38
// Slot symbol:     off_2C7BD38
// Target type:     <no type info>
// ============================================================

void .get_default_reftype(/* see target signature */)
{
    // Tail-call to get_default_reftype via GOT/IAT indirection
    return get_default_reftype(/* forwarded args */);
}

