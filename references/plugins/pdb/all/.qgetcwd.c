// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D730
// Name:            .qgetcwd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D730 jmp     cs:off_B3380
//
// Resolved target: qgetcwd
// Target address:  0xB3B20
// GOT/IAT slot:    0xB3380
// Slot symbol:     off_B3380
// Target type:     <no type info>
// ============================================================

void .qgetcwd(/* see target signature */)
{
    // Tail-call to qgetcwd via GOT/IAT indirection
    return qgetcwd(/* forwarded args */);
}

