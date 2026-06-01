// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112370
// Name:            .itext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112370 jmp     cs:itext_ptr
//
// Resolved target: itext
// Target address:  0x8D3CF8
// GOT/IAT slot:    0x89FE58
// Slot symbol:     itext_ptr
// Target type:     <no type info>
// ============================================================

void .itext(/* see target signature */)
{
    // Tail-call to itext via GOT/IAT indirection
    return itext(/* forwarded args */);
}

