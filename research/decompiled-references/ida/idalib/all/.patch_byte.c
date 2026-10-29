// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9BA0
// Name:            .patch_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9BA0 jmp     cs:off_2C7A5B8
//
// Resolved target: patch_byte
// Target address:  0x59ABF0
// GOT/IAT slot:    0x2C7A5B8
// Slot symbol:     off_2C7A5B8
// Target type:     <no type info>
// ============================================================

void .patch_byte(/* see target signature */)
{
    // Tail-call to patch_byte via GOT/IAT indirection
    return patch_byte(/* forwarded args */);
}

