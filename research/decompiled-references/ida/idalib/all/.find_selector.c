// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8800
// Name:            .find_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8800 jmp     cs:off_2C79BE8
//
// Resolved target: find_selector
// Target address:  0x510180
// GOT/IAT slot:    0x2C79BE8
// Slot symbol:     off_2C79BE8
// Target type:     <no type info>
// ============================================================

void .find_selector(/* see target signature */)
{
    // Tail-call to find_selector via GOT/IAT indirection
    return find_selector(/* forwarded args */);
}

