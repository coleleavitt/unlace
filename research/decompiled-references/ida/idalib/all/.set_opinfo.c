// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD630
// Name:            .set_opinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD630 jmp     cs:off_2C7C300
//
// Resolved target: set_opinfo
// Target address:  0x3CA6C0
// GOT/IAT slot:    0x2C7C300
// Slot symbol:     off_2C7C300
// Target type:     <no type info>
// ============================================================

void .set_opinfo(/* see target signature */)
{
    // Tail-call to set_opinfo via GOT/IAT indirection
    return set_opinfo(/* forwarded args */);
}

