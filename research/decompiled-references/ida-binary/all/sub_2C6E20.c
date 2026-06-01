unsigned __int64 __fastcall sub_2C6E20(
        int *a1,
        QT::QPainter *a2,
        __int64 a3,
        int *a4,
        _DWORD *a5,
        double a6,
        __m128i a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  int v13; // eax
  int v14; // eax
  __m128 v15; // xmm0
  int v16; // eax
  __int64 *v23; // r8
  double v24; // xmm4_8
  double v25; // xmm5_8
  unsigned __int64 v26; // rax
  _QWORD *v27; // rcx
  char v28; // r11
  __int64 v29; // rdx
  const char ***v30; // r14
  __int64 v31; // rdx
  const char **v32; // r10
  __int64 v33; // r9
  const char *v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // r10
  double v37; // r14
  unsigned __int64 v38; // rdx
  __m128 si128; // xmm0
  __int64 v40; // rax
  unsigned __int64 (__fastcall *v41)(_QWORD *, QT::QPainter *, __int64, int *, const __m128i *, int *, __m128, __m128, __m128, __m128, double, double, __m128, __m128, char, __int64); // r10
  void (*v42)(); // rax
  __int64 v43; // rdi
  char v44; // al
  _DWORD *v45; // rax
  __m128i v46; // xmm0
  int v47; // edx
  __int64 v48; // rdi
  __int64 v49; // rdx
  __int64 v50; // rax
  char v51; // [rsp+8h] [rbp-110h]
  unsigned int v52; // [rsp+10h] [rbp-108h]
  const char ***v53; // [rsp+18h] [rbp-100h]
  __int16 v54; // [rsp+24h] [rbp-F4h]
  int v55; // [rsp+30h] [rbp-E8h]
  char v56; // [rsp+36h] [rbp-E2h]
  bool v57; // [rsp+37h] [rbp-E1h]
  unsigned int v58; // [rsp+44h] [rbp-D4h] BYREF
  char v59[8]; // [rsp+48h] [rbp-D0h] BYREF
  _OWORD v60[2]; // [rsp+50h] [rbp-C8h] BYREF
  __m128i v61; // [rsp+70h] [rbp-A8h] BYREF
  __m128i v62; // [rsp+80h] [rbp-98h]
  __m128i v63; // [rsp+90h] [rbp-88h] BYREF
  __m128i v64; // [rsp+A0h] [rbp-78h] BYREF
  __m128 v65; // [rsp+B0h] [rbp-68h] BYREF
  _QWORD v66[3]; // [rsp+C0h] [rbp-58h] BYREF
  unsigned __int64 v67; // [rsp+D8h] [rbp-40h]

  v67 = __readfsqword(0x28u);
  v13 = *a4;
  v61 = _mm_loadu_si128((const __m128i *)(a4 + 18));
  v62 = _mm_loadu_si128((const __m128i *)(a4 + 22));
  v63 = _mm_loadu_si128((const __m128i *)(a4 + 26));
  v55 = v13;
  v14 = a4[16];
  v64 = _mm_loadu_si128((const __m128i *)(a4 + 30));
  v15 = (__m128)_mm_loadu_si128((const __m128i *)(a4 + 34));
  v54 = v14;
  v16 = a5[2];
  v65 = v15;
  if ( *a5 >= v16 || a5[3] <= a5[1] )
    return v67 - __readfsqword(0x28u);
  QT::QPainter::setPen(a2, 0);
  QT::QBrush::QBrush(v60, *(_QWORD *)(a3 + 288) + 16LL * *((unsigned __int8 *)a4 + 69), 1);
  QT::QPainter::setBrush(a2, (const QT::QBrush *)v60);
  QT::QBrush::~QBrush((QT::QBrush *)v60);
  sub_2B8260((__int64)a1, (__int64)a2, (__int64)a4, (__int64)a5);
  v56 = *(_BYTE *)(a3 + 436);
  if ( v56 )
  {
    v56 = 0;
LABEL_6:
    v26 = *a4;
    v27 = *(_QWORD **)(a3 + 408);
LABEL_7:
    v57 = 0;
    v28 = *(_BYTE *)(*(_QWORD *)(v27[1] + 104LL) + (int)v26) & 1;
    goto LABEL_8;
  }
  if ( v61.m128i_i32[3] - v61.m128i_i32[1] <= 7 )
    goto LABEL_6;
  v37 = *(double *)(a3 + 368);
  QT::QFont::pointSizeF((QT::QFont *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 32LL) + 56LL));
  v27 = *(_QWORD **)(a3 + 408);
  v38 = *a4;
  v24 = v37;
  a7 = (__m128i)v15;
  v26 = v38;
  v28 = *(_BYTE *)(*(_QWORD *)(v27[1] + 104LL) + v38) & 1;
  if ( v37 <= 3.0 / *(double *)v15.m128_u64 )
  {
    v56 = 1;
    goto LABEL_7;
  }
  v57 = v38 < v27[3];
  v56 = *(_BYTE *)(*(_QWORD *)(v27[1] + 104LL) + v38) & 1 | (v38 >= v27[3]);
  if ( v56 )
  {
LABEL_8:
    v29 = *((_QWORD *)a1 + 2);
    memset(v60, 0, 24);
    v30 = *(const char ****)(v29 + 824);
    v31 = *(_QWORD *)(v29 + 832);
    v53 = &v30[v31];
    if ( v53 != v30 )
    {
      while ( 1 )
      {
        v32 = *v30;
        v33 = v27[3];
        v34 = **v30;
        if ( v33 )
        {
          v23 = (__int64 *)v27[2];
          v35 = 0;
          while ( 1 )
          {
            v36 = v23[1];
            if ( v36 )
              break;
LABEL_47:
            ++v35;
            v23 += 3;
            if ( v27[3] == v35 )
            {
              v32 = *v30;
              v35 = -1;
              goto LABEL_16;
            }
          }
          v31 = *v23;
          v33 = 0;
          while ( v34 != (const char *)v31 )
          {
            ++v33;
            v31 += 272;
            if ( v36 == v33 )
              goto LABEL_47;
          }
          v32 = *v30;
        }
        else
        {
          v35 = -1;
        }
LABEL_16:
        if ( v28 )
        {
          v31 = *(_QWORD *)(v27[1] + 80LL);
          v35 = *(_DWORD *)(v31 + 4LL * (int)v35) & 0x7FFFFFFF;
        }
        if ( v26 == v35 )
        {
          v43 = *((_QWORD *)a1 + 2);
          v34 = (const char *)&v58;
          v51 = v28;
          v58 = 0;
          v44 = sub_1F7EA0(v43, &v58, (__int64)v32);
          v28 = v51;
          if ( v44 )
          {
            v45 = *(_DWORD **)&v60[0];
            v31 = v58;
            v27 = (_QWORD *)(*(_QWORD *)&v60[0] + 4LL * *((_QWORD *)&v60[0] + 1));
            if ( *(_QWORD **)&v60[0] == v27 )
              goto LABEL_66;
            while ( v58 != *v45 )
            {
              if ( v27 == (_QWORD *)++v45 )
                goto LABEL_66;
            }
            if ( v45 == (_DWORD *)v27 )
            {
LABEL_66:
              v66[0] = QT::QColor::fromRgba(
                         (QT::QColor *)(unsigned int)__ROR4__(_byteswap_ulong(v58), 8),
                         (unsigned int)&v58);
              v66[1] = v49;
              QT::QBrush::QBrush(v59, v66, 1);
              QT::QPainter::setBrush(a2, (const QT::QBrush *)v59);
              QT::QBrush::~QBrush((QT::QBrush *)v59);
              sub_2B8260((__int64)a1, (__int64)a2, (__int64)a4, (__int64)a5);
              v50 = *((_QWORD *)&v60[0] + 1);
              v23 = (__int64 *)v58;
              v34 = *(const char **)&v60[0];
              v28 = v51;
              v31 = *((_QWORD *)&v60[0] + 1) + 1LL;
              if ( *(_QWORD *)&v60[1] < (unsigned __int64)(*((_QWORD *)&v60[0] + 1) + 1LL) )
              {
                v52 = v58;
                *(_QWORD *)&v60[0] = qvector_reserve(v60, *(_QWORD *)&v60[0], v31, 4);
                v34 = *(const char **)&v60[0];
                v23 = (__int64 *)v52;
                v50 = *((_QWORD *)&v60[0] + 1);
                v28 = v51;
              }
              *(_DWORD *)&v34[4 * v50] = (_DWORD)v23;
              ++*((_QWORD *)&v60[0] + 1);
            }
            if ( v28 )
              *((_DWORD *)*v30 + 2) |= 0x80000000;
          }
        }
        if ( v53 == ++v30 )
          break;
        v26 = *a4;
        v27 = *(_QWORD **)(a3 + 408);
      }
      if ( *(_QWORD *)&v60[0] )
      {
        *((_QWORD *)&v60[0] + 1) = 0;
        qfree(*(_QWORD *)&v60[0], v34, v31, v27, v23, v33);
      }
    }
    if ( !byte_8CCA9D || (v54 & 4) != 0 )
    {
LABEL_38:
      if ( v62.m128i_i32[0] >= v62.m128i_i32[2] )
        goto LABEL_45;
LABEL_39:
      if ( v62.m128i_i32[1] >= v62.m128i_i32[3] )
        goto LABEL_45;
      goto LABEL_40;
    }
LABEL_62:
    sub_2C6540((__int64)a1, (__int64)a2, a3, (__int64)a4, &v61, 5);
    goto LABEL_38;
  }
  v56 = byte_8CCA9D;
  if ( byte_8CCA9D )
  {
    if ( (v54 & 4) != 0 )
    {
      if ( v62.m128i_i32[0] >= v62.m128i_i32[2] )
        goto LABEL_27;
      goto LABEL_39;
    }
    goto LABEL_62;
  }
  if ( v62.m128i_i32[0] >= v62.m128i_i32[2] || v62.m128i_i32[1] >= v62.m128i_i32[3] )
    goto LABEL_27;
  v56 = 1;
LABEL_40:
  QT::QBrush::QBrush(v60, *(_QWORD *)(a3 + 288) + 16LL * *((unsigned __int8 *)a4 + 68), 1);
  QT::QPainter::setBrush(a2, (const QT::QBrush *)v60);
  QT::QBrush::~QBrush((QT::QBrush *)v60);
  if ( !*(_BYTE *)(a3 + 436) )
  {
    a12 = (__m128)_mm_cvtsi32_si128(v62.m128i_u32[1]);
    a7 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v62.m128i_i32[2] - 2), _mm_cvtsi32_si128(v62.m128i_i32[3] - 2));
    v60[0] = _mm_unpacklo_epi64(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v62.m128i_u32[0]), (__m128i)a12), a7);
    QT::QPainter::drawRects(a2, v60, 1);
  }
  if ( (double)a1[108] * *(double *)(a3 + 368) > 8.0 )
  {
    v42 = *(void (**)())(*(_QWORD *)a1 + 760LL);
    if ( v42 != nullsub_77 )
      ((void (__fastcall *)(int *, QT::QPainter *, __int64, int *, __m128i *, __int64))v42)(
        a1,
        a2,
        a3,
        a4,
        &v63,
        *(_QWORD *)(a3 + 288) + 16LL * *((unsigned __int8 *)a4 + 68));
  }
LABEL_45:
  if ( !v56 )
    return v67 - __readfsqword(0x28u);
LABEL_27:
  if ( (v54 & 0x100) != 0 )
  {
    si128 = (__m128)_mm_load_si128((const __m128i *)&v65);
  }
  else
  {
    v46 = _mm_load_si128(&v64);
    v47 = *(_DWORD *)(a3 + 432);
    *((_QWORD *)&v60[0] + 1) = v46.m128i_i64[1];
    a9 = (__m128)_mm_cvtsi32_si128(v47 + v46.m128i_i32[1]);
    a8 = (__m128)_mm_cvtsi32_si128(v46.m128i_i32[3] - v47);
    a7 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v46.m128i_i32[2] - v47), (__m128i)a8);
    si128 = (__m128)_mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(_mm_cvtsi32_si128(v47 + _mm_cvtsi128_si32(v46)), (__m128i)a9),
                      a7);
  }
  v60[0] = si128;
  if ( (v54 & 0x40) != 0 )
  {
    v48 = *((unsigned __int8 *)a4 + 68);
  }
  else
  {
    v40 = 0xFFFFFFFFLL;
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 408) + 8LL) + 104LL) + v55) & 1) == 0 )
      goto LABEL_31;
    v48 = *((unsigned __int8 *)a4 + 69);
  }
  v40 = __ROR4__(_byteswap_ulong(QT::QColor::rgb((QT::QColor *)(*(_QWORD *)(a3 + 288) + 16 * v48))), 8) & 0xFFFFFF;
LABEL_31:
  v41 = *(unsigned __int64 (__fastcall **)(_QWORD *, QT::QPainter *, __int64, int *, const __m128i *, int *, __m128, __m128, __m128, __m128, double, double, __m128, __m128, char, __int64))(*(_QWORD *)a1 + 768LL);
  if ( v41 == sub_2B91C0 )
  {
    if ( v57 )
      sub_2B8C40(
        a1,
        a2,
        a3,
        a4,
        (const __m128i *)&v65,
        (int *)v60,
        si128,
        (__m128)a7,
        a8,
        a9,
        v24,
        v25,
        a12,
        a13,
        v40,
        (__int64 *)(*(_QWORD *)(*(_QWORD *)(a3 + 408) + 16LL) + 24LL * *a4));
  }
  else
  {
    ((void (__fastcall *)(int *, QT::QPainter *, __int64, int *, __m128 *, _OWORD *, bool, __int64))v41)(
      a1,
      a2,
      a3,
      a4,
      &v65,
      v60,
      v57,
      v40);
  }
  return v67 - __readfsqword(0x28u);
}
