// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x4D04E8
// Name:     add_func_ex
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to add_func_ex are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void add_func_ex(/* see import library declaration */);

