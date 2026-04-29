// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1170
// Name:            .create_filename_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1170 jmp     cs:off_40A0
//
// Resolved target: create_filename_cmt
// Target address:  0x51F0
// GOT/IAT slot:    0x40A0
// Slot symbol:     off_40A0
// Target type:     <no type info>
// ============================================================

void .create_filename_cmt(/* see target signature */)
{
    // Tail-call to create_filename_cmt via GOT/IAT indirection
    return create_filename_cmt(/* forwarded args */);
}

