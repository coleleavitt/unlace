// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6840
// Name:            .get_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6840 jmp     cs:off_2D408
//
// Resolved target: get_byte
// Target address:  0x2D928
// GOT/IAT slot:    0x2D408
// Slot symbol:     off_2D408
// Target type:     <no type info>
// ============================================================

void .get_byte(/* see target signature */)
{
    // Tail-call to get_byte via GOT/IAT indirection
    return get_byte(/* forwarded args */);
}

