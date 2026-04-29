// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x32A0
// Name:            .set_file_ext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x32A0 jmp     cs:off_20138
//
// Resolved target: set_file_ext
// Target address:  0x21A48
// GOT/IAT slot:    0x20138
// Slot symbol:     off_20138
// Target type:     <no type info>
// ============================================================

void .set_file_ext(/* see target signature */)
{
    // Tail-call to set_file_ext via GOT/IAT indirection
    return set_file_ext(/* forwarded args */);
}

