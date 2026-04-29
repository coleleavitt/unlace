// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0xB3E0
// Name:     set_import_name
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to set_import_name are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void set_import_name(/* see import library declaration */);

