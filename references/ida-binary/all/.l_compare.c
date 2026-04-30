// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113540
// Name:            .l_compare
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113540 jmp     cs:l_compare_ptr
//
// Resolved target: l_compare
// Target address:  0x8D4890
// GOT/IAT slot:    0x8A0740
// Slot symbol:     l_compare_ptr
// Target type:     <no type info>
// ============================================================

void .l_compare(/* see target signature */)
{
    // Tail-call to l_compare via GOT/IAT indirection
    return l_compare(/* forwarded args */);
}

