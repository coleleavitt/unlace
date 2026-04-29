// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29B00
// Name:            .correct_address
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29B00 jmp     cs:off_4B9568
//
// Resolved target: correct_address
// Target address:  0x4BBF58
// GOT/IAT slot:    0x4B9568
// Slot symbol:     off_4B9568
// Target type:     <no type info>
// ============================================================

void .correct_address(/* see target signature */)
{
    // Tail-call to correct_address via GOT/IAT indirection
    return correct_address(/* forwarded args */);
}

