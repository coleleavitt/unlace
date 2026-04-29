// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BE10
// Name:            .set_file_ext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BE10 jmp     cs:off_4ED6F0
//
// Resolved target: set_file_ext
// Target address:  0x4F1A00
// GOT/IAT slot:    0x4ED6F0
// Slot symbol:     off_4ED6F0
// Target type:     <no type info>
// ============================================================

void .set_file_ext(/* see target signature */)
{
    // Tail-call to set_file_ext via GOT/IAT indirection
    return set_file_ext(/* forwarded args */);
}

