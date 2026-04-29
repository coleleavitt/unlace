// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xABA0
// Name:            .create_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xABA0 jmp     cs:off_CA5B8
//
// Resolved target: create_tinfo
// Target address:  0xD0F10
// GOT/IAT slot:    0xCA5B8
// Slot symbol:     off_CA5B8
// Target type:     <no type info>
// ============================================================

void .create_tinfo(/* see target signature */)
{
    // Tail-call to create_tinfo via GOT/IAT indirection
    return create_tinfo(/* forwarded args */);
}

