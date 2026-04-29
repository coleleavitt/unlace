// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CEC0
// Name:            .getnseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CEC0 jmp     cs:off_4EDF48
//
// Resolved target: getnseg
// Target address:  0x4F2298
// GOT/IAT slot:    0x4EDF48
// Slot symbol:     off_4EDF48
// Target type:     <no type info>
// ============================================================

void .getnseg(/* see target signature */)
{
    // Tail-call to getnseg via GOT/IAT indirection
    return getnseg(/* forwarded args */);
}

