// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x63C0
// Name:            .is_off
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x63C0 jmp     cs:off_1D1C8
//
// Resolved target: is_off
// Target address:  0x1D6B8
// GOT/IAT slot:    0x1D1C8
// Slot symbol:     off_1D1C8
// Target type:     <no type info>
// ============================================================

void .is_off(/* see target signature */)
{
    // Tail-call to is_off via GOT/IAT indirection
    return is_off(/* forwarded args */);
}

