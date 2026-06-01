// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC470
// Name:            .is_stroff
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC470 jmp     cs:off_2C7BA20
//
// Resolved target: is_stroff
// Target address:  0x3C5200
// GOT/IAT slot:    0x2C7BA20
// Slot symbol:     off_2C7BA20
// Target type:     <no type info>
// ============================================================

void .is_stroff(/* see target signature */)
{
    // Tail-call to is_stroff via GOT/IAT indirection
    return is_stroff(/* forwarded args */);
}

