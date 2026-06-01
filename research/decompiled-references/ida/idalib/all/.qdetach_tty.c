// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB130
// Name:            .qdetach_tty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB130 jmp     cs:off_2C7B080
//
// Resolved target: qdetach_tty
// Target address:  0x842260
// GOT/IAT slot:    0x2C7B080
// Slot symbol:     off_2C7B080
// Target type:     <no type info>
// ============================================================

void .qdetach_tty(/* see target signature */)
{
    // Tail-call to qdetach_tty via GOT/IAT indirection
    return qdetach_tty(/* forwarded args */);
}

