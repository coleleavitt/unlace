/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002DB50
// Address: 0x000000010002DB50

//----- (000000010002DB50) ----------------------------------------------------
bool __fastcall sub_10002DB50(const char *a1, int a2, void *a3, unsigned __int64 a4)
{
  pthread_mutex_t *v5; // rbx
  _QWORD *v6; // r12
  __int64 v7; // r13
  __int64 v8; // r12
  unsigned __int8 v11; // [rsp+Fh] [rbp-31h] BYREF

  v5 = (pthread_mutex_t *)qword_1000AD0F0;
  qmutex_lock((pthread_mutex_t *)qword_1000AD0F0);
  v6 = (_QWORD *)sub_100032010();
  v7 = sub_100033AD0((__int64)v6, a1);
  if ( v7 != -1 )
  {
    v8 = *(_QWORD *)(*v6 + 8 * v7);
    v11 = 0;
    sub_10001CE90(v8 + 32, a4, &v11);
    memcpy(*(void **)(v8 + 32), a3, a4);
    sub_100032E00((_QWORD *)(v8 + 32), (__int64 *)a3);
    *(_DWORD *)(v8 + 24) = a2;
    *(_DWORD *)(v8 + 136) = 0;
  }
  qmutex_unlock(v5);
  return v7 != -1;
}
// 1000AD0F0: using guessed type __int64 qword_1000AD0F0;
