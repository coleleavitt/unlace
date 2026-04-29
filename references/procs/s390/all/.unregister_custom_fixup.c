// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x100E0
// Name:            .unregister_custom_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x100E0 jmp     cs:off_2E058
//
// Resolved target: unregister_custom_fixup
// Target address:  0x36CD0
// GOT/IAT slot:    0x2E058
// Slot symbol:     off_2E058
// Target type:     <no type info>
// ============================================================

void .unregister_custom_fixup(/* see target signature */)
{
    // Tail-call to unregister_custom_fixup via GOT/IAT indirection
    return unregister_custom_fixup(/* forwarded args */);
}

