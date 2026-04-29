// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x207C0
// Name:            .is_off
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x207C0 jmp     cs:off_953C8
//
// Resolved target: is_off
// Target address:  0x95E00
// GOT/IAT slot:    0x953C8
// Slot symbol:     off_953C8
// Target type:     <no type info>
// ============================================================

void .is_off(/* see target signature */)
{
    // Tail-call to is_off via GOT/IAT indirection
    return is_off(/* forwarded args */);
}

