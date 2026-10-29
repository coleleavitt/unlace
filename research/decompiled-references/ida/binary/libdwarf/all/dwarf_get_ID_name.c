__int64 __fastcall dwarf_get_ID_name(unsigned int a1, const char **a2)
{
  const char *v2; // rax

  if ( a1 == 2 )
  {
    *a2 = "DW_ID_down_case";
    return 0;
  }
  else if ( a1 > 2 )
  {
    if ( a1 == 3 )
    {
      *a2 = "DW_ID_case_insensitive";
      return 0;
    }
    else
    {
      return 0xFFFFFFFFLL;
    }
  }
  else
  {
    v2 = "DW_ID_up_case";
    if ( !a1 )
      v2 = "DW_ID_case_sensitive";
    *a2 = v2;
    return 0;
  }
}

