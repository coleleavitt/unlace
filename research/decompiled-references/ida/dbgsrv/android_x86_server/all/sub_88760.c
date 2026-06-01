/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_88760
// Address: 0x00088760

//----- (00088760) --------------------------------------------------------
unsigned int __cdecl sub_88760(int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // edi
  int *v4; // ecx
  unsigned int v5; // edx
  int v6; // esi
  void *v7; // eax
  char *v8; // eax
  unsigned int v9; // ecx
  int *v10; // ecx
  unsigned int v11; // edi
  unsigned int v12; // esi
  int v13; // edi
  int v14; // eax
  unsigned int v16; // edx
  int v17; // esi
  unsigned int v18; // edi
  int v19; // esi
  unsigned int v20; // edi
  int v21; // eax
  unsigned int v22; // [esp+10h] [ebp-2Ch]
  int v23; // [esp+14h] [ebp-28h]
  int v24; // [esp+18h] [ebp-24h] BYREF
  void *v25; // [esp+1Ch] [ebp-20h]
  int v26; // [esp+20h] [ebp-1Ch]
  int v27; // [esp+24h] [ebp-18h]
  unsigned int v28; // [esp+28h] [ebp-14h]

  v3 = a2;
  v4 = (int *)a1;
  v28 = __readgsdword(0x14u);
  v5 = *(_DWORD *)(a1 + 4);
  if ( v5 > a2 )
  {
    v6 = 16 * a2;
    v22 = *(_DWORD *)(a1 + 4);
    do
    {
      if ( *(int *)(*v4 + v6) >= -1 )
      {
        v23 = *v4;
        v7 = *(void **)(*v4 + v6 + 4);
        if ( v7 )
        {
          *(_DWORD *)(v23 + v6 + 8) = 0;
          qfree(v7);
          *(_DWORD *)(v23 + v6 + 4) = 0;
          *(_DWORD *)(v23 + v6 + 12) = 0;
          v4 = (int *)a1;
          v5 = v22;
        }
        *(_DWORD *)(v23 + v6) = -2;
      }
      ++v3;
      v6 += 16;
    }
    while ( v3 < v5 );
    goto LABEL_8;
  }
  if ( v5 >= a2 )
    return __readgsdword(0x14u);
  v8 = *(char **)a1;
  v9 = *(_DWORD *)(a1 + 8);
  if ( *(_DWORD *)a1 > a3 || (unsigned int)&v8[16 * v9] <= a3 )
  {
    v16 = *(_DWORD *)(a1 + 4);
    if ( v9 >= a2 )
    {
      v4 = (int *)a1;
      if ( *(_DWORD *)(a1 + 4) < a2 )
        goto LABEL_26;
    }
    else
    {
      v8 = (char *)qvector_reserve(a1, v8, a2, 0x10u);
      v4 = (int *)a1;
      *(_DWORD *)a1 = v8;
      v16 = *(_DWORD *)(a1 + 4);
      if ( v16 < a2 )
      {
LABEL_26:
        v17 = 16 * v16;
        *(_DWORD *)&v8[v17] = -2;
        *(_DWORD *)&v8[v17 + 12] = 0;
        *(_DWORD *)&v8[v17 + 8] = 0;
        *(_DWORD *)&v8[v17 + 4] = 0;
        v18 = v16;
        sub_88A70(&v8[16 * v16], a3);
        v4 = (int *)a1;
        if ( v18 + 1 != a2 )
        {
          v19 = v17 + 16;
          v20 = a2 - 1 - v18;
          do
          {
            v21 = *v4;
            *(_DWORD *)(v21 + v19) = -2;
            *(_DWORD *)(v21 + v19 + 12) = 0;
            *(_DWORD *)(v21 + v19 + 8) = 0;
            *(_DWORD *)(v21 + v19 + 4) = 0;
            sub_88A70((_DWORD *)(v21 + v19), a3);
            v4 = (int *)a1;
            v19 += 16;
            --v20;
          }
          while ( v20 );
        }
      }
    }
LABEL_8:
    v4[1] = a2;
    return __readgsdword(0x14u);
  }
  v24 = -2;
  v27 = 0;
  v26 = 0;
  v25 = nullptr;
  sub_88A70(&v24, a3);
  v10 = (int *)a1;
  if ( *(_DWORD *)(a1 + 8) < a2 )
  {
    *(_DWORD *)a1 = qvector_reserve(a1, *(void **)a1, a2, 0x10u);
    v10 = (int *)a1;
  }
  v11 = v10[1];
  if ( v11 < a2 )
  {
    v12 = a2 - v11;
    v13 = 16 * v11;
    do
    {
      v14 = *v10;
      *(_DWORD *)(v14 + v13) = -2;
      *(_DWORD *)(v14 + v13 + 12) = 0;
      *(_DWORD *)(v14 + v13 + 8) = 0;
      *(_DWORD *)(v14 + v13 + 4) = 0;
      sub_88A70((_DWORD *)(v14 + v13), (int)&v24);
      v13 += 16;
      --v12;
      v10 = (int *)a1;
    }
    while ( v12 );
  }
  v10[1] = a2;
  if ( v24 >= -1 )
  {
    if ( v25 )
    {
      v26 = 0;
      qfree(v25);
      v25 = nullptr;
      v27 = 0;
    }
    v24 = -2;
  }
  return __readgsdword(0x14u);
}
