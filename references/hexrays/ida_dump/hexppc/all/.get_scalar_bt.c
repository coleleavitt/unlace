// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BBB0
// Name:            .get_scalar_bt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BBB0 jmp     cs:off_4DADC0
//
// Resolved target: get_scalar_bt
// Target address:  0x4DD7E0
// GOT/IAT slot:    0x4DADC0
// Slot symbol:     off_4DADC0
// Target type:     <no type info>
// ============================================================

void .get_scalar_bt(/* see target signature */)
{
    // Tail-call to get_scalar_bt via GOT/IAT indirection
    return get_scalar_bt(/* forwarded args */);
}

