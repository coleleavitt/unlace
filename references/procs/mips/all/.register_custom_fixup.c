// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19410
// Name:            .register_custom_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19410 jmp     cs:off_751F0
//
// Resolved target: register_custom_fixup
// Target address:  0x75A40
// GOT/IAT slot:    0x751F0
// Slot symbol:     off_751F0
// Target type:     <no type info>
// ============================================================

void .register_custom_fixup(/* see target signature */)
{
    // Tail-call to register_custom_fixup via GOT/IAT indirection
    return register_custom_fixup(/* forwarded args */);
}

