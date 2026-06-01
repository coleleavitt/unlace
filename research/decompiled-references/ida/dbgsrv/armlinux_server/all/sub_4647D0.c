/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4647D0
// Address: 0x00000000004647D0

//----- (00000000004647D0) ----------------------------------------------------
__int64 __fastcall sub_4647D0(__int64 a1, void *ptr)
{
  __int64 v2; // x19
  __int64 v3; // x2
  void *v7; // x0
  void *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x10
  __int64 v12; // x0
  int v13; // w3
  __int64 v14; // x8
  __int64 v15; // x6
  __int64 v16; // x4
  __int64 v17; // x0
  __int64 v18; // x1

  v2 = *(_QWORD *)(a1 + 232);
  v3 = v2 + 72LL * *(_QWORD *)(a1 + 240);
  if ( v2 == v3 )
    return 0;
  while ( *(void **)(v2 + 56) != ptr )
  {
    v2 += 72;
    if ( v2 == v3 )
      return 0;
  }
  v7 = *(void **)(v2 + 24);
  if ( v7 )
  {
    *(_QWORD *)(v2 + 32) = 0;
    j__free(v7);
  }
  v8 = *(void **)v2;
  if ( *(_QWORD *)v2 )
  {
    *(_QWORD *)(v2 + 8) = 0;
    j__free(v8);
  }
  v9 = *(_QWORD *)(a1 + 240);
  v10 = v2 + 72;
  v11 = *(_QWORD *)(a1 + 232) + 72 * v9;
  v12 = a1 + 232;
  if ( (__int64)(0x8E38E38E38E38E39LL * ((v11 - v2) >> 3) - 2) >= 0 )
  {
    do
    {
      v13 = *(_DWORD *)(v10 + 48);
      v14 = *(_QWORD *)(v10 + 8);
      *(_QWORD *)(v10 - 72) = *(_QWORD *)v10;
      *(_QWORD *)(v10 - 64) = v14;
      v15 = *(_QWORD *)(v10 + 24);
      *(_QWORD *)(v10 - 56) = *(_QWORD *)(v10 + 16);
      *(_QWORD *)(v10 - 48) = v15;
      v16 = *(_QWORD *)(v10 + 40);
      *(_QWORD *)(v10 - 40) = *(_QWORD *)(v10 + 32);
      *(_QWORD *)(v10 - 32) = v16;
      v18 = *(_QWORD *)(v10 + 56);
      v17 = *(_QWORD *)(v10 + 64);
      *(_DWORD *)(v10 - 24) = v13;
      *(_QWORD *)(v10 - 16) = v18;
      *(_QWORD *)(v10 - 8) = v17;
      *(_QWORD *)v10 = 0;
      *(_QWORD *)(v10 + 8) = 0;
      *(_QWORD *)(v10 + 16) = 0;
      *(_QWORD *)(v10 + 24) = 0;
      *(_QWORD *)(v10 + 32) = 0;
      *(_QWORD *)(v10 + 40) = 0;
      v10 += 72;
    }
    while ( v11 != v10 );
    v9 = *(_QWORD *)(a1 + 240);
    v12 = a1 + 232;
  }
  *(_QWORD *)(v12 + 8) = v9 - 1;
  j__free(ptr);
  return 1;
}
