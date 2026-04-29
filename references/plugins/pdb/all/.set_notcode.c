// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D110
// Name:            .set_notcode
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D110 jmp     cs:off_B3070
//
// Resolved target: set_notcode
// Target address:  0xB37E8
// GOT/IAT slot:    0xB3070
// Slot symbol:     off_B3070
// Target type:     <no type info>
// ============================================================

void .set_notcode(/* see target signature */)
{
    // Tail-call to set_notcode via GOT/IAT indirection
    return set_notcode(/* forwarded args */);
}

