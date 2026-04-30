__int64 __fastcall jumpto_watch_ah_t__::vfunc_4(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        QT::QAbstractItemView *a10)
{
  __int64 *v10; // rax
  double v11; // xmm4_8
  double v12; // xmm5_8
  unsigned int v13; // ebx
  int v15; // [rsp+0h] [rbp-38h] BYREF
  __int64 v16; // [rsp+8h] [rbp-30h]
  unsigned __int64 v17; // [rsp+18h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  v10 = (__int64 *)sub_3E0310(a10);
  if ( v10 )
  {
    v13 = 0;
    sub_3DFD50(&v15, v10, a1, a2, a3, a4, v11, v12, a7, a8);
    if ( v15 == 6 )
      v13 = (unsigned __int8)sub_192AA0(0, v16, -1, 1u);
    cleanup_argloc(&v15);
  }
  else
  {
    return 0;
  }
  return v13;
}
