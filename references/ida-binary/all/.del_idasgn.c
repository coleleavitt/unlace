// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118700
// Name:            .del_idasgn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118700 jmp     cs:del_idasgn_ptr
//
// Resolved target: del_idasgn
// Target address:  0x8D7C50
// GOT/IAT slot:    0x8A3020
// Slot symbol:     del_idasgn_ptr
// Target type:     <no type info>
// ============================================================

void .del_idasgn(/* see target signature */)
{
    // Tail-call to del_idasgn via GOT/IAT indirection
    return del_idasgn(/* forwarded args */);
}

