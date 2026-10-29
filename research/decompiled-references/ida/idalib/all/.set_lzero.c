// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9620
// Name:            .set_lzero
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9620 jmp     cs:off_2C7A2F8
//
// Resolved target: set_lzero
// Target address:  0x3D1FF0
// GOT/IAT slot:    0x2C7A2F8
// Slot symbol:     off_2C7A2F8
// Target type:     <no type info>
// ============================================================

void .set_lzero(/* see target signature */)
{
    // Tail-call to set_lzero via GOT/IAT indirection
    return set_lzero(/* forwarded args */);
}

