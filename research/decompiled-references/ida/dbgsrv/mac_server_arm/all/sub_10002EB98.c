/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002EB98
// Address: 0x000000010002EB98

//----- (000000010002EB98) ----------------------------------------------------
pthread_mutex_t *sub_10002EB98()
{
  _OWORD *v1; // x0

  remove_extlang((__int64)qword_10009CA68);
  if ( (atomic_load_explicit((atomic_uchar *volatile)&qword_10009D9B0, memory_order_acquire) & 1) == 0
    && __cxa_guard_acquire(&qword_10009D9B0) )
  {
    v1 = operator new(0x80u);
    *(_OWORD *)((char *)v1 + 109) = 0u;
    v1[5] = 0u;
    v1[6] = 0u;
    v1[3] = 0u;
    v1[4] = 0u;
    v1[1] = 0u;
    v1[2] = 0u;
    *v1 = 0u;
    qword_10009D9A8 = (__int64)v1;
    __cxa_guard_release(&qword_10009D9B0);
  }
  sub_10002EC4C(qword_10009D9A8);
  qmutex_free((pthread_mutex_t *)qword_10009D7C0);
  return qmutex_free((pthread_mutex_t *)qword_10009D7B8);
}
// 10009CA68: using guessed type __int64 qword_10009CA68[2];
// 10009D7B8: using guessed type __int64 qword_10009D7B8;
// 10009D7C0: using guessed type __int64 qword_10009D7C0;
// 10009D9A8: using guessed type __int64 qword_10009D9A8;
// 10009D9B0: using guessed type __int64 qword_10009D9B0;
