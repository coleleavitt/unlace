// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20DE0
// Name:            .is_valid_cp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20DE0 jmp     cs:off_956D8
//
// Resolved target: is_valid_cp
// Target address:  0x96128
// GOT/IAT slot:    0x956D8
// Slot symbol:     off_956D8
// Target type:     <no type info>
// ============================================================

void .is_valid_cp(/* see target signature */)
{
    // Tail-call to is_valid_cp via GOT/IAT indirection
    return is_valid_cp(/* forwarded args */);
}

