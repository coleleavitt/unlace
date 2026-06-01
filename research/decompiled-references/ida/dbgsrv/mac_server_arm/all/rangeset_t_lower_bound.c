/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_lower_bound
// Address: 0x0000000100073404

//----- (0000000100073404) ----------------------------------------------------
__int64 __fastcall rangeset_t_lower_bound(__int64 *a1, unsigned __int64 a2)
{
  __int64 result; // x0
  __int64 v4; // x8
  unsigned __int64 v5; // x8
  unsigned __int64 v6; // x9
  __int64 v7; // x10
  unsigned __int64 v8; // x11
  __int64 v9; // x10

  result = *a1;
  v4 = a1[1];
  if ( (v4 & 0xFFFFFFFFFFFFFFFLL) != 0 )
  {
    v5 = (16 * v4) >> 4;
    do
    {
      v6 = v5 >> 1;
      v7 = result + 16 * (v5 >> 1);
      v8 = *(_QWORD *)(v7 + 8);
      v9 = v7 + 16;
      v5 += ~(v5 >> 1);
      if ( v8 > a2 )
        v5 = v6;
      else
        result = v9;
    }
    while ( v5 );
  }
  return result;
}
