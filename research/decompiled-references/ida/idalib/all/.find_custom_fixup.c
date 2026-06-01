// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABF00
// Name:            .find_custom_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABF00 jmp     cs:off_2C7B768
//
// Resolved target: find_custom_fixup
// Target address:  0x41F550
// GOT/IAT slot:    0x2C7B768
// Slot symbol:     off_2C7B768
// Target type:     <no type info>
// ============================================================

void .find_custom_fixup(/* see target signature */)
{
    // Tail-call to find_custom_fixup via GOT/IAT indirection
    return find_custom_fixup(/* forwarded args */);
}

