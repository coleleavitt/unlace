/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: pack_dw
// Address: 0x000000010007B1D0

//----- (000000010007B1D0) ----------------------------------------------------
_BYTE *__fastcall pack_dw(_BYTE *a1, unsigned __int64 a2, unsigned __int16 a3)
{
  __int64 v4; // rdx

  if ( (__int64)(a2 - (_QWORD)a1) >= 0 )
  {
    if ( a3 <= 0x7Fu )
      goto LABEL_11;
    if ( a3 <= 0x3FFFu )
    {
      if ( (unsigned __int64)a1 < a2 )
      {
        *a1 = HIBYTE(a3) | 0x80;
LABEL_10:
        ++a1;
        goto LABEL_11;
      }
      goto LABEL_11;
    }
    if ( (unsigned __int64)a1 >= a2 || (*a1 = -1, ++a1, (__int64)(a2 - (_QWORD)a1) >= 0) )
    {
      if ( (unsigned __int64)a1 < a2 )
      {
        *a1 = HIBYTE(a3);
        goto LABEL_10;
      }
LABEL_11:
      if ( (unsigned __int64)a1 < a2 )
        *a1++ = a3;
      return a1;
    }
  }
  if ( under_debugger == 1 )
    BUG();
  interr(0x4C9u);
  return pack_dq((_BYTE *)0x4C9, a2, v4);
}
// 10007B23B: variable 'v4' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
