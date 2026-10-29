// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AAF0
// Name:            .append_snprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AAF0 jmp     cs:append_snprintf_ptr
//
// Resolved target: append_snprintf
// Target address:  0x8D9320
// GOT/IAT slot:    0x8A4218
// Slot symbol:     append_snprintf_ptr
// Target type:     <no type info>
// ============================================================

void .append_snprintf(/* see target signature */)
{
    // Tail-call to append_snprintf via GOT/IAT indirection
    return append_snprintf(/* forwarded args */);
}

