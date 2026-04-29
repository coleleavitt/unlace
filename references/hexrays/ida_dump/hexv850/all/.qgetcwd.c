// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B470
// Name:            .qgetcwd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B470 jmp     cs:off_4C0A20
//
// Resolved target: qgetcwd
// Target address:  0x4C3A18
// GOT/IAT slot:    0x4C0A20
// Slot symbol:     off_4C0A20
// Target type:     <no type info>
// ============================================================

void .qgetcwd(/* see target signature */)
{
    // Tail-call to qgetcwd via GOT/IAT indirection
    return qgetcwd(/* forwarded args */);
}

