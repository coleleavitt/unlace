// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AFF0
// Name:            .set_type_alias
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AFF0 jmp     cs:set_type_alias_ptr
//
// Resolved target: set_type_alias
// Target address:  0x8D9620
// GOT/IAT slot:    0x8A4498
// Slot symbol:     set_type_alias_ptr
// Target type:     <no type info>
// ============================================================

void .set_type_alias(/* see target signature */)
{
    // Tail-call to set_type_alias via GOT/IAT indirection
    return set_type_alias(/* forwarded args */);
}

