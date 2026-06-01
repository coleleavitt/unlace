// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1191F0
// Name:            .print_idcv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1191F0 jmp     cs:print_idcv_ptr
//
// Resolved target: print_idcv
// Target address:  0x8D8300
// GOT/IAT slot:    0x8A3598
// Slot symbol:     print_idcv_ptr
// Target type:     <no type info>
// ============================================================

void .print_idcv(/* see target signature */)
{
    // Tail-call to print_idcv via GOT/IAT indirection
    return print_idcv(/* forwarded args */);
}

