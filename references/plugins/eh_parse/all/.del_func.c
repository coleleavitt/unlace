// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6800
// Name:            .del_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6800 jmp     cs:off_2F3E8
//
// Resolved target: del_func
// Target address:  0x2FA68
// GOT/IAT slot:    0x2F3E8
// Slot symbol:     off_2F3E8
// Target type:     <no type info>
// ============================================================

void .del_func(/* see target signature */)
{
    // Tail-call to del_func via GOT/IAT indirection
    return del_func(/* forwarded args */);
}

