// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BDB0
// Name:            .getnseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BDB0 jmp     cs:off_4CDEC0
//
// Resolved target: getnseg
// Target address:  0x4D0910
// GOT/IAT slot:    0x4CDEC0
// Slot symbol:     off_4CDEC0
// Target type:     <no type info>
// ============================================================

void .getnseg(/* see target signature */)
{
    // Tail-call to getnseg via GOT/IAT indirection
    return getnseg(/* forwarded args */);
}

