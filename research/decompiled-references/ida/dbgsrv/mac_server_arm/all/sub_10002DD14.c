/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002DD14
// Address: 0x000000010002DD14

//----- (000000010002DD14) ----------------------------------------------------
__int64 __fastcall sub_10002DD14(unsigned __int64 a1)
{
  _OWORD *v3; // x0

  if ( (atomic_load_explicit((atomic_uchar *volatile)&qword_10009D9B0, memory_order_acquire) & 1) == 0
    && __cxa_guard_acquire(&qword_10009D9B0) )
  {
    v3 = operator new(0x80u);
    *(_OWORD *)((char *)v3 + 109) = 0u;
    v3[5] = 0u;
    v3[6] = 0u;
    v3[3] = 0u;
    v3[4] = 0u;
    v3[1] = 0u;
    v3[2] = 0u;
    *v3 = 0u;
    qword_10009D9A8 = (__int64)v3;
    __cxa_guard_release(&qword_10009D9B0);
  }
  return sub_10002DDA8(qword_10009D9A8, a1);
}
// 10009D9A8: using guessed type __int64 qword_10009D9A8;
// 10009D9B0: using guessed type __int64 qword_10009D9B0;
