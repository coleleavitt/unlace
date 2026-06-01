/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000760CC
// Address: 0x00000001000760CC

//----- (00000001000760CC) ----------------------------------------------------
__int64 sub_1000760CC()
{
  void *v1; // x20

  if ( (atomic_load_explicit((atomic_uchar *volatile)&qword_1000A63D0, memory_order_acquire) & 1) == 0
    && __cxa_guard_acquire(&qword_1000A63D0) )
  {
    v1 = operator new(0x50u);
    sub_100075720((__int64)v1);
    qword_1000A63C8 = (__int64)v1;
    __cxa_guard_release(&qword_1000A63D0);
  }
  sub_100075D2C(qword_1000A63C8);
  return qword_1000A63C8;
}
// 1000A5F98: using guessed type __int64 qword_1000A5F98[128];
// 1000A63C8: using guessed type __int64 qword_1000A63C8;
// 1000A63D0: using guessed type __int64 qword_1000A63D0;
