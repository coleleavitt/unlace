_BOOL8 __fastcall dwarf_uint64_mult(unsigned __int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // rax

  v3 = a2 * a1;
  *a3 = a2 * a1;
  if ( !a1 || !a2 )
    return 0;
  if ( a1 < a2 )
    a1 = a2;
  return v3 < a1;
}

