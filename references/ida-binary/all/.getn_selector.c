// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B620
// Name:            .getn_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B620 jmp     cs:getn_selector_ptr
//
// Resolved target: getn_selector
// Target address:  0x8D9A10
// GOT/IAT slot:    0x8A47B0
// Slot symbol:     getn_selector_ptr
// Target type:     <no type info>
// ============================================================

void .getn_selector(/* see target signature */)
{
    // Tail-call to getn_selector via GOT/IAT indirection
    return getn_selector(/* forwarded args */);
}

