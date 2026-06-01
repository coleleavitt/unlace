/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: find_idc_gvar
// Address: 0x0000000000069D7C

//----- (0000000000069D7C) ----------------------------------------------------
__int64 __fastcall find_idc_gvar(const char *a1)
{
  unsigned __int8 v1; // w8
  pthread_mutex_t *v3; // x20
  __int64 v4; // x21
  __int64 v5; // x8
  __int64 v6; // x22
  __int64 v7; // x21
  const char *v8; // x0
  _QWORD *v9; // x0

  v1 = atomic_load((unsigned __int8 *)&byte_166AE8);
  if ( (v1 & 1) != 0 || !_cxa_guard_acquire((__guard *)&byte_166AE8) )
  {
    if ( !a1 )
      return 0;
  }
  else
  {
    v9 = operator new(0x80u);
    *(_QWORD *)((char *)v9 + 117) = 0;
    v9[14] = 0;
    *((_OWORD *)v9 + 5) = 0u;
    *((_OWORD *)v9 + 6) = 0u;
    *((_OWORD *)v9 + 3) = 0u;
    *((_OWORD *)v9 + 4) = 0u;
    *((_OWORD *)v9 + 1) = 0u;
    *((_OWORD *)v9 + 2) = 0u;
    *(_OWORD *)v9 = 0u;
    qword_166AE0 = (__int64)v9;
    _cxa_guard_release((__guard *)&byte_166AE8);
    if ( !a1 )
      return 0;
  }
  v3 = (pthread_mutex_t *)qword_166AA8;
  v4 = qword_166AE0;
  qmutex_lock((pthread_mutex_t *)qword_166AA8);
  v5 = *(_QWORD *)(v4 + 96);
  if ( 56 * v5 )
  {
    v6 = 56 * v5;
    v7 = *(_QWORD *)(v4 + 88) + 24LL;
    while ( 1 )
    {
      v8 = *(_QWORD *)(v7 - 16) ? *(const char **)(v7 - 24) : &byte_F154B;
      if ( !strcmp(v8, a1) )
        break;
      v6 -= 56;
      v7 += 56;
      if ( !v6 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    v7 = 0;
  }
  qmutex_unlock(v3);
  return v7;
}
// F154B: using guessed type char byte_F154B;
// 166AA8: using guessed type __int64 qword_166AA8;
// 166AE0: using guessed type __int64 qword_166AE0;
// 166AE8: using guessed type char byte_166AE8;
