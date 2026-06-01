// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9080
// Name:            .ea2str
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9080 jmp     cs:off_2C7A028
//
// Resolved target: ea2str
// Target address:  0x50CB60
// GOT/IAT slot:    0x2C7A028
// Slot symbol:     off_2C7A028
// Target type:     <no type info>
// ============================================================

void .ea2str(/* see target signature */)
{
    // Tail-call to ea2str via GOT/IAT indirection
    return ea2str(/* forwarded args */);
}

