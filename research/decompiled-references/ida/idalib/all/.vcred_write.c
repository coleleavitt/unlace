// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7FD0
// Name:            .vcred_write
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7FD0 jmp     cs:off_2C797D0
//
// Resolved target: vcred_write
// Target address:  0x7CA770
// GOT/IAT slot:    0x2C797D0
// Slot symbol:     off_2C797D0
// Target type:     <no type info>
// ============================================================

void .vcred_write(/* see target signature */)
{
    // Tail-call to vcred_write via GOT/IAT indirection
    return vcred_write(/* forwarded args */);
}

