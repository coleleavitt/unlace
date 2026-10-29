_BYTE *__fastcall sub_28E10(_BYTE *a1, unsigned __int64 a2, unsigned int a3)
{
  _BYTE *result; // rax
  __int16 v4; // dx

  if ( (__int64)(a2 - (_QWORD)a1) < 0 )
  {
    if ( !byte_7BCA0 )
      sub_2A3D0(1225, a2);
    BUG();
  }
  if ( a3 <= 0x7F )
  {
    result = a1;
    if ( (unsigned __int64)a1 < a2 )
    {
      *a1 = a3;
      return a1 + 1;
    }
    return result;
  }
  if ( a3 <= 0x3FFF )
  {
    result = a1;
    if ( (unsigned __int64)a1 < a2 )
    {
      v4 = a3 | 0x8000;
      result = a1 + 1;
      *a1 = HIBYTE(v4);
      if ( (unsigned __int64)(a1 + 1) < a2 )
      {
        a1[1] = v4;
        return a1 + 2;
      }
    }
  }
  else
  {
    if ( a3 > 0x1FFFFFFF )
    {
      result = a1 + 1;
      *a1 = -1;
      if ( (__int64)(a2 - (_QWORD)(a1 + 1)) < 0 )
        goto LABEL_28;
      if ( (unsigned __int64)result >= a2 )
        return result;
      result = a1 + 2;
      a1[1] = HIBYTE(a3);
      if ( (unsigned __int64)(a1 + 2) < a2 )
      {
        result = a1 + 3;
        a1[2] = BYTE2(a3);
        if ( (__int64)(a2 - (_QWORD)(a1 + 3)) >= 0 )
        {
          if ( (unsigned __int64)result < a2 )
          {
            result = a1 + 4;
            a1[3] = BYTE1(a3);
            if ( (unsigned __int64)(a1 + 4) < a2 )
            {
              a1[4] = a3;
              return a1 + 5;
            }
          }
          return result;
        }
LABEL_28:
        sub_28DF0((__int64)a1, a2);
      }
LABEL_27:
      if ( (__int64)(a2 - (_QWORD)result) >= 0 )
        return result;
      goto LABEL_28;
    }
    if ( (unsigned __int64)a1 >= a2 )
      return a1;
    result = a1 + 1;
    *a1 = (unsigned __int16)(HIWORD(a3) | 0xC000) >> 8;
    if ( (unsigned __int64)(a1 + 1) >= a2 )
      goto LABEL_27;
    result = a1 + 2;
    a1[1] = BYTE2(a3);
    if ( (__int64)(a2 - (_QWORD)(a1 + 2)) < 0 )
      goto LABEL_28;
    if ( (unsigned __int64)result < a2 )
    {
      result = a1 + 3;
      a1[2] = BYTE1(a3);
      if ( (unsigned __int64)(a1 + 3) < a2 )
      {
        a1[3] = a3;
        return a1 + 4;
      }
    }
  }
  return result;
}

