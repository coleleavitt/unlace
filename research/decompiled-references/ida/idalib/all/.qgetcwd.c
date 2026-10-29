// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7490
// Name:            .qgetcwd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7490 jmp     cs:off_2C79230
//
// Resolved target: qgetcwd
// Target address:  0x83E3A0
// GOT/IAT slot:    0x2C79230
// Slot symbol:     off_2C79230
// Target type:     <no type info>
// ============================================================

void .qgetcwd(/* see target signature */)
{
    // Tail-call to qgetcwd via GOT/IAT indirection
    return qgetcwd(/* forwarded args */);
}

