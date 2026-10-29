__int64 __fastcall sub_19F6E0(QT::QAbstractItemView *this, __int64 a2, double a3, double a4, __m128 a5)
{
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  __m128 si128; // xmm0
  __int64 v10; // rax
  __m128i v11; // xmm0
  __m128i v12; // [rsp+0h] [rbp-68h] BYREF
  __int64 v13; // [rsp+17h] [rbp-51h] BYREF
  char v14; // [rsp+1Fh] [rbp-49h]
  _BYTE v15[24]; // [rsp+20h] [rbp-48h] BYREF
  __m128i v16; // [rsp+38h] [rbp-30h]
  unsigned __int64 v17; // [rsp+48h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  result = 0;
  if ( a2 != -1 )
  {
    v7 = QT::QAbstractItemView::model(this);
    v8 = *(_QWORD *)(v7 + 216);
    if ( !v8 )
      v8 = *(_QWORD *)(v7 + 208);
    v13 = a2;
    *(_OWORD *)v15 = -1;
    v14 = 0;
    dirtree_find_entry(v15, v8, &v13);
    si128 = (__m128)_mm_load_si128((const __m128i *)v15);
    if ( si128.m128_u64[0] == -1 && _mm_movehl_ps(a5, si128).m128_u64[0] )
    {
      return 0;
    }
    else
    {
      memset(v15, 0, sizeof(v15));
      v12 = (__m128i)si128;
      v16 = (__m128i)-1LL;
      v10 = qvector_reserve(v15, 0, 1, 16);
      v11 = _mm_load_si128(&v12);
      *(_QWORD *)v15 = v10;
      *(__m128i *)(v10 + 16LL * (*(_QWORD *)&v15[8])++) = v11;
      v16 = v11;
      sub_493F70(this);
      if ( *(_QWORD *)v15 )
      {
        *(_QWORD *)&v15[8] = 0;
        qfree(*(_QWORD *)v15, v15);
      }
      return 1;
    }
  }
  return result;
}
