/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A89A0
// Address: 0x080A89A0

//----- (080A89A0) --------------------------------------------------------
int __cdecl sub_80A89A0(int a1, void *ptr)
{
  int v2; // edx
  void *v3; // eax
  int v4; // esi
  int v5; // ebp
  void *v6; // ecx
  int v7; // edi
  void *v8; // ecx
  void *v9; // ecx
  int v10; // ebp
  void *v11; // ecx
  __int64 v12; // xmm1_8
  int v13; // ecx
  __int64 v14; // xmm2_8
  int v15; // ecx
  __int64 v16; // xmm0_8
  int v17; // ecx
  void *v18; // ecx
  void *v19; // ecx
  int v22; // [esp+0h] [ebp-20h]
  int v23; // [esp+24h] [ebp+4h]
  int v24; // [esp+24h] [ebp+4h]
  void *ptrb; // [esp+28h] [ebp+8h]
  void *ptra; // [esp+28h] [ebp+8h]

  v2 = a1;
  v3 = ptr;
  v4 = *(_DWORD *)(a1 + 132);
  v5 = v4 + 40 * *(_DWORD *)(a1 + 136);
  if ( !(40 * *(_DWORD *)(a1 + 136)) )
    return 0;
  while ( 1 )
  {
    v6 = *(void **)(v4 + 28);
    v7 = v4;
    v4 += 40;
    if ( v6 == ptr )
      break;
    if ( v4 == v5 )
      return 0;
  }
  v8 = *(void **)(v7 + 12);
  if ( v8 )
  {
    *(_DWORD *)(v7 + 16) = 0;
    sub_80CF780(v8);
    v3 = ptr;
    v2 = a1;
  }
  v9 = *(void **)v7;
  if ( *(_DWORD *)v7 )
  {
    ptrb = v3;
    v23 = v2;
    *(_DWORD *)(v7 + 4) = 0;
    sub_80CF780(v9);
    v3 = ptrb;
    v2 = v23;
  }
  v22 = *(_DWORD *)(v2 + 136);
  v10 = -858993459 * ((*(_DWORD *)(v2 + 132) + 40 * v22 - v7) >> 3) - 2;
  if ( v10 >= 0 )
  {
    v24 = v2;
    ptra = v3;
    do
    {
      v11 = *(void **)v4;
      v12 = *(_QWORD *)(v4 + 4);
      *(_DWORD *)v4 = 0;
      *(_DWORD *)(v4 + 4) = 0;
      *(_DWORD *)v7 = v11;
      *(_QWORD *)(v7 + 4) = v12;
      v13 = *(_DWORD *)(v4 + 12);
      v14 = *(_QWORD *)(v4 + 16);
      *(_DWORD *)(v4 + 8) = 0;
      *(_DWORD *)(v7 + 12) = v13;
      *(_QWORD *)(v7 + 16) = v14;
      v15 = *(_DWORD *)(v4 + 24);
      v16 = *(_QWORD *)(v4 + 32);
      *(_DWORD *)(v4 + 12) = 0;
      *(_DWORD *)(v4 + 20) = 0;
      *(_DWORD *)(v7 + 24) = v15;
      v17 = *(_DWORD *)(v4 + 28);
      *(_QWORD *)(v7 + 32) = v16;
      *(_DWORD *)(v7 + 28) = v17;
      v18 = *(void **)(v4 + 12);
      if ( v18 )
      {
        *(_DWORD *)(v4 + 16) = 0;
        sub_80CF780(v18);
      }
      v19 = *(void **)v4;
      if ( *(_DWORD *)v4 )
      {
        *(_DWORD *)(v4 + 4) = 0;
        sub_80CF780(v19);
      }
      v4 += 40;
      v7 += 40;
    }
    while ( v10-- != 0 );
    v2 = v24;
    v3 = ptra;
    v22 = *(_DWORD *)(v24 + 136);
  }
  *(_DWORD *)(v2 + 136) = v22 - 1;
  sub_80CF780(v3);
  return 1;
}
