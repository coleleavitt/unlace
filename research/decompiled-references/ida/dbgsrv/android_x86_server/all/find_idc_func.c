/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: find_idc_func
// Address: 0x000550D0

//----- (000550D0) --------------------------------------------------------
int __cdecl find_idc_func(int a1, char *s, int a3)
{
  pthread_mutex_t *v3; // esi
  unsigned int v4; // ecx
  const char **v5; // edi
  const char *v6; // esi
  int v7; // eax
  unsigned int v8; // ecx
  bool v9; // sf
  int v11; // ecx
  size_t v12; // eax
  size_t v13; // esi
  unsigned int v14; // edi
  void *v15; // eax
  _DWORD *v16; // edi
  unsigned int v17; // [esp+14h] [ebp-28h]
  int v18; // [esp+14h] [ebp-28h]
  pthread_mutex_t *v19; // [esp+18h] [ebp-24h]
  const char *v20; // [esp+1Ch] [ebp-20h]
  int *v22; // [esp+24h] [ebp-18h]
  size_t v23; // [esp+28h] [ebp-14h]

  if ( !s )
    return 0;
  v3 = (pthread_mutex_t *)dword_13BD5C;
  qmutex_lock((pthread_mutex_t *)dword_13BD5C);
  v23 = strlen(s);
  v4 = 0;
  v22 = off_13B614;
  if ( !off_13B614 )
  {
    v18 = 0;
    goto LABEL_12;
  }
  v19 = v3;
  v5 = (const char **)off_13B618;
  while ( 1 )
  {
    v17 = v4;
    v6 = *v5;
    v7 = strncmp(s, *v5, v23);
    if ( !v7 )
      break;
    v8 = v17;
LABEL_7:
    v4 = v8 + 1;
    v5 += 6;
    if ( v4 >= (unsigned int)v22 )
    {
      v18 = 0;
      goto LABEL_9;
    }
  }
  v20 = v6;
  v9 = --a3 < 0;
  v8 = v17;
  if ( !v9 )
    goto LABEL_7;
  LOBYTE(v7) = 1;
  v18 = v7;
  v11 = a1;
  if ( a1 )
  {
    if ( v6 && (v12 = strlen(v6), v11 = a1, v12) )
    {
      v13 = v12;
      v14 = v12 + 1;
      if ( *(_DWORD *)(a1 + 8) >= v12 + 1 )
      {
        v15 = *(void **)a1;
      }
      else
      {
        v15 = qvector_reserve(a1, *(void **)a1, v14, 1u);
        v11 = a1;
        *(_DWORD *)a1 = v15;
      }
      *(_DWORD *)(v11 + 4) = v14;
      v16 = (_DWORD *)v11;
      memmove(v15, v20, v13);
      *(_BYTE *)(*v16 + v13) = 0;
    }
    else
    {
      *(_DWORD *)(v11 + 4) = 0;
    }
  }
LABEL_9:
  v3 = v19;
LABEL_12:
  qmutex_unlock(v3);
  return v18;
}
// 13B614: using guessed type int *off_13B614;
// 13B618: using guessed type char **off_13B618;
// 13BD5C: using guessed type int dword_13BD5C;
