/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_lower_bound
// Address: 0x00000000000C51E8

//----- (00000000000C51E8) ----------------------------------------------------
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
  v4 = 16 * a1[1];
  if ( v4 )
  {
    v5 = v4 >> 4;
    do
    {
      v6 = v5 >> 1;
      v7 = result + 16 * (v5 >> 1);
      v8 = *(_QWORD *)(v7 + 8);
      v9 = v7 + 16;
      v5 += ~(v5 >> 1);
      if ( v8 <= a2 )
        result = v9;
      else
        v5 = v6;
    }
    while ( v5 );
  }
  return result;
}
