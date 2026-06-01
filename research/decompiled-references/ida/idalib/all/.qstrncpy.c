// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7F30
// Name:            .qstrncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7F30 jmp     cs:off_2C79780
//
// Resolved target: qstrncpy
// Target address:  0x841C00
// GOT/IAT slot:    0x2C79780
// Slot symbol:     off_2C79780
// Target type:     <no type info>
// ============================================================

void .qstrncpy(/* see target signature */)
{
    // Tail-call to qstrncpy via GOT/IAT indirection
    return qstrncpy(/* forwarded args */);
}

