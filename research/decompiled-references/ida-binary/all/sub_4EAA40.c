unsigned __int64 __fastcall sub_4EAA40(QT::QAbstractItemView *a1, QT::QHeaderView *a2, __int64 a3, char a4)
{
  QT::QGuiApplication *v7; // rax
  QT::QGuiApplication *v8; // rdi
  __int64 (__fastcall *v9)(QT::QGuiApplication *, __m128i *); // rax
  int v10; // eax
  char v11; // r14
  const __m128i *v12; // rbx
  unsigned __int64 v13; // r15
  int v14; // ecx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  double v21; // xmm0_8
  void *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // r9
  void **v28; // rax
  QT::QGuiApplication *v29; // r15
  __int64 v30; // rbx
  double v31; // xmm0_8
  void *v32; // rdx
  void **v33; // rbx
  void **v34; // rbp
  unsigned __int64 v35; // r8
  void *v36; // rdi
  unsigned __int64 v37; // r15
  unsigned __int64 v38; // r15
  _BYTE *v39; // rdi
  int v40; // r14d
  char v41; // r14
  size_t v42; // r15
  _BYTE *v43; // rdi
  int v44; // r14d
  unsigned __int64 v45; // r15
  unsigned __int64 v46; // rbx
  int v47; // edx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // r8
  __int64 v52; // r9
  double v53; // xmm0_8
  void *v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // r8
  __int64 v59; // r9
  void **v60; // rbx
  QT::QGuiApplication *v61; // r13
  void **v62; // [rsp+0h] [rbp-118h]
  unsigned __int64 v63; // [rsp+0h] [rbp-118h]
  const __m128i *j; // [rsp+8h] [rbp-110h]
  QT::QGuiApplication *v65[2]; // [rsp+10h] [rbp-108h] BYREF
  __int64 i; // [rsp+20h] [rbp-F8h]
  void *v67[2]; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v68; // [rsp+40h] [rbp-D8h]
  __m128i v69; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v70; // [rsp+60h] [rbp-B8h]
  void *ptr[2]; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v72; // [rsp+80h] [rbp-98h]
  QT::QGuiApplication *v73; // [rsp+88h] [rbp-90h]
  void *s; // [rsp+90h] [rbp-88h] BYREF
  __int128 v75; // [rsp+98h] [rbp-80h]
  int v76; // [rsp+A8h] [rbp-70h]
  _BYTE v77[40]; // [rsp+B0h] [rbp-68h] BYREF
  unsigned __int64 v78; // [rsp+D8h] [rbp-40h]

  v78 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a3 + 16) )
    return v78 - __readfsqword(0x28u);
  v7 = (QT::QGuiApplication *)QT::QAbstractItemView::model(a1);
  v72 = 0;
  v73 = v7;
  v8 = v7;
  s = nullptr;
  *(_OWORD *)ptr = 0;
  v75 = 0;
  v9 = *(__int64 (__fastcall **)(QT::QGuiApplication *, __m128i *))(*(_QWORD *)v7 + 128LL);
  v69 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
  v70 = 0;
  v10 = v9(v8, &v69);
  v76 = v10;
  v11 = v10;
  if ( v10 > 0 )
  {
    v35 = v10;
    v36 = s;
    v37 = (unsigned __int64)(v10 + 7LL) >> 3;
    if ( *((_QWORD *)&v75 + 1) < v37 )
    {
      v63 = v10;
      s = (void *)qvector_reserve(&s, s, (unsigned __int64)(v10 + 7LL) >> 3, 1);
      v35 = v63;
      v36 = s;
    }
    *(_QWORD *)&v75 = v37;
    v38 = v35 >> 3;
    v39 = memset(v36, 255, v35 >> 3);
    v40 = v11 & 7;
    if ( v40 )
      v39[v38] |= (1 << v40) - 1;
    v41 = v76;
    v42 = (unsigned __int64)v76 >> 3;
    v43 = memset(s, 0, v42);
    v44 = v41 & 7;
    if ( v44 )
      v43[v42] &= -(char)(1 << v44);
    v8 = (QT::QGuiApplication *)(unsigned int)v76;
    v45 = 0;
    if ( v76 > 0 )
    {
      do
      {
        v8 = a2;
        if ( !(unsigned __int8)QT::QHeaderView::isSectionHidden(a2, v45) )
          *((_BYTE *)s + (v45 >> 3)) |= 1 << (v45 & 7);
        ++v45;
      }
      while ( v76 > (int)v45 );
      if ( !a4 )
        goto LABEL_5;
      goto LABEL_71;
    }
  }
  if ( a4 )
  {
LABEL_71:
    v46 = 0;
    *(_OWORD *)v65 = 0;
    for ( i = 0; v76 > (int)v46; ++v46 )
    {
      v47 = *((unsigned __int8 *)s + (v46 >> 3));
      if ( _bittest(&v47, v46 & 7) )
      {
        (*(void (__fastcall **)(_BYTE *, QT::QGuiApplication *, _QWORD, __int64, _QWORD))(*(_QWORD *)v73 + 160LL))(
          v77,
          v73,
          (unsigned int)v46,
          1,
          0);
        QT::QVariant::toString((QT::QVariant *)&v69);
        sub_1D5280((__m128i *)v65, i, &v69, v48, v49, v50);
        if ( !v65[0] || *(int *)v65[0] > 1 )
          sub_1B21C0((__m128i *)v65, 0, 0, 0, v51, v52);
        if ( v69.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v69.m128i_i64[0], 1u) )
          free((void *)v69.m128i_i64[0]);
        QT::QVariant::~QVariant((QT::QVariant *)v77);
      }
    }
    v53 = QT::QString::fromUtf8(v67, 1, "\t");
    v54 = v67[1];
    if ( !v67[1] )
      v54 = &QT::QString::_empty;
    QT::QtPrivate::QStringList_join(&v69, v65, v54, v68, v53);
    v8 = (QT::QGuiApplication *)ptr;
    sub_1D5280((__m128i *)ptr, v72, &v69, v55, v56, v57);
    if ( !ptr[0] || *(int *)ptr[0] > 1 )
    {
      v8 = (QT::QGuiApplication *)ptr;
      sub_1B21C0((__m128i *)ptr, 0, 0, 0, v58, v59);
    }
    if ( v69.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v69.m128i_i64[0], 1u) )
    {
      v8 = (QT::QGuiApplication *)v69.m128i_i64[0];
      free((void *)v69.m128i_i64[0]);
    }
    if ( v67[0] && !_InterlockedSub((volatile signed __int32 *)v67[0], 1u) )
    {
      v8 = (QT::QGuiApplication *)v67[0];
      free(v67[0]);
    }
    if ( v65[0] && !_InterlockedSub((volatile signed __int32 *)v65[0], 1u) )
    {
      v60 = (void **)v65[1];
      v61 = (QT::QGuiApplication *)((char *)v65[1] + 24 * i);
      if ( v65[1] != v61 )
      {
        do
        {
          if ( *v60 && !_InterlockedSub((volatile signed __int32 *)*v60, 1u) )
            free(*v60);
          v60 += 3;
        }
        while ( v61 != (QT::QGuiApplication *)v60 );
      }
      v8 = v65[0];
      free(v65[0]);
    }
  }
LABEL_5:
  v12 = *(const __m128i **)(a3 + 8);
  for ( j = (const __m128i *)((char *)v12 + 24 * *(_QWORD *)(a3 + 16)); j != v12; v12 = (const __m128i *)((char *)v12 + 24) )
  {
    v13 = 0;
    i = 0;
    *(_OWORD *)v65 = 0;
    while ( v76 > (int)v13 )
    {
      while ( 1 )
      {
        v14 = *((unsigned __int8 *)s + (v13 >> 3));
        if ( _bittest(&v14, v13 & 7) )
          break;
        if ( v76 <= (int)++v13 )
          goto LABEL_20;
      }
      v15 = v12[1].m128i_i64[0];
      if ( v15 )
      {
        if ( v12->m128i_i32[1] == (_DWORD)v13 )
        {
          *(__m128i *)v67 = _mm_loadu_si128(v12);
          v68 = v12[1].m128i_i64[0];
        }
        else
        {
          (*(void (__fastcall **)(void **, __int64, _QWORD, _QWORD, const __m128i *))(*(_QWORD *)v15 + 112LL))(
            v67,
            v12[1].m128i_i64[0],
            v12->m128i_u32[0],
            (unsigned int)v13,
            v12);
        }
      }
      else
      {
        v67[1] = nullptr;
        v68 = 0;
        v67[0] = (void *)-1LL;
      }
      (*(void (__fastcall **)(_BYTE *, QT::QGuiApplication *, void **, _QWORD))(*(_QWORD *)v73 + 144LL))(
        v77,
        v73,
        v67,
        0);
      QT::QVariant::toString((QT::QVariant *)&v69);
      sub_1D5280((__m128i *)v65, i, &v69, v16, v17, v18);
      if ( !v65[0] || *(int *)v65[0] > 1 )
        sub_1B21C0((__m128i *)v65, 0, 0, 0, v19, v20);
      if ( v69.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v69.m128i_i64[0], 1u) )
        free((void *)v69.m128i_i64[0]);
      ++v13;
      QT::QVariant::~QVariant((QT::QVariant *)v77);
    }
LABEL_20:
    v21 = QT::QString::fromUtf8(v67, 1, "\t");
    v22 = v67[1];
    if ( !v67[1] )
      v22 = &QT::QString::_empty;
    QT::QtPrivate::QStringList_join(&v69, v65, v22, v68, v21);
    v8 = (QT::QGuiApplication *)ptr;
    sub_1D5280((__m128i *)ptr, v72, &v69, v23, v24, v25);
    if ( !ptr[0] || *(int *)ptr[0] > 1 )
    {
      v8 = (QT::QGuiApplication *)ptr;
      sub_1B21C0((__m128i *)ptr, 0, 0, 0, v26, v27);
    }
    if ( v69.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v69.m128i_i64[0], 1u) )
    {
      v8 = (QT::QGuiApplication *)v69.m128i_i64[0];
      free((void *)v69.m128i_i64[0]);
    }
    if ( v67[0] && !_InterlockedSub((volatile signed __int32 *)v67[0], 1u) )
    {
      v8 = (QT::QGuiApplication *)v67[0];
      free(v67[0]);
    }
    if ( v65[0] && !_InterlockedSub((volatile signed __int32 *)v65[0], 1u) )
    {
      v28 = (void **)v65[1];
      v29 = (QT::QGuiApplication *)((char *)v65[1] + 24 * i);
      if ( v65[1] != v29 )
      {
        do
        {
          if ( *v28 && !_InterlockedSub((volatile signed __int32 *)*v28, 1u) )
          {
            v62 = v28;
            free(*v28);
            v28 = v62;
          }
          v28 += 3;
        }
        while ( v29 != (QT::QGuiApplication *)v28 );
      }
      v8 = v65[0];
      free(v65[0]);
    }
  }
  v30 = QT::QGuiApplication::clipboard(v8);
  v31 = QT::QString::fromUtf8(&v69, 1, "\n");
  v32 = (void *)v69.m128i_i64[1];
  if ( !v69.m128i_i64[1] )
    v32 = &QT::QString::_empty;
  QT::QtPrivate::QStringList_join(v67, ptr, v32, v70, v31);
  if ( v69.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v69.m128i_i64[0], 1u) )
    free((void *)v69.m128i_i64[0]);
  QT::QClipboard::setText(v30, v67, 0);
  if ( v67[0] && !_InterlockedSub((volatile signed __int32 *)v67[0], 1u) )
    free(v67[0]);
  if ( s )
  {
    *(_QWORD *)&v75 = 0;
    qfree(s, (const char *)v67);
  }
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    v33 = (void **)ptr[1];
    v34 = (void **)((char *)ptr[1] + 24 * v72);
    if ( ptr[1] != v34 )
    {
      do
      {
        if ( *v33 && !_InterlockedSub((volatile signed __int32 *)*v33, 1u) )
          free(*v33);
        v33 += 3;
      }
      while ( v34 != v33 );
    }
    free(ptr[0]);
  }
  return v78 - __readfsqword(0x28u);
}
