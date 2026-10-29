// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB5C0
// Name:            .file2base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB5C0 jmp     cs:off_2C7B2C8
//
// Resolved target: file2base
// Target address:  0x643B90
// GOT/IAT slot:    0x2C7B2C8
// Slot symbol:     off_2C7B2C8
// Target type:     <no type info>
// ============================================================

void .file2base(/* see target signature */)
{
    // Tail-call to file2base via GOT/IAT indirection
    return file2base(/* forwarded args */);
}

