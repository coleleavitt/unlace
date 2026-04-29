// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1160
// Name:            .create_filename_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1160 jmp     cs:off_5098
//
// Resolved target: create_filename_cmt
// Target address:  0x53E0
// GOT/IAT slot:    0x5098
// Slot symbol:     off_5098
// Target type:     <no type info>
// ============================================================

void .create_filename_cmt(/* see target signature */)
{
    // Tail-call to create_filename_cmt via GOT/IAT indirection
    return create_filename_cmt(/* forwarded args */);
}

