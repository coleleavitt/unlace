// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112200
// Name:            .correct_address
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112200 jmp     cs:correct_address_ptr
//
// Resolved target: correct_address
// Target address:  0x8D3BF8
// GOT/IAT slot:    0x89FDA0
// Slot symbol:     correct_address_ptr
// Target type:     <no type info>
// ============================================================

void .correct_address(/* see target signature */)
{
    // Tail-call to correct_address via GOT/IAT indirection
    return correct_address(/* forwarded args */);
}

