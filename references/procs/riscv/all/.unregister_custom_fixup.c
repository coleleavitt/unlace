// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA250
// Name:            .unregister_custom_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA250 jmp     cs:off_35110
//
// Resolved target: unregister_custom_fixup
// Target address:  0x35760
// GOT/IAT slot:    0x35110
// Slot symbol:     off_35110
// Target type:     <no type info>
// ============================================================

void .unregister_custom_fixup(/* see target signature */)
{
    // Tail-call to unregister_custom_fixup via GOT/IAT indirection
    return unregister_custom_fixup(/* forwarded args */);
}

