// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x293C0
// Name:            .str2ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x293C0 jmp     cs:off_4B91C8
//
// Resolved target: str2ea
// Target address:  0x4BBB98
// GOT/IAT slot:    0x4B91C8
// Slot symbol:     off_4B91C8
// Target type:     <no type info>
// ============================================================

void .str2ea(/* see target signature */)
{
    // Tail-call to str2ea via GOT/IAT indirection
    return str2ea(/* forwarded args */);
}

