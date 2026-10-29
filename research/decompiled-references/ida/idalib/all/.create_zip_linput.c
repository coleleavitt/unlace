// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AADB0
// Name:            .create_zip_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AADB0 jmp     cs:off_2C7AEC0
//
// Resolved target: create_zip_linput
// Target address:  0x8362A0
// GOT/IAT slot:    0x2C7AEC0
// Slot symbol:     off_2C7AEC0
// Target type:     <no type info>
// ============================================================

void .create_zip_linput(/* see target signature */)
{
    // Tail-call to create_zip_linput via GOT/IAT indirection
    return create_zip_linput(/* forwarded args */);
}

