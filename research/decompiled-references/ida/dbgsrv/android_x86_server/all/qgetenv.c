/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qgetenv
// Address: 0x000B5DC0

//----- (000B5DC0) --------------------------------------------------------
size_t __cdecl qgetenv(char *name, int a2)
{
  pthread_mutex_t *v2; // esi
  char *v3; // eax
  size_t v4; // ecx
  char *v5; // edi
  size_t v6; // eax
  int v7; // edx
  size_t v8; // esi
  _DWORD *v10; // edi
  pthread_mutex_t *v11; // [esp+0h] [ebp-2Ch]
  char *v12; // [esp+4h] [ebp-28h]
  unsigned int v13; // [esp+10h] [ebp-1Ch]
  void *v14; // [esp+14h] [ebp-18h]
  size_t v15; // [esp+18h] [ebp-14h]

  if ( dword_13E358 )
  {
    v2 = (pthread_mutex_t *)dword_13E35C;
  }
  else
  {
    dword_13E358 = pthread_self();
    v2 = qmutex_create();
    dword_13E35C = (int)v2;
  }
  if ( v2 )
    pthread_mutex_lock(v2);
  v3 = getenv(name);
  if ( !v3 )
  {
    v4 = 0;
LABEL_13:
    if ( !v2 )
      return v4;
LABEL_14:
    v11 = v2;
    v8 = v4;
    pthread_mutex_unlock(v11);
    return v8;
  }
  v5 = v3;
  if ( !*v3 )
  {
    v4 = 0;
    if ( !v2 )
      return v4;
    goto LABEL_14;
  }
  LOBYTE(v4) = 1;
  if ( !a2 )
    goto LABEL_13;
  v6 = strlen(v3);
  if ( v6 )
  {
    v13 = v6 + 1;
    v7 = a2;
    v15 = v6;
    if ( *(_DWORD *)(a2 + 8) >= v6 + 1 )
    {
      v14 = *(void **)a2;
    }
    else
    {
      v14 = qvector_reserve(a2, *(void **)a2, v13, 1u);
      v7 = a2;
      *(_DWORD *)a2 = v14;
      v6 = v15;
    }
    *(_DWORD *)(v7 + 4) = v13;
    v12 = v5;
    v10 = (_DWORD *)v7;
    memmove(v14, v12, v6);
    v4 = v15;
    *(_BYTE *)(*v10 + v15) = 0;
  }
  else
  {
    *(_DWORD *)(a2 + 4) = 0;
  }
  LOBYTE(v4) = 1;
  if ( v2 )
    goto LABEL_14;
  return v4;
}
// B5E84: variable 'v4' is possibly undefined
// 13E358: using guessed type int dword_13E358;
// 13E35C: using guessed type int dword_13E35C;
