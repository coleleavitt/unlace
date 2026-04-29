// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4460
// Name:            .set_file_ext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4460 jmp     cs:off_4E218
//
// Resolved target: set_file_ext
// Target address:  0x4F828
// GOT/IAT slot:    0x4E218
// Slot symbol:     off_4E218
// Target type:     <no type info>
// ============================================================

void .set_file_ext(/* see target signature */)
{
    // Tail-call to set_file_ext via GOT/IAT indirection
    return set_file_ext(/* forwarded args */);
}

