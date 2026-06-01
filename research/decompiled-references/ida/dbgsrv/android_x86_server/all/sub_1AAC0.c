/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1AAC0
// Address: 0x0001AAC0

//----- (0001AAC0) --------------------------------------------------------
int __cdecl sub_1AAC0(_DWORD *a1, int *a2)
{
  size_t v2; // esi
  size_t v3; // esi
  _DWORD *v4; // esi
  int v5; // eax
  unsigned int v6; // edi
  char *v7; // edi
  int v8; // eax
  int v9; // esi
  void *v10; // eax
  void *v11; // eax
  char *v12; // edi
  void *v13; // ebx
  size_t v14; // ecx
  int result; // eax
  void *v16; // [esp+18h] [ebp-34h]
  void *v17; // [esp+1Ch] [ebp-30h]
  size_t v18; // [esp+20h] [ebp-2Ch]
  char *v19; // [esp+24h] [ebp-28h]
  int v20; // [esp+28h] [ebp-24h]
  size_t v21; // [esp+2Ch] [ebp-20h]
  int v22; // [esp+30h] [ebp-1Ch]
  int v23; // [esp+34h] [ebp-18h]
  int v24; // [esp+38h] [ebp-14h]

  v23 = *a2;
  v2 = a2[2];
  v17 = nullptr;
  v16 = nullptr;
  if ( v2 )
  {
    v16 = qalloc_or_throw(v2);
    memcpy(v16, (const void *)a2[1], v2);
  }
  v18 = v2;
  v22 = a2[4];
  v3 = a2[6];
  if ( v3 )
  {
    v17 = qalloc_or_throw(a2[6]);
    memcpy(v17, (const void *)a2[5], v3);
  }
  v21 = v3;
  v4 = a1;
  v5 = a1[1];
  v6 = a1[2];
  if ( v6 >= v5 + 1 )
  {
    v12 = (char *)*a1;
    v14 = v18;
    v13 = v16;
  }
  else
  {
    v19 = (char *)qvector_reserve((int)a1, nullptr, v5 + 1, 0x20u);
    v20 = a1[2];
    a1[2] = v6;
    v7 = (char *)*a1;
    v8 = a1[1] - 1;
    if ( v8 >= 0 )
    {
      v9 = 0;
      do
      {
        v24 = v8;
        *(_DWORD *)&v19[v9] = *(_DWORD *)&v7[v9];
        *(_DWORD *)&v19[v9 + 4] = *(_DWORD *)&v7[v9 + 4];
        *(_DWORD *)&v7[v9 + 4] = 0;
        *(_DWORD *)&v19[v9 + 8] = *(_DWORD *)&v7[v9 + 8];
        *(_DWORD *)&v7[v9 + 8] = 0;
        *(_DWORD *)&v19[v9 + 12] = *(_DWORD *)&v7[v9 + 12];
        *(_DWORD *)&v7[v9 + 12] = 0;
        *(_DWORD *)&v19[v9 + 16] = *(_DWORD *)&v7[v9 + 16];
        *(_DWORD *)&v19[v9 + 20] = *(_DWORD *)&v7[v9 + 20];
        *(_DWORD *)&v7[v9 + 20] = 0;
        *(_DWORD *)&v19[v9 + 24] = *(_DWORD *)&v7[v9 + 24];
        *(_DWORD *)&v7[v9 + 24] = 0;
        *(_DWORD *)&v19[v9 + 28] = *(_DWORD *)&v7[v9 + 28];
        *(_DWORD *)&v7[v9 + 28] = 0;
        v10 = *(void **)&v7[v9 + 20];
        if ( v10 )
        {
          *(_DWORD *)&v7[v9 + 24] = 0;
          qfree(v10);
          *(_DWORD *)&v7[v9 + 20] = 0;
          *(_DWORD *)&v7[v9 + 28] = 0;
        }
        v11 = *(void **)&v7[v9 + 4];
        if ( v11 )
        {
          *(_DWORD *)&v7[v9 + 8] = 0;
          qfree(v11);
          *(_DWORD *)&v7[v9 + 4] = 0;
          *(_DWORD *)&v7[v9 + 12] = 0;
        }
        v9 += 32;
        v8 = v24 - 1;
      }
      while ( v24 - 1 >= 0 );
      v7 = (char *)*a1;
    }
    qfree(v7);
    v12 = v19;
    *a1 = v19;
    a1[2] = v20;
    v5 = a1[1];
    v13 = v16;
    v14 = v18;
    v4 = a1;
  }
  result = 32 * v5;
  *(_DWORD *)&v12[result] = v23;
  *(_DWORD *)&v12[result + 4] = v13;
  *(_DWORD *)&v12[result + 8] = v14;
  *(_DWORD *)&v12[result + 12] = v14;
  *(_DWORD *)&v12[result + 16] = v22;
  *(_DWORD *)&v12[result + 20] = v17;
  *(_DWORD *)&v12[result + 24] = v21;
  *(_DWORD *)&v12[result + 28] = v21;
  ++v4[1];
  return result;
}
