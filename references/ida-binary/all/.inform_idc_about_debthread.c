// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1113A0
// Name:            .inform_idc_about_debthread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1113A0 jmp     cs:inform_idc_about_debthread_ptr
//
// Resolved target: inform_idc_about_debthread
// Target address:  0x8D32C0
// GOT/IAT slot:    0x89F670
// Slot symbol:     inform_idc_about_debthread_ptr
// Target type:     <no type info>
// ============================================================

void .inform_idc_about_debthread(/* see target signature */)
{
    // Tail-call to inform_idc_about_debthread via GOT/IAT indirection
    return inform_idc_about_debthread(/* forwarded args */);
}

