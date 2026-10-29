/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: add_idc_gvar
// Address: 0x0000000000069F44

//----- (0000000000069F44) ----------------------------------------------------
__int64 __fastcall add_idc_gvar(const char *a1)
{
  pthread_mutex_t *v1; // x19
  unsigned __int8 v3; // w8
  __int64 v4; // x20
  _QWORD *v6; // x0

  v1 = (pthread_mutex_t *)qword_166AA8;
  qmutex_lock((pthread_mutex_t *)qword_166AA8);
  v3 = atomic_load((unsigned __int8 *)&byte_166AE8);
  if ( (v3 & 1) == 0 && _cxa_guard_acquire((__guard *)&byte_166AE8) )
  {
    v6 = operator new(0x80u);
    *(_QWORD *)((char *)v6 + 117) = 0;
    v6[14] = 0;
    *((_OWORD *)v6 + 5) = 0u;
    *((_OWORD *)v6 + 6) = 0u;
    *((_OWORD *)v6 + 3) = 0u;
    *((_OWORD *)v6 + 4) = 0u;
    *((_OWORD *)v6 + 1) = 0u;
    *((_OWORD *)v6 + 2) = 0u;
    *(_OWORD *)v6 = 0u;
    qword_166AE0 = (__int64)v6;
    _cxa_guard_release((__guard *)&byte_166AE8);
  }
  v4 = sub_6A018(qword_166AE0, a1);
  qmutex_unlock(v1);
  return v4;
}
// 166AA8: using guessed type __int64 qword_166AA8;
// 166AE0: using guessed type __int64 qword_166AE0;
// 166AE8: using guessed type char byte_166AE8;
