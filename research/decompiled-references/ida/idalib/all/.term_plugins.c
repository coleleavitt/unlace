// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD6B0
// Name:            .term_plugins
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD6B0 jmp     cs:off_2C7C340
//
// Resolved target: term_plugins
// Target address:  0x4EAF70
// GOT/IAT slot:    0x2C7C340
// Slot symbol:     off_2C7C340
// Target type:     <no type info>
// ============================================================

void .term_plugins(/* see target signature */)
{
    // Tail-call to term_plugins via GOT/IAT indirection
    return term_plugins(/* forwarded args */);
}

