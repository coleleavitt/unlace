/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40B588
// Address: 0x000000000040B588

//----- (000000000040B588) ----------------------------------------------------
__int64 __fastcall sub_40B588(_QWORD *a1, char *s2)
{
  int v4; // w2
  __int64 v5; // x23
  __int64 v6; // x19
  unsigned __int64 v7; // x20
  __int64 result; // x0
  unsigned __int64 v9; // x20
  __int64 v10; // x1
  int v11; // w19
  __int64 v12; // x23
  __int64 v13; // x24
  int v14; // w0

  if ( !s2 )
    return -1;
  v4 = a1[216] - 1;
  if ( v4 < 0 )
  {
LABEL_8:
    v9 = a1[222];
    result = -1;
    if ( v9 )
    {
      v10 = 0;
      v11 = 0;
      v12 = a1[224];
      do
      {
        ++v11;
        v13 = 8 * v10;
        v14 = strcmp(*(const char **)(v12 + 8 * v10), s2);
        v10 = v11;
        if ( !v14 )
          return *(_QWORD *)(a1[221] + v13);
      }
      while ( v9 > v11 );
      return -1;
    }
  }
  else
  {
    v5 = a1[218];
    v6 = 8LL * v4;
    v7 = 8 * (v4 - (unsigned __int64)(unsigned int)v4) - 8;
    while ( strcmp(*(const char **)(v5 + v6), s2) )
    {
      v6 -= 8;
      if ( v6 == v7 )
        goto LABEL_8;
    }
    return *(_QWORD *)(a1[215] + v6);
  }
  return result;
}
