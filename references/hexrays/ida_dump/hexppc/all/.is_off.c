// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B010
// Name:            .is_off
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B010 jmp     cs:off_4DA7F0
//
// Resolved target: is_off
// Target address:  0x4DD1E8
// GOT/IAT slot:    0x4DA7F0
// Slot symbol:     off_4DA7F0
// Target type:     <no type info>
// ============================================================

void .is_off(/* see target signature */)
{
    // Tail-call to is_off via GOT/IAT indirection
    return is_off(/* forwarded args */);
}

