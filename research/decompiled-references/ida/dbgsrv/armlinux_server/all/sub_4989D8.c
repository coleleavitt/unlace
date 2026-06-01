/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4989D8
// Address: 0x00000000004989D8

//----- (00000000004989D8) ----------------------------------------------------
__int64 __fastcall sub_4989D8(__int64 a1, unsigned __int64 *a2, char a3)
{
  unsigned __int64 *v3; // x3
  __int64 v4; // x0
  unsigned __int64 v5; // x5
  unsigned __int64 v6; // x4
  unsigned __int64 v7; // x1
  __int64 result; // x0
  unsigned __int64 v9; // x3

  v3 = *(unsigned __int64 **)a1;
  v4 = *(_QWORD *)a1 + 16LL * *(_QWORD *)(a1 + 8);
  if ( v3 == (unsigned __int64 *)v4 )
    return 0;
  v5 = *a2;
  v6 = v3[1];
  if ( v6 <= *a2 )
  {
    do
    {
      v3 += 2;
      if ( v3 == (unsigned __int64 *)v4 )
        return 0;
      v6 = v3[1];
    }
    while ( v6 <= v5 );
  }
  v7 = a2[1];
  result = 0;
  v9 = *v3;
  if ( v9 < v7 )
  {
    result = 1;
    if ( a3 )
      return (v9 <= v5) & (unsigned __int8)(v7 <= v6);
  }
  return result;
}
