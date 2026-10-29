unsigned __int64 __fastcall sub_4D6B90(__m128i *a1, __int64 a2)
{
  __int64 v3; // rax
  int v5; // r15d
  __int64 v6; // rax
  void *v7; // rdx
  void *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  int v18; // esi
  unsigned __int64 v19; // r14
  int v20; // edx
  int *v21; // rax
  double v22; // xmm0_8
  void *v23; // rdx
  __m128i v24; // xmm0
  __m128i v25; // xmm1
  __int64 v26; // rcx
  volatile signed __int32 *v27; // rax
  volatile signed __int32 *v28; // rax
  void *v29; // rdi
  __m128i v30; // xmm0
  __m128i v31; // xmm1
  __int64 v32; // rcx
  __int64 v33; // rax
  size_t v34; // rax
  const char *v35; // rbx
  size_t v36; // rdx
  __m128i v37; // xmm0
  __m128i v38; // xmm1
  __int64 v39; // rcx
  void *v40; // rdi
  __m128i v41; // xmm0
  __m128i v42; // xmm1
  __int64 v43; // rcx
  void *v44; // rdi
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r8
  __int64 v49; // r9
  double v50; // xmm0_8
  void *v51; // rdx
  __m128i v52; // xmm0
  __m128i v53; // xmm1
  __int64 v54; // rcx
  void **v55; // rbx
  void **v56; // rbp
  unsigned int v58; // esi
  void *v59; // rdx
  __int64 v60; // rdx
  void **v61; // r13
  void **v62; // r14
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // r8
  __int64 v67; // r9
  __m128i si128; // xmm0
  __m128i v69; // xmm1
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // r8
  __int64 v75; // r9
  int v76; // [rsp+1Ch] [rbp-12Ch]
  void (__fastcall *v77)(QT::QTableWidgetItem *, __int64, _OWORD *); // [rsp+20h] [rbp-128h]
  QT::QTableWidgetItem *v78; // [rsp+28h] [rbp-120h]
  void *v79; // [rsp+38h] [rbp-110h] BYREF
  void *v80[2]; // [rsp+40h] [rbp-108h] BYREF
  __int64 v81; // [rsp+50h] [rbp-F8h]
  void *ptr[2]; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v83; // [rsp+70h] [rbp-D8h]
  void *v84; // [rsp+80h] [rbp-C8h] BYREF
  void *v85; // [rsp+88h] [rbp-C0h]
  __int64 v86; // [rsp+90h] [rbp-B8h]
  void *v87[2]; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v88; // [rsp+B0h] [rbp-98h]
  __m128i v89; // [rsp+C0h] [rbp-88h] BYREF
  _QWORD v90[2]; // [rsp+D0h] [rbp-78h] BYREF
  _OWORD v91[2]; // [rsp+E0h] [rbp-68h] BYREF
  unsigned __int64 v92; // [rsp+108h] [rbp-40h]

  v3 = a1[6].m128i_i64[0];
  v92 = __readfsqword(0x28u);
  QT::QTableWidget::insertRow(*(QT::QTableWidget **)(v3 + 88), 0);
  v5 = *(_DWORD *)a2;
  v76 = *(_DWORD *)a2 & 0xC00;
  QT::QIcon::QIcon((QT::QIcon *)&v79);
  v6 = QT::QWidget::palette(*(QT::QWidget **)(a1[6].m128i_i64[0] + 88));
  v89 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)QT::QPalette::brush(v6, 4, 9) + 8LL));
  switch ( v76 )
  {
    case 0:
      (*(void (__fastcall **)(void **, _QWORD *, __int64))(*QT::QCoreApplication::self + 136LL))(
        &v84,
        QT::QCoreApplication::self,
        50);
LABEL_3:
      v7 = v84;
      v8 = v79;
      v84 = nullptr;
      v79 = v7;
      v87[0] = v8;
      QT::QIcon::~QIcon((QT::QIcon *)v87);
      QT::QIcon::~QIcon((QT::QIcon *)&v84);
      break;
    case 1024:
      (*(void (__fastcall **)(void **, _QWORD *, __int64))(*QT::QCoreApplication::self + 136LL))(
        &v84,
        QT::QCoreApplication::self,
        51);
      goto LABEL_3;
    case 2048:
      v58 = (unsigned int)QT::QCoreApplication::self;
      (*(void (__fastcall **)(void **, _QWORD *, __int64))(*QT::QCoreApplication::self + 136LL))(
        &v84,
        QT::QCoreApplication::self,
        174);
      v59 = v84;
      v84 = nullptr;
      v87[0] = v79;
      v79 = v59;
      QT::QIcon::~QIcon((QT::QIcon *)v87);
      QT::QIcon::~QIcon((QT::QIcon *)&v84);
      v89.m128i_i64[0] = QT::QColor::fromRgb(
                           (QT::QColor *)(unsigned int)__ROR4__(_byteswap_ulong(*(_DWORD *)(a2 + 32)), 8),
                           v58);
      *(_QWORD *)&v91[0] = v89.m128i_i64[0];
      *((_QWORD *)&v91[0] + 1) = v60;
      *(__int64 *)((char *)v89.m128i_i64 + 6) = *(_QWORD *)((char *)v91 + 6);
      break;
  }
  v9 = sub_518C40(&v89);
  v10 = a1[5].m128i_i64[0];
  v90[1] = v11;
  v90[0] = v9;
  v81 = 0;
  *(_OWORD *)v80 = 0;
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 248LL))(v10, 0, 0);
  if ( !v13 )
  {
LABEL_106:
    QT::QString::fromUtf8(v87, 1, "*");
    si128 = _mm_load_si128((const __m128i *)v80);
    v69 = _mm_load_si128((const __m128i *)v87);
    v70 = v88;
    v88 = v81;
    v81 = v70;
    *(__m128i *)v80 = v69;
    *(__m128i *)v87 = si128;
    if ( si128.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)si128.m128i_i64[0], 1u) )
      free(v87[0]);
    goto LABEL_28;
  }
  v16 = 0;
  v17 = 8LL * *(_QWORD *)(a2 + 16);
  while ( v17 != v16 )
  {
    v18 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 8) + (v16 >> 3));
    v12 = v16 & 7;
    if ( !_bittest(&v18, v12) )
      break;
    if ( v13 == ++v16 )
      goto LABEL_106;
  }
  v19 = 0;
  v83 = 0;
  *(_OWORD *)ptr = 0;
  while ( 1 )
  {
    if ( v19 < v17 )
    {
      v20 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 8) + (v19 >> 3));
      if ( _bittest(&v20, v19 & 7) )
      {
        v21 = (int *)a1[3].m128i_i64[0];
        if ( !v21 || *v21 > 1 )
          sub_1B21C0(a1 + 3, 0, 0, 0, v14, v15);
        sub_1D5510((__m128i *)ptr, v83, (const __m128i *)(a1[3].m128i_i64[1] + 24 * v19), v12, v14, v15);
        if ( !ptr[0] || *(int *)ptr[0] > 1 )
          sub_1B21C0((__m128i *)ptr, 0, 0, 0, v14, v15);
      }
    }
    if ( v13 == ++v19 )
      break;
    v17 = 8LL * *(_QWORD *)(a2 + 16);
  }
  v22 = QT::QString::fromUtf8(&v84, 2, ", ");
  v23 = v85;
  if ( !v85 )
    v23 = &QT::QString::_empty;
  QT::QtPrivate::QStringList_join(v87, ptr, v23, v86, v22);
  v24 = _mm_load_si128((const __m128i *)v80);
  v25 = _mm_load_si128((const __m128i *)v87);
  v26 = v88;
  v88 = v81;
  v81 = v26;
  *(__m128i *)v80 = v25;
  *(__m128i *)v87 = v24;
  if ( v24.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v24.m128i_i64[0], 1u) )
  {
    free(v87[0]);
    v27 = (volatile signed __int32 *)v84;
    if ( !v84 )
    {
LABEL_26:
      v28 = (volatile signed __int32 *)ptr[0];
      if ( !ptr[0] )
        goto LABEL_28;
      goto LABEL_27;
    }
  }
  else
  {
    v27 = (volatile signed __int32 *)v84;
    if ( !v84 )
      goto LABEL_26;
  }
  if ( _InterlockedSub(v27, 1u) )
    goto LABEL_26;
  free(v84);
  v28 = (volatile signed __int32 *)ptr[0];
  if ( !ptr[0] )
    goto LABEL_28;
LABEL_27:
  if ( !_InterlockedSub(v28, 1u) )
  {
    v61 = (void **)ptr[1];
    v62 = (void **)((char *)ptr[1] + 24 * v83);
    if ( ptr[1] != v62 )
    {
      do
      {
        if ( *v61 && !_InterlockedSub((volatile signed __int32 *)*v61, 1u) )
          free(*v61);
        v61 += 3;
      }
      while ( v62 != v61 );
    }
    free(ptr[0]);
  }
LABEL_28:
  v78 = sub_4D3CE0((__int64)a1, 0, (const QT::QString *)v80, (__int64)&v89, (__int64)v90, (QT::QIcon *)&v79);
  v77 = *(void (__fastcall **)(QT::QTableWidgetItem *, __int64, _OWORD *))(*(_QWORD *)v78 + 32LL);
  QT::QVariant::QVariant((QT::QVariant *)v91, 2 * ((v5 & 0x40) == 0));
  v77(v78, 10, v91);
  QT::QVariant::~QVariant((QT::QVariant *)v91);
  if ( v80[1] )
  {
    v29 = v80[0];
    v81 = 0;
    *(_OWORD *)v80 = 0;
    if ( v29 )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)v29, 1u) )
        free(v29);
    }
  }
  if ( ((v5 >> 12) & 7) < (int)QT::QComboBox::count(*(QT::QComboBox **)(a1[6].m128i_i64[0] + 16)) )
  {
    QT::QComboBox::itemText((QT::QComboBox *)v87, *(_QWORD *)(a1[6].m128i_i64[0] + 16));
    v30 = _mm_load_si128((const __m128i *)v80);
    v31 = _mm_load_si128((const __m128i *)v87);
    v32 = v88;
    v88 = v81;
    v81 = v32;
    *(__m128i *)v80 = v31;
    *(__m128i *)v87 = v30;
    if ( v30.m128i_i64[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)v30.m128i_i64[0], 1u) )
        free(v87[0]);
    }
  }
  QT::QIcon::QIcon((QT::QIcon *)v87);
  sub_4D3CE0((__int64)a1, 1, (const QT::QString *)v80, (__int64)&v89, (__int64)v90, (QT::QIcon *)v87);
  QT::QIcon::~QIcon((QT::QIcon *)v87);
  v33 = *(_QWORD *)(a2 + 48);
  if ( v33 )
  {
    v34 = v33 - 1;
    v35 = *(const char **)(a2 + 40);
    v36 = v34 >> 63;
  }
  else
  {
    LOBYTE(v36) = 0;
    v34 = 0;
    v35 = &s1;
  }
  if ( !v35 || (_BYTE)v36 )
  {
    v34 = 0;
    if ( v35 )
      v34 = strlen(v35);
  }
  QT::QString::fromUtf8(v87, v34, v35);
  v37 = _mm_load_si128((const __m128i *)v80);
  v38 = _mm_load_si128((const __m128i *)v87);
  v39 = v88;
  v88 = v81;
  v81 = v39;
  *(__m128i *)v80 = v38;
  *(__m128i *)v87 = v37;
  if ( v37.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v37.m128i_i64[0], 1u) )
    free(v87[0]);
  QT::QIcon::QIcon((QT::QIcon *)v87);
  sub_4D3CE0((__int64)a1, 2, (const QT::QString *)v80, (__int64)&v89, (__int64)v90, (QT::QIcon *)v87);
  QT::QIcon::~QIcon((QT::QIcon *)v87);
  if ( v80[1] )
  {
    v40 = v80[0];
    v81 = 0;
    *(_OWORD *)v80 = 0;
    if ( v40 )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)v40, 1u) )
        free(v40);
    }
  }
  if ( v76 >> 10 < (int)QT::QComboBox::count(*(QT::QComboBox **)(a1[6].m128i_i64[0] + 40)) )
  {
    QT::QComboBox::itemText((QT::QComboBox *)v87, *(_QWORD *)(a1[6].m128i_i64[0] + 40));
    v41 = _mm_load_si128((const __m128i *)v80);
    v42 = _mm_load_si128((const __m128i *)v87);
    v43 = v88;
    v88 = v81;
    v81 = v43;
    *(__m128i *)v80 = v42;
    *(__m128i *)v87 = v41;
    if ( v41.m128i_i64[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)v41.m128i_i64[0], 1u) )
        free(v87[0]);
    }
  }
  QT::QIcon::QIcon((QT::QIcon *)v87);
  sub_4D3CE0((__int64)a1, 3, (const QT::QString *)v80, (__int64)&v89, (__int64)v90, (QT::QIcon *)v87);
  QT::QIcon::~QIcon((QT::QIcon *)v87);
  if ( v80[1] )
  {
    v44 = v80[0];
    v81 = 0;
    *(_OWORD *)v80 = 0;
    if ( v44 )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)v44, 1u) )
        free(v44);
    }
  }
  v83 = 0;
  *(_OWORD *)ptr = 0;
  if ( v5 < 0 )
  {
    QT::QString::fromUtf8(v87, 12, "quick-filter");
    sub_1D5280((__m128i *)ptr, v83, (const __m128i *)v87, v71, v72, v73);
    if ( !ptr[0] || *(int *)ptr[0] > 1 )
      sub_1B21C0((__m128i *)ptr, 0, 0, 0, v74, v75);
    if ( v87[0] && !_InterlockedSub((volatile signed __int32 *)v87[0], 1u) )
      free(v87[0]);
  }
  if ( (v5 & 2) != 0 )
  {
    QT::QString::fromUtf8(v87, 5, "regex");
    sub_1D5280((__m128i *)ptr, v83, (const __m128i *)v87, v63, v64, v65);
    if ( !ptr[0] || *(int *)ptr[0] > 1 )
      sub_1B21C0((__m128i *)ptr, 0, 0, 0, v66, v67);
    if ( v87[0] && !_InterlockedSub((volatile signed __int32 *)v87[0], 1u) )
      free(v87[0]);
  }
  if ( (v5 & 0x20) != 0 )
  {
    QT::QString::fromUtf8(v87, 10, "match-case");
    sub_1D5280((__m128i *)ptr, v83, (const __m128i *)v87, v45, v46, v47);
    if ( !ptr[0] || *(int *)ptr[0] > 1 )
      sub_1B21C0((__m128i *)ptr, 0, 0, 0, v48, v49);
    if ( v87[0] && !_InterlockedSub((volatile signed __int32 *)v87[0], 1u) )
      free(v87[0]);
  }
  v50 = QT::QString::fromUtf8(&v84, 1, "|");
  v51 = v85;
  if ( !v85 )
    v51 = &QT::QString::_empty;
  QT::QtPrivate::QStringList_join(v87, ptr, v51, v86, v50);
  v52 = _mm_load_si128((const __m128i *)v80);
  v53 = _mm_load_si128((const __m128i *)v87);
  v54 = v88;
  v88 = v81;
  v81 = v54;
  *(__m128i *)v80 = v53;
  *(__m128i *)v87 = v52;
  if ( v52.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v52.m128i_i64[0], 1u) )
    free(v87[0]);
  if ( v84 && !_InterlockedSub((volatile signed __int32 *)v84, 1u) )
    free(v84);
  QT::QIcon::QIcon((QT::QIcon *)v87);
  sub_4D3CE0((__int64)a1, 4, (const QT::QString *)v80, (__int64)&v89, (__int64)v90, (QT::QIcon *)v87);
  QT::QIcon::~QIcon((QT::QIcon *)v87);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    v55 = (void **)ptr[1];
    v56 = (void **)((char *)ptr[1] + 24 * v83);
    if ( ptr[1] != v56 )
    {
      do
      {
        if ( *v55 && !_InterlockedSub((volatile signed __int32 *)*v55, 1u) )
          free(*v55);
        v55 += 3;
      }
      while ( v56 != v55 );
    }
    free(ptr[0]);
  }
  if ( v80[0] && !_InterlockedSub((volatile signed __int32 *)v80[0], 1u) )
    free(v80[0]);
  QT::QIcon::~QIcon((QT::QIcon *)&v79);
  return v92 - __readfsqword(0x28u);
}
