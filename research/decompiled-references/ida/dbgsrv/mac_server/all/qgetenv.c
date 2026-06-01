/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qgetenv
// Address: 0x000000010007F2D0

//----- (000000010007F2D0) ----------------------------------------------------
__int64 __fastcall qgetenv(char *a1, __int64 a2)
{
  unsigned int v2; // r15d
  pthread_mutex_t *v3; // rbx
  char *v4; // rax
  char *v5; // r12
  size_t v6; // rax
  size_t v7; // r13
  unsigned __int64 v8; // rdx
  void *v9; // rax
  unsigned __int64 v11; // [rsp+0h] [rbp-40h]

  v2 = (unsigned int)a1;
  if ( qword_1000AED00 )
  {
    v3 = qword_1000AED08;
  }
  else
  {
    qword_1000AED00 = pthread_self();
    v3 = qmutex_create();
    qword_1000AED08 = v3;
  }
  if ( v3 )
    pthread_mutex_lock(v3);
  v4 = getenv(a1);
  if ( !v4 )
  {
    v2 = 0;
    if ( !v3 )
      return v2;
    goto LABEL_18;
  }
  v5 = v4;
  if ( !*v4 )
  {
    v2 = 0;
LABEL_17:
    if ( !v3 )
      return v2;
    goto LABEL_18;
  }
  LOBYTE(v2) = 1;
  if ( !a2 )
    goto LABEL_17;
  v6 = strlen(v4);
  if ( !v6 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    if ( !v3 )
      return v2;
    goto LABEL_18;
  }
  v7 = v6;
  v8 = v6 + 1;
  v9 = *(void **)a2;
  if ( *(_QWORD *)(a2 + 16) < v8 )
  {
    v11 = v8;
    v9 = qvector_reserve(a2, *(void **)a2, v8, 1u);
    *(_QWORD *)a2 = v9;
    v8 = v11;
  }
  *(_QWORD *)(a2 + 8) = v8;
  memmove(v9, v5, v7);
  *(_BYTE *)(*(_QWORD *)a2 + v7) = 0;
  if ( v3 )
LABEL_18:
    pthread_mutex_unlock(v3);
  return v2;
}
