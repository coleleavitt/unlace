__int64 __fastcall dwarf_valid_form_we_know(__int128 a1)
{
  __int64 result; // rax

  result = 1;
  if ( a1 != 0 )
  {
    result = 0;
    if ( *((_QWORD *)&a1 + 1) )
    {
      result = 1;
      if ( (unsigned __int64)a1 > 0x2C )
        return ((unsigned __int64)(a1 - 7968) <= 1) | (unsigned __int8)((unsigned __int64)(a1 - 7937) <= 1);
    }
  }
  return result;
}

