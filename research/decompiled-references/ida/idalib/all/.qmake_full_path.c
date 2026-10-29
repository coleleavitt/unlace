// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA560
// Name:            .qmake_full_path
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA560 jmp     cs:off_2C7AA98
//
// Resolved target: qmake_full_path
// Target address:  0x83E3E0
// GOT/IAT slot:    0x2C7AA98
// Slot symbol:     off_2C7AA98
// Target type:     <no type info>
// ============================================================

void .qmake_full_path(/* see target signature */)
{
    // Tail-call to qmake_full_path via GOT/IAT indirection
    return qmake_full_path(/* forwarded args */);
}

