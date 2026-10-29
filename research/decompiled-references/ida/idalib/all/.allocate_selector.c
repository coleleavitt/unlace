// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD820
// Name:            .allocate_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD820 jmp     cs:off_2C7C3F8
//
// Resolved target: allocate_selector
// Target address:  0x684C10
// GOT/IAT slot:    0x2C7C3F8
// Slot symbol:     off_2C7C3F8
// Target type:     <no type info>
// ============================================================

void .allocate_selector(/* see target signature */)
{
    // Tail-call to allocate_selector via GOT/IAT indirection
    return allocate_selector(/* forwarded args */);
}

