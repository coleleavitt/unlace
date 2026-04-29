// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7520
// Name:            .validate_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7520 jmp     cs:off_19278
//
// Resolved target: validate_name
// Target address:  0x197A8
// GOT/IAT slot:    0x19278
// Slot symbol:     off_19278
// Target type:     <no type info>
// ============================================================

void .validate_name(/* see target signature */)
{
    // Tail-call to validate_name via GOT/IAT indirection
    return validate_name(/* forwarded args */);
}

