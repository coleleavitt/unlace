// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DC00
// Name:            .qisdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DC00 jmp     cs:off_B35E8
//
// Resolved target: qisdir
// Target address:  0xB3DC0
// GOT/IAT slot:    0xB35E8
// Slot symbol:     off_B35E8
// Target type:     <no type info>
// ============================================================

void .qisdir(/* see target signature */)
{
    // Tail-call to qisdir via GOT/IAT indirection
    return qisdir(/* forwarded args */);
}

