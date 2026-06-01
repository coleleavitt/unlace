/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: del_idc_func
// Address: 0x000000000006B4BC

//----- (000000000006B4BC) ----------------------------------------------------
__int64 __fastcall del_idc_func(const char *a1)
{
  const char *v1; // x20
  pthread_mutex_t *v2; // x19
  unsigned __int8 v3; // w8
  unsigned __int64 v4; // x24
  __int64 v5; // x23
  _UNKNOWN **v6; // x22
  __int64 v7; // x21
  unsigned __int64 v8; // x25
  _QWORD *v10; // x0

  v1 = a1;
  if ( a1 )
  {
    v2 = (pthread_mutex_t *)qword_166AA8;
    qmutex_lock((pthread_mutex_t *)qword_166AA8);
    v3 = atomic_load((unsigned __int8 *)&byte_166AE8);
    if ( (v3 & 1) == 0 && _cxa_guard_acquire((__guard *)&byte_166AE8) )
    {
      v10 = operator new(0x80u);
      *(_QWORD *)((char *)v10 + 117) = 0;
      v10[14] = 0;
      *((_OWORD *)v10 + 5) = 0u;
      *((_OWORD *)v10 + 6) = 0u;
      *((_OWORD *)v10 + 3) = 0u;
      *((_OWORD *)v10 + 4) = 0u;
      *((_OWORD *)v10 + 1) = 0u;
      *((_OWORD *)v10 + 2) = 0u;
      *(_OWORD *)v10 = 0u;
      qword_166AE0 = (__int64)v10;
      _cxa_guard_release((__guard *)&byte_166AE8);
    }
    v4 = qword_164A28;
    if ( !qword_164A28 )
      goto LABEL_10;
    v5 = qword_166AE0;
    v6 = off_164A30;
    v7 = 0;
    v8 = 0;
    while ( strcmp((const char *)v6[v7], v1) )
    {
      ++v8;
      v7 += 5;
      if ( v8 >= v4 )
        goto LABEL_10;
    }
    if ( &v6[v7] && 0xCCCCCCCCCCCCCCCDLL * ((v7 * 8) >> 3) >= *(_QWORD *)(v5 + 48) )
    {
      LODWORD(v1) = 1;
      v6[v7 + 1] = nullptr;
    }
    else
    {
LABEL_10:
      LODWORD(v1) = 0;
    }
    qmutex_unlock(v2);
  }
  return (unsigned int)v1;
}
// 164A28: using guessed type __int64 qword_164A28;
// 164A30: using guessed type _UNKNOWN **off_164A30;
// 166AA8: using guessed type __int64 qword_166AA8;
// 166AE0: using guessed type __int64 qword_166AE0;
// 166AE8: using guessed type char byte_166AE8;
