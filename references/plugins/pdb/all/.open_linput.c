// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DBF0
// Name:            .open_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DBF0 jmp     cs:off_B35E0
//
// Resolved target: open_linput
// Target address:  0xB3DB8
// GOT/IAT slot:    0xB35E0
// Slot symbol:     off_B35E0
// Target type:     <no type info>
// ============================================================

void .open_linput(/* see target signature */)
{
    // Tail-call to open_linput via GOT/IAT indirection
    return open_linput(/* forwarded args */);
}

