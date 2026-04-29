// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0xA350
// Name:     change_storage_type
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to change_storage_type are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void change_storage_type(/* see import library declaration */);

