/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100070FEC
// Address: 0x0000000100070FEC

//----- (0000000100070FEC) ----------------------------------------------------
__int64 sub_100070FEC()
{
  void *v1; // x20

  if ( (atomic_load_explicit((atomic_uchar *volatile)&qword_10009E3D0, memory_order_acquire) & 1) == 0
    && __cxa_guard_acquire(&qword_10009E3D0) )
  {
    v1 = operator new(0x50u);
    sub_100070670((__int64)v1);
    qword_10009E3C8 = (__int64)v1;
    __cxa_guard_release(&qword_10009E3D0);
  }
  sub_100070C64(qword_10009E3C8);
  return qword_10009E3C8;
}
// 10009DF98: using guessed type __int64 qword_10009DF98[128];
// 10009E3C8: using guessed type __int64 qword_10009E3C8;
// 10009E3D0: using guessed type __int64 qword_10009E3D0;
