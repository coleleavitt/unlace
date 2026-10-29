/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_53CB0
// Address: 0x00053CB0

//----- (00053CB0) --------------------------------------------------------
_DWORD *__cdecl sub_53CB0(_DWORD *a1, char *s2, int a3)
{
  int v3; // esi
  int v4; // esi
  int v5; // edi
  const char *v6; // eax
  _DWORD *v7; // esi
  char *v8; // eax
  _DWORD *v9; // edi
  int v10; // edx
  _DWORD *v11; // esi
  size_t v12; // eax
  size_t v13; // edx
  unsigned int v14; // ecx
  void *v15; // eax
  size_t v16; // esi
  _DWORD *v17; // edx
  int v19; // ecx
  void **v20; // eax
  int v21; // ecx
  _DWORD *v22; // eax
  unsigned int v23; // [esp+18h] [ebp-24h]
  _DWORD *v24; // [esp+18h] [ebp-24h]
  size_t v25; // [esp+1Ch] [ebp-20h]
  int v26; // [esp+20h] [ebp-1Ch]
  unsigned int v27; // [esp+20h] [ebp-1Ch]
  pthread_mutex_t *v28; // [esp+24h] [ebp-18h]
  pthread_mutex_t *v29; // [esp+28h] [ebp-14h]

  if ( !s2 )
    return nullptr;
  v28 = (pthread_mutex_t *)dword_13BD5C;
  qmutex_lock((pthread_mutex_t *)dword_13BD5C);
  v3 = dword_13BD5C;
  qmutex_lock((pthread_mutex_t *)dword_13BD5C);
  v29 = (pthread_mutex_t *)v3;
  v23 = a1[10];
  if ( v23 )
  {
    v26 = a1[9];
    v4 = 0;
    while ( 1 )
    {
      v5 = *(_DWORD *)(v26 + 4 * v4);
      v6 = byte_EF875;
      if ( *(_DWORD *)(v5 + 24) )
        v6 = *(const char **)(v5 + 20);
      if ( !strcmp(v6, s2) )
        break;
      if ( ++v4 >= v23 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v5 = 0;
  }
  qmutex_unlock(v29);
  v7 = (_DWORD *)v5;
  if ( !v5 )
  {
    v8 = (char *)operator new(0x2Cu);
    v9 = a1;
    v10 = a1[10];
    *((_DWORD *)v8 + 1) = 0;
    *((_DWORD *)v8 + 2) = 0;
    *(_DWORD *)v8 = v8 + 4;
    *((_DWORD *)v8 + 3) = 0;
    *((_DWORD *)v8 + 4) = v10;
    *((_DWORD *)v8 + 5) = 0;
    *(_OWORD *)(v8 + 24) = xmmword_EFCA0;
    *((_DWORD *)v8 + 10) = -1;
    v11 = v8;
    v12 = strlen(s2);
    v24 = v11;
    if ( v12 )
    {
      v13 = v12;
      v14 = v12 + 1;
      v15 = (void *)v11[5];
      v27 = v14;
      if ( v11[7] < v14 )
      {
        v25 = v13;
        v15 = qvector_reserve((int)(v11 + 5), v15, v14, 1u);
        v11[5] = v15;
        v9 = a1;
        v13 = v25;
      }
      v11[6] = v27;
      v16 = v13;
      memmove(v15, s2, v13);
      v17 = v24;
      *(_BYTE *)(v24[5] + v16) = 0;
    }
    else
    {
      v11[6] = 0;
      v17 = v11;
    }
    if ( a3 )
      v19 = *(_DWORD *)(a3 + 16);
    else
      v19 = 0;
    v20 = (void **)(v9 + 9);
    v17[3] = v19;
    v21 = v9[10];
    if ( v9[11] >= (unsigned int)(v21 + 1) )
    {
      v22 = *v20;
      v7 = v24;
    }
    else
    {
      v22 = qvector_reserve((int)(v9 + 9), *v20, v21 + 1, 4u);
      v7 = v24;
      v9[9] = v22;
      v21 = v9[10];
    }
    v22[v21] = v7;
    ++v9[10];
  }
  qmutex_unlock(v28);
  return v7;
}
// EFCA0: using guessed type __int128 xmmword_EFCA0;
// 13BD5C: using guessed type int dword_13BD5C;
