// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117BD0
// Name:            .__longjmp_chk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117BD0 jmp     cs:__longjmp_chk_ptr
//
// Resolved target: __longjmp_chk
// Target address:  0x8D7550
// GOT/IAT slot:    0x8A2A88
// Slot symbol:     __longjmp_chk_ptr
// Target type:     <no type info>
// ============================================================

void .__longjmp_chk(/* see target signature */)
{
    // Tail-call to __longjmp_chk via GOT/IAT indirection
    return __longjmp_chk(/* forwarded args */);
}

