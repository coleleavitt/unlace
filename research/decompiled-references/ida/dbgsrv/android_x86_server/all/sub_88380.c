/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_88380
// Address: 0x00088380

//----- (00088380) --------------------------------------------------------
unsigned int __cdecl sub_88380(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // eax
  unsigned int v4; // esi
  char *v5; // edi
  int v6; // eax
  char *v7; // edi
  int v8; // esi
  void *v9; // eax
  void *v10; // eax
  _DWORD *v11; // esi
  unsigned int *v12; // ecx
  unsigned int v13; // edi
  unsigned int v14; // esi
  unsigned int v15; // edi
  int v17; // [esp+10h] [ebp-1Ch]
  unsigned int *v18; // [esp+10h] [ebp-1Ch]
  char *v19; // [esp+14h] [ebp-18h]
  int v20; // [esp+18h] [ebp-14h]

  v3 = a2;
  v4 = a1[2];
  if ( v4 >= a2 )
  {
    v12 = a1 + 1;
  }
  else
  {
    v19 = (char *)qvector_reserve((int)a1, nullptr, a2, 0x100u);
    v20 = a1[2];
    a1[2] = v4;
    v5 = (char *)*a1;
    v6 = a1[1] - 1;
    if ( v6 < 0 )
    {
      v11 = a1;
    }
    else
    {
      v7 = v5 + 32;
      v8 = 0;
      do
      {
        v17 = v6;
        *(_DWORD *)&v19[v8] = *(_DWORD *)&v7[v8 - 32];
        *(_DWORD *)&v19[v8 + 4] = *(_DWORD *)&v7[v8 - 28];
        *(_DWORD *)&v7[v8 - 28] = 0;
        *(_DWORD *)&v19[v8 + 8] = *(_DWORD *)&v7[v8 - 24];
        *(_DWORD *)&v7[v8 - 24] = 0;
        *(_DWORD *)&v19[v8 + 12] = *(_DWORD *)&v7[v8 - 20];
        *(_DWORD *)&v7[v8 - 20] = 0;
        *(_DWORD *)&v19[v8 + 16] = *(_DWORD *)&v7[v8 - 16];
        *(_DWORD *)&v19[v8 + 20] = *(_DWORD *)&v7[v8 - 12];
        *(_DWORD *)&v7[v8 - 12] = 0;
        *(_DWORD *)&v19[v8 + 24] = *(_DWORD *)&v7[v8 - 8];
        *(_DWORD *)&v7[v8 - 8] = 0;
        *(_DWORD *)&v19[v8 + 28] = *(_DWORD *)&v7[v8 - 4];
        *(_DWORD *)&v7[v8 - 4] = 0;
        memcpy(&v19[v8 + 32], &v7[v8], 0xE0u);
        v9 = *(void **)&v7[v8 - 12];
        if ( v9 )
        {
          *(_DWORD *)&v7[v8 - 8] = 0;
          qfree(v9);
          *(_DWORD *)&v7[v8 - 12] = 0;
          *(_DWORD *)&v7[v8 - 4] = 0;
        }
        v10 = *(void **)&v7[v8 - 28];
        if ( v10 )
        {
          *(_DWORD *)&v7[v8 - 24] = 0;
          qfree(v10);
          *(_DWORD *)&v7[v8 - 28] = 0;
          *(_DWORD *)&v7[v8 - 20] = 0;
        }
        v8 += 256;
        v6 = v17 - 1;
      }
      while ( v17 - 1 >= 0 );
      v11 = a1;
      v5 = (char *)*a1;
    }
    qfree(v5);
    v12 = v11 + 1;
    *v11 = v19;
    v11[2] = v20;
    v3 = a2;
  }
  v18 = v12;
  v13 = *v12;
  if ( *v12 < v3 )
  {
    v14 = a2 - v13;
    v15 = v13 << 8;
    do
    {
      sub_88570((_DWORD *)(v15 + *a1), a3);
      v15 += 256;
      --v14;
    }
    while ( v14 );
  }
  *v18 = a2;
  return a2;
}
