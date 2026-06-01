_BYTE *__fastcall pack_dw(_BYTE *a1, unsigned __int64 a2, unsigned __int16 a3)
{
  _BYTE *result; // rax
  __int16 v4; // dx

  if ( (__int64)(a2 - (_QWORD)a1) < 0 )
  {
    if ( !under_debugger )
      interr(1225);
    BUG();
  }
  if ( a3 > 0x7Fu )
  {
    if ( a3 <= 0x3FFFu )
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
    else if ( (unsigned __int64)a1 >= a2 )
    {
      return a1;
    }
    else
    {
      result = a1 + 1;
      *a1 = -1;
      if ( (__int64)(a2 - (_QWORD)(a1 + 1)) < 0 )
        sub_818450();
      if ( (unsigned __int64)result < a2 )
      {
        result = a1 + 2;
        a1[1] = HIBYTE(a3);
        if ( (unsigned __int64)(a1 + 2) < a2 )
        {
          a1[2] = a3;
          return a1 + 3;
        }
      }
    }
  }
  else
  {
    result = a1;
    if ( (unsigned __int64)a1 < a2 )
    {
      *a1 = a3;
      return a1 + 1;
    }
  }
  return result;
}

