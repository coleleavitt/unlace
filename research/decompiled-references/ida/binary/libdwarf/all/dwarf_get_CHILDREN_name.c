__int64 __fastcall dwarf_get_CHILDREN_name(int a1, _QWORD *a2)
{
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      *a2 = "DW_CHILDREN_yes";
      return 0;
    }
    else
    {
      return 0xFFFFFFFFLL;
    }
  }
  else
  {
    *a2 = "DW_CHILDREN_no";
    return 0;
  }
}

