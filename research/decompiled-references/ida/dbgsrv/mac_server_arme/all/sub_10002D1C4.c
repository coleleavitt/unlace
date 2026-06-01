/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002D1C4
// Address: 0x000000010002D1C4

//----- (000000010002D1C4) ----------------------------------------------------
__int64 sub_10002D1C4()
{
  _OWORD *v1; // x0

  if ( (atomic_load_explicit((atomic_uchar *volatile)&qword_1000A59B0, memory_order_acquire) & 1) == 0
    && __cxa_guard_acquire(&qword_1000A59B0) )
  {
    v1 = operator new(0x80u);
    *(_OWORD *)((char *)v1 + 109) = 0u;
    v1[5] = 0u;
    v1[6] = 0u;
    v1[3] = 0u;
    v1[4] = 0u;
    v1[1] = 0u;
    v1[2] = 0u;
    *v1 = 0u;
    qword_1000A59A8 = (__int64)v1;
    __cxa_guard_release(&qword_1000A59B0);
  }
  return qword_1000A59A8;
}
// 1000A59A8: using guessed type __int64 qword_1000A59A8;
// 1000A59B0: using guessed type __int64 qword_1000A59B0;
