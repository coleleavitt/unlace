// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2090
// Name:            .__longjmp_chk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2090 jmp     cs:off_B030
//
// Resolved target: __longjmp_chk
// Target address:  0xB4C8
// GOT/IAT slot:    0xB030
// Slot symbol:     off_B030
// Target type:     <no type info>
// ============================================================

void .__longjmp_chk(/* see target signature */)
{
    // Tail-call to __longjmp_chk via GOT/IAT indirection
    return __longjmp_chk(/* forwarded args */);
}

