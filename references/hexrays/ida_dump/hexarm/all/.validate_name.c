// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E610
// Name:            .validate_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E610 jmp     cs:off_4E9AF0
//
// Resolved target: validate_name
// Target address:  0x4EC518
// GOT/IAT slot:    0x4E9AF0
// Slot symbol:     off_4E9AF0
// Target type:     <no type info>
// ============================================================

void .validate_name(/* see target signature */)
{
    // Tail-call to validate_name via GOT/IAT indirection
    return validate_name(/* forwarded args */);
}

