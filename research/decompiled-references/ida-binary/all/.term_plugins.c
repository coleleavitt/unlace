// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B410
// Name:            .term_plugins
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B410 jmp     cs:term_plugins_ptr
//
// Resolved target: term_plugins
// Target address:  0x8D98E0
// GOT/IAT slot:    0x8A46A8
// Slot symbol:     term_plugins_ptr
// Target type:     <no type info>
// ============================================================

void .term_plugins(/* see target signature */)
{
    // Tail-call to term_plugins via GOT/IAT indirection
    return term_plugins(/* forwarded args */);
}

