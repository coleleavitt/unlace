// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8420
// Name:            .del_jumptable_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8420 jmp     cs:off_2C799F8
//
// Resolved target: del_jumptable_info
// Target address:  0x59F140
// GOT/IAT slot:    0x2C799F8
// Slot symbol:     off_2C799F8
// Target type:     <no type info>
// ============================================================

void .del_jumptable_info(/* see target signature */)
{
    // Tail-call to del_jumptable_info via GOT/IAT indirection
    return del_jumptable_info(/* forwarded args */);
}

