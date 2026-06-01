// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7BE0
// Name:            .del_encoding
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7BE0 jmp     cs:off_2C795D8
//
// Resolved target: del_encoding
// Target address:  0x5AA380
// GOT/IAT slot:    0x2C795D8
// Slot symbol:     off_2C795D8
// Target type:     <no type info>
// ============================================================

void .del_encoding(/* see target signature */)
{
    // Tail-call to del_encoding via GOT/IAT indirection
    return del_encoding(/* forwarded args */);
}

