__int64 __fastcall sub_19F190(
        QT::QAbstractItemView *this,
        __int64 a2,
        double a3,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        _QWORD *a12)
{
  __int64 bpt_kernel_interface; // rbx
  __int64 v15; // rax
  const char *v16; // rsi
  _QWORD *v17; // rdx
  __int64 v18; // r12
  _QWORD *i; // r13
  __int64 v20; // rax
  double v21; // xmm4_8
  double v22; // xmm5_8
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rax
  __m128i v26; // xmm1
  __int64 v27; // rdi
  __m128i v28; // xmm0
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rbp
  __int64 v32; // rbx
  __int64 *v33; // rax
  __int64 v34; // rdi
  __int64 v36; // [rsp+10h] [rbp-B8h] BYREF
  __m256i v37; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+40h] [rbp-88h] BYREF
  __int128 v39; // [rsp+48h] [rbp-80h]
  __int64 v40; // [rsp+58h] [rbp-70h]
  __int128 v41; // [rsp+60h] [rbp-68h]
  __m128i v42; // [rsp+70h] [rbp-58h] BYREF
  char v43; // [rsp+80h] [rbp-48h]
  unsigned __int64 v44; // [rsp+88h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  v38 = 0;
  bpt_kernel_interface = get_bpt_kernel_interface(this, a2);
  v40 = 0;
  v43 = 0;
  v36 = 0;
  v39 = 0;
  v41 = 0;
  v42 = (__m128i)-1LL;
  *(_OWORD *)v37.m256i_i8 = 0;
  *(_OWORD *)&v37.m256i_u64[2] = -1;
  sub_48FF00(this);
  v15 = QT::QAbstractItemView::model(this);
  v16 = *(const char **)(v15 + 216);
  if ( !v16 )
    v16 = *(const char **)(v15 + 208);
  sub_48A1D0(&v38, v16, &v36);
  if ( v36 )
  {
    v37.m256i_i64[0] = 0;
    qfree(v36, v16);
  }
  v17 = (_QWORD *)*a12;
  v18 = *a12 + 8LL * a12[1];
  for ( i = v17; (_QWORD *)v18 != i; ++i )
  {
    v20 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bpt_kernel_interface + 168LL))(
            bpt_kernel_interface,
            *i);
    sub_19B830(v20, -1, 0.0, (__m128)-1LL, a5, a6, v21, v22, a9, a10);
  }
  v23 = QT::QAbstractItemView::model(this);
  v24 = *(_QWORD *)(v23 + 216);
  if ( !v24 )
    v24 = *(_QWORD *)(v23 + 208);
  sub_48A5A0(&v38, v24);
  v36 = 0;
  *(_OWORD *)v37.m256i_i8 = 0;
  *(_OWORD *)&v37.m256i_u64[2] = -1;
  sub_48A040(&v38, &v36);
  v25 = v36;
  v26 = _mm_loadu_si128((const __m128i *)(a2 + 88));
  v27 = *(_QWORD *)(a2 + 72);
  *(__m128i *)(a2 + 80) = _mm_loadu_si128((const __m128i *)&v37);
  v28 = _mm_load_si128(&v42);
  *(_QWORD *)(a2 + 72) = v25;
  v29 = *(_QWORD *)(a2 + 104);
  *(_DWORD *)(a2 + 136) |= 2u;
  v36 = v27;
  v37.m256i_i64[3] = v29;
  *(__m128i *)&v37.m256i_u64[1] = v26;
  *(__m128i *)(a2 + 96) = v28;
  if ( v27 )
  {
    v37.m256i_i64[0] = 0;
    qfree(v27, (const char *)&v36);
  }
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v40, (const char *)&v36);
  }
  v30 = v38;
  if ( v38 )
  {
    v31 = v39;
    if ( (_QWORD)v39 )
    {
      v32 = 0;
      do
      {
        v33 = (__int64 *)(v30 + 40 * v32);
        v34 = *v33;
        if ( *v33 )
        {
          v33[1] = 0;
          qfree(v34, (const char *)&v36);
          v30 = v38;
        }
        ++v32;
      }
      while ( v31 != v32 );
    }
    *(_QWORD *)&v39 = 0;
    qfree(v30, (const char *)&v36);
  }
  return 2;
}
