__int64 __fastcall sub_183E10(unsigned int a1, char *a2, const QT::QObject **a3)
{
  __int64 v5; // rax
  __m128i si128; // xmm0
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r14
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  bool v12; // r13
  size_t v13; // rax
  char *v14; // r14
  unsigned __int64 v15; // rdx
  __int64 v16; // rsi
  unsigned int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  size_t v22; // r13
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  size_t v25; // r8
  unsigned __int64 v26; // rax
  size_t v27; // rax
  _BYTE *v28; // r14
  __int64 v29; // rdx
  __int64 v30; // r14
  __int64 v31; // r14
  __int64 v32; // r9
  char *v33; // rax
  char *v34; // rax
  unsigned __int64 v35; // r14
  char *v36; // r13
  void *v37; // rdi
  __int64 v38; // rax
  void *v39; // r9
  char *v40; // rdi
  void *v41; // rax
  unsigned __int64 v42; // [rsp+0h] [rbp-A0h]
  unsigned __int64 v43; // [rsp+0h] [rbp-A0h]
  __int64 v44; // [rsp+0h] [rbp-A0h]
  void *v45; // [rsp+0h] [rbp-A0h]
  size_t v46; // [rsp+8h] [rbp-98h]
  size_t v47; // [rsp+8h] [rbp-98h]
  size_t v48; // [rsp+8h] [rbp-98h]
  __int64 v49; // [rsp+10h] [rbp-90h]
  _BYTE v50[16]; // [rsp+18h] [rbp-88h] BYREF
  char *s; // [rsp+28h] [rbp-78h] BYREF
  __int128 v52; // [rsp+30h] [rbp-70h]
  void *ptr; // [rsp+48h] [rbp-58h] BYREF
  __int128 v54; // [rsp+50h] [rbp-50h]
  unsigned __int64 v55; // [rsp+60h] [rbp-40h]

  v55 = __readfsqword(0x28u);
  s = nullptr;
  v52 = 0;
  v5 = qvector_reserve(&s, 0, 21, 1);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC4B0);
  s = (char *)v5;
  *(_QWORD *)&v52 = 21;
  *(_DWORD *)(v5 + 16) = 694445422;
  *(__m128i *)v5 = si128;
  s[20] = 0;
  QT::QAction::font((QT::QAction *)v50);
  QT::QFont::setStyle(v50, 1);
  v7 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, *a3);
  v8 = v7;
  if ( !v7 )
  {
    v12 = 0;
    goto LABEL_4;
  }
  sub_183620(a2, v7, a1, *(double *)si128.m128i_i64);
  v9 = v8 + 576;
  sub_1E8DC0(v8 + 576);
  v10 = a1;
  v11 = sub_1E90B0(v8 + 576, a1);
  v8 = v11;
  v12 = 1;
  if ( !v11 || (*(_BYTE *)(v11 + 72) & 4) == 0 )
    goto LABEL_4;
  ptr = nullptr;
  v54 = 0;
  v22 = *(_QWORD *)(v11 + 40);
  if ( v22 )
  {
    ptr = (void *)qalloc_or_throw(*(_QWORD *)(v11 + 40));
    *((_QWORD *)&v54 + 1) = v22;
    v10 = *(_QWORD *)(v8 + 32);
    memcpy(ptr, (const void *)v10, v22);
    *(_QWORD *)&v54 = v22;
  }
  v23 = sub_1E8D00(v9);
  v12 = 1;
  v26 = v54;
  if ( v8 != v23 )
  {
LABEL_29:
    if ( v26 <= 1 )
      goto LABEL_30;
LABEL_32:
    v10 = 0;
    QT::QFont::setStyle(v50, 0);
    v27 = v54;
    v28 = ptr;
    v24 = *((_QWORD *)&v54 + 1);
    if ( (*(_BYTE *)(v8 + 72) & 2) == 0 )
    {
      if ( (_QWORD)v54 )
      {
        v29 = v54 + 1;
        v25 = v54 - 1;
        if ( *((_QWORD *)&v54 + 1) >= (unsigned __int64)(v54 + 1) )
          goto LABEL_35;
      }
      else
      {
        if ( *((_QWORD *)&v54 + 1) > 1u )
        {
          *(_QWORD *)&v54 = 2;
          *((_BYTE *)ptr + 1) = 0;
LABEL_37:
          v23 = 2;
          *(_BYTE *)ptr = 34;
          v30 = v54;
          if ( (_QWORD)v54 )
          {
            v23 = v54 + 1;
            v30 = v54 - 1;
          }
          v10 = (unsigned __int64)ptr;
          if ( *((_QWORD *)&v54 + 1) < v23 )
          {
            v43 = v23;
            ptr = (void *)qvector_reserve(&ptr, ptr, v23, 1);
            v23 = v43;
            v10 = (unsigned __int64)ptr;
          }
          *(_QWORD *)&v54 = v23;
          *(_BYTE *)(v10 + v30) = 34;
          *((_BYTE *)ptr + v30 + 1) = 0;
          goto LABEL_42;
        }
        v25 = 0;
        v29 = 2;
      }
      v47 = v25;
      v44 = v29;
      v41 = (void *)qvector_reserve(&ptr, ptr, v29, 1);
      v25 = v47;
      ptr = v41;
      v28 = v41;
      v29 = v44;
      v27 = v47 + 1;
LABEL_35:
      *(_QWORD *)&v54 = v29;
      v28[v27] = 0;
      if ( v25 )
        memmove((char *)ptr + 1, ptr, v25);
      goto LABEL_37;
    }
    if ( (_QWORD)v54 )
    {
      v23 = v54 + 10;
      v25 = v54 - 1;
      v32 = v54 + 9;
      if ( *((_QWORD *)&v54 + 1) >= (unsigned __int64)(v54 + 10) )
        goto LABEL_47;
    }
    else
    {
      if ( *((_QWORD *)&v54 + 1) > 0xAu )
      {
        *(_QWORD *)&v54 = 11;
        *((_BYTE *)ptr + 10) = 0;
LABEL_49:
        v24 = 8250;
        qmemcpy(v28, "Register: ", 10);
LABEL_42:
        v31 = v54;
        if ( (_QWORD)v54 && (v25 = v54 - 1, (_QWORD)v54 != 1) )
        {
          v39 = ptr;
          v40 = s;
          if ( *((_QWORD *)&v52 + 1) < (unsigned __int64)v54 )
          {
            v48 = v54 - 1;
            v45 = ptr;
            s = (char *)qvector_reserve(&s, s, v54, 1);
            v25 = v48;
            v40 = s;
            v39 = v45;
          }
          v10 = (unsigned __int64)v39;
          *(_QWORD *)&v52 = v31;
          memmove(v40, v39, v25);
          s[v31 - 1] = 0;
        }
        else
        {
          *(_QWORD *)&v52 = 0;
        }
        goto LABEL_30;
      }
      v25 = 0;
      v23 = 11;
      v32 = 10;
    }
    v10 = (unsigned __int64)ptr;
    v49 = v32;
    v46 = v25;
    v42 = v23;
    ptr = (void *)qvector_reserve(&ptr, ptr, v23, 1);
    v32 = v49;
    v28 = ptr;
    v25 = v46;
    v23 = v42;
LABEL_47:
    *(_QWORD *)&v54 = v23;
    v28[v32] = 0;
    v28 = ptr;
    if ( v25 )
    {
      v10 = (unsigned __int64)ptr;
      memmove((char *)ptr + 10, ptr, v25);
    }
    goto LABEL_49;
  }
  if ( (unsigned __int64)v54 > 1 )
  {
    v33 = (char *)ptr + v54 - 1;
    v10 = (unsigned __int64)ptr;
    if ( ptr >= v33 )
      goto LABEL_32;
    while ( *(_BYTE *)v10 == 32 )
    {
      if ( (char *)++v10 == v33 )
      {
        *(_BYTE *)ptr = *(_BYTE *)v10;
        v37 = ptr;
        goto LABEL_76;
      }
    }
    v12 = 1;
    if ( (unsigned __int64)ptr >= v10 )
      goto LABEL_32;
    v34 = &v33[-v10];
    v35 = (unsigned __int64)(v34 + 1);
    v36 = v34;
    memmove(ptr, (const void *)v10, (size_t)(v34 + 1));
    v10 = (unsigned __int64)ptr;
    v37 = ptr;
    if ( v36 )
    {
      v38 = v54;
      if ( (unsigned __int64)v54 < v35 )
      {
        if ( *((_QWORD *)&v54 + 1) < v35 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v35, 1);
          v10 = (unsigned __int64)ptr;
          v38 = v54;
        }
        memset((void *)(v10 + v38), 0, v35 - v38);
        *(_QWORD *)&v54 = v35;
        v10 = (unsigned __int64)ptr;
      }
      else if ( v35 != (_QWORD)v54 )
      {
        *(_QWORD *)&v54 = v35;
      }
      v36[v10] = 0;
    }
    else
    {
LABEL_76:
      if ( v37 )
      {
        *(_QWORD *)&v54 = 0;
        qfree(v37, v10, v23, v24, v25);
        ptr = nullptr;
        v26 = v54;
        *((_QWORD *)&v54 + 1) = 0;
LABEL_62:
        v12 = v26 > 1;
        goto LABEL_29;
      }
    }
    v26 = v54;
    goto LABEL_62;
  }
  v12 = 0;
LABEL_30:
  if ( ptr )
  {
    *(_QWORD *)&v54 = 0;
    qfree(ptr, v10, v23, v24, v25);
  }
LABEL_4:
  if ( (_QWORD)v52 )
  {
    v13 = v52 - 1;
    v14 = s;
    v15 = (unsigned __int64)(v52 - 1) >> 63;
  }
  else
  {
    LOBYTE(v15) = 0;
    v13 = 0;
    v14 = (char *)&s1;
  }
  if ( !v14 || (_BYTE)v15 )
  {
    v13 = 0;
    if ( v14 )
      v13 = strlen(v14);
  }
  QT::QString::fromUtf8(&ptr, v13, v14);
  QT::QAction::setText((QT::QAction *)a2, (const QT::QString *)&ptr);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  QT::QAction::setFont((QT::QAction *)a2, (const QT::QFont *)v50);
  QT::QAction::setCheckable((QT::QAction *)a2, 1);
  if ( v8 && v12 )
  {
    if ( (*(_BYTE *)(v8 + 72) & 4) != 0 )
    {
      v16 = 1;
      QT::QAction::setChecked((QT::QAction *)a2, 1);
LABEL_15:
      v17 = 3;
      goto LABEL_21;
    }
    v16 = 0;
    QT::QAction::setChecked((QT::QAction *)a2, 0);
    v17 = 3;
  }
  else
  {
    v16 = 0;
    QT::QAction::setChecked((QT::QAction *)a2, 0);
    if ( v12 )
      goto LABEL_15;
    v17 = 7;
  }
LABEL_21:
  QT::QFont::~QFont((QT::QFont *)v50);
  if ( s )
  {
    *(_QWORD *)&v52 = 0;
    qfree(s, v16, v18, v19, v20);
  }
  return v17;
}
