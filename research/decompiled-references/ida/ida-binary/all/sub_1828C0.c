unsigned __int64 sub_1828C0()
{
  __int64 plugins; // rax
  __int64 v1; // rbx
  unsigned __int8 v2; // bp
  __int64 v3; // rax
  __int64 v4; // r9
  QT::QWidget *v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  void *v9; // rdi
  __m128i v10; // xmm0
  const char *v11; // rdx
  int *p_ptr; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  const char *v16; // r13
  size_t v17; // r12
  size_t v18; // r13
  __int64 v19; // r12
  const char *v20; // rax
  const char *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r13
  void **v25; // rsi
  char *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  size_t v29; // r12
  QT::QAction *v30; // r12
  __int64 v31; // r13
  size_t v32; // rax
  QT::QWidget *v33; // r13
  char *v34; // r12
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r9
  int *v39; // rax
  void *v40; // rdi
  size_t v42; // r10
  void *v43; // rax
  size_t v44; // r8
  __int64 v45; // rsi
  __int64 v46; // rdx
  char *v47; // rsi
  char *v48; // rdi
  char *v49; // rax
  char *v50; // rcx
  __int64 v51; // rbx
  __int64 v52; // r12
  __int64 v53; // rdi
  QT::QWidget *v54; // [rsp+8h] [rbp-140h]
  void *v55; // [rsp+10h] [rbp-138h]
  __int64 v56; // [rsp+10h] [rbp-138h]
  size_t v57; // [rsp+10h] [rbp-138h]
  size_t v58; // [rsp+18h] [rbp-130h]
  void *src; // [rsp+20h] [rbp-128h] BYREF
  size_t n[3]; // [rsp+28h] [rbp-120h]
  void *v61; // [rsp+40h] [rbp-108h] BYREF
  __int128 v62; // [rsp+48h] [rbp-100h]
  __int64 v63; // [rsp+60h] [rbp-E8h] BYREF
  __int128 v64; // [rsp+68h] [rbp-E0h]
  void *v65; // [rsp+80h] [rbp-C8h] BYREF
  size_t v66; // [rsp+88h] [rbp-C0h]
  void *ptr; // [rsp+A0h] [rbp-A8h] BYREF
  __int128 v68; // [rsp+A8h] [rbp-A0h]
  _BYTE s[52]; // [rsp+C0h] [rbp-88h] BYREF
  int v70; // [rsp+F4h] [rbp-54h]
  __int64 v71; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v72; // [rsp+108h] [rbp-40h]

  v72 = __readfsqword(0x28u);
  if ( !qword_8CD748 )
    return v72 - __readfsqword(0x28u);
  v54 = (QT::QWidget *)sub_53DC50(qword_8CD748, "Plugins");
  QT::QWidget::setEnabled(v54, 0);
  sub_17E4C0();
  QT::QMenu::clear(v54);
  plugins = get_plugins();
  v1 = plugins;
  if ( !plugins )
    return v72 - __readfsqword(0x28u);
  while ( (*(_BYTE *)(plugins + 144) & 0x10) != 0 )
  {
    plugins = *(_QWORD *)plugins;
    if ( !plugins )
    {
      v2 = 0;
      goto LABEL_6;
    }
  }
  v2 = 1;
  QT::QWidget::setEnabled(v54, 1);
  QT::QWidget::addAction(v54, qword_8CA5B0);
  QT::QMenu::addSeparator(v54);
LABEL_6:
  v3 = sub_5313F0(qword_8CA5B0);
  if ( v3 )
    sub_531E10(v3, v2);
  v5 = qword_8CD748;
  if ( !*((_QWORD *)qword_8CD748 + 49) )
    goto LABEL_15;
  v6 = *((_QWORD *)qword_8CD748 + 47);
  v7 = 0;
  if ( !v6 )
    goto LABEL_12;
  if ( *(int *)v6 > 1 )
  {
    v7 = *(_QWORD *)(v6 + 8);
LABEL_12:
    v8 = QT::QArrayData::allocate(s, 8, 16, v7, 1, v4);
    v9 = *((void **)v5 + 47);
    v10 = _mm_loadl_epi64((const __m128i *)s);
    *((_QWORD *)v5 + 49) = 0;
    *(__m128i *)((char *)v5 + 376) = _mm_unpacklo_epi64(v10, (__m128i)(unsigned __int64)v8);
    if ( v9 && !_InterlockedSub((volatile signed __int32 *)v9, 1u) )
      free(v9);
    goto LABEL_15;
  }
  *((_QWORD *)qword_8CD748 + 49) = 0;
LABEL_15:
  src = nullptr;
  *(_OWORD *)n = 0;
  QT::QMenu::title((QT::QMenu *)&ptr);
  QT::QString::toUtf8_helper((QT::QString *)s, (const QT::QString *)&ptr);
  v11 = *(const char **)&s[8];
  if ( !*(_QWORD *)&s[8] )
    v11 = (const char *)&QT::QByteArray::_empty;
  p_ptr = (int *)"Edit/%s/";
  sub_169A50((__int64 *)&src, (__int64)"Edit/%s/", v11);
  if ( *(_QWORD *)s && !_InterlockedSub(*(volatile signed __int32 **)s, 1u) )
    free(*(void **)s);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  do
  {
    if ( (*(_BYTE *)(v1 + 144) & 0x10) != 0 )
      goto LABEL_53;
    sub_518A60((QT::QString *)&ptr);
    p_ptr = (int *)&ptr;
    QT::QString::toUtf8_helper((QT::QString *)s, (const QT::QString *)&ptr);
    v16 = *(const char **)&s[8];
    v61 = nullptr;
    v62 = 0;
    if ( !*(_QWORD *)&s[8] )
    {
      if ( !&QT::QByteArray::_empty )
        goto LABEL_26;
      v16 = (const char *)&QT::QByteArray::_empty;
    }
    v17 = strlen(v16);
    p_ptr = (int *)v16;
    v61 = (void *)qvector_reserve(&v61, 0, v17 + 1, 1);
    *(_QWORD *)&v62 = v17 + 1;
    memmove(v61, v16, v17);
    *((_BYTE *)v61 + v17) = 0;
LABEL_26:
    if ( *(_QWORD *)s && !_InterlockedSub(*(volatile signed __int32 **)s, 1u) )
      free(*(void **)s);
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
    v18 = n[0];
    v63 = 0;
    v64 = 0;
    if ( !n[0] )
    {
      v19 = v62;
      if ( !(_QWORD)v62 )
        goto LABEL_34;
      v42 = v62 - 1;
      if ( (_QWORD)v62 == 1 )
      {
        v19 = 1;
LABEL_34:
        v70 = 0;
        memset(&s[20], 0, 32);
        *(_DWORD *)s = 64;
        *(_QWORD *)&s[32] = 2;
        v71 = 0x1FFFFFFFFLL;
        v20 = &s1;
        *(_OWORD *)&s[4] = 0;
        goto LABEL_35;
      }
      v45 = v63;
      v44 = v62 - 1;
      if ( *((_QWORD *)&v64 + 1) >= (unsigned __int64)v62 )
      {
LABEL_62:
        *(_QWORD *)&v64 = v19;
        *(_BYTE *)(v45 + v42) = 0;
        p_ptr = (int *)v61;
        memcpy((void *)(v18 + v63), v61, v44);
        memset(&s[20], 0, 32);
        v19 = v62;
        v71 = 0x1FFFFFFFFLL;
        v20 = &s1;
        v70 = 0;
        *(_DWORD *)s = 64;
        *(_QWORD *)&s[32] = 2;
        *(_OWORD *)&s[4] = 0;
        if ( !(_QWORD)v64 )
          goto LABEL_35;
        goto LABEL_63;
      }
LABEL_85:
      v58 = v44;
      v57 = v42;
      v63 = qvector_reserve(&v63, v45, v19, 1);
      v44 = v58;
      v45 = v63;
      v42 = v57;
      goto LABEL_62;
    }
    v43 = (void *)qalloc_or_throw(n[0]);
    p_ptr = (int *)src;
    v63 = (__int64)v43;
    *((_QWORD *)&v64 + 1) = v18;
    memcpy(v43, src, v18);
    v19 = v62;
    *(_QWORD *)&v64 = v18;
    if ( (_QWORD)v62 )
    {
      v44 = v62 - 1;
      if ( (_QWORD)v62 != 1 )
      {
        --v18;
        v45 = v63;
        v42 = v44 + v18;
        v19 = v62 + v18;
        if ( *((_QWORD *)&v64 + 1) >= (unsigned __int64)v62 + v18 )
          goto LABEL_62;
        goto LABEL_85;
      }
      v19 = 1;
    }
    v70 = 0;
    memset(&s[20], 0, 32);
    *(_DWORD *)s = 64;
    *(_QWORD *)&s[32] = 2;
    v71 = 0x1FFFFFFFFLL;
    *(_OWORD *)&s[4] = 0;
LABEL_63:
    v20 = (const char *)v63;
LABEL_35:
    *(_QWORD *)&s[8] = v20;
    v21 = &s1;
    if ( v19 )
      v21 = (const char *)v61;
    *(_QWORD *)&s[16] = v21;
    v22 = qalloc_or_throw(24);
    *(_DWORD *)(v22 + 8) = 1;
    *(_QWORD *)v22 = plugin_action_handler_t___vtable;
    *(_QWORD *)(v22 + 16) = v1;
    *(_QWORD *)&s[24] = v22;
    v23 = sub_538360(s);
    v24 = v23;
    if ( v23 )
    {
      *(_DWORD *)(v23 + 124) = 2;
      v25 = (void **)*(unsigned __int16 *)(v1 + 34);
      if ( (_WORD)v25 )
      {
        sub_4B0E40(&v65);
        v29 = v66;
        if ( v66 > 1 )
        {
          ptr = nullptr;
          v68 = 0;
          v55 = (void *)qalloc_or_throw(v66);
          memcpy(v55, v65, v29);
          v46 = v68;
          v47 = (char *)ptr;
          if ( *((_QWORD *)&v68 + 1) < (unsigned __int64)(v68 + 1) )
          {
            ptr = (void *)qvector_reserve(&ptr, ptr, v68 + 1, 24);
            v46 = v68;
            v47 = (char *)ptr;
          }
          v48 = (char *)&s1;
          v49 = &v47[24 * v46];
          *(_QWORD *)v49 = v55;
          *(__m128i *)(v49 + 8) = _mm_unpacklo_epi64((__m128i)v29, (__m128i)v29);
          *(_QWORD *)&v68 = v68 + 1;
          if ( *(_QWORD *)(v24 + 40) )
            v48 = *(char **)(v24 + 32);
          v25 = &ptr;
          sub_4B5050(v48);
          v26 = (char *)ptr;
          if ( ptr )
          {
            v50 = (char *)v68;
            if ( (_QWORD)v68 )
            {
              v56 = v1;
              v51 = 0;
              v52 = v68;
              do
              {
                v50 = &v26[24 * v51];
                v53 = *(_QWORD *)v50;
                if ( *(_QWORD *)v50 )
                {
                  *((_QWORD *)v50 + 1) = 0;
                  qfree(v53, &ptr, v26, v50, v28);
                  v26 = (char *)ptr;
                }
                ++v51;
              }
              while ( v52 != v51 );
              v1 = v56;
            }
            *(_QWORD *)&v68 = 0;
            qfree(v26, &ptr, v26, v50, v28);
          }
        }
        if ( v65 )
        {
          v66 = 0;
          qfree(v65, v25, v26, v27, v28);
        }
      }
      sub_5378C0(v24);
      *(_BYTE *)(v24 + 156) = 1;
      v30 = *(QT::QAction **)(v24 + 192);
      v31 = *(_QWORD *)(v1 + 152);
      if ( v31 )
      {
        v32 = strlen(*(const char **)(v1 + 152));
        QT::QString::fromUtf8(&ptr, v32, v31);
        QT::QAction::setStatusTip(v30, (const QT::QString *)&ptr);
        if ( ptr )
        {
          if ( !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
            free(ptr);
        }
      }
      QT::QWidget::addAction(v54, v30);
      ptr = v30;
      v33 = qword_8CD748;
      v34 = (char *)qword_8CD748 + 376;
      p_ptr = *((int **)qword_8CD748 + 49);
      sub_1825D0((int **)qword_8CD748 + 47, p_ptr, (__int64 *)&ptr, v35, v36, v37);
      v39 = *((int **)v33 + 47);
      if ( !v39 || *v39 > 1 )
      {
        p_ptr = nullptr;
        sub_1821F0((__int64)v34, 0, 0, 0, v15, v38);
      }
      if ( v63 )
      {
        *(_QWORD *)&v64 = 0;
        qfree(v63, p_ptr, v13, v14, v15);
      }
      v40 = v61;
      if ( v61 )
        goto LABEL_52;
    }
    else
    {
      if ( v63 )
      {
        *(_QWORD *)&v64 = 0;
        qfree(v63, p_ptr, v13, v14, v15);
      }
      v40 = v61;
      if ( v61 )
      {
LABEL_52:
        *(_QWORD *)&v62 = 0;
        qfree(v40, p_ptr, v13, v14, v15);
      }
    }
LABEL_53:
    v1 = *(_QWORD *)v1;
  }
  while ( v1 );
  if ( src )
  {
    n[0] = 0;
    qfree(src, p_ptr, v13, v14, v15);
  }
  return v72 - __readfsqword(0x28u);
}
