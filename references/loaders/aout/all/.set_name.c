// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1150
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1150 jmp     cs:off_6090
//
// Resolved target: set_name
// Target address:  0x6218
// GOT/IAT slot:    0x6090
// Slot symbol:     off_6090
// Target type:     <no type info>
// ============================================================

void .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}

