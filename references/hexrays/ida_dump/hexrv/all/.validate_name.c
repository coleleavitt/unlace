// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B5D0
// Name:            .validate_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B5D0 jmp     cs:off_4BFAD0
//
// Resolved target: validate_name
// Target address:  0x4C2FD0
// GOT/IAT slot:    0x4BFAD0
// Slot symbol:     off_4BFAD0
// Target type:     <no type info>
// ============================================================

void .validate_name(/* see target signature */)
{
    // Tail-call to validate_name via GOT/IAT indirection
    return validate_name(/* forwarded args */);
}

