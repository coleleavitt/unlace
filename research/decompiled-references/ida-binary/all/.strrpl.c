// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118DA0
// Name:            .strrpl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118DA0 jmp     cs:strrpl_ptr
//
// Resolved target: strrpl
// Target address:  0x8D8038
// GOT/IAT slot:    0x8A3370
// Slot symbol:     strrpl_ptr
// Target type:     <no type info>
// ============================================================

void .strrpl(/* see target signature */)
{
    // Tail-call to strrpl via GOT/IAT indirection
    return strrpl(/* forwarded args */);
}

