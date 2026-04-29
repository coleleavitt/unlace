// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29610
// Name:            .throw_idc_exception
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29610 jmp     cs:off_4B92F0
//
// Resolved target: throw_idc_exception
// Target address:  0x4BBCC0
// GOT/IAT slot:    0x4B92F0
// Slot symbol:     off_4B92F0
// Target type:     <no type info>
// ============================================================

void .throw_idc_exception(/* see target signature */)
{
    // Tail-call to throw_idc_exception via GOT/IAT indirection
    return throw_idc_exception(/* forwarded args */);
}

