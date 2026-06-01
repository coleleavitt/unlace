__int64 __fastcall dwarf_get_DSC_name(int a1, _QWORD *a2)
{
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      *a2 = "DW_DSC_range";
      return 0;
    }
    else
    {
      return 0xFFFFFFFFLL;
    }
  }
  else
  {
    *a2 = "DW_DSC_label";
    return 0;
  }
}

