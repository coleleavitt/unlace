/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: pack_dw
// Address: 0x000000010006D9A0

//----- (000000010006D9A0) ----------------------------------------------------
_BYTE *__fastcall pack_dw(_BYTE *result, unsigned __int64 a2, unsigned int a3)
{
  int v3; // w8
  _BYTE *v4; // x0
  unsigned __int64 v5; // x1
  __int64 v6; // x2

  if ( (__int64)(a2 - (_QWORD)result) >= 0 )
  {
    if ( a3 <= 0x7F )
      goto LABEL_11;
    if ( (a3 & 0xC000) == 0 )
    {
      if ( (unsigned __int64)result >= a2 )
        goto LABEL_11;
      v3 = (a3 >> 8) | 0x80;
      goto LABEL_10;
    }
    if ( (unsigned __int64)result >= a2 || (*result = -1, ++result, (__int64)(a2 - (_QWORD)result) >= 0) )
    {
      if ( (unsigned __int64)result >= a2 )
        goto LABEL_11;
      v3 = a3 >> 8;
LABEL_10:
      *result++ = v3;
LABEL_11:
      if ( (unsigned __int64)result < a2 )
        *result++ = a3;
      return result;
    }
  }
  if ( under_debugger == 1 )
    __break(1u);
  interr(1225);
  return pack_dq(v4, v5, v6);
}
// 10006DA2D: variable 'v4' is possibly undefined
// 10006DA2D: variable 'v5' is possibly undefined
// 10006DA2D: variable 'v6' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
