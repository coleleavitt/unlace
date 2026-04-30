unsigned __int64 __fastcall sub_2CED80(_QWORD *a1, const __m128i *a2, QT::QAbstractSlider *a3, double a4, __m128 a5)
{
  __int32 v5; // eax
  __m128 v6; // xmm0
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  QT::QAbstractSlider *v11; // [rsp+8h] [rbp-50h]
  _UNKNOWN **v12; // [rsp+10h] [rbp-48h] BYREF
  __int32 v13; // [rsp+18h] [rbp-40h]
  __m128 v14; // [rsp+20h] [rbp-38h]
  unsigned __int64 v15; // [rsp+38h] [rbp-20h]

  v5 = a2->m128i_i32[2];
  v6 = (__m128)_mm_loadu_si128(a2 + 1);
  v15 = __readfsqword(0x28u);
  v13 = v5;
  v12 = &hexplace_t___vtable;
  v14 = v6;
  if ( v6.m128_u64[0] == -1 )
  {
    v11 = a3;
    v8 = _mm_movehl_ps(a5, v6).m128_u64[0] + *(_DWORD *)(a1[91] + 24LL) * *(_DWORD *)(a1[91] + 28LL);
    v9 = getinf(20);
    a3 = v11;
    if ( v8 >= v9 )
    {
      v10 = getinf(20);
      a3 = v11;
      v14.m128_u64[0] = v10;
    }
    else
    {
      v14.m128_u64[0] = v14.m128_u64[1];
    }
  }
  return sub_27D5C0(a1, (__int64)&v12, a3);
}
