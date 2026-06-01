// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111590
// Name:            .set_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111590 jmp     cs:set_selector_ptr
//
// Resolved target: set_selector
// Target address:  0x8D3428
// GOT/IAT slot:    0x89F768
// Slot symbol:     set_selector_ptr
// Target type:     <no type info>
// ============================================================

void .set_selector(/* see target signature */)
{
    // Tail-call to set_selector via GOT/IAT indirection
    return set_selector(/* forwarded args */);
}

