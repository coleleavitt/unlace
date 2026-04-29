// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E620
// Name:            .is_stroff
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E620 jmp     cs:off_4E9AF8
//
// Resolved target: is_stroff
// Target address:  0x4EC520
// GOT/IAT slot:    0x4E9AF8
// Slot symbol:     off_4E9AF8
// Target type:     <no type info>
// ============================================================

void .is_stroff(/* see target signature */)
{
    // Tail-call to is_stroff via GOT/IAT indirection
    return is_stroff(/* forwarded args */);
}

