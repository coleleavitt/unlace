// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA330
// Name:            .get_bytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA330 jmp     cs:off_2C7A980
//
// Resolved target: get_bytes
// Target address:  0x3BFD40
// GOT/IAT slot:    0x2C7A980
// Slot symbol:     off_2C7A980
// Target type:     <no type info>
// ============================================================

void .get_bytes(/* see target signature */)
{
    // Tail-call to get_bytes via GOT/IAT indirection
    return get_bytes(/* forwarded args */);
}

