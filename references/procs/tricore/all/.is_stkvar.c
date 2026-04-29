// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6690
// Name:            .is_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6690 jmp     cs:off_24330
//
// Resolved target: is_stkvar
// Target address:  0x26110
// GOT/IAT slot:    0x24330
// Slot symbol:     off_24330
// Target type:     <no type info>
// ============================================================

void .is_stkvar(/* see target signature */)
{
    // Tail-call to is_stkvar via GOT/IAT indirection
    return is_stkvar(/* forwarded args */);
}

