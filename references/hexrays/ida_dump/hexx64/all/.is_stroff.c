// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C6B0
// Name:            .is_stroff
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C6B0 jmp     cs:off_4EDB40
//
// Resolved target: is_stroff
// Target address:  0x4F1E70
// GOT/IAT slot:    0x4EDB40
// Slot symbol:     off_4EDB40
// Target type:     <no type info>
// ============================================================

void .is_stroff(/* see target signature */)
{
    // Tail-call to is_stroff via GOT/IAT indirection
    return is_stroff(/* forwarded args */);
}

