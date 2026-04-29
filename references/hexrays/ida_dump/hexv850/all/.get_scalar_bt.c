// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BBC0
// Name:            .get_scalar_bt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BBC0 jmp     cs:off_4C0DC8
//
// Resolved target: get_scalar_bt
// Target address:  0x4C3DE0
// GOT/IAT slot:    0x4C0DC8
// Slot symbol:     off_4C0DC8
// Target type:     <no type info>
// ============================================================

void .get_scalar_bt(/* see target signature */)
{
    // Tail-call to get_scalar_bt via GOT/IAT indirection
    return get_scalar_bt(/* forwarded args */);
}

