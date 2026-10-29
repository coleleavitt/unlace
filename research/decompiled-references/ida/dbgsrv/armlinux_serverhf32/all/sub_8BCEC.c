/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8BCEC
// Address: 0x0008BCEC

//----- (0008BCEC) --------------------------------------------------------
_BYTE *__fastcall sub_8BCEC(_DWORD *a1, size_t n, int c, int a4)
{
  _BYTE *result; // r0
  size_t v7; // r3
  size_t v8; // r3
  size_t v9[2]; // [sp+4h] [bp-8h] BYREF

  v9[0] = n;
  if ( n > 0xF )
  {
    result = sub_8BC90((int)a1, v9, 0, a4);
    v7 = v9[0];
    *a1 = result;
    a1[2] = v7;
  }
  else
  {
    result = (_BYTE *)*a1;
    v7 = n;
  }
  if ( !v7 )
    goto LABEL_6;
  if ( v7 != 1 )
  {
    memset(result, c, v7);
    v7 = v9[0];
    result = (_BYTE *)*a1;
LABEL_6:
    a1[1] = v7;
    result[v7] = 0;
    return result;
  }
  *result = c;
  v8 = v9[0];
  result = (_BYTE *)*a1;
  a1[1] = v9[0];
  result[v8] = 0;
  return result;
}
