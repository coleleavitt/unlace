__int64 __fastcall sub_4F1250(volatile signed __int32 **a1, __int64 a2, __int64 a3, double a4, __m128 a5)
{
  __int64 v7; // rsi
  unsigned __int64 v9; // r15
  volatile signed __int32 *v10; // rsi
  __int64 v11; // rsi
  __m128d v12; // xmm0
  __int64 v13; // rax
  QT::QTextDocument *v14; // rbx
  __m128d v15; // xmm2
  int v16; // r14d
  __int64 v17; // rbp
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // r14d
  _DWORD *v21; // rax
  __int64 v22; // rbp
  unsigned __int64 v23; // rdi
  __int64 v24; // r8
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int8 *v27; // rcx
  __int64 i; // rax
  __int64 v29; // r14
  volatile signed __int32 *v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r14
  __int64 v34; // rax
  unsigned __int64 v35; // r14
  __m128d v37; // xmm3
  unsigned __int64 v38; // [rsp+30h] [rbp-168h] BYREF
  QT::QTextDocument *v39; // [rsp+38h] [rbp-160h] BYREF
  void *ptr[4]; // [rsp+40h] [rbp-158h] BYREF
  _BYTE v41[16]; // [rsp+60h] [rbp-138h] BYREF
  int v42; // [rsp+70h] [rbp-128h]
  __int64 v43; // [rsp+A0h] [rbp-F8h]
  __int64 v44; // [rsp+A8h] [rbp-F0h]
  __int64 v45; // [rsp+B0h] [rbp-E8h]
  _BYTE v46[20]; // [rsp+B8h] [rbp-E0h] BYREF
  int v47; // [rsp+CCh] [rbp-CCh]
  _BYTE v48[8]; // [rsp+D0h] [rbp-C8h] BYREF
  QT::QApplication *v49; // [rsp+D8h] [rbp-C0h]
  __m128d v50; // [rsp+E0h] [rbp-B8h]
  __int64 v51; // [rsp+F0h] [rbp-A8h]
  int v52; // [rsp+F8h] [rbp-A0h]
  _BYTE v53[8]; // [rsp+100h] [rbp-98h] BYREF
  void *v54[2]; // [rsp+108h] [rbp-90h] BYREF
  __int64 v55; // [rsp+118h] [rbp-80h]
  int v56; // [rsp+120h] [rbp-78h]
  _BYTE v57[8]; // [rsp+128h] [rbp-70h] BYREF
  __int128 v58; // [rsp+130h] [rbp-68h] BYREF
  __int64 v59; // [rsp+140h] [rbp-58h]
  __int64 v60; // [rsp+148h] [rbp-50h]
  unsigned __int64 v61; // [rsp+158h] [rbp-40h]

  v7 = *(_QWORD *)(a3 + 16);
  v61 = __readfsqword(0x28u);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int128 *, __int64, __int64, __int64))(*(_QWORD *)v7 + 144LL))(&v58, v7, a3, 18789);
  }
  else
  {
    a4 = 0.0;
    v59 = 0;
    v60 = 2;
    v58 = 0;
  }
  v38 = QT::QVariant::toULongLong((QT::QVariant *)&v58, nullptr);
  v9 = v38;
  QT::QVariant::~QVariant((QT::QVariant *)&v58);
  v10 = a1[5];
  if ( !v10 || !*((_QWORD *)v10 + 1) )
    goto LABEL_5;
  v23 = *((_QWORD *)v10 + 2);
  v24 = *((_QWORD *)v10 + 4);
  v25 = (v23 - 1)
      & (((0xD6E8FEB86659FD93LL
         * (((0xD6E8FEB86659FD93LL * (v38 ^ *((_QWORD *)v10 + 3) ^ ((v38 ^ *((_QWORD *)v10 + 3)) >> 32))) >> 32)
          ^ (0xD6E8FEB86659FD93LL * (v38 ^ *((_QWORD *)v10 + 3) ^ ((v38 ^ *((_QWORD *)v10 + 3)) >> 32))))) >> 32)
       ^ (0xD6E8FEB86659FD93LL
        * (((0xD6E8FEB86659FD93LL * (v38 ^ *((_QWORD *)v10 + 3) ^ ((v38 ^ *((_QWORD *)v10 + 3)) >> 32))) >> 32)
         ^ (0xD6E8FEB86659FD93LL * (v38 ^ *((_QWORD *)v10 + 3) ^ ((v38 ^ *((_QWORD *)v10 + 3)) >> 32))))));
  v26 = v25 & 0x7F;
  v27 = (unsigned __int8 *)(v24 + 144 * (v25 >> 7));
LABEL_26:
  for ( i = v27[v26]; i != 255; i = *v27 )
  {
    if ( v38 == *(_QWORD *)(*((_QWORD *)v27 + 16) + 16 * i) )
      break;
    if ( ++v26 != 128 )
      goto LABEL_26;
    v27 += 144;
    v26 = 0;
    if ( 0x8E38E38E38E38E39LL * ((__int64)&v27[-v24] >> 4) == v23 >> 7 )
      v27 = *((unsigned __int8 **)v10 + 4);
  }
  v29 = v26 | (0x1C71C71C71C71C80LL * ((__int64)&v27[-v24] >> 4));
  if ( *v10 > 1u )
  {
    v30 = (volatile signed __int32 *)sub_4F0480(a1[5], a4, a5);
    a1[5] = v30;
    v10 = v30;
  }
  v31 = v29;
  v32 = *((_QWORD *)v10 + 4);
  v33 = v29 & 0x7F;
  v34 = 144 * (v31 >> 7);
  if ( *(_BYTE *)(v32 + v34 + v33) != 0xFF )
  {
    v35 = (0x1C71C71C71C71C80LL * (v34 >> 4)) | v33;
    if ( v35 | (unsigned __int64)v10 )
      return *(_QWORD *)(*(_QWORD *)(144 * (v35 >> 7) + v32 + 128)
                       + 16LL * *(unsigned __int8 *)(144 * (v35 >> 7) + v32 + (v35 & 0x7F))
                       + 8);
  }
LABEL_5:
  v11 = *(_QWORD *)(a3 + 16);
  if ( v11 )
  {
    (*(void (__fastcall **)(__int128 *, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 144LL))(&v58, v11, a3, 0);
  }
  else
  {
    v59 = 0;
    v60 = 2;
    v58 = 0;
  }
  QT::QVariant::toString((QT::QVariant *)ptr);
  QT::QVariant::~QVariant((QT::QVariant *)&v58);
  QT::QStyleOption::QStyleOption((QT::QStyleOption *)v41, 1, 10);
  v43 = 0;
  v45 = -1;
  QT::QFont::QFont((QT::QFont *)v46);
  v47 = 0;
  QT::QLocale::QLocale((QT::QLocale *)v48);
  v50 = (__m128d)0xFFFFFFFFFFFFFFFFLL;
  v51 = 0;
  QT::QIcon::QIcon((QT::QIcon *)v53);
  v55 = 0;
  *(_OWORD *)v54 = 0;
  QT::QBrush::QBrush((QT::QBrush *)v57);
  QT::QStyleOption::operator=(v41, a2);
  v43 = *(_QWORD *)(a2 + 64);
  v44 = *(_QWORD *)(a2 + 72);
  v45 = *(_QWORD *)(a2 + 80);
  QT::QFont::operator=(v46, a2 + 88);
  v46[16] = *(_BYTE *)(a2 + 104);
  v47 = *(_DWORD *)(a2 + 108);
  QT::QLocale::operator=(v48, a2 + 112);
  v12 = (__m128d)_mm_loadu_si128((const __m128i *)(a2 + 128));
  v49 = *(QT::QApplication **)(a2 + 120);
  v13 = *(_QWORD *)(a2 + 144);
  v50 = v12;
  v51 = v13;
  v52 = *(_DWORD *)(a2 + 152);
  QT::QIcon::operator=(v53, a2 + 160);
  QT::QString::operator=(v54, a2 + 168);
  v56 = *(_DWORD *)(a2 + 192);
  QT::QBrush::operator=(v57, a2 + 200);
  (*((void (__fastcall **)(volatile signed __int32 **, _BYTE *, __int64))*a1 + 23))(a1, v41, a3);
  sub_4F03A0(&v39, (__int64)a1, (const QT::QString *)ptr, a3, (__int64)v41);
  v14 = v39;
  QT::QTextDocument::size(v39);
  v15 = (__m128d)_mm_loadl_epi64((const __m128i *)&xmmword_5DCC50);
  if ( COERCE_DOUBLE(*(_QWORD *)&v12.m128d_f64[0] & *(_QWORD *)&v15.m128d_f64[0]) < 4.503599627370496e15 )
  {
    v37.m128d_f64[0] = (double)(int)v12.m128d_f64[0];
    *(_QWORD *)&v12.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                     v37.m128d_f64[0]
                                   + COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v12, v37).m128d_f64[0] & 0x3FF0000000000000LL))
                                 | ~*(_QWORD *)&v15.m128d_f64[0] & *(_QWORD *)&v12.m128d_f64[0];
  }
  v16 = (int)v12.m128d_f64[0];
  *(_QWORD *)&v12.m128d_f64[0] = a5.m128_u64[0] & *(_QWORD *)&v15.m128d_f64[0];
  if ( COERCE_DOUBLE(a5.m128_u64[0] & *(_QWORD *)&v15.m128d_f64[0]) < 4.503599627370496e15 )
  {
    v12 = 0;
    v12.m128d_f64[0] = (double)(int)*(double *)a5.m128_u64;
    v12.m128d_f64[0] = v12.m128d_f64[0]
                     + COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd((__m128d)a5, v12).m128d_f64[0] & 0x3FF0000000000000LL);
    a5 = (__m128)_mm_or_pd(v12, _mm_andn_pd(v15, (__m128d)a5));
  }
  v17 = (unsigned int)(int)*(double *)a5.m128_u64;
  if ( v49 )
    v18 = QT::QWidget::style(v49);
  else
    v18 = QT::QApplication::style(nullptr);
  v19 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, QT::QApplication *))(*(_QWORD *)v18 + 192LL))(
          v18,
          46,
          v41,
          v49);
  v20 = v19 - v42 + v16;
  if ( (int)v17 < SHIDWORD(v45) )
    v17 = HIDWORD(v45);
  if ( v9 )
  {
    v21 = (_DWORD *)sub_4F0D00(a1 + 5, &v38, v12.m128d_f64[0], a5);
    *v21 = v20;
    v21[1] = v17;
  }
  v22 = (v17 << 32) | v20;
  if ( v14 )
    (*(void (__fastcall **)(QT::QTextDocument *))(*(_QWORD *)v14 + 32LL))(v14);
  QT::QBrush::~QBrush((QT::QBrush *)v57);
  if ( v54[0] && !_InterlockedSub((volatile signed __int32 *)v54[0], 1u) )
    free(v54[0]);
  QT::QIcon::~QIcon((QT::QIcon *)v53);
  QT::QLocale::~QLocale((QT::QLocale *)v48);
  QT::QFont::~QFont((QT::QFont *)v46);
  QT::QStyleOption::~QStyleOption((QT::QStyleOption *)v41);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v22;
}
