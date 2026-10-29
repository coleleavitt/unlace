__int64 __fastcall sub_1983D0(__m128i *this, int a2, double a3, double a4, __m128 a5)
{
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rsi
  __m128 si128; // xmm0
  __int64 v9; // rax
  __m128i v10; // xmm0
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __m128i v15; // [rsp+0h] [rbp-68h] BYREF
  __int64 v16; // [rsp+17h] [rbp-51h] BYREF
  char v17; // [rsp+1Fh] [rbp-49h]
  _BYTE v18[24]; // [rsp+20h] [rbp-48h] BYREF
  __m128i v19; // [rsp+38h] [rbp-30h]
  unsigned __int64 v20; // [rsp+48h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  if ( a2 == -1 )
    return 0;
  v5 = sub_1982F0(this, a2);
  if ( v5 == -1 )
    return 0;
  v6 = QT::QAbstractItemView::model((QT::QAbstractItemView *)this);
  v7 = *(_QWORD *)(v6 + 216);
  if ( !v7 )
    v7 = *(_QWORD *)(v6 + 208);
  v16 = v5;
  *(_OWORD *)v18 = -1;
  v17 = 0;
  dirtree_find_entry(v18, v7, &v16);
  si128 = (__m128)_mm_load_si128((const __m128i *)v18);
  if ( si128.m128_u64[0] == -1 )
  {
    if ( _mm_movehl_ps(a5, si128).m128_u64[0] )
      return 0;
  }
  memset(v18, 0, sizeof(v18));
  v15 = (__m128i)si128;
  v19 = (__m128i)-1LL;
  v9 = qvector_reserve(v18, 0, 1, 16);
  v10 = _mm_load_si128(&v15);
  *(_QWORD *)v18 = v9;
  *(__m128i *)(v9 + 16LL * (*(_QWORD *)&v18[8])++) = v10;
  v19 = v10;
  sub_493F70((QT::QAbstractItemView *)this);
  if ( *(_QWORD *)v18 )
  {
    *(_QWORD *)&v18[8] = 0;
    qfree(*(_QWORD *)v18, v18, v11, v12, v13);
  }
  return 1;
}
