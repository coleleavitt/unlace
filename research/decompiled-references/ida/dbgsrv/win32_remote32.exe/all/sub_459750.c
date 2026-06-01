/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_459750
// Address: 0x00459750

//----- (00459750) --------------------------------------------------------
int __cdecl sub_459750(int a1, char *a2, int a3)
{
  char v3; // cl
  int result; // eax

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
        *sub_46B984() = 42;
        return -1;
      }
      result = 6;
    }
  }
  else
  {
    result = 1;
  }
  if ( a3 < result )
  {
    *sub_46B984() = 22;
    return -1;
  }
  return result;
}
