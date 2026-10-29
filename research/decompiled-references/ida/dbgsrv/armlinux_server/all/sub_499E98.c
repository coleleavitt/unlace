/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_499E98
// Address: 0x0000000000499E98

//----- (0000000000499E98) ----------------------------------------------------
_QWORD *__fastcall sub_499E98(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // x2
  _QWORD *result; // x0
  __int64 i; // x4
  __int64 v5; // x2
  unsigned __int64 *v6; // x5
  __int64 v7; // x3

  v2 = a1[1];
  result = (_QWORD *)*a1;
  for ( i = (16 * v2) >> 4; i > 0; i = v5 - 1 - v7 )
  {
    v5 = i >> 1;
    v6 = &result[2 * (i >> 1)];
    if ( a2 < *v6 )
    {
      while ( 1 )
      {
        v7 = v5 >> 1;
        if ( !v5 )
          return result;
        v6 = &result[2 * v7];
        if ( a2 >= *v6 )
          goto LABEL_9;
        v5 >>= 1;
      }
    }
    v7 = i >> 1;
    v5 = i;
LABEL_9:
    result = v6 + 2;
  }
  return result;
}
