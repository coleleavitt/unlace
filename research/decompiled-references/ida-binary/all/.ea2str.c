// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114140
// Name:            .ea2str
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114140 jmp     cs:ea2str_ptr
//
// Resolved target: ea2str
// Target address:  0x8D5020
// GOT/IAT slot:    0x8A0D40
// Slot symbol:     ea2str_ptr
// Target type:     <no type info>
// ============================================================

void .ea2str(/* see target signature */)
{
    // Tail-call to ea2str via GOT/IAT indirection
    return ea2str(/* forwarded args */);
}

