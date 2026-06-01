// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B700
// Name:            .allocate_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B700 jmp     cs:allocate_selector_ptr
//
// Resolved target: allocate_selector
// Target address:  0x8D9A98
// GOT/IAT slot:    0x8A4820
// Slot symbol:     allocate_selector_ptr
// Target type:     <no type info>
// ============================================================

void .allocate_selector(/* see target signature */)
{
    // Tail-call to allocate_selector via GOT/IAT indirection
    return allocate_selector(/* forwarded args */);
}

