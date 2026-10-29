/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qgetenv
// Address: 0x00081C0C

//----- (00081C0C) --------------------------------------------------------
int __fastcall qgetenv(char *name, int a2)
{
  pthread_mutex_t *v4; // r4
  char *v5; // r0
  int v6; // r6
  char *v7; // r7
  size_t v8; // r0
  size_t v9; // r2
  unsigned int v10; // r1
  void *v11; // r0
  char *v13; // r1
  size_t v14; // r7
  unsigned int v15; // [sp+8h] [bp-8h]
  size_t v16; // [sp+Ch] [bp-4h]

  if ( !dword_E055C )
  {
    dword_E055C = pthread_self();
    v4 = qmutex_create();
    dword_E0560 = (int)v4;
    if ( !v4 )
      goto LABEL_4;
    goto LABEL_3;
  }
  v4 = (pthread_mutex_t *)dword_E0560;
  if ( dword_E0560 )
LABEL_3:
    pthread_mutex_lock(v4);
LABEL_4:
  v5 = getenv(name);
  v6 = 0;
  if ( !v5 || (v7 = v5, !*v5) || (v6 = 1, !a2) )
  {
LABEL_13:
    if ( !v4 )
      return v6;
LABEL_14:
    pthread_mutex_unlock(v4);
    return v6;
  }
  v8 = strlen(v5);
  if ( !v8 )
  {
    *(_DWORD *)(a2 + 4) = 0;
    goto LABEL_13;
  }
  v9 = v8;
  v10 = v8 + 1;
  if ( *(_DWORD *)(a2 + 8) >= v8 + 1 )
  {
    v11 = *(void **)a2;
  }
  else
  {
    v16 = v8;
    v15 = v8 + 1;
    v11 = qvector_reserve(a2, *(void **)a2, v10, 1u);
    *(_DWORD *)a2 = v11;
    v9 = v16;
    v10 = v15;
  }
  *(_DWORD *)(a2 + 4) = v10;
  v13 = v7;
  v14 = v9;
  memmove(v11, v13, v9);
  *(_BYTE *)(*(_DWORD *)a2 + v14) = 0;
  if ( v4 )
    goto LABEL_14;
  return v6;
}
// E055C: using guessed type int dword_E055C;
// E0560: using guessed type int dword_E0560;
