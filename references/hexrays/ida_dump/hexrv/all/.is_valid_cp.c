// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BE80
// Name:            .is_valid_cp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BE80 jmp     cs:off_4BFF28
//
// Resolved target: is_valid_cp
// Target address:  0x4C3450
// GOT/IAT slot:    0x4BFF28
// Slot symbol:     off_4BFF28
// Target type:     <no type info>
// ============================================================

void .is_valid_cp(/* see target signature */)
{
    // Tail-call to is_valid_cp via GOT/IAT indirection
    return is_valid_cp(/* forwarded args */);
}

