/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68610
// Address: 0x0000000000068610

//----- (0000000000068610) ----------------------------------------------------
void *__fastcall sub_68610(const char *a1, _DWORD *a2, size_t *a3)
{
  pthread_mutex_t *v4; // r15
  _QWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbp
  size_t v8; // r12
  void *v9; // rax
  void *v10; // rbx

  v4 = (pthread_mutex_t *)qword_1557E8;
  qmutex_lock((pthread_mutex_t *)qword_1557E8);
  v5 = (_QWORD *)sub_6B0F0();
  v6 = sub_6CBE0(v5, a1);
  if ( v6 == -1 )
    goto LABEL_9;
  v7 = *(_QWORD *)(*v5 + 8 * v6);
  v8 = *(_QWORD *)(v7 + 40);
  if ( !v8 )
    goto LABEL_9;
  if ( a3 )
    *a3 = v8;
  if ( a2 )
    *a2 = *(_DWORD *)(v7 + 24);
  v9 = qalloc(v8);
  v10 = v9;
  if ( v9 )
    memcpy(v9, *(const void **)(v7 + 32), v8);
  else
LABEL_9:
    v10 = nullptr;
  qmutex_unlock(v4);
  return v10;
}
