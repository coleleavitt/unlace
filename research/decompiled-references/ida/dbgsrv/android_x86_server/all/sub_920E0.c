/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_920E0
// Address: 0x000920E0

//----- (000920E0) --------------------------------------------------------
void __cdecl sub_920E0(unsigned int *a1, unsigned int a2, unsigned int a3)
{
  int v3; // edx
  unsigned int v4; // eax
  unsigned int v5; // esi
  int v6; // edi
  void *v7; // eax
  unsigned int v8; // eax
  int v9; // ecx
  int v10; // esi
  unsigned int v11; // eax
  int v12; // edi
  char *v13; // esi
  void *v14; // eax
  char *v15; // [esp+18h] [ebp-24h]
  size_t v16; // [esp+18h] [ebp-24h]
  void *v17; // [esp+1Ch] [ebp-20h]
  unsigned int v18; // [esp+20h] [ebp-1Ch]
  int v19; // [esp+20h] [ebp-1Ch]
  unsigned int v20; // [esp+24h] [ebp-18h]
  int v21; // [esp+28h] [ebp-14h]

  v3 = (int)a1;
  v4 = a1[1];
  v18 = v4;
  if ( v4 > a2 )
  {
    v5 = a2;
    v6 = 20 * a2 + 8;
    do
    {
      v7 = *(void **)(*(_DWORD *)v3 + v6);
      if ( v7 )
      {
        v15 = *(char **)v3;
        *(_DWORD *)(*(_DWORD *)v3 + v6 + 4) = 0;
        qfree(v7);
        *(_DWORD *)&v15[v6] = 0;
        *(_DWORD *)&v15[v6 + 8] = 0;
        v3 = (int)a1;
      }
      ++v5;
      v6 += 20;
    }
    while ( v5 < v18 );
    *(_DWORD *)(v3 + 4) = a2;
    return;
  }
  if ( v4 >= a2 )
    return;
  if ( *a1 > a3 || (v8 = a1[2], v3 = (int)a1, *a1 + 20 * v8 <= a3) )
  {
    sub_92300(v3, a2, (int *)a3);
    return;
  }
  v19 = *(_DWORD *)a3;
  v21 = *(_DWORD *)(a3 + 4);
  v9 = *(_DWORD *)(a3 + 12);
  v16 = v9;
  if ( v9 )
  {
    v17 = qalloc_or_throw(v9);
    memcpy(v17, *(const void **)(a3 + 8), v16);
    v9 = v16;
    v3 = (int)a1;
    if ( a1[2] >= a2 )
      goto LABEL_17;
    goto LABEL_16;
  }
  v17 = nullptr;
  if ( v8 < a2 )
  {
LABEL_16:
    v10 = v3;
    *(_DWORD *)v3 = qvector_reserve(v3, *(void **)v3, a2, 0x14u);
    v3 = v10;
    v9 = v16;
  }
LABEL_17:
  v11 = *(_DWORD *)(v3 + 4);
  if ( v11 < a2 )
  {
    v20 = a2 - v11;
    v12 = 20 * v11 + 16;
    do
    {
      v13 = *(char **)v3;
      *(_DWORD *)&v13[v12 - 12] = v21;
      *(_DWORD *)&v13[v12 - 16] = v19;
      *(_DWORD *)&v13[v12 - 8] = 0;
      *(_DWORD *)&v13[v12 - 4] = 0;
      *(_DWORD *)&v13[v12] = 0;
      if ( v9 )
      {
        v14 = qalloc_or_throw(v9);
        *(_DWORD *)&v13[v12 - 8] = v14;
        *(_DWORD *)&v13[v12] = v16;
        memcpy(v14, v17, v16);
        *(_DWORD *)&v13[v12 - 4] = v16;
        v3 = (int)a1;
        v9 = v16;
      }
      v12 += 20;
      --v20;
    }
    while ( v20 );
  }
  *(_DWORD *)(v3 + 4) = a2;
  if ( v17 )
    qfree(v17);
}
