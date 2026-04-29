// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10130
// Name:            .register_custom_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10130 jmp     cs:off_2E080
//
// Resolved target: register_custom_fixup
// Target address:  0x36CF8
// GOT/IAT slot:    0x2E080
// Slot symbol:     off_2E080
// Target type:     <no type info>
// ============================================================

void .register_custom_fixup(/* see target signature */)
{
    // Tail-call to register_custom_fixup via GOT/IAT indirection
    return register_custom_fixup(/* forwarded args */);
}

