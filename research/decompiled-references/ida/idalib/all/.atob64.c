// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD790
// Name:            .atob64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD790 jmp     cs:off_2C7C3B0
//
// Resolved target: atob64
// Target address:  0x39EAC0
// GOT/IAT slot:    0x2C7C3B0
// Slot symbol:     off_2C7C3B0
// Target type:     <no type info>
// ============================================================

void .atob64(/* see target signature */)
{
    // Tail-call to atob64 via GOT/IAT indirection
    return atob64(/* forwarded args */);
}

