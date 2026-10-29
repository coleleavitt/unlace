__int64 __fastcall dwarf_uint64_add(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // rax
  unsigned int v4; // ecx

  v3 = a1 + a2;
  if ( !a1 || !a2 )
    goto LABEL_7;
  if ( a1 < a2 )
    a1 = a2;
  if ( v3 >= a1 || (v4 = 1, !v3) )
  {
LABEL_7:
    *a3 = v3;
    return 0;
  }
  return v4;
}

