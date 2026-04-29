// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EDE0
// Name:            .getnseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EDE0 jmp     cs:off_4E9ED8
//
// Resolved target: getnseg
// Target address:  0x4EC928
// GOT/IAT slot:    0x4E9ED8
// Slot symbol:     off_4E9ED8
// Target type:     <no type info>
// ============================================================

void .getnseg(/* see target signature */)
{
    // Tail-call to getnseg via GOT/IAT indirection
    return getnseg(/* forwarded args */);
}

