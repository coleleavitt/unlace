// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CB80
// Name:            .is_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CB80 jmp     cs:off_4EDDA8
//
// Resolved target: is_stkvar
// Target address:  0x4F20E8
// GOT/IAT slot:    0x4EDDA8
// Slot symbol:     off_4EDDA8
// Target type:     <no type info>
// ============================================================

void .is_stkvar(/* see target signature */)
{
    // Tail-call to is_stkvar via GOT/IAT indirection
    return is_stkvar(/* forwarded args */);
}

