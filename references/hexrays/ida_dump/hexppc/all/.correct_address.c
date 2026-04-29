// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB00
// Name:            .correct_address
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB00 jmp     cs:off_4DA568
//
// Resolved target: correct_address
// Target address:  0x4DCF58
// GOT/IAT slot:    0x4DA568
// Slot symbol:     off_4DA568
// Target type:     <no type info>
// ============================================================

void .correct_address(/* see target signature */)
{
    // Tail-call to correct_address via GOT/IAT indirection
    return correct_address(/* forwarded args */);
}

