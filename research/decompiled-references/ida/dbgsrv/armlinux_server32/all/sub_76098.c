/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_76098
// Address: 0x00076098

//----- (00076098) --------------------------------------------------------
_BYTE *__fastcall sub_76098(_BYTE *result, unsigned int a2, unsigned int a3)
{
  _BYTE *v3; // r4
  __int16 v4; // r2

  if ( (int)(a2 - (_DWORD)result) < 0 )
    goto LABEL_13;
  if ( a3 <= 0x7F )
  {
    if ( a2 > (unsigned int)result )
      *result++ = a3;
  }
  else
  {
    if ( a3 >= 0x4000 )
    {
      if ( a2 <= (unsigned int)result )
        return result;
      v3 = result + 1;
      *result = -1;
      if ( (int)(a2 - (_DWORD)(result + 1)) >= 0 )
      {
        if ( a2 <= (unsigned int)v3 )
          return v3;
        v3 = result + 2;
        result[1] = BYTE1(a3);
        if ( a2 <= (unsigned int)(result + 2) )
          return v3;
        result[2] = a3;
        result += 3;
        return result;
      }
LABEL_13:
      if ( under_debugger )
        __und(0xFFu);
      sub_78C64(1225);
    }
    if ( a2 > (unsigned int)result )
    {
      v4 = a3 | 0x8000;
      *result = HIBYTE(v4);
      if ( a2 > (unsigned int)(result + 1) )
      {
        result[1] = v4;
        result += 2;
      }
      else
      {
        ++result;
      }
    }
  }
  return result;
}
// D6C20: using guessed type char under_debugger;
