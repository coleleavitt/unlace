/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_32E5C
// Address: 0x00032E5C

//----- (00032E5C) --------------------------------------------------------
_DWORD *__fastcall sub_32E5C(_DWORD *result, int a2, __int64 a3, unsigned int a4)
{
  _DWORD *v4; // r8
  bool v5; // cf

  v4 = result;
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  if ( a3 == 29 )
    goto LABEL_12;
  if ( a3 >= 30 )
  {
    if ( a3 != 2147483645 )
    {
      if ( a3 > 2147483645 )
      {
        if ( a3 != 0x7FFFFFFF )
          return result;
      }
      else if ( (unsigned __int64)(a3 - 1879047930) >= 3 )
      {
        return result;
      }
    }
LABEL_12:
    sub_32440(a2, (int)result, (__int64 *)(a2 + 264), a4);
    return v4;
  }
  if ( a3 == 1 )
    goto LABEL_12;
  if ( a3 >= 1 )
  {
    v5 = 1;
    if ( ((unsigned int)a3 >= 0xE) + HIDWORD(a3) == 1 )
      v5 = (unsigned int)(a3 - 14) >= 2;
    if ( !v5 )
      goto LABEL_12;
  }
  return result;
}
