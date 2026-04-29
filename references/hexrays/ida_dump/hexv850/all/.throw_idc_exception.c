// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A610
// Name:            .throw_idc_exception
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A610 jmp     cs:off_4C02F0
//
// Resolved target: throw_idc_exception
// Target address:  0x4C32B8
// GOT/IAT slot:    0x4C02F0
// Slot symbol:     off_4C02F0
// Target type:     <no type info>
// ============================================================

void .throw_idc_exception(/* see target signature */)
{
    // Tail-call to throw_idc_exception via GOT/IAT indirection
    return throw_idc_exception(/* forwarded args */);
}

