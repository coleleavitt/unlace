// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D620
// Name:            .throw_idc_exception
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D620 jmp     cs:off_4E92F8
//
// Resolved target: throw_idc_exception
// Target address:  0x4EBCE8
// GOT/IAT slot:    0x4E92F8
// Slot symbol:     off_4E92F8
// Target type:     <no type info>
// ============================================================

void .throw_idc_exception(/* see target signature */)
{
    // Tail-call to throw_idc_exception via GOT/IAT indirection
    return throw_idc_exception(/* forwarded args */);
}

