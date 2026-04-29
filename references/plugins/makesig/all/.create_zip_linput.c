// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3280
// Name:            .create_zip_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3280 jmp     cs:off_20128
//
// Resolved target: create_zip_linput
// Target address:  0x21A38
// GOT/IAT slot:    0x20128
// Slot symbol:     off_20128
// Target type:     <no type info>
// ============================================================

void .create_zip_linput(/* see target signature */)
{
    // Tail-call to create_zip_linput via GOT/IAT indirection
    return create_zip_linput(/* forwarded args */);
}

