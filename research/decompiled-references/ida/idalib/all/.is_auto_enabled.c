// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAAF0
// Name:            .is_auto_enabled
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAAF0 jmp     cs:off_2C7AD60
//
// Resolved target: is_auto_enabled
// Target address:  0x3A2610
// GOT/IAT slot:    0x2C7AD60
// Slot symbol:     off_2C7AD60
// Target type:     <no type info>
// ============================================================

void .is_auto_enabled(/* see target signature */)
{
    // Tail-call to is_auto_enabled via GOT/IAT indirection
    return is_auto_enabled(/* forwarded args */);
}

