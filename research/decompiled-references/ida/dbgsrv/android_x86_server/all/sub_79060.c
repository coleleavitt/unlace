/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79060
// Address: 0x00079060

//----- (00079060) --------------------------------------------------------
_BYTE *__cdecl sub_79060(_DWORD *a1, int a2, int a3, char *s, int a5)
{
  _BYTE *result; // eax
  _DWORD *v6; // edi
  int v7; // eax
  unsigned int v8; // esi
  char *v9; // esi
  int v10; // eax
  int v11; // edi
  void **v12; // ebx
  __int64 v13; // xmm0_8
  void *v14; // eax
  void *v15; // eax
  char *v16; // esi
  _DWORD *v17; // ecx
  int v18; // edi
  size_t v19; // eax
  char *v20; // edx
  void **v21; // ebx
  char *v22; // ecx
  unsigned int v23; // esi
  void *v24; // eax
  char *v25; // [esp+Ch] [ebp-20h]
  char *v26; // [esp+Ch] [ebp-20h]
  int v27; // [esp+10h] [ebp-1Ch]
  size_t v28; // [esp+10h] [ebp-1Ch]
  int v29; // [esp+14h] [ebp-18h]
  _BYTE *v30; // [esp+18h] [ebp-14h]

  result = qalloc(a5 + 1);
  if ( result )
  {
    v30 = result;
    v6 = a1;
    v7 = a1[34];
    v8 = a1[35];
    if ( v8 >= v7 + 1 )
    {
      v16 = (char *)a1[33];
    }
    else
    {
      v25 = (char *)qvector_reserve((int)(a1 + 33), nullptr, v7 + 1, 0x28u);
      v29 = a1[35];
      a1[35] = v8;
      v9 = (char *)a1[33];
      v10 = a1[34] - 1;
      if ( v10 >= 0 )
      {
        v11 = 0;
        v12 = (void **)(a1 + 33);
        do
        {
          v27 = v10;
          *(_DWORD *)&v25[v11] = *(_DWORD *)&v9[v11];
          *(_DWORD *)&v9[v11] = 0;
          *(_DWORD *)&v25[v11 + 4] = *(_DWORD *)&v9[v11 + 4];
          *(_DWORD *)&v9[v11 + 4] = 0;
          *(_DWORD *)&v25[v11 + 8] = *(_DWORD *)&v9[v11 + 8];
          *(_DWORD *)&v9[v11 + 8] = 0;
          *(_DWORD *)&v25[v11 + 12] = *(_DWORD *)&v9[v11 + 12];
          *(_DWORD *)&v9[v11 + 12] = 0;
          *(_DWORD *)&v25[v11 + 16] = *(_DWORD *)&v9[v11 + 16];
          *(_DWORD *)&v9[v11 + 16] = 0;
          *(_DWORD *)&v25[v11 + 20] = *(_DWORD *)&v9[v11 + 20];
          *(_DWORD *)&v9[v11 + 20] = 0;
          v13 = *(_QWORD *)&v9[v11 + 24];
          *(_QWORD *)&v25[v11 + 32] = *(_QWORD *)&v9[v11 + 32];
          *(_QWORD *)&v25[v11 + 24] = v13;
          v14 = *(void **)&v9[v11 + 12];
          if ( v14 )
          {
            *(_DWORD *)&v9[v11 + 16] = 0;
            qfree(v14);
            *(_DWORD *)&v9[v11 + 12] = 0;
            *(_DWORD *)&v9[v11 + 20] = 0;
            v12 = (void **)(a1 + 33);
          }
          v15 = *(void **)&v9[v11];
          if ( v15 )
          {
            *(_DWORD *)&v9[v11 + 4] = 0;
            qfree(v15);
            *(_DWORD *)&v9[v11] = 0;
            *(_DWORD *)&v9[v11 + 8] = 0;
            v12 = (void **)(a1 + 33);
          }
          v11 += 40;
          v10 = v27 - 1;
        }
        while ( v27 - 1 >= 0 );
        v9 = (char *)*v12;
        v6 = a1;
      }
      qfree(v9);
      v16 = v25;
      v6[33] = v25;
      v6[35] = v29;
      v7 = v6[34];
    }
    v17 = v6;
    v18 = 5 * v7;
    *(_DWORD *)&v16[8 * v18 + 4] = 0;
    *(_DWORD *)&v16[8 * v18] = 0;
    *(_DWORD *)&v16[8 * v18 + 12] = 0;
    *(_DWORD *)&v16[8 * v18 + 8] = 0;
    *(_DWORD *)&v16[8 * v18 + 20] = 0;
    *(_DWORD *)&v16[8 * v18 + 16] = 0;
    ++v17[34];
    *(_DWORD *)&v16[8 * v18 + 36] = a3;
    *(_DWORD *)&v16[8 * v18 + 32] = a2;
    if ( s && (v19 = strlen(s), v20 = s, v19) )
    {
      v21 = (void **)&v16[8 * v18 + 12];
      v22 = v16;
      v28 = v19;
      v23 = v19 + 1;
      v26 = v22;
      if ( *(_DWORD *)&v22[8 * v18 + 20] >= v19 + 1 )
      {
        v24 = *v21;
      }
      else
      {
        v24 = qvector_reserve((int)v21, *v21, v23, 1u);
        v20 = s;
        *v21 = v24;
      }
      *(_DWORD *)&v26[8 * v18 + 16] = v23;
      v16 = v26;
      memmove(v24, v20, v28);
      *((_BYTE *)*v21 + v28) = 0;
    }
    else
    {
      *(_DWORD *)&v16[8 * v18 + 16] = 0;
    }
    *(_DWORD *)&v16[8 * v18 + 24] = a5;
    *(_DWORD *)&v16[8 * v18 + 28] = v30;
    v30[a5] = 0;
    return v30;
  }
  return result;
}
