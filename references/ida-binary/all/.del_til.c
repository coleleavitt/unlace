// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119610
// Name:            .del_til
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119610 jmp     cs:del_til_ptr
//
// Resolved target: del_til
// Target address:  0x8D85D8
// GOT/IAT slot:    0x8A37A8
// Slot symbol:     del_til_ptr
// Target type:     <no type info>
// ============================================================

void .del_til(/* see target signature */)
{
    // Tail-call to del_til via GOT/IAT indirection
    return del_til(/* forwarded args */);
}

