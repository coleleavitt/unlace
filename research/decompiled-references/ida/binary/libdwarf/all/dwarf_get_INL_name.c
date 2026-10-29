__int64 __fastcall dwarf_get_INL_name(unsigned int a1, const char **a2)
{
  const char *v2; // rax

  if ( a1 == 2 )
  {
    *a2 = "DW_INL_declared_not_inlined";
    return 0;
  }
  else if ( a1 > 2 )
  {
    if ( a1 == 3 )
    {
      *a2 = "DW_INL_declared_inlined";
      return 0;
    }
    else
    {
      return 0xFFFFFFFFLL;
    }
  }
  else
  {
    v2 = "DW_INL_inlined";
    if ( !a1 )
      v2 = "DW_INL_not_inlined";
    *a2 = v2;
    return 0;
  }
}

