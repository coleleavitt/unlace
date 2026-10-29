__int64 __fastcall dwarf_int64_mult(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  if ( a1 && a2 )
  {
    if ( a1 <= 0 || a2 <= 0 )
    {
      if ( a1 >= 0 || a2 <= 0 )
      {
        if ( a2 >= 0 || a1 <= 0 )
        {
          if ( (a2 & a1) >= 0
            || a1 != 0x8000000000000000LL && a2 != 0x8000000000000000LL && -a1 <= 0x7FFFFFFFFFFFFFFFLL / -a2 )
          {
            goto LABEL_6;
          }
          _dwarf_error_string(a4, a5, 501, "DW_DLE_ARITHMETIC_OVERFLOW Signed 64bit multiply overflow(e)");
        }
        else
        {
          if ( (__int64)0x8000000000000000LL / a1 <= a2 )
            goto LABEL_6;
          _dwarf_error_string(a4, a5, 501, "DW_DLE_ARITHMETIC_OVERFLOW Signed 64bit multiply overflow(d)");
        }
      }
      else
      {
        if ( (__int64)0x8000000000000000LL / a2 <= a1 )
          goto LABEL_6;
        _dwarf_error_string(a4, a5, 501, "DW_DLE_ARITHMETIC_OVERFLOW Signed 64bit multiply overflow(c)");
      }
    }
    else
    {
      if ( a1 <= 0x7FFFFFFFFFFFFFFFLL / a2 )
      {
LABEL_6:
        *a3 = a1 * a2;
        return 0;
      }
      _dwarf_error_string(a4, a5, 501, "DW_DLE_ARITHMETIC_OVERFLOW Signed 64bit multiply overflow(b)");
    }
    return 1;
  }
  else
  {
    *a3 = 0;
    return 0;
  }
}

