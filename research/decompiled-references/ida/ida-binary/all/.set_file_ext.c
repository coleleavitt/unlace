// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113630
// Name:            .set_file_ext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113630 jmp     cs:set_file_ext_ptr
//
// Resolved target: set_file_ext
// Target address:  0x8D4918
// GOT/IAT slot:    0x8A07B8
// Slot symbol:     set_file_ext_ptr
// Target type:     <no type info>
// ============================================================

void .set_file_ext(/* see target signature */)
{
    // Tail-call to set_file_ext via GOT/IAT indirection
    return set_file_ext(/* forwarded args */);
}

