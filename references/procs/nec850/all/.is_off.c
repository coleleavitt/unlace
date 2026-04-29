// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x94D0
// Name:            .is_off
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x94D0 jmp     cs:off_2E250
//
// Resolved target: is_off
// Target address:  0x2E8C0
// GOT/IAT slot:    0x2E250
// Slot symbol:     off_2E250
// Target type:     <no type info>
// ============================================================

void .is_off(/* see target signature */)
{
    // Tail-call to is_off via GOT/IAT indirection
    return is_off(/* forwarded args */);
}

