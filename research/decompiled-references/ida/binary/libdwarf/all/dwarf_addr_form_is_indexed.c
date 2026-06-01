_BOOL8 __fastcall dwarf_addr_form_is_indexed(int a1)
{
  _BOOL8 result; // rax

  if ( a1 == 7937 )
    return 1;
  if ( a1 > 7937 )
    return a1 == 8193;
  result = 1;
  if ( a1 != 27 )
    return (unsigned int)(a1 - 41) <= 3;
  return result;
}

