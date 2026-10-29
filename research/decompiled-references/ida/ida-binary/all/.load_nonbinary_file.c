// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114CB0
// Name:            .load_nonbinary_file
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114CB0 jmp     cs:load_nonbinary_file_ptr
//
// Resolved target: load_nonbinary_file
// Target address:  0x8D57E8
// GOT/IAT slot:    0x8A12F8
// Slot symbol:     load_nonbinary_file_ptr
// Target type:     <no type info>
// ============================================================

void .load_nonbinary_file(/* see target signature */)
{
    // Tail-call to load_nonbinary_file via GOT/IAT indirection
    return load_nonbinary_file(/* forwarded args */);
}

