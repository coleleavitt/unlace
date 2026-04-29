// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E030
// Name:            .is_off
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E030 jmp     cs:off_4E9800
//
// Resolved target: is_off
// Target address:  0x4EC218
// GOT/IAT slot:    0x4E9800
// Slot symbol:     off_4E9800
// Target type:     <no type info>
// ============================================================

void .is_off(/* see target signature */)
{
    // Tail-call to is_off via GOT/IAT indirection
    return is_off(/* forwarded args */);
}

