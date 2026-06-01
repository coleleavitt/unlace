/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_535D0
// Address: 0x000535D0

//----- (000535D0) --------------------------------------------------------
_BYTE *__cdecl sub_535D0(int a1, char *s2)
{
  int v2; // esi
  int v3; // edi
  int v4; // esi
  int v5; // edi
  const char *v6; // eax
  int v7; // edi
  int v8; // edi
  _BYTE *v9; // eax
  int v10; // ecx
  _BYTE *v11; // esi
  int v12; // edi
  size_t v13; // eax
  unsigned int v14; // edx
  bool v15; // cf
  void **v16; // eax
  void *v17; // eax
  unsigned int *v19; // [esp+Ch] [ebp-20h]
  pthread_mutex_t *v20; // [esp+10h] [ebp-1Ch]
  size_t v21; // [esp+10h] [ebp-1Ch]
  _DWORD *v22; // [esp+14h] [ebp-18h]
  unsigned int v23; // [esp+18h] [ebp-14h]

  if ( !s2 )
    return nullptr;
  v2 = a1;
  v20 = (pthread_mutex_t *)dword_13BD5C;
  qmutex_lock((pthread_mutex_t *)dword_13BD5C);
  v3 = *(_DWORD *)(a1 + 52);
  if ( (v3 & 0x7FFFFFF) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 48) + 12;
    v5 = 32 * v3;
    while ( 1 )
    {
      v6 = byte_EF875;
      if ( *(_DWORD *)(v4 - 8) )
        v6 = *(const char **)(v4 - 12);
      if ( !strcmp(v6, s2) )
        break;
      v4 += 32;
      v5 -= 32;
      if ( !v5 )
      {
        v2 = a1;
        v7 = 0;
        goto LABEL_12;
      }
    }
    v7 = v4;
    v2 = a1;
  }
  else
  {
    v7 = 0;
  }
LABEL_12:
  qmutex_unlock(v20);
  if ( !v7 )
  {
    v8 = *(_DWORD *)(v2 + 52);
    if ( *(_DWORD *)(v2 + 56) >= (unsigned int)(v8 + 1) )
    {
      v10 = v2;
      v11 = *(_BYTE **)(v2 + 48);
    }
    else
    {
      v9 = qvector_reserve(v2 + 48, *(void **)(v2 + 48), v8 + 1, 0x20u);
      v10 = v2;
      v11 = v9;
      *(_DWORD *)(v10 + 48) = v9;
      v8 = *(_DWORD *)(v10 + 52);
    }
    v12 = 32 * v8;
    *(_DWORD *)&v11[v12] = 0;
    v19 = (unsigned int *)&v11[v12 + 4];
    *v19 = 0;
    *(_DWORD *)&v11[v12 + 8] = 0;
    v11[v12 + 12] = 2;
    *(_DWORD *)&v11[v12 + 28] = 0;
    *(_DWORD *)&v11[v12 + 24] = 0;
    *(_DWORD *)&v11[v12 + 20] = 0;
    *(_DWORD *)&v11[v12 + 16] = 0;
    ++*(_DWORD *)(v10 + 52);
    v13 = strlen(s2);
    if ( v13 )
    {
      v21 = v13;
      v14 = v13 + 1;
      v15 = *(_DWORD *)&v11[v12 + 8] < v13 + 1;
      v16 = (void **)&v11[v12];
      v22 = &v11[v12];
      if ( v15 )
      {
        v23 = v14;
        v17 = qvector_reserve((int)&v11[v12], *v16, v14, 1u);
        v14 = v23;
        *v22 = v17;
      }
      else
      {
        v17 = *v16;
      }
      *v19 = v14;
      memmove(v17, s2, v21);
      *(_BYTE *)(*v22 + v21) = 0;
    }
    else
    {
      *v19 = 0;
    }
    return &v11[v12 + 12];
  }
  return (_BYTE *)v7;
}
// 13BD5C: using guessed type int dword_13BD5C;
