/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002FFA8
// Address: 0x000000010002FFA8

//----- (000000010002FFA8) ----------------------------------------------------
pthread_mutex_t *sub_10002FFA8()
{
  pthread_mutex_t *v0; // x0
  _OWORD *v2; // x0
  __int64 _18; // [xsp+18h] [xbp+8h]

  remove_extlang((__int64)qword_1000A4A68);
  if ( (atomic_load_explicit((atomic_uchar *volatile)&qword_1000A59B0, memory_order_acquire) & 1) == 0
    && __cxa_guard_acquire(&qword_1000A59B0) )
  {
    v2 = operator new(0x80u);
    *(_OWORD *)((char *)v2 + 109) = 0u;
    v2[5] = 0u;
    v2[6] = 0u;
    v2[3] = 0u;
    v2[4] = 0u;
    v2[1] = 0u;
    v2[2] = 0u;
    *v2 = 0u;
    qword_1000A59A8 = (__int64)v2;
    __cxa_guard_release(&qword_1000A59B0);
  }
  sub_100030070(qword_1000A59A8);
  qmutex_free((pthread_mutex_t *)qword_1000A57C0);
  v0 = (pthread_mutex_t *)qword_1000A57B8;
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return qmutex_free(v0);
}
// 100030004: variable '_18' is possibly undefined
// 1000A4A68: using guessed type __int64 qword_1000A4A68[2];
// 1000A57B8: using guessed type __int64 qword_1000A57B8;
// 1000A57C0: using guessed type __int64 qword_1000A57C0;
// 1000A59A8: using guessed type __int64 qword_1000A59A8;
// 1000A59B0: using guessed type __int64 qword_1000A59B0;
