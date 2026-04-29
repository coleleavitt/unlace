// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7240
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7240 jmp     cs:off_26108
//
// Resolved target: set_name
// Target address:  0x263C0
// GOT/IAT slot:    0x26108
// Slot symbol:     off_26108
// Target type:     <no type info>
// ============================================================

void .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}

