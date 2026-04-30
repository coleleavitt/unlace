// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113510
// Name:            .patch_bytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113510 jmp     cs:patch_bytes_ptr
//
// Resolved target: patch_bytes
// Target address:  0x8D4870
// GOT/IAT slot:    0x8A0728
// Slot symbol:     patch_bytes_ptr
// Target type:     <no type info>
// ============================================================

void .patch_bytes(/* see target signature */)
{
    // Tail-call to patch_bytes via GOT/IAT indirection
    return patch_bytes(/* forwarded args */);
}

