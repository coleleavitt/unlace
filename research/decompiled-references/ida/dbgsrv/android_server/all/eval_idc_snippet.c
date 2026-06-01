/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eval_idc_snippet
// Address: 0x000000000006865C

//----- (000000000006865C) ----------------------------------------------------
__int64 __fastcall eval_idc_snippet(unsigned __int8 *a1, const char *a2, pthread_mutex_t *a3, __int64 a4)
{
  unsigned __int8 v7; // w8
  __int64 v9; // x23
  int v10; // w24
  char v11; // w0
  char v12; // w22
  _QWORD *v14; // x0
  pthread_mutex_t v15; // [xsp+8h] [xbp-58h] BYREF

  *(&v15.__align + 2) = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v7 = atomic_load((unsigned __int8 *)&byte_166AE8);
  if ( (v7 & 1) == 0 && _cxa_guard_acquire((__guard *)&byte_166AE8) )
  {
    v14 = operator new(0x80u);
    *(_QWORD *)((char *)v14 + 117) = 0;
    v14[14] = 0;
    *((_OWORD *)v14 + 5) = 0u;
    *((_OWORD *)v14 + 6) = 0u;
    *((_OWORD *)v14 + 3) = 0u;
    *((_OWORD *)v14 + 4) = 0u;
    *((_OWORD *)v14 + 1) = 0u;
    *((_OWORD *)v14 + 2) = 0u;
    *(_OWORD *)v14 = 0u;
    qword_166AE0 = (__int64)v14;
    _cxa_guard_release((__guard *)&byte_166AE8);
  }
  v9 = qword_166AE0;
  v10 = sub_681B0(qword_166AE0);
  qsnprintf(&v15, 16, "___idcexec%d", v10);
  v11 = compile_idc_snippet((const char *)&v15, a2, (__int64)a3, a4, 0);
  v12 = 0;
  if ( (v11 & 1) != 0 )
    v12 = call_idc_func(a1, (__int64)&v15, nullptr, 0, a3, a4);
  sub_68248(v9, v10);
  return v12 & 1;
}
// 166AE0: using guessed type __int64 qword_166AE0;
// 166AE8: using guessed type char byte_166AE8;
