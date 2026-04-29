unsigned __int64 __fastcall sub_2B950(QT::QGraphicsItem *this, QT::QPainter *a2, double a3)
{
  QT::QStyleOptionGraphicsItem *v3; // rax
  int v4; // eax
  bool v5; // zf
  int v6; // eax
  _QWORD *v7; // r12
  _QWORD *v8; // rbx
  double v9; // xmm0_8
  QT::QPainterPath *v11; // rbx
  double v12; // xmm0_8
  double v13; // r12
  double v14; // xmm1_8
  __m128d v15; // xmm2
  __m128d v16; // xmm0
  __m128d v17; // xmm4
  __m128 v18; // xmm6
  __m128d v19; // xmm3
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r9
  __m128 v26; // xmm4
  __m128 v27; // xmm5
  __m128 si128; // xmm0
  __int64 v29; // r14
  int *v30; // r15
  __m128i v31; // xmm0
  __int64 v32; // rbp
  __m128d *v33; // rcx
  __m128 v34; // xmm4
  unsigned __int64 v35; // xmm4_8
  __int64 v36; // r12
  __m128d *v37; // rsi
  __int64 v38; // rbp
  __int64 v39; // r14
  __int64 v40; // rdx
  __m128 v41; // xmm0
  __int64 v42; // r12
  __m128d *v43; // r14
  __int64 v44; // r12
  __m128i v45; // xmm7
  __int64 v46; // rdx
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rax
  unsigned __int64 v50; // xmm5_8
  unsigned __int64 v51; // rdi
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // xmm4_8
  unsigned __int64 v54; // rdx
  __int64 v55; // rax
  __m128d v57; // [rsp+0h] [rbp-138h]
  __m128d v58; // [rsp+0h] [rbp-138h]
  __m128 v59; // [rsp+10h] [rbp-128h] BYREF
  __m128i v60; // [rsp+20h] [rbp-118h] BYREF
  __m128d *v61; // [rsp+38h] [rbp-100h]
  __m128d v62; // [rsp+40h] [rbp-F8h]
  double cosx; // [rsp+50h] [rbp-E8h] BYREF
  double sinx[2]; // [rsp+58h] [rbp-E0h] BYREF
  _BYTE v65[4]; // [rsp+68h] [rbp-D0h] BYREF
  int v66; // [rsp+6Ch] [rbp-CCh]
  __m128d v67; // [rsp+70h] [rbp-C8h] BYREF
  __m128i v68; // [rsp+80h] [rbp-B8h] BYREF
  void *v69[2]; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v70; // [rsp+A0h] [rbp-98h]
  void *ptr[2]; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v72; // [rsp+C0h] [rbp-78h]
  __m128i v73; // [rsp+D0h] [rbp-68h] BYREF
  __m128i v74; // [rsp+E0h] [rbp-58h]
  unsigned __int64 v75; // [rsp+F8h] [rbp-40h]

  v75 = __readfsqword(0x28u);
  v3 = (QT::QStyleOptionGraphicsItem *)QT::QPainter::worldTransform(a2);
  QT::QStyleOptionGraphicsItem::levelOfDetailFromTransform(v3, a2);
  v4 = *((_DWORD *)this + 13);
  v5 = *((_QWORD *)this + 5) == 0;
  v65[0] = *((_BYTE *)this + 48);
  v66 = v4;
  if ( v5 )
  {
    v49 = sub_1FB50(this);
    *((_QWORD *)this + 5) = sub_345D0(v49);
  }
  v6 = sub_3E520(v65);
  v7 = *((_QWORD **)this + 5);
  if ( v6 == -1 )
  {
    v46 = v7[18];
    v47 = v7[17];
    if ( v7[19] < (unsigned __int64)(v46 + 1) )
    {
      v48 = qvector_reserve(v7 + 17, v47, v46 + 1, 16);
      v46 = v7[18];
      v7[17] = v48;
      v47 = v48;
    }
    v8 = (_QWORD *)(v47 + 16 * v46);
    *v8 = 0;
    QT::QPainterPath::QPainterPath((QT::QPainterPath *)(v8 + 1));
    ++v7[18];
    sub_3E3B0(v8, v65);
  }
  else
  {
    v8 = (_QWORD *)(v7[14] + 16LL * v6);
  }
  v9 = sub_3E3C0(v8);
  QT::QGraphicsItem::setZValue(this, v9);
  if ( !(unsigned __int8)QT::QPainterPath::isEmpty((QT::QGraphicsItem *)((char *)this + 88)) )
  {
    v11 = (QT::QPainterPath *)(v8 + 1);
    QT::QPainterPath::addPath(v11, (QT::QGraphicsItem *)((char *)this + 88));
    if ( a3 >= 0.5 )
    {
      v73 = _mm_loadu_si128((const __m128i *)((char *)this + 56));
      v74 = _mm_loadu_si128((const __m128i *)((char *)this + 72));
      v12 = *(double *)v74.m128i_i64 - *(double *)v73.m128i_i64;
      v13 = *(double *)v74.m128i_i64 - *(double *)v73.m128i_i64;
      QT::QLineF::length((QT::QLineF *)&v73);
      v14 = acos(v13 / v12);
      if ( *(double *)&v74.m128i_i64[1] - *(double *)&v73.m128i_i64[1] >= 0.0 )
        v14 = 6.283185307179586 - v14;
      v15.m128d_f64[0] = 7.25;
      if ( v65[0] )
        v15.m128d_f64[0] = 9.5;
      v61 = (__m128d *)v74.m128i_i64[1];
      *(double *)v60.m128i_i64 = v14;
      sincos(v14 - 1.047197551196598, sinx, &cosx);
      v16 = (__m128d)*(unsigned __int64 *)&sinx[0];
      v17 = *(__m128d *)((char *)this + 72);
      v59.m128_u64[0] = *(_QWORD *)&v15.m128d_f64[0];
      v16.m128d_f64[0] = sinx[0] * v15.m128d_f64[0];
      v18 = (__m128)0x3FF0C152382D7365uLL;
      v57 = v17;
      *(double *)v18.m128_u64 = v14 - 3.141592653589793 + 1.047197551196598;
      v62 = _mm_add_pd(_mm_unpacklo_pd(v16, (__m128d)COERCE_UNSIGNED_INT64(v15.m128d_f64[0] * cosx)), v17);
      sincos(*(double *)v18.m128_u64, sinx, &cosx);
      v15 = (__m128d)*(unsigned __int64 *)&v15.m128d_f64[0];
      v19 = (__m128d)*(unsigned __int64 *)&sinx[0];
      v70 = 0;
      v19.m128d_f64[0] = sinx[0] * v15.m128d_f64[0];
      v15.m128d_f64[0] = v15.m128d_f64[0] * cosx;
      v67 = _mm_unpacklo_pd((__m128d)v74.m128i_u64[0], (__m128d)(unsigned __int64)v61);
      v58 = _mm_add_pd(_mm_unpacklo_pd(v19, v15), v57);
      *(_OWORD *)v69 = 0;
      sub_2AB90((__int64 *)v69, (const __m128i *)&v67, v20, v21, v22, v23);
      si128 = (__m128)_mm_load_si128((const __m128i *)v69);
      v29 = v70;
      if ( !si128.m128_u64[0] || (v30 = (int *)v69[0], *(int *)si128.m128_u64[0] > 1) )
      {
LABEL_14:
        *(__m128 *)v69 = si128;
        sub_2AA30((__int64 *)v69, 0, 1, nullptr, nullptr, v25);
        v31 = _mm_load_si128((const __m128i *)v69);
        v32 = v70;
        v30 = (int *)v69[0];
        v33 = (__m128d *)v69[1];
        v35 = _mm_movehl_ps(v34, (__m128)v31).m128_u64[0];
        v36 = v31.m128i_i64[0];
        v37 = (__m128d *)(16 * v29 + v35);
        if ( v70 > v29 )
        {
          v61 = (__m128d *)v69[1];
          v59.m128_u64[0] = 16 * v29 + v35;
          v60 = v31;
          memmove(&v37[1], v37, 16 * (v70 - v29));
          v33 = v61;
          v31 = _mm_load_si128(&v60);
          v37 = (__m128d *)v59.m128_u64[0];
        }
        v38 = v32 + 1;
        *v37 = v62;
        if ( !v36 )
        {
LABEL_17:
          v70 = v38;
          *(__m128i *)v69 = v31;
          sub_29720((__int64)v69, 0, 0, 0, v24, v25);
          v38 = v70;
          v33 = (__m128d *)v69[1];
          v31 = _mm_load_si128((const __m128i *)v69);
          v36 = v31.m128i_i64[0];
          v39 = 16 * v70;
          if ( !v31.m128i_i64[0] )
          {
            v18 = (__m128)(unsigned __int64)v69[1];
            v31 = _mm_unpacklo_epi64(v31, (__m128i)(unsigned __int64)v69[1]);
            goto LABEL_19;
          }
          v30 = (int *)v69[0];
LABEL_33:
          v50 = _mm_movehl_ps(v27, (__m128)v31).m128_u64[0];
          v51 = v50;
          if ( *(int *)v36 <= 1 )
          {
            v52 = (v36 + 31) & 0xFFFFFFFFFFFFFFF0LL;
            v40 = *(_QWORD *)(v36 + 8) - ((__int64)(v50 - v52) >> 4);
            if ( v38 != v40 )
            {
              v44 = v38 + 1;
              *(__m128d *)(v50 + 16 * v38) = v58;
LABEL_36:
              v41 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v30, (__m128i)v51);
LABEL_37:
              if ( *v30 <= 1 )
              {
LABEL_23:
                v70 = v44;
                *(__m128 *)v69 = v41;
                v68 = v74;
                sub_2AB90((__int64 *)v69, &v68, v40, (__int64)v33, v24, v25);
                v45 = _mm_load_si128((const __m128i *)v69);
                v72 = v70;
                *(__m128i *)ptr = v45;
                if ( v45.m128i_i64[0] )
                {
                  _InterlockedAdd((volatile signed __int32 *)v45.m128i_i64[0], 1u);
                  QT::QPainterPath::addPolygon(v11, (const QT::QPolygonF *)ptr);
                  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
                    free(ptr[0]);
                  if ( !_InterlockedSub((volatile signed __int32 *)v45.m128i_i64[0], 1u) )
                    free((void *)v45.m128i_i64[0]);
                }
                else
                {
                  QT::QPainterPath::addPolygon(v11, (const QT::QPolygonF *)ptr);
                  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
                    free(ptr[0]);
                }
                return v75 - __readfsqword(0x28u);
              }
LABEL_22:
              v70 = v44;
              *(__m128 *)v69 = v41;
              sub_29720((__int64)v69, 0, 0, 0, v24, v25);
              v41 = (__m128)_mm_load_si128((const __m128i *)v69);
              v44 = v70;
              goto LABEL_23;
            }
            if ( !v38 && v50 != v52 )
            {
              v51 = v50 - 16;
              v44 = 1;
              v33[-1] = v58;
              goto LABEL_36;
            }
          }
LABEL_19:
          v70 = v38;
          *(__m128i *)v69 = v31;
          sub_2AA30((__int64 *)v69, 0, 1, nullptr, nullptr, v25);
          v41 = (__m128)_mm_load_si128((const __m128i *)v69);
          v42 = v70;
          v30 = (int *)v41.m128_u64[0];
          v43 = (__m128d *)(_mm_movehl_ps(v18, v41).m128_u64[0] + v39);
          if ( v38 < v70 )
          {
            v59 = v41;
            memmove(&v43[1], v43, 16 * (v70 - v38));
            v41 = (__m128)_mm_load_si128((const __m128i *)&v59);
          }
          v44 = v42 + 1;
          *v43 = v58;
          if ( !v30 )
            goto LABEL_22;
          goto LABEL_37;
        }
LABEL_42:
        v39 = 16 * v38;
        if ( *(int *)v36 <= 1 )
          goto LABEL_33;
        goto LABEL_17;
      }
      v53 = _mm_movehl_ps(v26, si128).m128_u64[0];
      v33 = (__m128d *)v53;
      v54 = (si128.m128_u64[0] + 31) & 0xFFFFFFFFFFFFFFF0LL;
      v55 = *(_QWORD *)(si128.m128_u64[0] + 8) - ((__int64)(v53 - v54) >> 4);
      if ( v55 == v70 )
      {
        if ( v55 || v54 == v53 )
          goto LABEL_14;
        v27 = (__m128)v62;
        v33 = (__m128d *)(v53 - 16);
        v38 = 1;
        *((__m128d *)v69[1] - 1) = v62;
      }
      else
      {
        v38 = v70 + 1;
        *(__m128d *)(v53 + 16 * v70) = v62;
      }
      v36 = (__int64)v30;
      v31 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v30, (__m128i)(unsigned __int64)v33);
      goto LABEL_42;
    }
  }
  return v75 - __readfsqword(0x28u);
}
