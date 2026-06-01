/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_prev_addr
// Address: 0x00000000000C53AC

//----- (00000000000C53AC) ----------------------------------------------------
unsigned __int64 __fastcall rangeset_t_prev_addr(unsigned __int64 **a1, __int64 a2)
{
  unsigned __int64 *v2; // x9
  unsigned __int64 result; // x0
  unsigned __int64 *v5; // x10
  unsigned __int64 *v6; // x11
  unsigned __int64 v7; // x12
  unsigned __int64 *v8; // x9
  unsigned __int64 v9; // x13
  unsigned __int64 *v10; // x14
  unsigned __int64 v11; // x15
  unsigned __int64 *v12; // x14
  unsigned __int64 v13; // x10

  if ( !a2 )
    return -1;
  v2 = a1[3];
  result = a2 - 1;
  if ( !v2 || *v2 > result || v2[1] <= result )
  {
    v5 = *a1;
    v6 = a1[1];
    if ( 16LL * (_QWORD)v6 )
    {
      v7 = (16 * (__int64)v6) >> 4;
      v8 = *a1;
      do
      {
        v9 = v7 >> 1;
        v10 = &v8[2 * (v7 >> 1)];
        v11 = v10[1];
        v12 = v10 + 2;
        v7 += ~(v7 >> 1);
        if ( v11 <= result )
          v8 = v12;
        else
          v7 = v9;
      }
      while ( v7 );
    }
    else
    {
      v8 = *a1;
    }
    if ( v8 == &v5[2 * (_QWORD)v6] || *v8 > result || v8[1] <= result )
    {
      if ( v8 == v5 )
        return -1;
      v13 = *(v8 - 1);
      v8 -= 2;
      if ( result >= v13 )
        result = v13 - 1;
    }
    a1[3] = v8;
  }
  return result;
}
