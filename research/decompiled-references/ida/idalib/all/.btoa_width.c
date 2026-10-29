// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD1E0
// Name:            .btoa_width
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD1E0 jmp     cs:off_2C7C0D8
//
// Resolved target: btoa_width
// Target address:  0x588770
// GOT/IAT slot:    0x2C7C0D8
// Slot symbol:     off_2C7C0D8
// Target type:     <no type info>
// ============================================================

void .btoa_width(/* see target signature */)
{
    // Tail-call to btoa_width via GOT/IAT indirection
    return btoa_width(/* forwarded args */);
}

