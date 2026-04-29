// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1280
// Name:            .file2base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1280 jmp     cs:off_6128
//
// Resolved target: file2base
// Target address:  0x62C0
// GOT/IAT slot:    0x6128
// Slot symbol:     off_6128
// Target type:     <no type info>
// ============================================================

void .file2base(/* see target signature */)
{
    // Tail-call to file2base via GOT/IAT indirection
    return file2base(/* forwarded args */);
}

