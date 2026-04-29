// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2180
// Name:            .patch_fixup_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2180 jmp     cs:off_A0A8
//
// Resolved target: patch_fixup_value
// Target address:  0xA358
// GOT/IAT slot:    0xA0A8
// Slot symbol:     off_A0A8
// Target type:     <no type info>
// ============================================================

void .patch_fixup_value(/* see target signature */)
{
    // Tail-call to patch_fixup_value via GOT/IAT indirection
    return patch_fixup_value(/* forwarded args */);
}

