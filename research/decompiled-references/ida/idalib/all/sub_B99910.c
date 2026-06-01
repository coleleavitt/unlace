unsigned __int64 __fastcall sub_B99910(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  unsigned __int64 v11; // r13
  __m128 v12; // xmm0
  __m128i si128; // xmm1
  __m128i v14; // xmm0
  __m128i v16; // [rsp+0h] [rbp-58h] BYREF
  __m128i v17[4]; // [rsp+10h] [rbp-48h] BYREF

  v16.m128i_i64[0] = a5;
  v17[0].m128i_i64[0] = a6;
  v11 = sub_B902D0(88, a1, a2, 0);
  if ( !(_BYTE)qword_2CCC3F8 && __cxa_guard_acquire(&qword_2CCC3F8) )
  {
    unk_2CCC400 = 2;
    __cxa_guard_release(&qword_2CCC3F8);
  }
  v12 = _mm_loadh_ps((const double *)&a9);
  v17[0] = (__m128i)_mm_loadh_ps((const double *)v17[0].m128i_i64);
  v16 = (__m128i)v12;
  sub_B725B0(v11, 0x38u, a2, a7);
  si128 = _mm_load_si128(v17);
  *(_QWORD *)(v11 + 40) = &unk_2CCC407;
  v14 = _mm_load_si128(&v16);
  *(_DWORD *)(v11 + 48) = a3;
  *(_DWORD *)(v11 + 52) = a4;
  *(_QWORD *)v11 = &off_2C02F98;
  *(__m128i *)(v11 + 56) = si128;
  *(__m128i *)(v11 + 72) = v14;
  return v11;
}
