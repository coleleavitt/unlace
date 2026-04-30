// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117DB0
// Name:            .find_error
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117DB0 jmp     cs:find_error_ptr
//
// Resolved target: find_error
// Target address:  0x8D7688
// GOT/IAT slot:    0x8A2B78
// Slot symbol:     find_error_ptr
// Target type:     <no type info>
// ============================================================

void .find_error(/* see target signature */)
{
    // Tail-call to find_error via GOT/IAT indirection
    return find_error(/* forwarded args */);
}

