// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD460
// Name:            .set_type_alias
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD460 jmp     cs:off_2C7C218
//
// Resolved target: set_type_alias
// Target address:  0x652940
// GOT/IAT slot:    0x2C7C218
// Slot symbol:     off_2C7C218
// Target type:     <no type info>
// ============================================================

void .set_type_alias(/* see target signature */)
{
    // Tail-call to set_type_alias via GOT/IAT indirection
    return set_type_alias(/* forwarded args */);
}

