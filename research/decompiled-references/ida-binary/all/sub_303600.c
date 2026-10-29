__int64 __fastcall sub_303600(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10)
{
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  char v19; // [rsp+0h] [rbp-8h]

  if ( dword_8CD7E0 )
  {
    v11 = getinf(5);
    if ( (unsigned int)v11 <= 0xD )
    {
      v12 = -8293;
      if ( !_bittest64(&v12, v11) && getinf(16) == -1 )
        sub_300630(1199, a10, v13, v14, v15, v16, a1, a2, a3, a4, v17, v18, a7, a8, v19);
    }
  }
  sub_346E30(qword_8CF010, 1);
  sub_30F0E0(qword_8CD748);
  sub_47DB70(QT::QCoreApplication::self);
  set_ida_state(0);
  return sub_388330();
}
