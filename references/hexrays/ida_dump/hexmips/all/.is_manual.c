// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BF30
// Name:            .is_manual
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BF30 jmp     cs:off_4CDF80
//
// Resolved target: is_manual
// Target address:  0x4D09D0
// GOT/IAT slot:    0x4CDF80
// Slot symbol:     off_4CDF80
// Target type:     <no type info>
// ============================================================

void .is_manual(/* see target signature */)
{
    // Tail-call to is_manual via GOT/IAT indirection
    return is_manual(/* forwarded args */);
}

