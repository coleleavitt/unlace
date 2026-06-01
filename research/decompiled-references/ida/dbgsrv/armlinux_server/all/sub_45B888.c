/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45B888
// Address: 0x000000000045B888

//----- (000000000045B888) ----------------------------------------------------
__int64 __fastcall sub_45B888(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // w3
  unsigned int v4; // w2
  __int64 v5; // x2
  __int64 v6; // x0
  int v7; // w4
  __int64 v8; // x5
  __int64 v10; // x0

  if ( !a3 )
    return 1;
  v3 = *(_DWORD *)(a3 + 4);
  v4 = 1;
  if ( (v3 & 1) != 0 )
    return v4;
  v5 = *(_QWORD *)(a1 + 352);
  v6 = a1 + 344;
  if ( v5 )
  {
    v7 = *(_DWORD *)(a2 + 4);
    v8 = v6;
    do
    {
      while ( *(_DWORD *)(v5 + 32) >= v7 )
      {
        v8 = v5;
        v5 = *(_QWORD *)(v5 + 16);
        if ( !v5 )
          goto LABEL_7;
      }
      v5 = *(_QWORD *)(v5 + 24);
    }
    while ( v5 );
LABEL_7:
    if ( v6 != v8 )
    {
      v4 = 0;
      if ( v7 >= *(_DWORD *)(v8 + 32) )
      {
        v10 = *(_QWORD *)(v8 + 48);
        if ( v10 )
          return *(_QWORD *)(*(_QWORD *)(v8 + 40) + 48 * v10 - 16) == *(_QWORD *)(a2 + 8);
      }
      return v4;
    }
  }
  return 0;
}
