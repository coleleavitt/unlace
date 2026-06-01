// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8DC0
// Name:            .select_extlang
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8DC0 jmp     cs:off_2C79EC8
//
// Resolved target: select_extlang
// Target address:  0x78A220
// GOT/IAT slot:    0x2C79EC8
// Slot symbol:     off_2C79EC8
// Target type:     <no type info>
// ============================================================

void .select_extlang(/* see target signature */)
{
    // Tail-call to select_extlang via GOT/IAT indirection
    return select_extlang(/* forwarded args */);
}

