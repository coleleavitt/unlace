// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9BF0
// Name:            .format_cdata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9BF0 jmp     cs:off_2C7A5E0
//
// Resolved target: format_cdata
// Target address:  0x5A6F30
// GOT/IAT slot:    0x2C7A5E0
// Slot symbol:     off_2C7A5E0
// Target type:     <no type info>
// ============================================================

void .format_cdata(/* see target signature */)
{
    // Tail-call to format_cdata via GOT/IAT indirection
    return format_cdata(/* forwarded args */);
}

