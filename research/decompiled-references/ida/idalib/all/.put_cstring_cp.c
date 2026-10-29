// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA230
// Name:            .put_cstring_cp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA230 jmp     cs:off_2C7A900
//
// Resolved target: put_cstring_cp
// Target address:  0x5ACE60
// GOT/IAT slot:    0x2C7A900
// Slot symbol:     off_2C7A900
// Target type:     <no type info>
// ============================================================

void .put_cstring_cp(/* see target signature */)
{
    // Tail-call to put_cstring_cp via GOT/IAT indirection
    return put_cstring_cp(/* forwarded args */);
}

