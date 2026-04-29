// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x33590
// Name:            j_._ITM_RU8_0
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x33590 endbr64
//   0x33594 jmp     __ITM_RU8
//
// Resolved target: ._ITM_RU8
// Target address:  0xA370
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_._ITM_RU8_0(/* see target signature */)
{
    // Tail-call to ._ITM_RU8 via direct jump indirection
    return ._ITM_RU8(/* forwarded args */);
}

