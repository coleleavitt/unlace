/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48E2D8
// Address: 0x000000000048E2D8

//----- (000000000048E2D8) ----------------------------------------------------
_BYTE *__fastcall sub_48E2D8(_BYTE *result, unsigned __int64 a2, unsigned int a3)
{
  _BYTE *v3; // x3
  __int16 v4; // w2

  if ( ((a2 - (_QWORD)result) & 0x8000000000000000LL) != 0 )
    goto LABEL_19;
  if ( a3 <= 0x7F )
  {
    if ( a2 > (unsigned __int64)result )
      *result++ = a3;
  }
  else
  {
    if ( a3 > 0x3FFF )
    {
      if ( a3 <= 0x1FFFFFFF )
      {
        if ( a2 <= (unsigned __int64)result )
          return result;
        v3 = result + 1;
        *result = (unsigned __int16)(HIWORD(a3) | 0xC000) >> 8;
        if ( a2 > (unsigned __int64)(result + 1) )
        {
          result[1] = BYTE2(a3);
          v3 = result + 2;
          if ( ((a2 - (_QWORD)(result + 2)) & 0x8000000000000000LL) == 0 )
          {
            if ( a2 > (unsigned __int64)v3 )
            {
              result[2] = BYTE1(a3);
              v3 = result + 3;
              if ( a2 > (unsigned __int64)(result + 3) )
              {
                result[3] = a3;
                result += 4;
                return result;
              }
            }
            return v3;
          }
          goto LABEL_19;
        }
      }
      else
      {
        *result = -1;
        v3 = result + 1;
        if ( ((a2 - (_QWORD)(result + 1)) & 0x8000000000000000LL) != 0 )
          goto LABEL_19;
        if ( a2 <= (unsigned __int64)v3 )
          return v3;
        result[1] = HIBYTE(a3);
        v3 = result + 2;
        if ( a2 > (unsigned __int64)(result + 2) )
        {
          result[2] = BYTE2(a3);
          v3 = result + 3;
          if ( ((a2 - (_QWORD)(result + 3)) & 0x8000000000000000LL) == 0 )
          {
            if ( a2 > (unsigned __int64)v3 )
            {
              result[3] = BYTE1(a3);
              v3 = result + 4;
              if ( a2 > (unsigned __int64)(result + 4) )
              {
                result[4] = a3;
                result += 5;
                return result;
              }
            }
            return v3;
          }
LABEL_19:
          if ( under_debugger )
            __break(0x3E8u);
          sub_492270(1225);
        }
      }
      if ( ((a2 - (_QWORD)v3) & 0x8000000000000000LL) != 0 )
        goto LABEL_19;
      return v3;
    }
    if ( a2 > (unsigned __int64)result )
    {
      v3 = result + 1;
      v4 = a3 | 0x8000;
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
