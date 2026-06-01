// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1134B0
// Name:            .find_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1134B0 jmp     cs:find_selector_ptr
//
// Resolved target: find_selector
// Target address:  0x8D4830
// GOT/IAT slot:    0x8A06F8
// Slot symbol:     find_selector_ptr
// Target type:     <no type info>
// ============================================================

void .find_selector(/* see target signature */)
{
    // Tail-call to find_selector via GOT/IAT indirection
    return find_selector(/* forwarded args */);
}

