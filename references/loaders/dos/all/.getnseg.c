// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x25A0
// Name:            .getnseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x25A0 jmp     cs:off_B2B8
//
// Resolved target: getnseg
// Target address:  0xB768
// GOT/IAT slot:    0xB2B8
// Slot symbol:     off_B2B8
// Target type:     <no type info>
// ============================================================

void .getnseg(/* see target signature */)
{
    // Tail-call to getnseg via GOT/IAT indirection
    return getnseg(/* forwarded args */);
}

