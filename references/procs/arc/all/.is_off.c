// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8480
// Name:            .is_off
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8480 jmp     cs:off_2A228
//
// Resolved target: is_off
// Target address:  0x2BC38
// GOT/IAT slot:    0x2A228
// Slot symbol:     off_2A228
// Target type:     <no type info>
// ============================================================

void .is_off(/* see target signature */)
{
    // Tail-call to is_off via GOT/IAT indirection
    return is_off(/* forwarded args */);
}

