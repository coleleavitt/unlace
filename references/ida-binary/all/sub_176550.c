unsigned __int64 __fastcall sub_176550(int *a1, __int64 a2, __m128i a3, __m128i a4)
{
  QT::QEventPoint *v5; // rdi
  __m128d v6; // xmm2
  double (*v7)(); // rax
  __int64 v8; // r15
  __m128i v9; // xmm3
  int v10; // ebp
  int v11; // r12d
  double v13; // [rsp+0h] [rbp-108h]
  __m128i v14; // [rsp+8h] [rbp-100h] BYREF
  _OWORD v15[4]; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE v16[16]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v17[24]; // [rsp+70h] [rbp-98h] BYREF
  double v18; // [rsp+88h] [rbp-80h]
  double v19; // [rsp+98h] [rbp-70h]
  unsigned __int64 v20; // [rsp+C8h] [rbp-40h]

  v5 = *(QT::QEventPoint **)(a2 + 48);
  v20 = __readfsqword(0x28u);
  QT::QEventPoint::position(v5);
  v6 = (__m128d)_mm_unpacklo_epi64(a3, a4);
  v7 = *(double (**)())(*(_QWORD *)a1 + 312LL);
  v13 = 1.0;
  v14.m128i_i64[0] = _mm_cvttpd_epi32(
                       _mm_add_pd(
                         _mm_or_pd(
                           _mm_unpacklo_pd((__m128d)0x3FE0000000000000uLL, (__m128d)0x3FE0000000000000uLL),
                           _mm_and_pd(_mm_unpacklo_pd((__m128d)0x8000000000000000LL, (__m128d)0x8000000000000000LL), v6)),
                         v6)).m128i_u64[0];
  if ( v7 != sub_172F90 )
    v13 = ((double (__fastcall *)(int *))v7)(a1);
  v8 = *((_QWORD *)a1 + 2);
  memset(v15, 0, sizeof(v15));
  QT::QFont::QFont((QT::QFont *)v16);
  QT::QFont::QFont((QT::QFont *)&v14.m128i_u64[1]);
  QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v17, (const QT::QFont *)&v14.m128i_u64[1]);
  QT::QFont::~QFont((QT::QFont *)&v14.m128i_u64[1]);
  sub_1C8200(v15, v8, v13);
  if ( (*(_BYTE *)(a2 + 68) & 1) != 0 )
  {
    v9 = _mm_loadl_epi64(&v14);
    v10 = _mm_cvtsi128_si32(v9);
    v11 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v9, 229));
    if ( (double)v10 / v18 != (double)a1[20] / v18 || (double)v11 / v19 != (double)a1[21] / v19 )
    {
      if ( !(unsigned __int8)sub_1EAD70(*((_QWORD *)a1 + 2) + 216LL) )
        sub_1FDAA0(*((_QWORD *)a1 + 2), 1);
      (*(void (__fastcall **)(int *, _QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 288LL))(
        a1,
        (unsigned int)v10,
        (unsigned int)v11,
        1);
      *((_QWORD *)a1 + 10) = v14.m128i_i64[0];
    }
  }
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v17);
  QT::QFont::~QFont((QT::QFont *)v16);
  return v20 - __readfsqword(0x28u);
}
