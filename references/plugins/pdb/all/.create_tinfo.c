// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DA60
// Name:            .create_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DA60 jmp     cs:off_B3518
//
// Resolved target: create_tinfo
// Target address:  0xB3CE0
// GOT/IAT slot:    0xB3518
// Slot symbol:     off_B3518
// Target type:     <no type info>
// ============================================================

void .create_tinfo(/* see target signature */)
{
    // Tail-call to create_tinfo via GOT/IAT indirection
    return create_tinfo(/* forwarded args */);
}

