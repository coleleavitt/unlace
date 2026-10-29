unsigned __int64 __fastcall sub_285E50(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbp
  int v5; // r14d
  int v6; // ecx
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // r13d
  __int64 v10; // r12
  double v11; // xmm0_8
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 *v14; // rbp
  __int64 v15; // rsi
  __m128i v16; // xmm1
  __int64 v17; // rax
  __m128i v18; // xmm0
  double v20; // [rsp+0h] [rbp-1E0h]
  __int64 v22; // [rsp+18h] [rbp-1C8h] BYREF
  __m128i v23; // [rsp+20h] [rbp-1C0h] BYREF
  __m128i v24[4]; // [rsp+38h] [rbp-1A8h] BYREF
  _BYTE v25[16]; // [rsp+78h] [rbp-168h] BYREF
  _BYTE v26[40]; // [rsp+88h] [rbp-158h] BYREF
  double v27; // [rsp+B0h] [rbp-130h]
  _BYTE v28[64]; // [rsp+D8h] [rbp-108h] BYREF
  char v29[16]; // [rsp+118h] [rbp-C8h] BYREF
  char v30[96]; // [rsp+128h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+188h] [rbp-58h]
  __int64 v32; // [rsp+190h] [rbp-50h]
  unsigned __int64 v33; // [rsp+1A0h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 16);
  v33 = __readfsqword(0x28u);
  v23 = 0;
  v22 = 0;
  memset(v24, 0, sizeof(v24));
  QT::QFont::QFont((QT::QFont *)v25);
  QT::QFont::QFont((QT::QFont *)v28);
  QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v26, (const QT::QFont *)v28);
  QT::QFont::~QFont((QT::QFont *)v28);
  sub_1C8200(v24, v3, (__m128d)0x3FF0000000000000uLL);
  v20 = v27;
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v26);
  QT::QFont::~QFont((QT::QFont *)v25);
  sub_283F90((__int64)v28, a1);
  v5 = v32;
  if ( !a3 )
    v5 = v31;
  v6 = *(_DWORD *)(a1 + 424);
  v7 = (*(_QWORD *)(a1 + 416) == 0)
     + 0xF0F0F0F0F0F0F0F1LL * ((__int64)(*(_QWORD *)(a1 + 376) - *(_QWORD *)(a1 + 360)) >> 4)
     + ((__int64)(*(_QWORD *)(a1 + 416) - *(_QWORD *)(a1 + 384)) >> 3)
     - 0xF0F0F0F0F0F0F0FLL * ((__int64)(*(_QWORD *)(a1 + 392) - *(_QWORD *)(a1 + 400)) >> 4)
     - 1;
  v8 = (unsigned int)(v7 - v6);
  if ( v7 < v6 + v5 )
    v5 = v7 - v6;
  if ( v23.m128i_i64[1] < (unsigned __int64)v5 )
  {
    v8 = v22;
    v22 = qvector_reserve(&v22, v22, v5, 16);
  }
  v9 = 0;
  if ( v5 > 0 )
  {
    do
    {
      v12 = sub_284860(a1, v9);
      v13 = v23.m128i_i64[0];
      v14 = (__int64 *)v12;
      v15 = v22;
      if ( v23.m128i_i64[1] < (unsigned __int64)(v23.m128i_i64[0] + 1) )
      {
        v22 = qvector_reserve(&v22, v22, v23.m128i_i64[0] + 1, 16);
        v13 = v23.m128i_i64[0];
        v15 = v22;
      }
      v10 = v15 + 16 * v13;
      *(_QWORD *)v10 = -1;
      *(_QWORD *)(v10 + 8) = 0xFFFFFFFF00000000LL;
      ++v23.m128i_i64[0];
      *(_QWORD *)v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v14 + 128LL))(*v14);
      if ( *((_BYTE *)v14 + 40) )
        *(_WORD *)(v10 + 10) |= 1u;
      v8 = *v14;
      *(_DWORD *)(v10 + 12) = sub_1F9AA0(*(_QWORD *)(a1 + 16), *v14);
      v11 = (double)v9++ * v20;
      *(_WORD *)(v10 + 8) = (int)(v11 + v20 * 0.5);
    }
    while ( v9 != v5 );
  }
  v16 = _mm_loadu_si128(&v23);
  v17 = *(_QWORD *)a2;
  v18 = _mm_loadu_si128((const __m128i *)(a2 + 8));
  *(_QWORD *)a2 = v22;
  *(__m128i *)(a2 + 8) = v16;
  v22 = v17;
  v23 = v18;
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v30);
  QT::QFont::~QFont((QT::QFont *)v29);
  if ( v22 )
  {
    v23.m128i_i64[0] = 0;
    qfree(v22, (const char *)v8);
  }
  return v33 - __readfsqword(0x28u);
}
