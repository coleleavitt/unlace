/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_next_addr
// Address: 0x00000000000C5308

//----- (00000000000C5308) ----------------------------------------------------
unsigned __int64 __fastcall rangeset_t_next_addr(__int64 *a1, __int64 a2)
{
  unsigned __int64 *v2; // x9
  unsigned __int64 result; // x0
  __int64 v5; // x9
  unsigned __int64 v6; // x12
  __int64 v7; // x11
  unsigned __int64 v8; // x13
  __int64 v9; // x14
  unsigned __int64 v10; // x15
  __int64 v11; // x14

  if ( a2 == -1 )
    return -1;
  v2 = (unsigned __int64 *)a1[3];
  result = a2 + 1;
  if ( !v2 || *v2 > result || v2[1] <= result )
  {
    v5 = a1[1];
    if ( 16 * v5 )
    {
      v6 = (16 * v5) >> 4;
      v7 = *a1;
      do
      {
        v8 = v6 >> 1;
        v9 = v7 + 16 * (v6 >> 1);
        v10 = *(_QWORD *)(v9 + 8);
        v11 = v9 + 16;
        v6 += ~(v6 >> 1);
        if ( v10 <= result )
          v7 = v11;
        else
          v6 = v8;
      }
      while ( v6 );
    }
    else
    {
      v7 = *a1;
    }
    if ( v7 == *a1 + 16 * v5 )
    {
      return -1;
    }
    else
    {
      a1[3] = v7;
      if ( result < *(_QWORD *)v7 )
        return *(_QWORD *)v7;
    }
  }
  return result;
}
