// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9E20
// Name:            .create_zstd_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9E20 jmp     cs:off_2C7A6F8
//
// Resolved target: create_zstd_linput
// Target address:  0x84F080
// GOT/IAT slot:    0x2C7A6F8
// Slot symbol:     off_2C7A6F8
// Target type:     <no type info>
// ============================================================

void .create_zstd_linput(/* see target signature */)
{
    // Tail-call to create_zstd_linput via GOT/IAT indirection
    return create_zstd_linput(/* forwarded args */);
}

