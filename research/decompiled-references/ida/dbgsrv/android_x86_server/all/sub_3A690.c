/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A690
// Address: 0x0003A690

//----- (0003A690) --------------------------------------------------------
unsigned int __cdecl sub_3A690(int a1, int a2)
{
  int v2; // edx
  size_t v3; // esi
  char *v4; // ecx
  void *v5; // edi
  int v6; // esi
  int v7; // edx
  int v8; // ebx
  int v9; // edi
  void *v10; // eax
  __int64 v11; // xmm0_8
  int v12; // ecx
  char *v13; // eax
  int v14; // ecx
  char *v16; // [esp+18h] [ebp-44h]
  char *v17; // [esp+18h] [ebp-44h]
  size_t v18; // [esp+1Ch] [ebp-40h]
  void *v19; // [esp+20h] [ebp-3Ch]
  int v20; // [esp+24h] [ebp-38h]
  size_t v21; // [esp+28h] [ebp-34h]
  int v22; // [esp+2Ch] [ebp-30h]
  __int64 v23; // [esp+30h] [ebp-2Ch]
  __int64 v24; // [esp+38h] [ebp-24h]
  __int64 v25; // [esp+40h] [ebp-1Ch]

  v2 = a2;
  v3 = *(_DWORD *)(a2 + 4);
  v4 = nullptr;
  v5 = nullptr;
  if ( v3 )
  {
    v5 = qalloc_or_throw(v3);
    memcpy(v5, *(const void **)a2, v3);
    v2 = a2;
    v4 = nullptr;
  }
  v21 = v3;
  v25 = *(_QWORD *)(v2 + 28);
  v24 = *(_QWORD *)(v2 + 20);
  v23 = *(_QWORD *)(v2 + 12);
  v20 = *(_DWORD *)(v2 + 40);
  if ( v20 )
  {
    v19 = v5;
    v4 = (char *)qalloc_or_throw(28 * v20);
    v6 = 0;
    v7 = v20;
    v8 = a2;
    v16 = v4;
    do
    {
      v9 = *(_DWORD *)(v8 + 36);
      *(_DWORD *)&v4[v6] = 0;
      *(_DWORD *)&v4[v6 + 4] = 0;
      *(_DWORD *)&v4[v6 + 8] = 0;
      v18 = *(_DWORD *)(v9 + v6 + 4);
      if ( v18 )
      {
        v22 = v7;
        v10 = qalloc_or_throw(v18);
        *(_DWORD *)&v16[v6] = v10;
        *(_DWORD *)&v16[v6 + 8] = v18;
        memcpy(v10, *(const void **)(v9 + v6), v18);
        v4 = v16;
        *(_DWORD *)&v16[v6 + 4] = v18;
        v8 = a2;
        v7 = v22;
      }
      v11 = *(_QWORD *)(v9 + v6 + 12);
      *(_QWORD *)&v4[v6 + 17] = *(_QWORD *)(v9 + v6 + 17);
      *(_QWORD *)&v4[v6 + 12] = v11;
      v6 += 28;
      --v7;
    }
    while ( v7 );
    v5 = v19;
  }
  v17 = v4;
  v12 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v12 + 1) )
  {
    v13 = *(char **)a1;
  }
  else
  {
    v13 = (char *)qvector_reserve(a1, *(void **)a1, v12 + 1, 0x30u);
    *(_DWORD *)a1 = v13;
    v12 = *(_DWORD *)(a1 + 4);
  }
  v14 = 48 * v12;
  *(_DWORD *)&v13[v14] = v5;
  *(_DWORD *)&v13[v14 + 4] = v21;
  *(_DWORD *)&v13[v14 + 8] = v21;
  *(_QWORD *)&v13[v14 + 28] = v25;
  *(_QWORD *)&v13[v14 + 20] = v24;
  *(_QWORD *)&v13[v14 + 12] = v23;
  *(_DWORD *)&v13[v14 + 36] = v17;
  *(_DWORD *)&v13[v14 + 40] = v20;
  *(_DWORD *)&v13[v14 + 44] = v20;
  ++*(_DWORD *)(a1 + 4);
  return __readgsdword(0x14u);
}
