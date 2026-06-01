/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4E850
// Address: 0x0004E850

//----- (0004E850) --------------------------------------------------------
void __cdecl sub_4E850(unsigned int *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // edi
  int v4; // edx
  unsigned int v5; // ecx
  int v6; // esi
  void *v7; // eax
  char *v8; // esi
  unsigned int v9; // eax
  size_t v10; // esi
  char *v11; // eax
  unsigned int v12; // eax
  int v13; // edi
  unsigned int i; // eax
  size_t v15; // esi
  void *v16; // eax
  int v17; // esi
  unsigned int v18; // eax
  int v19; // ecx
  int v20; // esi
  unsigned int v21; // eax
  char *v22; // edi
  void *v23; // eax
  char *v24; // [esp+10h] [ebp-1Ch]
  size_t v25; // [esp+10h] [ebp-1Ch]
  char *v26; // [esp+10h] [ebp-1Ch]
  unsigned int v27; // [esp+14h] [ebp-18h]
  unsigned int v28; // [esp+14h] [ebp-18h]
  unsigned int v29; // [esp+14h] [ebp-18h]
  void *v30; // [esp+18h] [ebp-14h]

  v3 = a2;
  v4 = (int)a1;
  v5 = a1[1];
  if ( v5 > a2 )
  {
    v6 = 12 * a2;
    v27 = a1[1];
    do
    {
      v24 = *(char **)v4;
      v7 = *(void **)(*(_DWORD *)v4 + v6);
      if ( v7 )
      {
        *(_DWORD *)&v24[v6 + 4] = 0;
        qfree(v7);
        *(_DWORD *)&v24[v6] = 0;
        *(_DWORD *)&v24[v6 + 8] = 0;
        v4 = (int)a1;
        v5 = v27;
      }
      ++v3;
      v6 += 12;
    }
    while ( v3 < v5 );
    goto LABEL_6;
  }
  if ( v5 < a2 )
  {
    v8 = (char *)*a1;
    v9 = a1[2];
    if ( *a1 <= a3 && (unsigned int)&v8[12 * v9] > a3 )
    {
      v10 = *(_DWORD *)(a3 + 4);
      v25 = v10;
      if ( v10 )
      {
        v30 = qalloc_or_throw(v10);
        memcpy(v30, *(const void **)a3, v10);
        v4 = (int)a1;
        if ( a1[2] >= a2 )
          goto LABEL_25;
      }
      else
      {
        v30 = nullptr;
        if ( v9 >= a2 )
        {
LABEL_25:
          v18 = *(_DWORD *)(v4 + 4);
          if ( v18 < a2 )
          {
            v19 = v25;
            v20 = 12 * v18 + 8;
            v21 = a2 - v18;
            do
            {
              v22 = *(char **)v4;
              *(_DWORD *)&v22[v20 - 8] = 0;
              *(_DWORD *)&v22[v20 - 4] = 0;
              *(_DWORD *)&v22[v20] = 0;
              if ( v19 )
              {
                v29 = v21;
                v23 = qalloc_or_throw(v19);
                *(_DWORD *)&v22[v20 - 8] = v23;
                *(_DWORD *)&v22[v20] = v25;
                memcpy(v23, v30, v25);
                *(_DWORD *)&v22[v20 - 4] = v25;
                v4 = (int)a1;
                v19 = v25;
                v21 = v29;
              }
              v20 += 12;
              --v21;
            }
            while ( v21 );
          }
          *(_DWORD *)(v4 + 4) = a2;
          if ( v30 )
            qfree(v30);
          return;
        }
      }
      v17 = v4;
      *(_DWORD *)v4 = qvector_reserve(v4, *(void **)v4, a2, 0xCu);
      v4 = v17;
      goto LABEL_25;
    }
    if ( v9 >= a2 )
    {
      v12 = a1[1];
      if ( v12 < a2 )
        goto LABEL_17;
    }
    else
    {
      v11 = (char *)qvector_reserve((int)a1, v8, a2, 0xCu);
      v4 = (int)a1;
      v8 = v11;
      *a1 = (unsigned int)v11;
      v12 = a1[1];
      if ( v12 < a2 )
      {
LABEL_17:
        v13 = 12 * v12 + 8;
        for ( i = a2 - 1 - v12; ; --i )
        {
          v26 = v8;
          *(_DWORD *)&v8[v13 - 8] = 0;
          *(_DWORD *)&v8[v13 - 4] = 0;
          *(_DWORD *)&v8[v13] = 0;
          v15 = *(_DWORD *)(a3 + 4);
          if ( v15 )
          {
            v28 = i;
            v16 = qalloc_or_throw(*(_DWORD *)(a3 + 4));
            *(_DWORD *)&v26[v13 - 8] = v16;
            *(_DWORD *)&v26[v13] = v15;
            memcpy(v16, *(const void **)a3, v15);
            i = v28;
            v4 = (int)a1;
            *(_DWORD *)&v26[v13 - 4] = v15;
          }
          if ( !i )
            break;
          v8 = *(char **)v4;
          v13 += 12;
        }
      }
    }
LABEL_6:
    *(_DWORD *)(v4 + 4) = a2;
  }
}
