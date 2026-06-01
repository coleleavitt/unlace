__int64 __fastcall dwarf_get_MACINFO_name(unsigned int a1, _QWORD *a2)
{
  if ( a1 == 3 )
  {
    *a2 = "DW_MACINFO_start_file";
    return 0;
  }
  else if ( a1 <= 3 )
  {
    if ( a1 != 1 )
    {
      if ( a1 == 2 )
      {
        *a2 = "DW_MACINFO_undef";
        return 0;
      }
      return 0xFFFFFFFFLL;
    }
    *a2 = "DW_MACINFO_define";
    return 0;
  }
  else
  {
    if ( a1 != 4 )
    {
      if ( a1 == 255 )
      {
        *a2 = "DW_MACINFO_vendor_ext";
        return 0;
      }
      return 0xFFFFFFFFLL;
    }
    *a2 = "DW_MACINFO_end_file";
    return 0;
  }
}

