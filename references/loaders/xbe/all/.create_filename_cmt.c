// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11D0
// Name:            .create_filename_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11D0 jmp     cs:off_50D0
//
// Resolved target: create_filename_cmt
// Target address:  0x5238
// GOT/IAT slot:    0x50D0
// Slot symbol:     off_50D0
// Target type:     <no type info>
// ============================================================

void .create_filename_cmt(/* see target signature */)
{
    // Tail-call to create_filename_cmt via GOT/IAT indirection
    return create_filename_cmt(/* forwarded args */);
}

