// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115340
// Name:            .format_cdata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115340 jmp     cs:format_cdata_ptr
//
// Resolved target: format_cdata
// Target address:  0x8D5BF0
// GOT/IAT slot:    0x8A1640
// Slot symbol:     format_cdata_ptr
// Target type:     <no type info>
// ============================================================

void .format_cdata(/* see target signature */)
{
    // Tail-call to format_cdata via GOT/IAT indirection
    return format_cdata(/* forwarded args */);
}

