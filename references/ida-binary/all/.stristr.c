// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A400
// Name:            .stristr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A400 jmp     cs:stristr_ptr
//
// Resolved target: stristr
// Target address:  0x8D8EA0
// GOT/IAT slot:    0x8A3EA0
// Slot symbol:     stristr_ptr
// Target type:     <no type info>
// ============================================================

void .stristr(/* see target signature */)
{
    // Tail-call to stristr via GOT/IAT indirection
    return stristr(/* forwarded args */);
}

