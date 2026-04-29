// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A830
// Name:            .get_idati
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A830 jmp     cs:off_4B9C00
//
// Resolved target: get_idati
// Target address:  0x4BC610
// GOT/IAT slot:    0x4B9C00
// Slot symbol:     off_4B9C00
// Target type:     <no type info>
// ============================================================

void .get_idati(/* see target signature */)
{
    // Tail-call to get_idati via GOT/IAT indirection
    return get_idati(/* forwarded args */);
}

