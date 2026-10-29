/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: find_idc_class
// Address: 0x000000010002DE40

//----- (000000010002DE40) ----------------------------------------------------
__int64 __fastcall find_idc_class(const char *a1)
{
  __int64 v2; // x21
  pthread_mutex_t *v3; // x20
  unsigned __int64 v4; // x22
  unsigned __int64 v5; // x8
  __int64 v6; // x23
  int v7; // w24
  __int64 v8; // x21
  const char *v9; // x0
  _OWORD *v11; // x0

  if ( (atomic_load_explicit((atomic_uchar *volatile)&qword_10009D9B0, memory_order_acquire) & 1) == 0
    && __cxa_guard_acquire(&qword_10009D9B0) )
  {
    v11 = operator new(0x80u);
    *(_OWORD *)((char *)v11 + 109) = 0u;
    v11[5] = 0u;
    v11[6] = 0u;
    v11[3] = 0u;
    v11[4] = 0u;
    v11[1] = 0u;
    v11[2] = 0u;
    *v11 = 0u;
    qword_10009D9A8 = (__int64)v11;
    __cxa_guard_release(&qword_10009D9B0);
  }
  if ( !a1 )
    return 0;
  v2 = qword_10009D9A8;
  v3 = (pthread_mutex_t *)qword_10009D7C0;
  qmutex_lock((pthread_mutex_t *)qword_10009D7C0);
  v4 = *(_QWORD *)(v2 + 72);
  if ( v4 )
  {
    v5 = 0;
    v6 = *(_QWORD *)(v2 + 64);
    v7 = 1;
    while ( 1 )
    {
      v8 = *(_QWORD *)(v6 + 8 * v5);
      v9 = *(_QWORD *)(v8 + 40) ? *(const char **)(v8 + 32) : &byte_100075A30;
      if ( !strcmp(v9, a1) )
        break;
      v5 = v7++;
      if ( v4 <= v5 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    v8 = 0;
  }
  qmutex_unlock(v3);
  return v8;
}
// 100075A30: using guessed type char byte_100075A30;
// 10009D7C0: using guessed type __int64 qword_10009D7C0;
// 10009D9A8: using guessed type __int64 qword_10009D9A8;
// 10009D9B0: using guessed type __int64 qword_10009D9B0;
