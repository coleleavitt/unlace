/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: find_idc_gvar
// Address: 0x000000010002EF9C

//----- (000000010002EF9C) ----------------------------------------------------
__int64 __fastcall find_idc_gvar(const char *a1)
{
  __int64 v2; // x21
  pthread_mutex_t *v3; // x20
  __int64 v4; // x22
  __int64 v5; // x21
  const char *v6; // x0
  _OWORD *v8; // x0

  if ( (atomic_load_explicit((atomic_uchar *volatile)&qword_1000A59B0, memory_order_acquire) & 1) == 0
    && __cxa_guard_acquire(&qword_1000A59B0) )
  {
    v8 = operator new(0x80u);
    *(_OWORD *)((char *)v8 + 109) = 0u;
    v8[5] = 0u;
    v8[6] = 0u;
    v8[3] = 0u;
    v8[4] = 0u;
    v8[1] = 0u;
    v8[2] = 0u;
    *v8 = 0u;
    qword_1000A59A8 = (__int64)v8;
    __cxa_guard_release(&qword_1000A59B0);
  }
  if ( !a1 )
    return 0;
  v2 = qword_1000A59A8;
  v3 = (pthread_mutex_t *)qword_1000A57C0;
  qmutex_lock((pthread_mutex_t *)qword_1000A57C0);
  v4 = 56LL * *(_QWORD *)(v2 + 96);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v2 + 88) + 24LL;
    while ( 1 )
    {
      v6 = *(_QWORD *)(v5 - 16) ? *(const char **)(v5 - 24) : &byte_10007AE40;
      if ( !strcmp(v6, a1) )
        break;
      v5 += 56;
      v4 -= 56;
      if ( !v4 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    v5 = 0;
  }
  qmutex_unlock(v3);
  return v5;
}
// 10007AE40: using guessed type char byte_10007AE40;
// 1000A57C0: using guessed type __int64 qword_1000A57C0;
// 1000A59A8: using guessed type __int64 qword_1000A59A8;
// 1000A59B0: using guessed type __int64 qword_1000A59B0;
