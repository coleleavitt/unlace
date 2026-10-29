unsigned __int64 __fastcall TextArrows::draw_bookmark_star(
        __int64 a1,
        QT::QPixmap *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v6; // r13d
  _OWORD *v7; // r12
  __int64 v8; // rbp
  int *v9; // rbx
  __m128d v10; // xmm0
  __m128d v11; // xmm1
  _OWORD *v12; // rcx
  __m128d v13; // xmm0
  __m128d v14; // xmm0
  __int128 v15; // xmm4
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  _OWORD *v19; // rcx
  _OWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v24; // rax
  QT::QBrush *v25[2]; // [rsp+0h] [rbp-128h]
  double v26; // [rsp+18h] [rbp-110h]
  __m128d v27; // [rsp+20h] [rbp-108h]
  double v28; // [rsp+30h] [rbp-F8h]
  _OWORD *v29; // [rsp+40h] [rbp-E8h]
  __int64 v30; // [rsp+48h] [rbp-E0h]
  __m128d cosx; // [rsp+50h] [rbp-D8h] BYREF
  char v32[8]; // [rsp+68h] [rbp-C0h] BYREF
  void *ptr; // [rsp+70h] [rbp-B8h] BYREF
  _OWORD *v34; // [rsp+78h] [rbp-B0h]
  __int64 v35; // [rsp+80h] [rbp-A8h]
  _BYTE v36[16]; // [rsp+90h] [rbp-98h] BYREF
  __int64 v37; // [rsp+A0h] [rbp-88h]
  _QWORD v38[4]; // [rsp+B0h] [rbp-78h] BYREF
  int v39; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v40; // [rsp+D4h] [rbp-54h]
  __int16 v41; // [rsp+DCh] [rbp-4Ch]
  unsigned __int64 v42; // [rsp+E8h] [rbp-40h]

  v6 = 0;
  v7 = nullptr;
  v8 = 0;
  v9 = nullptr;
  v10 = (__m128d)0x3FE0000000000000uLL;
  v11 = (__m128d)unk_5DD4D0;
  v10.m128d_f64[0] = 0.5 * *(double *)(a1 + 8);
  v42 = __readfsqword(0x28u);
  v28 = v10.m128d_f64[0];
  v27 = _mm_unpacklo_pd(v10, v10);
  v26 = v10.m128d_f64[0] / 2.5;
  while ( 1 )
  {
    v13 = (__m128d)*(unsigned __int64 *)&v26;
    if ( (v6 & 1) == 0 )
      v13 = (__m128d)*(unsigned __int64 *)&v28;
    v14 = _mm_mul_pd(_mm_unpacklo_pd(v13, v13), v11);
    *((_QWORD *)&v15 + 1) = *(_QWORD *)&_mm_sub_pd(v27, v14).m128d_f64[1];
    *(double *)&v15 = v27.m128d_f64[0] + v14.m128d_f64[0];
    *(_OWORD *)v25 = v15;
    if ( v9 )
    {
      if ( *v9 <= 1 )
      {
        v16 = ((unsigned __int64)v9 + 31) & 0xFFFFFFFFFFFFFFF0LL;
        if ( *((_QWORD *)v9 + 1) - ((__int64)((__int64)v7 - v16) >> 4) != v8 )
        {
          v24 = v8++;
          v7[v24] = v15;
          goto LABEL_17;
        }
        if ( !v8 && (_OWORD *)v16 != v7 )
        {
          --v7;
          v8 = 1;
          *v7 = v15;
          goto LABEL_17;
        }
      }
      if ( *v9 <= 1 )
      {
        v17 = (__int64)((__int64)v7 - (((unsigned __int64)v9 + 31) & 0xFFFFFFFFFFFFFFF0LL)) >> 4;
        if ( *((_QWORD *)v9 + 1) - v8 - v17 > 0 )
        {
          v20 = &v7[v8];
        }
        else
        {
          if ( (__int64)((__int64)v7 - (((unsigned __int64)v9 + 31) & 0xFFFFFFFFFFFFFFF0LL)) <= 0
            || 3 * v8 >= 2LL * *((_QWORD *)v9 + 1) )
          {
            goto LABEL_3;
          }
          v18 = 16 * v17;
          v19 = &v7[v18 / 0xFFFFFFFFFFFFFFF0LL];
          if ( v8 && v19 != v7 && v7 && v19 )
            v19 = memmove(&v7[v18 / 0xFFFFFFFFFFFFFFF0LL], v7, 16 * v8);
          v20 = &v19[v8];
          v7 = v19;
        }
        ++v8;
        *v20 = *(_OWORD *)v25;
        goto LABEL_17;
      }
    }
LABEL_3:
    ptr = v9;
    v34 = v7;
    v35 = v8;
    sub_39DCF0((__int64)&ptr, 0, 1, 0, a5, a6);
    v7 = v34;
    v9 = (int *)ptr;
    a5 = v35;
    v12 = &v34[v8];
    if ( v35 > v8 )
    {
      v30 = v35;
      v29 = &v34[v8];
      memmove(v12 + 1, v29, 16 * (v35 - v8));
      a5 = v30;
      v12 = v29;
    }
    v8 = a5 + 1;
    *v12 = *(_OWORD *)v25;
    if ( !v9 )
    {
LABEL_6:
      ptr = v9;
      v34 = v7;
      v35 = v8;
      sub_39DCF0((__int64)&ptr, 0, 0, 0, a5, a6);
      v9 = (int *)ptr;
      v7 = v34;
      v8 = v35;
      goto LABEL_7;
    }
LABEL_17:
    if ( *v9 > 1 )
      goto LABEL_6;
LABEL_7:
    if ( ++v6 == 10 )
      break;
    sincos((double)v6 * 0.6283185307179586 + 1.570796326794897, &cosx.m128d_f64[1], cosx.m128d_f64);
    v11 = cosx;
  }
  QT::QPixmap::QPixmap((QT::QPixmap *)v36, (int)*(double *)(a1 + 8), (int)*(double *)(a1 + 8));
  QT::QPaintDevice::QPaintDevice((QT::QPaintDevice *)v38);
  v21 = v37;
  v37 = 0;
  v38[0] = (char *)&`vtable for'QT::QPixmap + 16;
  v22 = *((_QWORD *)a2 + 2);
  *((_QWORD *)a2 + 2) = v21;
  v38[2] = v22;
  QT::QPixmap::~QPixmap((QT::QPixmap *)v38);
  QT::QPixmap::~QPixmap((QT::QPixmap *)v36);
  v39 = 1;
  v40 = 0;
  v41 = 0;
  QT::QPixmap::fill(a2, (const QT::QColor *)&v39);
  QT::QPainter::QPainter((QT::QPainter *)v32, a2);
  QT::QPainter::setRenderHint(v32, 1, 1);
  QT::QPainter::setPen(v32, 0);
  QT::QPen::QPen((QT::QPen *)v36, *(const QT::QColor **)(a1 + 24));
  QT::QPen::setWidth((QT::QPen *)v36, 1);
  QT::QPen::setCapStyle(v36, 32);
  QT::QPainter::setPen((QT::QPainter *)v32, (const QT::QPen *)v36);
  QT::QBrush::QBrush(v38, *(_QWORD *)(a1 + 16), 1);
  QT::QPainter::setBrush((QT::QPainter *)v32, (const QT::QBrush *)v38);
  QT::QBrush::~QBrush((QT::QBrush *)v38);
  QT::QPainter::drawPolygon(v32, v7, (unsigned int)v8, 1);
  QT::QPen::~QPen((QT::QPen *)v36);
  QT::QPainter::~QPainter((QT::QPainter *)v32);
  if ( v9 && !_InterlockedSub(v9, 1u) )
    free(v9);
  return v42 - __readfsqword(0x28u);
}
