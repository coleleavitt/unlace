// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B5E0
// Name:            .validate_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B5E0 jmp     cs:off_4C0AD8
//
// Resolved target: validate_name
// Target address:  0x4C3AD8
// GOT/IAT slot:    0x4C0AD8
// Slot symbol:     off_4C0AD8
// Target type:     <no type info>
// ============================================================

void .validate_name(/* see target signature */)
{
    // Tail-call to validate_name via GOT/IAT indirection
    return validate_name(/* forwarded args */);
}

