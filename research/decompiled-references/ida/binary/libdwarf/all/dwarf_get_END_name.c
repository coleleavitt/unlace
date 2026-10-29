__int64 __fastcall dwarf_get_END_name(unsigned int a1, const char **a2)
{
  const char *v3; // rax

  if ( a1 == 2 )
  {
    *a2 = "DW_END_little";
    return 0;
  }
  else if ( a1 <= 2 )
  {
    v3 = "DW_END_big";
    if ( !a1 )
      v3 = "DW_END_default";
    *a2 = v3;
    return 0;
  }
  else if ( a1 == 64 )
  {
    *a2 = "DW_END_lo_user";
    return 0;
  }
  else if ( a1 == 255 )
  {
    *a2 = "DW_END_hi_user";
    return 0;
  }
  else
  {
    return 0xFFFFFFFFLL;
  }
}

