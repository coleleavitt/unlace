/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: pack_dd
// Address: 0x000000010006D864

//----- (000000010006D864) ----------------------------------------------------
_BYTE *__fastcall pack_dd(_BYTE *result, unsigned __int64 a2, unsigned int a3)
{
  _BYTE *v3; // x8
  _BYTE *v4; // x0
  unsigned __int64 v5; // x1
  unsigned int v6; // w2

  if ( (__int64)(a2 - (_QWORD)result) < 0 )
    goto LABEL_27;
  if ( a3 <= 0x7F )
    goto LABEL_3;
  if ( !(a3 >> 14) )
  {
    if ( (unsigned __int64)result < a2 )
      *result++ = BYTE1(a3) | 0x80;
    goto LABEL_3;
  }
  if ( !(a3 >> 29) )
  {
    if ( (unsigned __int64)result >= a2 || (*result = HIBYTE(a3) | 0xC0, ++result, (unsigned __int64)result >= a2) )
    {
      if ( (__int64)(a2 - (_QWORD)result) >= 0 )
        goto LABEL_19;
    }
    else
    {
      *result++ = BYTE2(a3);
      if ( (__int64)(a2 - (_QWORD)result) >= 0 )
      {
LABEL_19:
        if ( (unsigned __int64)result < a2 )
          *result++ = BYTE1(a3);
LABEL_3:
        if ( (unsigned __int64)result >= a2 )
          return result;
        goto LABEL_4;
      }
    }
    goto LABEL_27;
  }
  *result = -1;
  v3 = result + 1;
  if ( (__int64)(a2 - (_QWORD)(result + 1)) < 0 )
    goto LABEL_27;
  if ( (unsigned __int64)v3 >= a2 || (v3 = result + 2, result[1] = HIBYTE(a3), (unsigned __int64)(result + 2) >= a2) )
  {
    if ( (__int64)(a2 - (_QWORD)v3) >= 0 )
      goto LABEL_23;
LABEL_27:
    if ( under_debugger == 1 )
      __break(1u);
    interr(1225);
    return pack_dw(v4, v5, v6);
  }
  *v3 = BYTE2(a3);
  v3 = result + 3;
  if ( (__int64)(a2 - (_QWORD)(result + 3)) < 0 )
    goto LABEL_27;
LABEL_23:
  if ( (unsigned __int64)v3 < a2 )
    *v3++ = BYTE1(a3);
  result = v3;
  if ( (unsigned __int64)v3 < a2 )
LABEL_4:
    *result++ = a3;
  return result;
}
// 10006D99D: variable 'v4' is possibly undefined
// 10006D99D: variable 'v5' is possibly undefined
// 10006D99D: variable 'v6' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
