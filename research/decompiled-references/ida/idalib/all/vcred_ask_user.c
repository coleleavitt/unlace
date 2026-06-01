// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7CB420
// Name:            vcred_ask_user
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x7CB420 jmp     vcred_ask_user_0
//
// Resolved target: vcred_ask_user_0
// Target address:  0x7CABF0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     void __fastcall __noreturn(_QWORD *)
// ============================================================

/* see target sig */ vcred_ask_user(/* see target signature */)
{
    // Tail-call to vcred_ask_user_0 via direct jump indirection
    return vcred_ask_user_0(/* forwarded args */);
}

