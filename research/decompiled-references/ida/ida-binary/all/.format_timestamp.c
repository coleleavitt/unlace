// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115BB0
// Name:            .format_timestamp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115BB0 jmp     cs:format_timestamp_ptr
//
// Resolved target: format_timestamp
// Target address:  0x8D6120
// GOT/IAT slot:    0x8A1A78
// Slot symbol:     format_timestamp_ptr
// Target type:     <no type info>
// ============================================================

void .format_timestamp(/* see target signature */)
{
    // Tail-call to format_timestamp via GOT/IAT indirection
    return format_timestamp(/* forwarded args */);
}

