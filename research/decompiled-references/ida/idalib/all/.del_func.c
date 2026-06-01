// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7AD0
// Name:            .del_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7AD0 jmp     cs:off_2C79550
//
// Resolved target: del_func
// Target address:  0x5D47F0
// GOT/IAT slot:    0x2C79550
// Slot symbol:     off_2C79550
// Target type:     <no type info>
// ============================================================

void .del_func(/* see target signature */)
{
    // Tail-call to del_func via GOT/IAT indirection
    return del_func(/* forwarded args */);
}

