// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118570
// Name:            .l_equals
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118570 jmp     cs:l_equals_ptr
//
// Resolved target: l_equals
// Target address:  0x8D7B70
// GOT/IAT slot:    0x8A2F58
// Slot symbol:     l_equals_ptr
// Target type:     <no type info>
// ============================================================

void .l_equals(/* see target signature */)
{
    // Tail-call to l_equals via GOT/IAT indirection
    return l_equals(/* forwarded args */);
}

