// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B5E0
// Name:            .is_stroff
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B5E0 jmp     cs:off_4DAAD8
//
// Resolved target: is_stroff
// Target address:  0x4DD4E0
// GOT/IAT slot:    0x4DAAD8
// Slot symbol:     off_4DAAD8
// Target type:     <no type info>
// ============================================================

void .is_stroff(/* see target signature */)
{
    // Tail-call to is_stroff via GOT/IAT indirection
    return is_stroff(/* forwarded args */);
}

