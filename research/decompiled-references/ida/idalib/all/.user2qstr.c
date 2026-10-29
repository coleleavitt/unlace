// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB360
// Name:            .user2qstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB360 jmp     cs:off_2C7B198
//
// Resolved target: user2qstr
// Target address:  0x8B83A0
// GOT/IAT slot:    0x2C7B198
// Slot symbol:     off_2C7B198
// Target type:     <no type info>
// ============================================================

void .user2qstr(/* see target signature */)
{
    // Tail-call to user2qstr via GOT/IAT indirection
    return user2qstr(/* forwarded args */);
}

