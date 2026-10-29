/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75FB0
// Address: 0x00075FB0

//----- (00075FB0) --------------------------------------------------------
_BYTE *__fastcall sub_75FB0(_BYTE *result, unsigned int a2, unsigned int a3)
{
  _BYTE *v3; // r4
  __int16 v4; // r2

  if ( (int)(a2 - (_DWORD)result) < 0 )
    goto LABEL_19;
  if ( a3 <= 0x7F )
  {
    if ( a2 > (unsigned int)result )
      *result++ = a3;
  }
  else if ( a3 < 0x4000 )
  {
    if ( a2 > (unsigned int)result )
    {
      v4 = ~(~(a3 << 17) >> 17);
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
  else
  {
    if ( a3 >= 0x20000000 )
    {
      v3 = result + 1;
      *result = -1;
      if ( (int)(a2 - (_DWORD)(result + 1)) >= 0 )
      {
        if ( a2 <= (unsigned int)v3 )
          return v3;
        result[1] = HIBYTE(a3);
        if ( a2 <= (unsigned int)(result + 2) )
        {
          if ( (int)(a2 - (_DWORD)(result + 2)) >= 0 )
          {
            result += 2;
            return result;
          }
        }
        else
        {
          v3 = result + 3;
          result[2] = BYTE2(a3);
          if ( (int)(a2 - (_DWORD)(result + 3)) >= 0 )
          {
            if ( a2 > (unsigned int)v3 )
            {
              v3 = result + 4;
              result[3] = BYTE1(a3);
              if ( a2 > (unsigned int)(result + 4) )
              {
                result[4] = a3;
                result += 5;
                return result;
              }
            }
            return v3;
          }
        }
      }
      goto LABEL_19;
    }
    if ( a2 > (unsigned int)result )
    {
      v3 = result + 1;
      *result = (unsigned __int16)(HIWORD(a3) | 0xC000) >> 8;
      if ( a2 > (unsigned int)(result + 1) )
      {
        v3 = result + 2;
        result[1] = BYTE2(a3);
        if ( (int)(a2 - (_DWORD)(result + 2)) >= 0 )
        {
          if ( a2 > (unsigned int)v3 )
          {
            v3 = result + 3;
            result[2] = BYTE1(a3);
            if ( a2 > (unsigned int)(result + 3) )
            {
              result[3] = a3;
              result += 4;
              return result;
            }
          }
          return v3;
        }
      }
      else if ( (int)(a2 - (_DWORD)v3) >= 0 )
      {
        return v3;
      }
LABEL_19:
      if ( under_debugger )
        __und(0xFFu);
      sub_78AFC(1225);
    }
  }
  return result;
}
// D5C00: using guessed type char under_debugger;
