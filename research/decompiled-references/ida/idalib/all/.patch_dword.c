// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACCD0
// Name:            .patch_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACCD0 jmp     cs:off_2C7BE50
//
// Resolved target: patch_dword
// Target address:  0x59B040
// GOT/IAT slot:    0x2C7BE50
// Slot symbol:     off_2C7BE50
// Target type:     <no type info>
// ============================================================

void .patch_dword(/* see target signature */)
{
    // Tail-call to patch_dword via GOT/IAT indirection
    return patch_dword(/* forwarded args */);
}

