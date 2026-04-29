// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C540
// Name:            .qgetcwd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C540 jmp     cs:off_4EDA88
//
// Resolved target: qgetcwd
// Target address:  0x4F1DA8
// GOT/IAT slot:    0x4EDA88
// Slot symbol:     off_4EDA88
// Target type:     <no type info>
// ============================================================

void .qgetcwd(/* see target signature */)
{
    // Tail-call to qgetcwd via GOT/IAT indirection
    return qgetcwd(/* forwarded args */);
}

