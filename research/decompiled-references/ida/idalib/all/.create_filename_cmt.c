// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A73F0
// Name:            .create_filename_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A73F0 jmp     cs:off_2C791E0
//
// Resolved target: create_filename_cmt
// Target address:  0x6435E0
// GOT/IAT slot:    0x2C791E0
// Slot symbol:     off_2C791E0
// Target type:     <no type info>
// ============================================================

void .create_filename_cmt(/* see target signature */)
{
    // Tail-call to create_filename_cmt via GOT/IAT indirection
    return create_filename_cmt(/* forwarded args */);
}

