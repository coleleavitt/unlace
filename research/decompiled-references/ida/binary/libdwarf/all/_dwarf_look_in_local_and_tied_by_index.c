__int64 __fastcall dwarf_look_in_local_and_tied_by_index(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _QWORD *a4,
        _QWORD *a5)
{
  unsigned int v8; // r15d

  v8 = sub_500E0(a1, a2, a3, a4, a5);
  if ( !v8 || !a5 || dwarf_errno((Dwarf_Error)*a5) != 257 || !*(_QWORD *)(a1 + 10848) )
    return v8;
  dwarf_dealloc_error(a1, *a5);
  *a5 = 0;
  return _dwarf_get_addr_from_tied(a1, a2, a3, a4, a5);
}

