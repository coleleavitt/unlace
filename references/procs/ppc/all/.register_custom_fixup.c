// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x204D0
// Name:            .register_custom_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x204D0 jmp     cs:off_95250
//
// Resolved target: register_custom_fixup
// Target address:  0x95C88
// GOT/IAT slot:    0x95250
// Slot symbol:     off_95250
// Target type:     <no type info>
// ============================================================

void .register_custom_fixup(/* see target signature */)
{
    // Tail-call to register_custom_fixup via GOT/IAT indirection
    return register_custom_fixup(/* forwarded args */);
}

