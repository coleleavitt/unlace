// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22C0
// Name:            .create_filename_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22C0 jmp     cs:off_8148
//
// Resolved target: create_filename_cmt
// Target address:  0x8330
// GOT/IAT slot:    0x8148
// Slot symbol:     off_8148
// Target type:     <no type info>
// ============================================================

void .create_filename_cmt(/* see target signature */)
{
    // Tail-call to create_filename_cmt via GOT/IAT indirection
    return create_filename_cmt(/* forwarded args */);
}

