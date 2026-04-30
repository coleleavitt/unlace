// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114FD0
// Name:            .find_unknown
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114FD0 jmp     cs:find_unknown_ptr
//
// Resolved target: find_unknown
// Target address:  0x8D59A8
// GOT/IAT slot:    0x8A1488
// Slot symbol:     find_unknown_ptr
// Target type:     <no type info>
// ============================================================

void .find_unknown(/* see target signature */)
{
    // Tail-call to find_unknown via GOT/IAT indirection
    return find_unknown(/* forwarded args */);
}

