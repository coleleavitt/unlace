/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002F0C0
// Address: 0x000000010002F0C0

//----- (000000010002F0C0) ----------------------------------------------------
__int64 __fastcall sub_10002F0C0(unsigned __int64 a1)
{
  __int64 v2; // x0
  _OWORD *v4; // x0
  __int64 _18; // [xsp+18h] [xbp+8h]

  if ( (atomic_load_explicit((atomic_uchar *volatile)&qword_1000A59B0, memory_order_acquire) & 1) == 0
    && __cxa_guard_acquire(&qword_1000A59B0) )
  {
    v4 = operator new(0x80u);
    *(_OWORD *)((char *)v4 + 109) = 0u;
    v4[5] = 0u;
    v4[6] = 0u;
    v4[3] = 0u;
    v4[4] = 0u;
    v4[1] = 0u;
    v4[2] = 0u;
    *v4 = 0u;
    qword_1000A59A8 = (__int64)v4;
    __cxa_guard_release(&qword_1000A59B0);
  }
  v2 = qword_1000A59A8;
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return sub_10002F168(v2, a1);
}
// 10002F0FC: variable '_18' is possibly undefined
// 1000A59A8: using guessed type __int64 qword_1000A59A8;
// 1000A59B0: using guessed type __int64 qword_1000A59B0;
