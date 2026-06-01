// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8F60
// Name:            .qfilesize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8F60 jmp     cs:off_2C79F98
//
// Resolved target: qfilesize
// Target address:  0x83EE80
// GOT/IAT slot:    0x2C79F98
// Slot symbol:     off_2C79F98
// Target type:     <no type info>
// ============================================================

void .qfilesize(/* see target signature */)
{
    // Tail-call to qfilesize via GOT/IAT indirection
    return qfilesize(/* forwarded args */);
}

