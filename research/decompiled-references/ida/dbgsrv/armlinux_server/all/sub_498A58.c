/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_498A58
// Address: 0x0000000000498A58

//----- (0000000000498A58) ----------------------------------------------------
__int64 __fastcall sub_498A58(__int64 a1, __int64 a2)
{
  __int64 v2; // x2
  __int64 v3; // x5
  unsigned int v4; // w3
  unsigned __int64 *v5; // x0
  _QWORD *v6; // x1
  unsigned __int64 *v7; // x2
  _QWORD *v8; // x5
  unsigned __int64 v9; // x4
  unsigned __int64 v10; // x3

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a2 + 8);
    v4 = 0;
    if ( v3 )
    {
      v5 = *(unsigned __int64 **)a1;
      v6 = *(_QWORD **)a2;
      v7 = &v5[2 * v2];
      v8 = &v6[2 * v3];
      while ( *v6 >= v5[1] )
      {
        do
        {
          v5 += 2;
          if ( v5 == v7 )
            return 0;
        }
        while ( *v6 >= v5[1] );
        v9 = *v5;
        v10 = v6[1];
LABEL_8:
        while ( v10 <= v9 )
        {
          v6 += 2;
          if ( v6 == v8 )
            return 0;
          v10 = v6[1];
        }
      }
      v9 = *v5;
      v10 = v6[1];
      if ( *v5 >= v10 )
        goto LABEL_8;
      return 1;
    }
  }
  else
  {
    return 0;
  }
  return v4;
}
