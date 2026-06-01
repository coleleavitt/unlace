// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC890
// Name:            .patch_qword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC890 jmp     cs:off_2C7BC30
//
// Resolved target: patch_qword
// Target address:  0x59B150
// GOT/IAT slot:    0x2C7BC30
// Slot symbol:     off_2C7BC30
// Target type:     <no type info>
// ============================================================

void .patch_qword(/* see target signature */)
{
    // Tail-call to patch_qword via GOT/IAT indirection
    return patch_qword(/* forwarded args */);
}

