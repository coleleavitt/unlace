// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1180
// Name:            .create_filename_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1180 jmp     cs:off_40A8
//
// Resolved target: create_filename_cmt
// Target address:  0x41D8
// GOT/IAT slot:    0x40A8
// Slot symbol:     off_40A8
// Target type:     <no type info>
// ============================================================

void .create_filename_cmt(/* see target signature */)
{
    // Tail-call to create_filename_cmt via GOT/IAT indirection
    return create_filename_cmt(/* forwarded args */);
}

