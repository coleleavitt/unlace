// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EEC0
// Name:            .is_valid_cp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EEC0 jmp     cs:off_4E9F48
//
// Resolved target: is_valid_cp
// Target address:  0x4EC998
// GOT/IAT slot:    0x4E9F48
// Slot symbol:     off_4E9F48
// Target type:     <no type info>
// ============================================================

void .is_valid_cp(/* see target signature */)
{
    // Tail-call to is_valid_cp via GOT/IAT indirection
    return is_valid_cp(/* forwarded args */);
}

