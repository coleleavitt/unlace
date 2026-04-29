unsigned __int64 __fastcall sub_2AD20(QT::QGraphicsItem *a1)
{
  __int64 v1; // rsi
  __m128i *(__fastcall *v2)(__m128i *, __int64); // rax
  __m128d v3; // xmm1
  __m128d v4; // xmm2
  __int64 v5; // rsi
  __m128i *(__fastcall *v6)(__m128i *, __int64); // rax
  __m128d v7; // xmm0
  __m128i v8; // xmm0
  __int64 v9; // rsi
  const QT::QRectF *v10; // rdx
  __m128i v11; // xmm0
  double v12; // xmm4_8
  double v13; // xmm5_8
  __m128i v14; // xmm0
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __m128d v20; // xmm4
  __m128d v21; // xmm2
  __m128d v22; // xmm3
  __m128d v23; // xmm0
  double v24; // xmm1_8
  __m128d v25; // xmm2
  __m128d v26; // xmm0
  double v27; // xmm1_8
  __m128d v28; // xmm2
  __m128d v29; // xmm0
  double v30; // xmm1_8
  __m128d v31; // xmm2
  __m128d v32; // xmm0
  double v33; // xmm1_8
  double v35; // xmm1_8
  double v36; // xmm0_8
  double v37; // xmm1_8
  double v38; // xmm3_8
  double v39; // xmm1_8
  __m128d v40; // xmm1
  __m128d v41; // xmm3
  __m128d v42; // xmm0
  double v43; // xmm1_8
  __m128d v44; // xmm7
  __m128d v45; // xmm1
  __m128d v46; // xmm1
  __m128d v47; // xmm0
  __m128d v48; // xmm0
  __m128d v49; // xmm6
  __m128d v50; // xmm0
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  double v71; // xmm2_8
  double v72; // xmm0_8
  double v73; // xmm2_8
  double v74; // xmm3_8
  double v75; // xmm2_8
  __m128d v76; // xmm2
  __m128d v77; // xmm1
  __m128d v78; // xmm0
  double v79; // xmm1_8
  __m128i si128; // xmm4
  double v81; // xmm1_8
  double v82; // xmm0_8
  double v83; // xmm1_8
  double v84; // xmm2_8
  double v85; // xmm1_8
  double v86; // xmm3_8
  double v87; // xmm0_8
  double v88; // xmm3_8
  double v89; // xmm2_8
  double v90; // xmm3_8
  double v91; // xmm1_8
  double v92; // xmm1_8
  double v93; // xmm0_8
  double v94; // xmm2_8
  double v95; // xmm0_8
  double v96; // xmm1_8
  double v97; // xmm0_8
  double v98; // xmm1_8
  double v99; // xmm2_8
  double v100; // xmm1_8
  __m128d v101; // [rsp+0h] [rbp-188h] BYREF
  __m128d v102; // [rsp+10h] [rbp-178h] BYREF
  double v103; // [rsp+28h] [rbp-160h]
  __m128d v104; // [rsp+30h] [rbp-158h]
  double v105; // [rsp+40h] [rbp-148h]
  double v106; // [rsp+48h] [rbp-140h]
  __m128i v107; // [rsp+50h] [rbp-138h] BYREF
  __m128i v108; // [rsp+60h] [rbp-128h] BYREF
  __m128d v109; // [rsp+70h] [rbp-118h] BYREF
  __m128d v110; // [rsp+80h] [rbp-108h] BYREF
  __m128d v111; // [rsp+90h] [rbp-F8h] BYREF
  void *ptr[2]; // [rsp+A0h] [rbp-E8h] BYREF
  __int64 v113; // [rsp+B0h] [rbp-D8h]
  _OWORD v114[2]; // [rsp+C0h] [rbp-C8h] BYREF
  __m128d v115; // [rsp+E0h] [rbp-A8h] BYREF
  __m128d v116; // [rsp+F0h] [rbp-98h]
  __m128d v117[2]; // [rsp+100h] [rbp-88h] BYREF
  __m128d v118[2]; // [rsp+120h] [rbp-68h] BYREF
  unsigned __int64 v119; // [rsp+148h] [rbp-40h]

  v1 = *((_QWORD *)a1 + 2);
  v119 = __readfsqword(0x28u);
  v2 = *(__m128i *(__fastcall **)(__m128i *, __int64))(*(_QWORD *)v1 + 24LL);
  if ( v2 == sub_27F40 )
  {
    v3 = *(__m128d *)(v1 + 24);
    v4 = *(__m128d *)(v1 + 40);
  }
  else
  {
    ((void (__fastcall *)(_OWORD *))v2)(v114);
    v3 = (__m128d)v114[0];
    v4 = (__m128d)v114[1];
  }
  v5 = *((_QWORD *)a1 + 3);
  v6 = *(__m128i *(__fastcall **)(__m128i *, __int64))(*(_QWORD *)v5 + 24LL);
  if ( v6 == sub_27F40 )
  {
    v115 = (__m128d)_mm_loadu_si128((const __m128i *)(v5 + 24));
    v116 = (__m128d)_mm_loadu_si128((const __m128i *)(v5 + 40));
  }
  else
  {
    v102 = v4;
    v101 = v3;
    ((void (__fastcall *)(__m128d *))v6)(&v115);
    v5 = *((_QWORD *)a1 + 3);
  }
  v7 = _mm_unpacklo_pd((__m128d)0x3FE0000000000000uLL, (__m128d)0x3FE0000000000000uLL);
  v21 = _mm_mul_pd(v4, v7);
  v8 = (__m128i)_mm_add_pd(_mm_mul_pd(v7, v116), v115);
  v118[0] = (__m128d)v8;
  v101 = _mm_add_pd(v21, v3);
  QT::QGraphicsItem::mapFromItem(a1, v5, v118);
  v9 = *((_QWORD *)a1 + 2);
  v117[0] = v101;
  *(double *)v8.m128i_i64 = QT::QGraphicsItem::mapFromItem(a1, v9, v117);
  v102.m128d_f64[0] = v3.m128d_f64[0];
  v10 = *((const QT::QRectF **)a1 + 3);
  v101 = (__m128d)_mm_unpacklo_epi64(v8, (__m128i)v3);
  v104 = (__m128d)_mm_loadh_ps(v102.m128d_f64);
  QT::QGraphicsItem::mapRectFromItem((QT::QGraphicsItem *)&v107, a1, v10);
  v11 = _mm_loadu_si128(&v107);
  v21.m128d_f64[0] = *((double *)a1 + 7);
  v105 = *((double *)a1 + 8);
  v12 = *((double *)a1 + 9);
  v13 = *((double *)a1 + 10);
  v115 = (__m128d)v11;
  v14 = _mm_loadu_si128(&v108);
  v102.m128d_f64[0] = v12;
  v103 = v21.m128d_f64[0];
  v118[0] = v101;
  v116 = (__m128d)v14;
  v106 = v13;
  v15 = QT::QRectF::contains(&v115, v118);
  v20.m128d_f64[0] = v102.m128d_f64[0];
  v21.m128d_f64[0] = v103;
  if ( v15 )
  {
    *(_OWORD *)((char *)a1 + 72) = 0;
    *(_OWORD *)((char *)a1 + 56) = 0;
  }
  else
  {
    v103 = v102.m128d_f64[0];
    si128 = _mm_load_si128((const __m128i *)&v101);
    v102.m128d_f64[0] = v21.m128d_f64[0];
    *(__m128i *)((char *)a1 + 56) = si128;
    v118[0] = (__m128d)si128;
    sub_2A200(v118, &v115, v16, v17, v18, v19);
    v20.m128d_f64[0] = v103;
    v21.m128d_f64[0] = v102.m128d_f64[0];
    *((_QWORD *)a1 + 9) = v14.m128i_i64[0];
    *((_QWORD *)a1 + 10) = *(_QWORD *)&v3.m128d_f64[0];
  }
  v22.m128d_f64[0] = *((double *)a1 + 7);
  v23.m128d_f64[0] = v21.m128d_f64[0] - v22.m128d_f64[0];
  if ( v21.m128d_f64[0] == 0.0 || v22.m128d_f64[0] == 0.0 )
  {
    v24 = _mm_cmpgt_sd((__m128d)0LL, v23).m128d_f64[0];
    if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(-v23.m128d_f64[0]) & *(_QWORD *)&v24 | ~*(_QWORD *)&v24
                                                                                  & *(_QWORD *)&v23.m128d_f64[0]) > 1.0e-12 )
      goto LABEL_21;
  }
  else
  {
    v35 = _mm_cmpgt_sd((__m128d)0LL, v23).m128d_f64[0];
    v36 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(-v23.m128d_f64[0]) & *(_QWORD *)&v35 | ~*(_QWORD *)&v35
                                                                                   & *(_QWORD *)&v23.m128d_f64[0])
        * 1.0e12;
    v37 = _mm_cmpgt_sd((__m128d)0LL, v22).m128d_f64[0];
    *(_QWORD *)&v38 = COERCE_UNSIGNED_INT64(-v22.m128d_f64[0]) & *(_QWORD *)&v37
                    | ~*(_QWORD *)&v37 & *(_QWORD *)&v22.m128d_f64[0];
    v39 = _mm_cmpgt_sd((__m128d)0LL, v21).m128d_f64[0];
    if ( fmin(
           COERCE_DOUBLE(
             COERCE_UNSIGNED_INT64(-v21.m128d_f64[0]) & *(_QWORD *)&v39
           | ~*(_QWORD *)&v39 & *(_QWORD *)&v21.m128d_f64[0]),
           v38) < v36 )
      goto LABEL_21;
  }
  v25.m128d_f64[0] = *((double *)a1 + 8);
  v26.m128d_f64[0] = v105 - v25.m128d_f64[0];
  if ( v105 == 0.0 || v25.m128d_f64[0] == 0.0 )
  {
    v27 = _mm_cmpgt_sd((__m128d)0LL, v26).m128d_f64[0];
    if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(-v26.m128d_f64[0]) & *(_QWORD *)&v27 | ~*(_QWORD *)&v27
                                                                                  & *(_QWORD *)&v26.m128d_f64[0]) > 1.0e-12 )
      goto LABEL_21;
  }
  else
  {
    v81 = _mm_cmpgt_sd((__m128d)0LL, v26).m128d_f64[0];
    v82 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(-v26.m128d_f64[0]) & *(_QWORD *)&v81 | ~*(_QWORD *)&v81
                                                                                   & *(_QWORD *)&v26.m128d_f64[0])
        * 1.0e12;
    v83 = _mm_cmpgt_sd((__m128d)0LL, v25).m128d_f64[0];
    *(_QWORD *)&v84 = COERCE_UNSIGNED_INT64(-v25.m128d_f64[0]) & *(_QWORD *)&v83
                    | ~*(_QWORD *)&v83 & *(_QWORD *)&v25.m128d_f64[0];
    v85 = _mm_cmpgt_sd((__m128d)0LL, (__m128d)*(unsigned __int64 *)&v105).m128d_f64[0];
    if ( fmin(COERCE_DOUBLE(~*(_QWORD *)&v85 & *(_QWORD *)&v105 | COERCE_UNSIGNED_INT64(-v105) & *(_QWORD *)&v85), v84) < v82 )
      goto LABEL_21;
  }
  v28.m128d_f64[0] = *((double *)a1 + 9);
  v29.m128d_f64[0] = v20.m128d_f64[0] - v28.m128d_f64[0];
  if ( v20.m128d_f64[0] == 0.0 || v28.m128d_f64[0] == 0.0 )
  {
    v30 = _mm_cmpgt_sd((__m128d)0LL, v29).m128d_f64[0];
    if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(-v29.m128d_f64[0]) & *(_QWORD *)&v30 | ~*(_QWORD *)&v30
                                                                                  & *(_QWORD *)&v29.m128d_f64[0]) > 1.0e-12 )
      goto LABEL_21;
  }
  else
  {
    v96 = _mm_cmpgt_sd((__m128d)0LL, v29).m128d_f64[0];
    v97 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(-v29.m128d_f64[0]) & *(_QWORD *)&v96 | ~*(_QWORD *)&v96
                                                                                   & *(_QWORD *)&v29.m128d_f64[0])
        * 1.0e12;
    v98 = _mm_cmpgt_sd((__m128d)0LL, v28).m128d_f64[0];
    *(_QWORD *)&v99 = COERCE_UNSIGNED_INT64(-v28.m128d_f64[0]) & *(_QWORD *)&v98
                    | ~*(_QWORD *)&v98 & *(_QWORD *)&v28.m128d_f64[0];
    v100 = _mm_cmpgt_sd((__m128d)0LL, v20).m128d_f64[0];
    if ( fmin(
           COERCE_DOUBLE(
             ~*(_QWORD *)&v100 & *(_QWORD *)&v20.m128d_f64[0]
           | COERCE_UNSIGNED_INT64(-v20.m128d_f64[0]) & *(_QWORD *)&v100),
           v99) < v97 )
      goto LABEL_21;
  }
  v31.m128d_f64[0] = *((double *)a1 + 10);
  v32.m128d_f64[0] = v106 - v31.m128d_f64[0];
  if ( v106 == 0.0 || v31.m128d_f64[0] == 0.0 )
  {
    v33 = _mm_cmpgt_sd((__m128d)0LL, v32).m128d_f64[0];
    if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(-v32.m128d_f64[0]) & *(_QWORD *)&v33 | ~*(_QWORD *)&v33
                                                                                  & *(_QWORD *)&v32.m128d_f64[0]) <= 1.0e-12 )
      return v119 - __readfsqword(0x28u);
  }
  else
  {
    v91 = _mm_cmpgt_sd((__m128d)0LL, v32).m128d_f64[0];
    v92 = 1.0e12
        * COERCE_DOUBLE(COERCE_UNSIGNED_INT64(-v32.m128d_f64[0]) & *(_QWORD *)&v91 | ~*(_QWORD *)&v91
                                                                                   & *(_QWORD *)&v32.m128d_f64[0]);
    v93 = _mm_cmpgt_sd((__m128d)0LL, v31).m128d_f64[0];
    *(_QWORD *)&v94 = COERCE_UNSIGNED_INT64(-v31.m128d_f64[0]) & *(_QWORD *)&v93
                    | ~*(_QWORD *)&v93 & *(_QWORD *)&v31.m128d_f64[0];
    v95 = _mm_cmpgt_sd((__m128d)0LL, (__m128d)*(unsigned __int64 *)&v106).m128d_f64[0];
    if ( fmin(COERCE_DOUBLE(~*(_QWORD *)&v95 & *(_QWORD *)&v106 | COERCE_UNSIGNED_INT64(-v106) & *(_QWORD *)&v95), v94) >= v92 )
      return v119 - __readfsqword(0x28u);
  }
LABEL_21:
  QT::QGraphicsItem::prepareGeometryChange(a1);
  QT::QPainterPath::clear((QT::QGraphicsItem *)((char *)a1 + 88));
  v40.m128d_f64[0] = *((double *)a1 + 7);
  v41.m128d_f64[0] = *((double *)a1 + 9);
  v42.m128d_f64[0] = v40.m128d_f64[0] - v41.m128d_f64[0];
  if ( v40.m128d_f64[0] == 0.0 || v41.m128d_f64[0] == 0.0 )
  {
    v43 = _mm_cmpgt_sd((__m128d)0LL, v42).m128d_f64[0];
    if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(-v42.m128d_f64[0]) & *(_QWORD *)&v43 | ~*(_QWORD *)&v43
                                                                                  & *(_QWORD *)&v42.m128d_f64[0]) > 1.0e-12 )
      goto LABEL_24;
  }
  else
  {
    v71 = _mm_cmpgt_sd((__m128d)0LL, v42).m128d_f64[0];
    v72 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(-v42.m128d_f64[0]) & *(_QWORD *)&v71 | ~*(_QWORD *)&v71
                                                                                   & *(_QWORD *)&v42.m128d_f64[0])
        * 1.0e12;
    v73 = _mm_cmpgt_sd((__m128d)0LL, v41).m128d_f64[0];
    *(_QWORD *)&v74 = COERCE_UNSIGNED_INT64(-v41.m128d_f64[0]) & *(_QWORD *)&v73
                    | ~*(_QWORD *)&v73 & *(_QWORD *)&v41.m128d_f64[0];
    v75 = _mm_cmpgt_sd((__m128d)0LL, v40).m128d_f64[0];
    if ( fmin(
           COERCE_DOUBLE(
             COERCE_UNSIGNED_INT64(-v40.m128d_f64[0]) & *(_QWORD *)&v75
           | ~*(_QWORD *)&v75 & *(_QWORD *)&v40.m128d_f64[0]),
           v74) < v72 )
      goto LABEL_24;
  }
  v76.m128d_f64[0] = *((double *)a1 + 10);
  v77.m128d_f64[0] = *((double *)a1 + 8);
  v78.m128d_f64[0] = v77.m128d_f64[0] - v76.m128d_f64[0];
  if ( v76.m128d_f64[0] == 0.0 || v77.m128d_f64[0] == 0.0 )
  {
    v79 = _mm_cmpgt_sd((__m128d)0LL, v78).m128d_f64[0];
    if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(-v78.m128d_f64[0]) & *(_QWORD *)&v79 | ~*(_QWORD *)&v79
                                                                                  & *(_QWORD *)&v78.m128d_f64[0]) <= 1.0e-12 )
      goto LABEL_25;
  }
  else
  {
    v86 = _mm_cmpgt_sd((__m128d)0LL, v78).m128d_f64[0];
    v87 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(-v78.m128d_f64[0]) & *(_QWORD *)&v86 | ~*(_QWORD *)&v86
                                                                                   & *(_QWORD *)&v78.m128d_f64[0])
        * 1.0e12;
    v88 = _mm_cmpgt_sd((__m128d)0LL, v76).m128d_f64[0];
    *(_QWORD *)&v89 = COERCE_UNSIGNED_INT64(-v76.m128d_f64[0]) & *(_QWORD *)&v88
                    | ~*(_QWORD *)&v88 & *(_QWORD *)&v76.m128d_f64[0];
    v90 = _mm_cmpgt_sd((__m128d)0LL, v77).m128d_f64[0];
    if ( fmin(
           COERCE_DOUBLE(
             COERCE_UNSIGNED_INT64(-v77.m128d_f64[0]) & *(_QWORD *)&v90
           | ~*(_QWORD *)&v90 & *(_QWORD *)&v77.m128d_f64[0]),
           v89) >= v87 )
      goto LABEL_25;
  }
LABEL_24:
  QT::QPainterPath::moveTo((char *)a1 + 88, (char *)a1 + 72);
  QT::QPainterPath::lineTo((char *)a1 + 88, (char *)a1 + 56);
LABEL_25:
  v44 = (__m128d)_mm_load_si128((const __m128i *)&v101);
  *(_OWORD *)ptr = 0;
  v113 = 0;
  v45 = _mm_sub_pd(v104, v44);
  v118[0] = v44;
  v46 = _mm_shuffle_pd(v45, v45, 1);
  v47.m128d_f64[1] = _mm_sub_pd(v44, v46).m128d_f64[1];
  v47.m128d_f64[0] = v44.m128d_f64[0] + v46.m128d_f64[0];
  v118[1] = v47;
  QT::QLineF::unitVector((QT::QLineF *)v117);
  v48 = _mm_sub_pd(v117[1], v117[0]);
  v49 = _mm_add_pd(v48, v48);
  v50 = *(__m128d *)((char *)a1 + 56);
  v101 = v49;
  v109 = _mm_sub_pd(v50, v49);
  sub_2AB90((__int64 *)ptr, (const __m128i *)&v109, v51, v52, v53, v54);
  v110 = _mm_add_pd(*(__m128d *)((char *)a1 + 56), v101);
  sub_2AB90((__int64 *)ptr, (const __m128i *)&v110, v55, v56, v57, v58);
  v111 = _mm_add_pd(*(__m128d *)((char *)a1 + 72), v101);
  sub_2AB90((__int64 *)ptr, (const __m128i *)&v111, v59, v60, v61, v62);
  v118[0] = _mm_sub_pd(*(__m128d *)((char *)a1 + 72), v101);
  sub_2AB90((__int64 *)ptr, (const __m128i *)v118, v63, v64, v65, v66);
  v118[0] = _mm_sub_pd(*(__m128d *)((char *)a1 + 56), v101);
  sub_2AB90((__int64 *)ptr, (const __m128i *)v118, v67, v68, v69, v70);
  QT::QPainterPath::clear((QT::QGraphicsItem *)((char *)a1 + 96));
  QT::QPainterPath::addPolygon((QT::QGraphicsItem *)((char *)a1 + 96), (const QT::QPolygonF *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v119 - __readfsqword(0x28u);
}
