// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7240
// Name:            .is_planned_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7240 jmp     cs:off_2C79108
//
// Resolved target: is_planned_ea
// Target address:  0x3A2000
// GOT/IAT slot:    0x2C79108
// Slot symbol:     off_2C79108
// Target type:     <no type info>
// ============================================================

void .is_planned_ea(/* see target signature */)
{
    // Tail-call to is_planned_ea via GOT/IAT indirection
    return is_planned_ea(/* forwarded args */);
}

