/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: find_idc_class
// Address: 0x000000000006A2CC

//----- (000000000006A2CC) ----------------------------------------------------
__int64 __fastcall find_idc_class(const char *a1)
{
  unsigned __int8 v1; // w8
  pthread_mutex_t *v3; // x20
  __int64 v4; // x21
  unsigned __int64 v5; // x22
  __int64 v6; // x23
  __int64 v7; // x8
  int v8; // w24
  __int64 v9; // x21
  const char *v10; // x0
  _QWORD *v12; // x0

  v1 = atomic_load((unsigned __int8 *)&byte_166AE8);
  if ( (v1 & 1) != 0 || !_cxa_guard_acquire((__guard *)&byte_166AE8) )
  {
    if ( !a1 )
      return 0;
  }
  else
  {
    v12 = operator new(0x80u);
    *(_QWORD *)((char *)v12 + 117) = 0;
    v12[14] = 0;
    *((_OWORD *)v12 + 5) = 0u;
    *((_OWORD *)v12 + 6) = 0u;
    *((_OWORD *)v12 + 3) = 0u;
    *((_OWORD *)v12 + 4) = 0u;
    *((_OWORD *)v12 + 1) = 0u;
    *((_OWORD *)v12 + 2) = 0u;
    *(_OWORD *)v12 = 0u;
    qword_166AE0 = (__int64)v12;
    _cxa_guard_release((__guard *)&byte_166AE8);
    if ( !a1 )
      return 0;
  }
  v3 = (pthread_mutex_t *)qword_166AA8;
  v4 = qword_166AE0;
  qmutex_lock((pthread_mutex_t *)qword_166AA8);
  v5 = *(_QWORD *)(v4 + 72);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v4 + 64);
    v7 = 0;
    v8 = 1;
    while ( 1 )
    {
      v9 = *(_QWORD *)(v6 + 8 * v7);
      v10 = *(_QWORD *)(v9 + 40) ? *(const char **)(v9 + 32) : &byte_F154B;
      if ( !strcmp(v10, a1) )
        break;
      v7 = v8;
      if ( v5 <= v8++ )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    v9 = 0;
  }
  qmutex_unlock(v3);
  return v9;
}
// F154B: using guessed type char byte_F154B;
// 166AA8: using guessed type __int64 qword_166AA8;
// 166AE0: using guessed type __int64 qword_166AE0;
// 166AE8: using guessed type char byte_166AE8;
