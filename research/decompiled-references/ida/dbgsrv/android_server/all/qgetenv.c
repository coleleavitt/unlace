/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qgetenv
// Address: 0x00000000000C2CC8

//----- (00000000000C2CC8) ----------------------------------------------------
__int64 __fastcall qgetenv(char *name, __int64 a2)
{
  pthread_mutex_t *v4; // x19
  char *v5; // x0
  char *v6; // x21
  size_t v7; // x0
  unsigned __int64 v8; // x23
  size_t v9; // x22
  void *v10; // x0
  unsigned int v11; // w20

  if ( !qword_168E08 )
  {
    qword_168E08 = pthread_self();
    v4 = qmutex_create();
    qword_168E10 = (__int64)v4;
    if ( !v4 )
      goto LABEL_4;
    goto LABEL_3;
  }
  v4 = (pthread_mutex_t *)qword_168E10;
  if ( qword_168E10 )
LABEL_3:
    pthread_mutex_lock(v4);
LABEL_4:
  v5 = getenv(name);
  if ( !v5 || (v6 = v5, !*v5) )
  {
    v11 = 0;
    if ( !v4 )
      return v11;
    goto LABEL_19;
  }
  if ( !a2 )
    goto LABEL_15;
  v7 = strlen(v5);
  if ( !v7 )
  {
    *(_QWORD *)(a2 + 8) = 0;
LABEL_15:
    v11 = 1;
    if ( !v4 )
      return v11;
    goto LABEL_19;
  }
  v8 = v7 + 1;
  v9 = v7;
  if ( *(_QWORD *)(a2 + 16) >= v7 + 1 )
  {
    v10 = *(void **)a2;
  }
  else
  {
    v10 = qvector_reserve((pthread_mutex_t *)a2, *(void **)a2, v8, 1u);
    *(_QWORD *)a2 = v10;
  }
  *(_QWORD *)(a2 + 8) = v8;
  memmove(v10, v6, v9);
  *(_BYTE *)(*(_QWORD *)a2 + v9) = 0;
  v11 = 1;
  if ( v4 )
LABEL_19:
    pthread_mutex_unlock(v4);
  return v11;
}
// 167DD0: using guessed type __int64[512];
// 168E08: using guessed type __int64 qword_168E08;
// 168E10: using guessed type __int64 qword_168E10;
