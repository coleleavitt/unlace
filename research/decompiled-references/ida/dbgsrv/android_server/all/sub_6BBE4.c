/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6BBE4
// Address: 0x000000000006BBE4

//----- (000000000006BBE4) ----------------------------------------------------
pthread_mutex_t *sub_6BBE4()
{
  unsigned __int8 v0; // w8
  _QWORD *v2; // x0

  remove_extlang((__int64)qword_164A90);
  v0 = atomic_load((unsigned __int8 *)&byte_166AE8);
  if ( (v0 & 1) == 0 && _cxa_guard_acquire((__guard *)&byte_166AE8) )
  {
    v2 = operator new(0x80u);
    *(_QWORD *)((char *)v2 + 117) = 0;
    v2[14] = 0;
    *((_OWORD *)v2 + 5) = 0u;
    *((_OWORD *)v2 + 6) = 0u;
    *((_OWORD *)v2 + 3) = 0u;
    *((_OWORD *)v2 + 4) = 0u;
    *((_OWORD *)v2 + 1) = 0u;
    *((_OWORD *)v2 + 2) = 0u;
    *(_OWORD *)v2 = 0u;
    qword_166AE0 = (__int64)v2;
    _cxa_guard_release((__guard *)&byte_166AE8);
  }
  sub_6BC94(qword_166AE0);
  qmutex_free((pthread_mutex_t *)qword_166AA8);
  return qmutex_free((pthread_mutex_t *)qword_166A80);
}
// 164A90: using guessed type __int64 qword_164A90[2];
// 166A80: using guessed type __int64 qword_166A80;
// 166AA8: using guessed type __int64 qword_166AA8;
// 166AE0: using guessed type __int64 qword_166AE0;
// 166AE8: using guessed type char byte_166AE8;
