/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_499E30
// Address: 0x0000000000499E30

//----- (0000000000499E30) ----------------------------------------------------
__int64 __fastcall sub_499E30(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // x2
  __int64 result; // x0
  __int64 i; // x5
  __int64 v5; // x2
  __int64 v6; // x4
  __int64 v7; // x3

  v2 = a1[1];
  result = *a1;
  for ( i = (16 * v2) >> 4; i > 0; i = v5 - 1 - v7 )
  {
    v5 = i >> 1;
    v6 = result + 16 * (i >> 1);
    if ( a2 < *(_QWORD *)(v6 + 8) )
    {
      while ( 1 )
      {
        v7 = v5 >> 1;
        if ( !v5 )
          return result;
        v6 = result + 16 * v7;
        if ( a2 >= *(_QWORD *)(v6 + 8) )
          goto LABEL_9;
        v5 >>= 1;
      }
    }
    v7 = i >> 1;
    v5 = i;
LABEL_9:
    result = v6 + 16;
  }
  return result;
}
