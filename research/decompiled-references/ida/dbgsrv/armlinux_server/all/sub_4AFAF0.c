/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AFAF0
// Address: 0x00000000004AFAF0

//----- (00000000004AFAF0) ----------------------------------------------------
_BYTE *__fastcall sub_4AFAF0(_QWORD *a1, size_t n, unsigned __int8 a3)
{
  int v4; // w20
  _BYTE *result; // x0
  unsigned __int64 v6; // x1
  size_t v7; // [xsp+28h] [xbp+28h] BYREF

  v4 = a3;
  v7 = n;
  if ( n > 0xF )
  {
    result = sub_4AFA78((__int64)a1, &v7, 0);
    *a1 = result;
    n = v7;
    a1[2] = v7;
  }
  else
  {
    result = (_BYTE *)*a1;
  }
  if ( !n )
    goto LABEL_6;
  if ( n != 1 )
  {
    memset(result, v4, n);
    result = (_BYTE *)*a1;
    n = v7;
LABEL_6:
    a1[1] = n;
    result[n] = 0;
    return result;
  }
  *result = v4;
  v6 = v7;
  result = (_BYTE *)*a1;
  a1[1] = v7;
  result[v6] = 0;
  return result;
}
