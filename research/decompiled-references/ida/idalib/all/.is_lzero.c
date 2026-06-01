// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAB40
// Name:            .is_lzero
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAB40 jmp     cs:off_2C7AD88
//
// Resolved target: is_lzero
// Target address:  0x3C5D40
// GOT/IAT slot:    0x2C7AD88
// Slot symbol:     off_2C7AD88
// Target type:     <no type info>
// ============================================================

void .is_lzero(/* see target signature */)
{
    // Tail-call to is_lzero via GOT/IAT indirection
    return is_lzero(/* forwarded args */);
}

