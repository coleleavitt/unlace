/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140060C60
// Address: 0x0000000140060C60

//----- (0000000140060C60) ----------------------------------------------------
__int64 __fastcall sub_140060C60(__int64 a1, char *a2, int a3)
{
  char v3; // cl
  __int64 result; // rax

  v3 = *a2;
  if ( (unsigned __int8)*a2 >= 0x80u )
  {
    if ( (v3 & 0xE0) == 0xC0 )
    {
      result = 2;
    }
    else if ( (v3 & 0xF0) == 0xE0 )
    {
      result = 3;
    }
    else if ( (v3 & 0xF8) == 0xF0 )
    {
      result = 4;
    }
    else if ( (v3 & 0xFC) == 0xF8 )
    {
      result = 5;
    }
    else
    {
      if ( (v3 & 0xFE) != 0xFC )
      {
        *errno() = 42;
        return 0xFFFFFFFFLL;
      }
      result = 6;
    }
  }
  else
  {
    result = 1;
  }
  if ( a3 < (int)result )
  {
    *errno() = 22;
    return 0xFFFFFFFFLL;
  }
  return result;
}
