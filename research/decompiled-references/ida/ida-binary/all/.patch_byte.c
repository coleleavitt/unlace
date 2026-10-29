// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1152D0
// Name:            .patch_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1152D0 jmp     cs:patch_byte_ptr
//
// Resolved target: patch_byte
// Target address:  0x8D5BB0
// GOT/IAT slot:    0x8A1608
// Slot symbol:     patch_byte_ptr
// Target type:     <no type info>
// ============================================================

void .patch_byte(/* see target signature */)
{
    // Tail-call to patch_byte via GOT/IAT indirection
    return patch_byte(/* forwarded args */);
}

