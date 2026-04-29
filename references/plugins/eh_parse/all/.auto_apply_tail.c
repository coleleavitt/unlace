// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6890
// Name:            .auto_apply_tail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6890 jmp     cs:off_2F430
//
// Resolved target: auto_apply_tail
// Target address:  0x2FAB8
// GOT/IAT slot:    0x2F430
// Slot symbol:     off_2F430
// Target type:     <no type info>
// ============================================================

void .auto_apply_tail(/* see target signature */)
{
    // Tail-call to auto_apply_tail via GOT/IAT indirection
    return auto_apply_tail(/* forwarded args */);
}

