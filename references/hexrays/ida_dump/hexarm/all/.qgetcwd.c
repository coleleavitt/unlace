// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E4B0
// Name:            .qgetcwd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E4B0 jmp     cs:off_4E9A40
//
// Resolved target: qgetcwd
// Target address:  0x4EC460
// GOT/IAT slot:    0x4E9A40
// Slot symbol:     off_4E9A40
// Target type:     <no type info>
// ============================================================

void .qgetcwd(/* see target signature */)
{
    // Tail-call to qgetcwd via GOT/IAT indirection
    return qgetcwd(/* forwarded args */);
}

