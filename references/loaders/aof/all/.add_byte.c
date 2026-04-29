// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2100
// Name:            .add_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2100 jmp     cs:off_7068
//
// Resolved target: add_byte
// Target address:  0x7220
// GOT/IAT slot:    0x7068
// Slot symbol:     off_7068
// Target type:     <no type info>
// ============================================================

void .add_byte(/* see target signature */)
{
    // Tail-call to add_byte via GOT/IAT indirection
    return add_byte(/* forwarded args */);
}

