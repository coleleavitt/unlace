// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BDA0
// Name:            .getnseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BDA0 jmp     cs:off_4BFEB8
//
// Resolved target: getnseg
// Target address:  0x4C33E0
// GOT/IAT slot:    0x4BFEB8
// Slot symbol:     off_4BFEB8
// Target type:     <no type info>
// ============================================================

void .getnseg(/* see target signature */)
{
    // Tail-call to getnseg via GOT/IAT indirection
    return getnseg(/* forwarded args */);
}

