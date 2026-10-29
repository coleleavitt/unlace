__int64 __fastcall sub_48DE20(
        QT::QAbstractItemView *this,
        __int64 *a2,
        const __m128i *a3,
        char a4,
        double a5,
        double a6,
        __m128 a7)
{
  __m128 v8; // xmm0
  __int64 v11; // rax
  __int64 *v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rax
  const char **v15; // rdx
  const char *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdi
  __int64 v22; // rbp
  __m128i v23; // xmm1
  double v24; // xmm0_8
  __m128i v25; // xmm1
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 *v28; // rdx
  __int64 v29; // rsi
  __m128 si128; // xmm0
  __m128i v31; // [rsp+0h] [rbp-68h] BYREF
  __m128 v32; // [rsp+10h] [rbp-58h] BYREF
  _BYTE v33[24]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v34; // [rsp+38h] [rbp-30h]

  v8 = (__m128)_mm_loadu_si128(a3);
  v34 = __readfsqword(0x28u);
  v32 = v8;
  if ( a2 )
  {
    *(__m128 *)(a2 + 5) = v8;
    if ( v8.m128_u64[0] == -1 && v32.m128_u64[1] )
      return 0;
    if ( (a4 & 2) == 0 )
    {
      *(__m128i *)(a2 + 3) = _mm_load_si128((const __m128i *)&v32);
      if ( (a4 & 1) == 0 )
        return 1;
LABEL_16:
      v14 = QT::QAbstractItemView::model(this);
      v15 = *(const char ***)(v14 + 216);
      if ( !v15 )
        v15 = *(const char ***)(v14 + 208);
      memset(v33, 0, sizeof(v33));
      v16 = *v15;
      dirtree_get_abspath_by_cursor(v33, *v15, &v32, 0);
      v21 = *a2;
      v22 = *(_QWORD *)v33;
      memset(v33, 0, sizeof(v33));
      v23 = _mm_loadu_si128((const __m128i *)&v33[8]);
      if ( v21 )
      {
        a2[1] = 0;
        v24 = qfree(v21, v16, v17, v18, v19, v20, *(_OWORD *)&v23, v32.m128_u64[0]);
        v25 = _mm_load_si128(&v31);
        v26 = *(_QWORD *)v33;
        *a2 = v22;
        *(__m128i *)(a2 + 1) = v25;
        if ( v26 )
        {
          *(_QWORD *)&v33[8] = 0;
          qfree(v26, v16, v24);
        }
      }
      else
      {
        *a2 = v22;
        *(__m128i *)(a2 + 1) = v23;
      }
      return 1;
    }
  }
  else
  {
    if ( v8.m128_u64[0] == -1 && v32.m128_u64[1] )
      return 0;
    if ( (a4 & 2) == 0 )
      return 1;
  }
  v11 = QT::QAbstractItemView::model(this);
  v12 = *(__int64 **)(v11 + 216);
  if ( !v12 )
    v12 = *(__int64 **)(v11 + 208);
  v13 = *v12;
  *(_QWORD *)v33 = -1;
  v33[8] = 0;
  dirtree_resolve_cursor(v33, v13, &v32);
  if ( *(_QWORD *)v33 != -1 && v33[8] )
    goto LABEL_31;
  v27 = QT::QAbstractItemView::model(this);
  v28 = *(__int64 **)(v27 + 216);
  if ( !v28 )
    v28 = *(__int64 **)(v27 + 208);
  v29 = *v28;
  *(_OWORD *)v33 = -1;
  dirtree_get_parent_cursor(v33, v29, &v32);
  si128 = (__m128)_mm_load_si128((const __m128i *)v33);
  v32 = si128;
  if ( si128.m128_u64[0] != -1 || !_mm_movehl_ps(a7, si128).m128_u64[0] )
  {
LABEL_31:
    if ( !a2 )
      return 1;
    *(__m128i *)(a2 + 3) = _mm_load_si128((const __m128i *)&v32);
    if ( (a4 & 1) == 0 )
      return 1;
    goto LABEL_16;
  }
  return 0;
}
