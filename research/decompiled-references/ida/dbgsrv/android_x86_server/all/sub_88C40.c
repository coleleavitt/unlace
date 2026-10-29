/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_88C40
// Address: 0x00088C40

//----- (00088C40) --------------------------------------------------------
unsigned int __cdecl sub_88C40(int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // eax
  bool v4; // cf
  bool v5; // cc
  unsigned int v6; // eax
  int v7; // edi
  char *v8; // esi
  void *v9; // eax
  void *v10; // eax
  void *v11; // eax
  char *v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // edi
  int v16; // esi
  unsigned int v18; // edx
  int v19; // esi
  unsigned int v20; // edi
  int v21; // esi
  unsigned int v22; // edi
  unsigned int v23; // [esp+1Ch] [ebp-40h]
  void *v24[3]; // [esp+20h] [ebp-3Ch] BYREF
  void *v25; // [esp+2Ch] [ebp-30h]
  int v26; // [esp+30h] [ebp-2Ch]
  int v27; // [esp+34h] [ebp-28h]
  void *v28; // [esp+38h] [ebp-24h]
  int v29; // [esp+3Ch] [ebp-20h]
  int v30; // [esp+40h] [ebp-1Ch]
  unsigned int v31; // [esp+48h] [ebp-14h]

  v31 = __readgsdword(0x14u);
  v3 = *(_DWORD *)(a1 + 4);
  v4 = v3 < a2;
  v5 = v3 <= a2;
  v6 = v3 - a2;
  if ( !v5 )
  {
    v23 = v6;
    v7 = 40 * a2;
    do
    {
      v8 = *(char **)a1;
      v9 = *(void **)(*(_DWORD *)a1 + v7 + 24);
      if ( v9 )
      {
        *(_DWORD *)&v8[v7 + 28] = 0;
        qfree(v9);
        *(_DWORD *)&v8[v7 + 24] = 0;
        *(_DWORD *)&v8[v7 + 32] = 0;
      }
      v10 = *(void **)&v8[v7 + 12];
      if ( v10 )
      {
        *(_DWORD *)&v8[v7 + 16] = 0;
        qfree(v10);
        *(_DWORD *)&v8[v7 + 12] = 0;
        *(_DWORD *)&v8[v7 + 20] = 0;
      }
      v11 = *(void **)&v8[v7];
      if ( v11 )
      {
        *(_DWORD *)&v8[v7 + 4] = 0;
        qfree(v11);
        *(_DWORD *)&v8[v7] = 0;
        *(_DWORD *)&v8[v7 + 8] = 0;
      }
      v7 += 40;
      --v23;
    }
    while ( v23 );
    goto LABEL_10;
  }
  if ( !v4 )
    return __readgsdword(0x14u);
  v12 = *(char **)a1;
  v13 = *(_DWORD *)(a1 + 8);
  if ( *(_DWORD *)a1 > a3 || (unsigned int)&v12[40 * v13] <= a3 )
  {
    if ( v13 >= a2 )
    {
      v18 = *(_DWORD *)(a1 + 4);
      if ( v18 < a2 )
        goto LABEL_30;
    }
    else
    {
      v12 = (char *)qvector_reserve(a1, v12, a2, 0x28u);
      *(_DWORD *)a1 = v12;
      v18 = *(_DWORD *)(a1 + 4);
      if ( v18 < a2 )
      {
LABEL_30:
        v19 = 5 * v18;
        v20 = v18;
        sub_88FB0(&v12[40 * v18], a3);
        if ( v20 + 1 != a2 )
        {
          v21 = 8 * v19 + 40;
          v22 = a2 - 1 - v20;
          do
          {
            sub_88FB0((_DWORD *)(v21 + *(_DWORD *)a1), a3);
            v21 += 40;
            --v22;
          }
          while ( v22 );
        }
      }
    }
LABEL_10:
    *(_DWORD *)(a1 + 4) = a2;
    return __readgsdword(0x14u);
  }
  sub_88FB0(v24, a3);
  if ( *(_DWORD *)(a1 + 8) < a2 )
    *(_DWORD *)a1 = qvector_reserve(a1, *(void **)a1, a2, 0x28u);
  v14 = *(_DWORD *)(a1 + 4);
  if ( v14 < a2 )
  {
    v15 = a2 - v14;
    v16 = 40 * v14;
    do
    {
      sub_88FB0((_DWORD *)(v16 + *(_DWORD *)a1), (int)v24);
      v16 += 40;
      --v15;
    }
    while ( v15 );
  }
  *(_DWORD *)(a1 + 4) = a2;
  if ( v28 )
  {
    v29 = 0;
    qfree(v28);
    v28 = nullptr;
    v30 = 0;
  }
  if ( v25 )
  {
    v26 = 0;
    qfree(v25);
    v25 = nullptr;
    v27 = 0;
  }
  if ( v24[0] )
  {
    v24[1] = nullptr;
    qfree(v24[0]);
    v24[0] = nullptr;
    v24[2] = nullptr;
  }
  return __readgsdword(0x14u);
}
