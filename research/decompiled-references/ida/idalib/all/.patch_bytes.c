// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8830
// Name:            .patch_bytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8830 jmp     cs:off_2C79C00
//
// Resolved target: patch_bytes
// Target address:  0x3D41D0
// GOT/IAT slot:    0x2C79C00
// Slot symbol:     off_2C79C00
// Target type:     <no type info>
// ============================================================

void .patch_bytes(/* see target signature */)
{
    // Tail-call to patch_bytes via GOT/IAT indirection
    return patch_bytes(/* forwarded args */);
}

