/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_contains
// Address: 0x00000000000C47FC

//----- (00000000000C47FC) ----------------------------------------------------
__int64 __fastcall rangeset_t_contains(__int64 *a1, __int64 a2)
{
  __int64 v2; // x8
  unsigned __int64 *v3; // x9
  unsigned __int64 *v4; // x10
  unsigned __int64 v5; // x12
  unsigned __int64 v6; // x13
  unsigned __int64 v7; // x14
  __int64 v8; // x8
  __int64 v9; // x15
  unsigned __int64 v10; // x17
  unsigned __int64 v11; // x16
  unsigned __int64 v12; // x14
  unsigned int v13; // w8

  v2 = 16LL * *(_QWORD *)(a2 + 8);
  if ( v2 )
  {
    v3 = *(unsigned __int64 **)a2;
    v4 = (unsigned __int64 *)(*(_QWORD *)a2 + v2);
    while ( 1 )
    {
      v6 = *v3;
      v5 = v3[1];
      if ( v5 > *v3 )
      {
        v7 = a1[1];
        if ( !v7 )
          return 0;
        v8 = *a1;
        v9 = 0;
        v10 = 0;
        while ( 1 )
        {
          v11 = *(_QWORD *)(v8 + (v9 >> 28) + 8);
          if ( v11 >= v6 )
            break;
          ++v10;
          v9 += 0x100000000LL;
          if ( v10 >= v7 )
            return 0;
        }
        v12 = *(_QWORD *)(v8 + 16 * (v9 >> 32));
        v13 = 0;
        if ( v11 == v12 || v6 < v12 )
          return v13;
        if ( v5 - 1 > v11 - 1 )
          break;
      }
      v3 += 2;
      if ( v3 == v4 )
        return 1;
    }
    return 0;
  }
  else
  {
    return 1;
  }
}
