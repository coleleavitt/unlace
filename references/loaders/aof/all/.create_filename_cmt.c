// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2290
// Name:            .create_filename_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2290 jmp     cs:off_7130
//
// Resolved target: create_filename_cmt
// Target address:  0x72F0
// GOT/IAT slot:    0x7130
// Slot symbol:     off_7130
// Target type:     <no type info>
// ============================================================

void .create_filename_cmt(/* see target signature */)
{
    // Tail-call to create_filename_cmt via GOT/IAT indirection
    return create_filename_cmt(/* forwarded args */);
}

