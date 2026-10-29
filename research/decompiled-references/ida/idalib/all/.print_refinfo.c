// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACEA0
// Name:            .print_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACEA0 jmp     cs:off_2C7BF38
//
// Resolved target: print_refinfo
// Target address:  0x59FA20
// GOT/IAT slot:    0x2C7BF38
// Slot symbol:     off_2C7BF38
// Target type:     <no type info>
// ============================================================

void .print_refinfo(/* see target signature */)
{
    // Tail-call to print_refinfo via GOT/IAT indirection
    return print_refinfo(/* forwarded args */);
}

