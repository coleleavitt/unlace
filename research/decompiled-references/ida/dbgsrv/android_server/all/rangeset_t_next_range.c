/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_next_range
// Address: 0x00000000000C5474

//----- (00000000000C5474) ----------------------------------------------------
__int64 __fastcall rangeset_t_next_range(__int64 **a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // x8
  __int64 *v4; // x8
  unsigned __int64 v5; // x11
  __int64 *v6; // x10
  unsigned __int64 v7; // x12
  unsigned __int64 *v8; // x13
  __int64 *v9; // x13
  unsigned __int64 v10; // t1
  __int64 v11; // x8

  v2 = (unsigned __int64 *)a1[3];
  if ( v2 && *v2 <= a2 && v2[1] > a2 )
  {
    if ( v2 == (unsigned __int64 *)&(*a1)[2 * (_QWORD)a1[1] - 2] )
    {
      return -1;
    }
    else
    {
      a1[3] = (__int64 *)(v2 + 2);
      return v2[2];
    }
  }
  else
  {
    v4 = a1[1];
    if ( 16LL * (_QWORD)v4 )
    {
      v5 = (16 * (__int64)v4) >> 4;
      v6 = *a1;
      do
      {
        v7 = v5 >> 1;
        v8 = (unsigned __int64 *)&v6[2 * (v5 >> 1)];
        v10 = *v8;
        v9 = (__int64 *)(v8 + 2);
        v5 += ~(v5 >> 1);
        if ( v10 <= a2 )
          v6 = v9;
        else
          v5 = v7;
      }
      while ( v5 );
    }
    else
    {
      v6 = *a1;
    }
    if ( v6 == &(*a1)[2 * (_QWORD)v4] )
    {
      return -1;
    }
    else
    {
      v11 = *v6;
      a1[3] = v6;
      return v11;
    }
  }
}
