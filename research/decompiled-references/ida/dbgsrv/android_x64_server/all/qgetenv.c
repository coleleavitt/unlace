/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qgetenv
// Address: 0x00000000000C7C10

//----- (00000000000C7C10) ----------------------------------------------------
__int64 __fastcall qgetenv(char *name, __int64 a2)
{
  unsigned int v2; // r15d
  pthread_mutex_t *v3; // rbx
  char *v4; // rax
  char *v5; // rbp
  size_t v6; // rax
  size_t v7; // r12
  size_t v8; // r13
  char *v9; // rdi

  if ( thread2 )
  {
    v3 = mutex;
    if ( !mutex )
      goto LABEL_4;
    goto LABEL_3;
  }
  thread2 = pthread_self();
  v3 = qmutex_create();
  mutex = v3;
  if ( v3 )
LABEL_3:
    pthread_mutex_lock(v3);
LABEL_4:
  v4 = getenv(name);
  if ( !v4 )
  {
    v2 = 0;
LABEL_13:
    if ( !v3 )
      return v2;
    goto LABEL_14;
  }
  v5 = v4;
  if ( !*v4 )
  {
    v2 = 0;
    if ( !v3 )
      return v2;
    goto LABEL_14;
  }
  LOBYTE(v2) = 1;
  if ( !a2 )
    goto LABEL_13;
  v6 = strlen(v4);
  if ( !v6 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    if ( !v3 )
      return v2;
    goto LABEL_14;
  }
  v7 = v6;
  v8 = v6 + 1;
  if ( *(_QWORD *)(a2 + 16) >= v6 + 1 )
  {
    v9 = *(char **)a2;
  }
  else
  {
    v9 = (char *)qvector_reserve(a2, *(char **)a2, v6 + 1, 1u);
    *(_QWORD *)a2 = v9;
  }
  *(_QWORD *)(a2 + 8) = v8;
  memmove(v9, v5, v7);
  *(_BYTE *)(*(_QWORD *)a2 + v7) = 0;
  if ( v3 )
LABEL_14:
    pthread_mutex_unlock(v3);
  return v2;
}
// C7CC7: variable 'v2' is possibly undefined
