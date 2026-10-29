// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A74A0
// Name:            .find_code
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A74A0 jmp     cs:off_2C79238
//
// Resolved target: find_code
// Target address:  0x676890
// GOT/IAT slot:    0x2C79238
// Slot symbol:     off_2C79238
// Target type:     <no type info>
// ============================================================

void .find_code(/* see target signature */)
{
    // Tail-call to find_code via GOT/IAT indirection
    return find_code(/* forwarded args */);
}

