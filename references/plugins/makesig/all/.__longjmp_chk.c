// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3080
// Name:            .__longjmp_chk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3080 jmp     cs:off_20028
//
// Resolved target: __longjmp_chk
// Target address:  0x21938
// GOT/IAT slot:    0x20028
// Slot symbol:     off_20028
// Target type:     <no type info>
// ============================================================

void .__longjmp_chk(/* see target signature */)
{
    // Tail-call to __longjmp_chk via GOT/IAT indirection
    return __longjmp_chk(/* forwarded args */);
}

