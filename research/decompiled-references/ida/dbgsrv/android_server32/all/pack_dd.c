/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: pack_dd
// Address: 0x0007C92C

//----- (0007C92C) --------------------------------------------------------
_BYTE *__fastcall pack_dd(_BYTE *result, unsigned int a2, unsigned int a3)
{
  _BYTE *v3; // r3

  if ( (int)(a2 - (_DWORD)result) < 0 )
    goto LABEL_31;
  if ( a3 <= 0x7F )
  {
    if ( (unsigned int)result >= a2 )
      return result;
LABEL_19:
    *result++ = a3;
    return result;
  }
  if ( a3 >> 14 )
  {
    if ( a3 >> 29 )
    {
      *result = -1;
      v3 = result + 1;
      if ( (int)(a2 - (_DWORD)(result + 1)) >= 0 )
      {
        if ( (unsigned int)v3 < a2 )
        {
          result[1] = HIBYTE(a3);
          v3 = result + 2;
        }
        if ( (unsigned int)v3 < a2 )
          *v3++ = BYTE2(a3);
        if ( (int)(a2 - (_DWORD)v3) >= 0 )
        {
          if ( (unsigned int)v3 >= a2 )
            return v3;
          *v3++ = BYTE1(a3);
          if ( (unsigned int)v3 >= a2 )
            return v3;
          *v3 = a3;
          return v3 + 1;
        }
      }
    }
    else
    {
      if ( (unsigned int)result < a2 )
        *result++ = HIBYTE(a3) | 0xC0;
      if ( (unsigned int)result < a2 )
        *result++ = BYTE2(a3);
      if ( (int)(a2 - (_DWORD)result) >= 0 )
      {
        if ( (unsigned int)result < a2 )
          *result++ = BYTE1(a3);
        if ( (unsigned int)result < a2 )
          goto LABEL_19;
        return result;
      }
    }
LABEL_31:
    if ( !under_debugger )
      interr(1225);
    __debugbreak();
  }
  if ( (unsigned int)result < a2 )
    *result++ = BYTE1(a3) | 0x80;
  if ( (unsigned int)result < a2 )
    goto LABEL_19;
  return result;
}
// E0550: using guessed type char under_debugger;
