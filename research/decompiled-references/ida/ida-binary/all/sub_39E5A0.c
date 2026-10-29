unsigned __int64 __fastcall sub_39E5A0(__int64 a1, __int64 a2, double *a3, __int64 a4)
{
  __int64 v5; // rax
  double v6; // xmm2_8
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rdx
  __m128i v12; // xmm0
  QT::QPixmap *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  const QT::QPixmap *v18; // rdx
  __m128d v19; // xmm1
  int *v20; // rcx
  __m128i v22; // [rsp+0h] [rbp-198h] BYREF
  double v23; // [rsp+10h] [rbp-188h]
  __int64 v24; // [rsp+18h] [rbp-180h]
  void **v25; // [rsp+20h] [rbp-178h]
  void **v26; // [rsp+28h] [rbp-170h]
  _BYTE v27[32]; // [rsp+30h] [rbp-168h] BYREF
  void *ptr[4]; // [rsp+50h] [rbp-148h] BYREF
  void *v29[4]; // [rsp+70h] [rbp-128h] BYREF
  void *v30[4]; // [rsp+90h] [rbp-108h] BYREF
  void *v31[4]; // [rsp+B0h] [rbp-E8h] BYREF
  void *v32[4]; // [rsp+D0h] [rbp-C8h] BYREF
  void *v33[2]; // [rsp+F0h] [rbp-A8h] BYREF
  _QWORD v34[2]; // [rsp+110h] [rbp-88h] BYREF
  __m128i v35; // [rsp+120h] [rbp-78h]
  _QWORD v36[2]; // [rsp+130h] [rbp-68h] BYREF
  _QWORD v37[3]; // [rsp+140h] [rbp-58h] BYREF
  unsigned __int64 v38; // [rsp+158h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 672);
  v6 = a3[4];
  v24 = a2;
  v38 = __readfsqword(0x28u);
  v23 = v6;
  v22 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v36, (__m128i)(unsigned __int64)v37);
  v8 = sub_524FA0(v5 + 40, 2165564008LL, 0);
  v9 = *(_QWORD *)(a1 + 672);
  v36[1] = v10;
  v36[0] = v8;
  v37[0] = sub_524FA0(v9 + 40, 2165564009LL, 0);
  v37[1] = v11;
  QT::QPixmap::QPixmap((QT::QPixmap *)v27);
  v12 = _mm_load_si128(&v22);
  v34[0] = TextArrows::draw_bookmark_star;
  v26 = v29;
  *(double *)&v34[1] = v6;
  v35 = v12;
  QT::QString::fromUtf8(v29, 8, "%1,%2,%3");
  v22.m128i_i64[0] = (__int64)v30;
  QT::QString::arg(v30, v29, 0, 103, 0xFFFFFFFFLL, 32, v23);
  v25 = v31;
  *(double *)v12.m128i_i64 = ((double (__fastcall *)(void **, _QWORD *, _QWORD))QT::QColor::name)(v31, v36, 0);
  QT::QString::arg(v32, v22.m128i_i64[0], v31, 0, 32, *(double *)v12.m128i_i64);
  *(double *)v12.m128i_i64 = ((double (__fastcall *)(void **, _QWORD *, _QWORD))QT::QColor::name)(v33, v37, 0);
  QT::QString::arg(ptr, v32, v33, 0, 32, *(double *)v12.m128i_i64);
  if ( v33[0] && !_InterlockedSub((volatile signed __int32 *)v33[0], 1u) )
    free(v33[0]);
  if ( v32[0] && !_InterlockedSub((volatile signed __int32 *)v32[0], 1u) )
    free(v32[0]);
  if ( v31[0] && !_InterlockedSub((volatile signed __int32 *)v31[0], 1u) )
    free(v31[0]);
  if ( v30[0] && !_InterlockedSub((volatile signed __int32 *)v30[0], 1u) )
    free(v30[0]);
  if ( v29[0] && !_InterlockedSub((volatile signed __int32 *)v29[0], 1u) )
    free(v29[0]);
  if ( !(unsigned __int8)QT::QPixmapCache::find((QT::QPixmapCache *)ptr, (const QT::QString *)v27, v13) )
  {
    TextArrows::draw_bookmark_star((__int64)v34, (QT::QPixmap *)v27, v14, v15, v16, v17);
    QT::QPixmapCache::insert((QT::QPixmapCache *)ptr, (const QT::QString *)v27, v18);
  }
  v19 = (__m128d)*(unsigned __int64 *)&v23;
  v19.m128d_f64[0] = v23 * 0.5;
  v20 = (int *)(*(_QWORD *)a3 + 84 * a4);
  *(__m128d *)v33 = _mm_cvtepi32_pd(
                      _mm_cvttpd_epi32(
                        _mm_sub_pd(
                          _mm_cvtepi32_pd(
                            _mm_unpacklo_epi32(
                              (__m128i)(unsigned __int64)((v20[14] + (__int64)v20[12]) / 2),
                              _mm_cvtsi32_si128((v20[15] + (__int64)v20[13]) / 2))),
                          _mm_unpacklo_pd(v19, v19))));
  QT::QPainter::drawPixmap(v24, v33, v27);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QPixmap::~QPixmap((QT::QPixmap *)v27);
  return v38 - __readfsqword(0x28u);
}
