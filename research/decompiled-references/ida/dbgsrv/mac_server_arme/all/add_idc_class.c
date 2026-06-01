/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: add_idc_class
// Address: 0x000000010002F3EC

//----- (000000010002F3EC) ----------------------------------------------------
char *__fastcall add_idc_class(const char *a1, __int64 a2)
{
  _QWORD *v4; // x0
  _OWORD *v6; // x0
  __int64 _28; // [xsp+28h] [xbp+8h]

  if ( (atomic_load_explicit((atomic_uchar *volatile)&qword_1000A59B0, memory_order_acquire) & 1) == 0
    && __cxa_guard_acquire(&qword_1000A59B0) )
  {
    v6 = operator new(0x80u);
    *(_OWORD *)((char *)v6 + 109) = 0u;
    v6[5] = 0u;
    v6[6] = 0u;
    v6[3] = 0u;
    v6[4] = 0u;
    v6[1] = 0u;
    v6[2] = 0u;
    *v6 = 0u;
    qword_1000A59A8 = (__int64)v6;
    __cxa_guard_release(&qword_1000A59B0);
  }
  v4 = (_QWORD *)qword_1000A59A8;
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return sub_10002F4A4(v4, a1, a2);
}
// 10002F438: variable '_28' is possibly undefined
// 1000A59A8: using guessed type __int64 qword_1000A59A8;
// 1000A59B0: using guessed type __int64 qword_1000A59B0;
