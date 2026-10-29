__int64 __fastcall sub_197CD0(QT::QAbstractItemView *this, __int64 a2, double a3, double a4, double a5, __m128 a6)
{
  bool v7; // zf
  const QT::QObject *v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rsi
  __m128 si128; // xmm1
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __m128i v17; // xmm1
  __int64 v18; // rdx
  __int64 v19; // rdi
  __m128i v20; // xmm1
  __int64 v21; // rax
  __m128 v22; // xmm0
  __int64 v23; // rax
  __m128 v24; // xmm1
  __m128i v26; // [rsp+0h] [rbp-78h] BYREF
  __int64 v27; // [rsp+18h] [rbp-60h] BYREF
  __int64 v28; // [rsp+27h] [rbp-51h] BYREF
  char v29; // [rsp+2Fh] [rbp-49h]
  _BYTE v30[40]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v31; // [rsp+58h] [rbp-20h]

  v7 = *((_BYTE *)this + 2512) == 0;
  v31 = __readfsqword(0x28u);
  if ( !v7
    || (v9 = *((const QT::QObject **)this + 313)) == nullptr
    || (v10 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, v9)) == 0 )
  {
    if ( (*((_BYTE *)this + 2584) & 1) == 0 )
      return 0;
    v10 = qword_8CC7C0;
    if ( !qword_8CC7C0 )
      return 0;
  }
  sub_1FB9E0(v10, &v27);
  if ( v27 == -1 )
    return 0;
  v11 = QT::QAbstractItemView::model(this);
  v12 = *(_QWORD *)(v11 + 216);
  if ( !v12 )
    v12 = *(_QWORD *)(v11 + 208);
  v29 = 0;
  v28 = v27;
  *(_OWORD *)v30 = -1;
  dirtree_find_entry(v30, v12, &v28);
  si128 = (__m128)_mm_load_si128((const __m128i *)v30);
  if ( si128.m128_u64[0] != -1 || !_mm_movehl_ps(a6, si128).m128_u64[0] )
  {
    memset(v30, 0, 24);
    v26 = (__m128i)si128;
    *(_OWORD *)&v30[24] = -1;
    v14 = qvector_reserve(v30, 0, 1, 16);
    v17 = _mm_load_si128(&v26);
    *(_QWORD *)v30 = v14;
    v18 = 16LL * *(_QWORD *)&v30[8];
    *(__m128i *)(v14 + 16LL * *(_QWORD *)&v30[8]) = v17;
    v19 = *(_QWORD *)(a2 + 72);
    *(__m128i *)&v30[24] = v17;
    v20 = _mm_loadu_si128((const __m128i *)(a2 + 88));
    *(_DWORD *)(a2 + 136) |= 2u;
    v21 = *(_QWORD *)v30;
    *(_QWORD *)v30 = v19;
    v22 = _mm_loadh_ps((const double *)&v30[16]);
    *(__m128i *)&v30[16] = v20;
    *(_QWORD *)(a2 + 72) = v21;
    v23 = *(_QWORD *)(a2 + 104);
    v24 = _mm_loadh_ps((const double *)&v30[32]);
    *(__m128 *)(a2 + 80) = v22;
    *(_QWORD *)&v30[32] = v23;
    *(__m128 *)(a2 + 96) = v24;
    if ( v19 )
    {
      *(_QWORD *)&v30[8] = 0;
      qfree(v19, 0, v18, v15, v16);
    }
  }
  return 2;
}
