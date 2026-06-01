const char *__fastcall sub_201F440(unsigned int a1)
{
  const char *result; // rax

  if ( a1 == 3 )
    return "DW_MACINFO_start_file";
  if ( a1 <= 3 )
  {
    if ( a1 == 1 )
    {
      return "DW_MACINFO_define";
    }
    else
    {
      result = "DW_MACINFO_undef";
      if ( a1 != 2 )
        return nullptr;
    }
  }
  else
  {
    switch ( a1 )
    {
      case 0xFFu:
        return "DW_MACINFO_vendor_ext";
      case 0xFFFFFFFF:
        return "DW_MACINFO_invalid";
      case 4u:
        return "DW_MACINFO_end_file";
      default:
        return nullptr;
    }
  }
  return result;
}
