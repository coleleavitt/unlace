// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C080
// Name:            .is_off
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C080 jmp     cs:off_4ED828
//
// Resolved target: is_off
// Target address:  0x4F1B38
// GOT/IAT slot:    0x4ED828
// Slot symbol:     off_4ED828
// Target type:     <no type info>
// ============================================================

void .is_off(/* see target signature */)
{
    // Tail-call to is_off via GOT/IAT indirection
    return is_off(/* forwarded args */);
}

