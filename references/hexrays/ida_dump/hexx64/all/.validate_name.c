// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C6A0
// Name:            .validate_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C6A0 jmp     cs:off_4EDB38
//
// Resolved target: validate_name
// Target address:  0x4F1E68
// GOT/IAT slot:    0x4EDB38
// Slot symbol:     off_4EDB38
// Target type:     <no type info>
// ============================================================

void .validate_name(/* see target signature */)
{
    // Tail-call to validate_name via GOT/IAT indirection
    return validate_name(/* forwarded args */);
}

