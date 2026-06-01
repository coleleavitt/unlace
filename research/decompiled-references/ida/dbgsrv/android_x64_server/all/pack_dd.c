/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: pack_dd
// Address: 0x00000000000BFFF0

//----- (00000000000BFFF0) ----------------------------------------------------
_BYTE *__fastcall pack_dd(_BYTE *a1, unsigned __int64 a2, unsigned int a3)
{
  _BYTE *result; // rax
  _BYTE *v4; // rdi

  if ( (__int64)(a2 - (_QWORD)a1) < 0 )
  {
LABEL_28:
    if ( !(_BYTE)under_debugger )
      interr(1225);
    BUG();
  }
  if ( a3 <= 0x7F )
  {
    if ( (unsigned __int64)a1 >= a2 )
      return a1;
    goto LABEL_16;
  }
  if ( a3 <= 0x3FFF )
  {
    if ( (unsigned __int64)a1 < a2 )
      *a1++ = BYTE1(a3) | 0x80;
    if ( (unsigned __int64)a1 >= a2 )
      return a1;
    goto LABEL_16;
  }
  if ( a3 > 0x1FFFFFFF )
  {
    result = a1 + 1;
    *a1 = -1;
    if ( (__int64)(a2 - (_QWORD)(a1 + 1)) < 0 )
      goto LABEL_28;
    if ( (unsigned __int64)result >= a2 || (a1[1] = HIBYTE(a3), v4 = a1 + 2, result = v4, (unsigned __int64)v4 >= a2) )
    {
      if ( (__int64)(a2 - (_QWORD)result) < 0 )
        goto LABEL_28;
    }
    else
    {
      *v4 = BYTE2(a3);
      result = v4 + 1;
      if ( (__int64)(a2 - (_QWORD)(v4 + 1)) < 0 )
        goto LABEL_28;
    }
    if ( (unsigned __int64)result < a2 )
    {
      *result++ = BYTE1(a3);
      if ( (unsigned __int64)result < a2 )
        *result++ = a3;
    }
  }
  else
  {
    if ( (unsigned __int64)a1 >= a2 || (*a1 = HIBYTE(a3) | 0xC0, ++a1, (unsigned __int64)a1 >= a2) )
    {
      if ( (__int64)(a2 - (_QWORD)a1) < 0 )
        goto LABEL_28;
    }
    else
    {
      *a1++ = BYTE2(a3);
      if ( (__int64)(a2 - (_QWORD)a1) < 0 )
        goto LABEL_28;
    }
    if ( (unsigned __int64)a1 < a2 )
      *a1++ = BYTE1(a3);
    if ( (unsigned __int64)a1 < a2 )
    {
LABEL_16:
      *a1 = a3;
      return a1 + 1;
    }
    return a1;
  }
  return result;
}
// 158B40: using guessed type __int64 under_debugger;
