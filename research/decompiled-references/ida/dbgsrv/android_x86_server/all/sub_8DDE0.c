/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8DDE0
// Address: 0x0008DDE0

//----- (0008DDE0) --------------------------------------------------------
int __cdecl sub_8DDE0(int *a1, int a2, int a3)
{
  unsigned int v3; // edi
  int v4; // esi
  void *v5; // eax
  int v6; // edi
  int v7; // esi
  int v8; // ecx
  char *v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // edi
  int v13; // edx
  unsigned int v14; // esi
  const void *v15; // edx
  void *v16; // eax
  bool v17; // zf
  unsigned int v19; // [esp+0h] [ebp-2Ch]
  unsigned int *v20; // [esp+0h] [ebp-2Ch]
  char *v21; // [esp+4h] [ebp-28h]
  void **v22; // [esp+4h] [ebp-28h]
  unsigned int v23; // [esp+Ch] [ebp-20h]
  int v24; // [esp+10h] [ebp-1Ch]
  const void *v25; // [esp+14h] [ebp-18h]
  int *v26; // [esp+18h] [ebp-14h]

  sub_1C180(a1 + 37, 0);
  v26 = a1 + 37;
  (*(void (__cdecl **)(int *, int *, int))(*a1 + 12))(a1, a1 + 37, a3);
  v23 = a1[38];
  v19 = *(_DWORD *)(a2 + 4);
  if ( v19 )
  {
    v3 = 0;
    v4 = 4;
    do
    {
      v5 = *(void **)(*(_DWORD *)a2 + v4);
      if ( v5 )
      {
        v21 = *(char **)a2;
        *(_DWORD *)(*(_DWORD *)a2 + v4 + 4) = 0;
        qfree(v5);
        *(_DWORD *)&v21[v4] = 0;
        *(_DWORD *)&v21[v4 + 8] = 0;
      }
      ++v3;
      v4 += 16;
    }
    while ( v3 < v19 );
  }
  v6 = a2;
  *(_DWORD *)(a2 + 4) = 0;
  if ( *(_DWORD *)(a2 + 8) < v23 )
  {
    *(_DWORD *)a2 = qvector_reserve(a2, *(void **)a2, v23, 0x10u);
LABEL_9:
    v7 = 20;
    while ( 1 )
    {
      v8 = *(_DWORD *)(v6 + 4);
      if ( *(_DWORD *)(v6 + 8) >= (unsigned int)(v8 + 1) )
      {
        v9 = *(char **)v6;
      }
      else
      {
        v9 = (char *)qvector_reserve(v6, *(void **)v6, v8 + 1, 0x10u);
        *(_DWORD *)v6 = v9;
        v8 = *(_DWORD *)(v6 + 4);
      }
      v10 = 16 * v8;
      *(_DWORD *)&v9[v10 + 4] = 0;
      *(_DWORD *)&v9[v10 + 8] = 0;
      *(_DWORD *)&v9[v10 + 12] = 0;
      ++*(_DWORD *)(v6 + 4);
      v11 = *v26;
      *(_DWORD *)&v9[v10] = *(_DWORD *)(*v26 + v7 - 20);
      v12 = (int)&v9[v10 + 4];
      if ( *(_DWORD *)(v11 + v7 + 4) < 2u )
      {
        v13 = v11 + v7 - 16;
        if ( v12 != v13 )
        {
LABEL_17:
          v24 = v7;
          v22 = (void **)&v9[v10 + 4];
          v20 = (unsigned int *)&v9[v10 + 8];
          v14 = *(_DWORD *)(v13 + 4);
          if ( v14 < 2 )
          {
            *v20 = 0;
          }
          else
          {
            v15 = *(const void **)v13;
            if ( *(_DWORD *)&v9[v10 + 12] >= v14 )
            {
              v16 = *v22;
            }
            else
            {
              v25 = v15;
              v16 = qvector_reserve((int)v22, *v22, v14, 1u);
              v15 = v25;
              *v22 = v16;
            }
            *v20 = v14;
            memmove(v16, v15, v14 - 1);
            *((char *)*v22 + v14 - 1) = 0;
          }
          v7 = v24;
        }
      }
      else
      {
        v13 = v7 + v11;
        if ( v12 != v13 )
          goto LABEL_17;
      }
      v7 += 32;
      v17 = v23-- == 1;
      v6 = a2;
      if ( v17 )
        return 1;
    }
  }
  if ( v23 )
    goto LABEL_9;
  return 1;
}
