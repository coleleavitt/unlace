// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7B80
// Name:            .get_scalar_bt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7B80 jmp     cs:off_2C795A8
//
// Resolved target: get_scalar_bt
// Target address:  0x6AA4E0
// GOT/IAT slot:    0x2C795A8
// Slot symbol:     off_2C795A8
// Target type:     <no type info>
// ============================================================

void .get_scalar_bt(/* see target signature */)
{
    // Tail-call to get_scalar_bt via GOT/IAT indirection
    return get_scalar_bt(/* forwarded args */);
}

