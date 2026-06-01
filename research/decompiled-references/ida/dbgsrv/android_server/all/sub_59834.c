/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_59834
// Address: 0x0000000000059834

//----- (0000000000059834) ----------------------------------------------------
__int64 __fastcall sub_59834(__int64 a1, __int64 a2)
{
  __int64 v2; // x0
  __int64 v3; // x10
  __int64 v4; // t1
  unsigned int v5; // w9
  __int64 v6; // x8
  unsigned int v7; // w11
  bool v8; // cf
  _BOOL4 v9; // w11
  _QWORD *v11; // x11
  _QWORD *v12; // x8
  unsigned __int64 v13; // x9
  _QWORD *v14; // x12
  _QWORD *v15; // x10
  __int64 v16; // x12
  __int64 v17; // x13
  _QWORD *v18; // t1

  v4 = *(_QWORD *)(a1 + 16);
  v2 = a1 + 16;
  v3 = v4;
  if ( !v4 )
    return 1;
  v5 = *(_DWORD *)(a2 + 88);
  v6 = v2;
  do
  {
    v7 = *(_DWORD *)(v3 + 32);
    v8 = v7 >= v5;
    v9 = v7 < v5;
    if ( v8 )
      v6 = v3;
    v3 = *(_QWORD *)(v3 + 8LL * v9);
  }
  while ( v3 );
  if ( v6 == v2 )
    return 1;
  if ( v5 < *(_DWORD *)(v6 + 32) )
    return 1;
  v11 = *(_QWORD **)(v6 + 40);
  v12 = (_QWORD *)(v6 + 48);
  if ( v11 == v12 )
    return 1;
  v13 = *(_QWORD *)(a2 + 56);
  if ( v11[4] > v13 )
    return 1;
  do
  {
    v14 = (_QWORD *)v11[1];
    v15 = v11;
    if ( v14 )
    {
      do
      {
        v11 = v14;
        v14 = (_QWORD *)*v14;
      }
      while ( v14 );
    }
    else
    {
      v16 = (__int64)(v11 + 2);
      v11 = (_QWORD *)v11[2];
      if ( (_QWORD *)*v11 != v15 )
      {
        do
        {
          v17 = *(_QWORD *)v16;
          v18 = *(_QWORD **)(*(_QWORD *)v16 + 16LL);
          v16 = *(_QWORD *)v16 + 16LL;
          v11 = v18;
        }
        while ( *v18 != v17 );
      }
    }
  }
  while ( v11 != v12 && v11[4] <= v13 );
  return *((unsigned int *)v15 + 10);
}
