/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A2530
// Address: 0x000A2530

//----- (000A2530) --------------------------------------------------------
void __cdecl sub_A2530(unsigned int *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // esi
  int v4; // edx
  unsigned int v5; // eax
  int v6; // edi
  void *v7; // eax
  unsigned int v8; // eax
  int v9; // ecx
  size_t v10; // edi
  unsigned int v11; // ecx
  int v12; // esi
  unsigned int v13; // eax
  int v14; // ecx
  int v15; // edi
  unsigned int v16; // eax
  char *v17; // esi
  void *v18; // eax
  char *v19; // [esp+1Ch] [ebp-20h]
  int v20; // [esp+1Ch] [ebp-20h]
  void *v21; // [esp+20h] [ebp-1Ch]
  unsigned int v22; // [esp+24h] [ebp-18h]
  int v23; // [esp+24h] [ebp-18h]
  unsigned int v24; // [esp+28h] [ebp-14h]

  v3 = a2;
  v4 = (int)a1;
  v5 = a1[1];
  v22 = v5;
  if ( v5 <= a2 )
  {
    if ( v5 < a2 )
    {
      if ( *a1 > a3 || (v8 = a1[2], v4 = (int)a1, *a1 + 12 * v8 <= a3) )
      {
        sub_A2750(v4, a2, (const void **)a3);
      }
      else
      {
        v9 = *(_DWORD *)(a3 + 4);
        v20 = v9;
        if ( v9 )
        {
          v10 = 4 * v9;
          v21 = qalloc_or_throw(4 * v9);
          memcpy(v21, *(const void **)a3, v10);
          v4 = (int)a1;
          v8 = a1[2];
        }
        else
        {
          v21 = nullptr;
        }
        v11 = a2;
        if ( v8 < a2 )
        {
          v12 = v4;
          *(_DWORD *)v4 = qvector_reserve(v4, *(void **)v4, a2, 0xCu);
          v4 = v12;
          v11 = a2;
        }
        v13 = *(_DWORD *)(v4 + 4);
        if ( v13 < v11 )
        {
          v23 = 4 * v20;
          v14 = v20;
          v15 = 12 * v13 + 8;
          v16 = a2 - v13;
          do
          {
            v17 = *(char **)v4;
            *(_DWORD *)&v17[v15 - 8] = 0;
            *(_DWORD *)&v17[v15 - 4] = 0;
            *(_DWORD *)&v17[v15] = 0;
            if ( v14 )
            {
              v24 = v16;
              v18 = qalloc_or_throw(v23);
              *(_DWORD *)&v17[v15 - 8] = v18;
              *(_DWORD *)&v17[v15] = v20;
              memcpy(v18, v21, v23);
              v14 = v20;
              *(_DWORD *)&v17[v15 - 4] = v20;
              v4 = (int)a1;
              v16 = v24;
            }
            v15 += 12;
            --v16;
          }
          while ( v16 );
        }
        *(_DWORD *)(v4 + 4) = a2;
        if ( v21 )
          qfree(v21);
      }
    }
  }
  else
  {
    v6 = 12 * a2;
    do
    {
      v7 = *(void **)(*(_DWORD *)v4 + v6);
      if ( v7 )
      {
        v19 = *(char **)v4;
        *(_DWORD *)(*(_DWORD *)v4 + v6 + 4) = 0;
        qfree(v7);
        *(_DWORD *)&v19[v6] = 0;
        *(_DWORD *)&v19[v6 + 8] = 0;
        v4 = (int)a1;
      }
      ++v3;
      v6 += 12;
    }
    while ( v3 < v22 );
    *(_DWORD *)(v4 + 4) = a2;
  }
}
