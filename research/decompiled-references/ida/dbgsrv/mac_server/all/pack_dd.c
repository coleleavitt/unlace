/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: pack_dd
// Address: 0x000000010007B0D0

//----- (000000010007B0D0) ----------------------------------------------------
_BYTE *__fastcall pack_dd(_BYTE *a1, unsigned __int64 a2, unsigned int a3)
{
  bool v4; // cc
  _BYTE *v5; // rax
  bool v6; // cc
  unsigned __int16 v7; // dx

  if ( (__int64)(a2 - (_QWORD)a1) < 0 )
    goto LABEL_28;
  if ( a3 <= 0x7F )
    goto LABEL_3;
  if ( a3 <= 0x3FFF )
  {
    if ( (unsigned __int64)a1 < a2 )
      *a1++ = BYTE1(a3) | 0x80;
    goto LABEL_3;
  }
  if ( a3 > 0x1FFFFFFF )
  {
    v5 = a1 + 1;
    *a1 = -1;
    if ( (__int64)(a2 - (_QWORD)(a1 + 1)) < 0 )
      goto LABEL_28;
    if ( a2 > (unsigned __int64)(a1 + 1) )
    {
      a1[1] = HIBYTE(a3);
      v5 = a1 + 2;
      if ( (unsigned __int64)(a1 + 2) >= a2 )
      {
LABEL_16:
        v6 = a2 <= (unsigned __int64)v5;
        if ( (__int64)(a2 - (_QWORD)v5) < 0 )
          goto LABEL_28;
        goto LABEL_24;
      }
    }
    else if ( (unsigned __int64)v5 >= a2 )
    {
      goto LABEL_16;
    }
    *v5++ = BYTE2(a3);
    v6 = a2 <= (unsigned __int64)v5;
    if ( (__int64)(a2 - (_QWORD)v5) < 0 )
      goto LABEL_28;
LABEL_24:
    if ( !v6 )
      *v5++ = BYTE1(a3);
    a1 = v5;
    if ( (unsigned __int64)v5 >= a2 )
      return a1;
    goto LABEL_4;
  }
  if ( (unsigned __int64)a1 >= a2 || (*a1 = HIBYTE(a3) | 0xC0, ++a1, (unsigned __int64)a1 >= a2) )
  {
    v4 = a2 <= (unsigned __int64)a1;
    if ( (__int64)(a2 - (_QWORD)a1) >= 0 )
      goto LABEL_20;
  }
  else
  {
    *a1++ = BYTE2(a3);
    v4 = a2 <= (unsigned __int64)a1;
    if ( (__int64)(a2 - (_QWORD)a1) >= 0 )
    {
LABEL_20:
      if ( !v4 )
        *a1++ = BYTE1(a3);
LABEL_3:
      if ( (unsigned __int64)a1 >= a2 )
        return a1;
LABEL_4:
      *a1++ = a3;
      return a1;
    }
  }
LABEL_28:
  if ( under_debugger == 1 )
    BUG();
  interr(0x4C9u);
  return pack_dw((_BYTE *)0x4C9, a2, v7);
}
// 10007B1C6: variable 'v7' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
