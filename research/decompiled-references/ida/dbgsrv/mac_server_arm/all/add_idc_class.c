/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: add_idc_class
// Address: 0x000000010002E020

//----- (000000010002E020) ----------------------------------------------------
char *__fastcall add_idc_class(const char *a1, __int64 a2)
{
  _OWORD *v5; // x0

  if ( (atomic_load_explicit((atomic_uchar *volatile)&qword_10009D9B0, memory_order_acquire) & 1) == 0
    && __cxa_guard_acquire(&qword_10009D9B0) )
  {
    v5 = operator new(0x80u);
    *(_OWORD *)((char *)v5 + 109) = 0u;
    v5[5] = 0u;
    v5[6] = 0u;
    v5[3] = 0u;
    v5[4] = 0u;
    v5[1] = 0u;
    v5[2] = 0u;
    *v5 = 0u;
    qword_10009D9A8 = (__int64)v5;
    __cxa_guard_release(&qword_10009D9B0);
  }
  return sub_10002E0C4((_QWORD *)qword_10009D9A8, a1, a2);
}
// 10009D9A8: using guessed type __int64 qword_10009D9A8;
// 10009D9B0: using guessed type __int64 qword_10009D9B0;
