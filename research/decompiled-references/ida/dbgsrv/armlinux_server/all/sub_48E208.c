/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48E208
// Address: 0x000000000048E208

//----- (000000000048E208) ----------------------------------------------------
_BYTE *__fastcall sub_48E208(_BYTE *result, unsigned __int64 a2, unsigned __int16 a3)
{
  _BYTE *v3; // x3
  __int16 v4; // w2

  if ( ((a2 - (_QWORD)result) & 0x8000000000000000LL) != 0 )
    goto LABEL_13;
  if ( a3 <= 0x7Fu )
  {
    if ( a2 > (unsigned __int64)result )
      *result++ = a3;
  }
  else
  {
    if ( a3 > 0x3FFFu )
    {
      if ( a2 <= (unsigned __int64)result )
        return result;
      *result = -1;
      v3 = result + 1;
      if ( ((a2 - (_QWORD)(result + 1)) & 0x8000000000000000LL) == 0 )
      {
        if ( a2 > (unsigned __int64)v3 )
        {
          result[1] = HIBYTE(a3);
          v3 = result + 2;
          if ( a2 > (unsigned __int64)(result + 2) )
          {
            result[2] = a3;
            result += 3;
            return result;
          }
        }
        return v3;
      }
LABEL_13:
      if ( under_debugger )
        __break(0x3E8u);
      sub_492270(1225);
    }
    if ( a2 > (unsigned __int64)result )
    {
      v4 = a3 | 0x8000;
      v3 = result + 1;
      *result = HIBYTE(v4);
      if ( a2 > (unsigned __int64)(result + 1) )
      {
        result[1] = v4;
        result += 2;
        return result;
      }
      return v3;
    }
  }
  return result;
}
// 52451C: using guessed type char under_debugger;
