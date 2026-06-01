unsigned __int64 __fastcall sub_5378C0(_QWORD *a1)
{
  bool v1; // zf
  const char *v2; // rdx
  double v3; // xmm0_8
  __int64 v4; // r13
  unsigned __int64 v5; // r12
  const void **v6; // r14
  size_t v7; // rbx
  size_t v8; // rax
  const char *v9; // r14
  const char *v10; // rbp
  size_t v11; // rbx
  void **p_ptr; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  double v16; // xmm0_8
  __int64 v17; // r9
  size_t v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  QT::QKeySequence *v21; // rbx
  QT::QKeySequence *v22; // rbp
  QT::QKeySequence *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rbp
  __int64 v26; // rbx
  __int64 *v27; // rax
  __int64 v28; // rdi
  QT::QKeySequence *v30; // rdx
  char *v31; // rax
  size_t v32; // rdx
  QT::QKeySequence *v33; // [rsp+8h] [rbp-120h]
  QT::QKeySequence *v34; // [rsp+18h] [rbp-110h]
  QT::QKeySequence *v35; // [rsp+18h] [rbp-110h]
  __int64 v36; // [rsp+20h] [rbp-108h]
  _BYTE v37[8]; // [rsp+30h] [rbp-F8h] BYREF
  _BYTE v38[8]; // [rsp+38h] [rbp-F0h] BYREF
  __int64 v39; // [rsp+40h] [rbp-E8h] BYREF
  __int128 v40; // [rsp+48h] [rbp-E0h]
  QT::QKeySequence *v41[2]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+70h] [rbp-B8h]
  void *v43[4]; // [rsp+80h] [rbp-A8h] BYREF
  void *v44[4]; // [rsp+A0h] [rbp-88h] BYREF
  void *ptr; // [rsp+C0h] [rbp-68h] BYREF
  char *v46; // [rsp+C8h] [rbp-60h]
  char *v47; // [rsp+D0h] [rbp-58h]
  __int64 v48; // [rsp+D8h] [rbp-50h]
  size_t v49; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v50; // [rsp+E8h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  v36 = a1[24];
  if ( v36 )
  {
    v1 = a1[5] == 0;
    v39 = 0;
    v2 = &s1;
    v40 = 0;
    v3 = 0.0;
    v42 = 0;
    *(_OWORD *)v41 = 0;
    if ( !v1 )
      v2 = (const char *)a1[4];
    if ( sub_4B1970((__int64)&v39, nullptr, v2) && (_QWORD)v40 )
    {
      v4 = 0;
      v5 = 0;
      while ( 1 )
      {
        v6 = (const void **)(v4 + v39);
        v7 = *(_QWORD *)(v4 + v39 + 8);
        if ( v7 )
        {
          v31 = (char *)qalloc_or_throw(*(_QWORD *)(v4 + v39 + 8));
          v32 = v7;
          v11 = v7 - 1;
          v10 = v31;
          memcpy(v31, *v6, v32);
          v9 = v10;
          v8 = v11 >> 63;
        }
        else
        {
          LOBYTE(v8) = 0;
          v9 = nullptr;
          v10 = &s1;
          v11 = 0;
        }
        if ( !v10 || (_BYTE)v8 )
        {
          v11 = 0;
          if ( v10 )
            v11 = strlen(v10);
        }
        v3 = QT::QString::fromUtf8(&ptr, v11, v10);
        p_ptr = &ptr;
        QT::QKeySequence::QKeySequence(v37, &ptr, 0, v3);
        if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
          free(ptr);
        if ( (unsigned __int8)QT::QKeySequence::isEmpty((QT::QKeySequence *)v37) )
          goto LABEL_41;
        sub_536CF0((__m128i *)v41, v42, (const QT::QKeySequence *)v37);
        if ( !v41[0] || *(int *)v41[0] > 1 )
          sub_4B1FD0((__m128i *)v41, 0, 0, 0, v13, v14);
        QT::QKeySequence::toString(v43, v37, 1);
        v3 = QT::QString::fromUtf8(&ptr, 5, "Enter");
        p_ptr = &ptr;
        v15 = QT::QString::indexOf(v43, &ptr, 0, 0, v3);
        if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
        {
          v33 = (QT::QKeySequence *)v15;
          free(ptr);
          v15 = (__int64)v33;
        }
        if ( v15 != -1 )
          break;
LABEL_38:
        if ( v43[0] && !_InterlockedSub((volatile signed __int32 *)v43[0], 1u) )
          free(v43[0]);
LABEL_41:
        QT::QKeySequence::~QKeySequence((QT::QKeySequence *)v37);
        if ( v9 )
          v3 = qfree(v9, (const char *)p_ptr);
        ++v5;
        v4 += 24;
        if ( v5 >= (unsigned __int64)v40 )
          goto LABEL_44;
      }
      v16 = QT::QString::fromUtf8(&ptr, 6, "Return");
      v3 = QT::QString::fromUtf8(v44, 5, "Enter", v16);
      QT::QString::replace(v43, v44, &ptr, 0);
      if ( v44[0] && !_InterlockedSub((volatile signed __int32 *)v44[0], 1u) )
        free(v44[0]);
      if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
        free(ptr);
      QT::QKeySequence::QKeySequence(v38, v43, 0, v3);
      v34 = (QT::QKeySequence *)v42;
      if ( !v41[0] || *(int *)v41[0] > 1 )
      {
        QT::QKeySequence::QKeySequence((QT::QKeySequence *)v44, (const QT::QKeySequence *)v38);
        if ( !v42 || v34 )
          goto LABEL_32;
LABEL_61:
        sub_536B90((__m128i *)v41, 1u, 1, nullptr, nullptr, v17);
        p_ptr = v44;
        QT::QKeySequence::QKeySequence((QT::QKeySequence *)((char *)v41[1] - 8), (const QT::QKeySequence *)v44);
        v41[1] = (QT::QKeySequence *)((char *)v41[1] - 8);
        ++v42;
        goto LABEL_33;
      }
      v30 = (QT::QKeySequence *)(((unsigned __int64)v41[0] + 31) & 0xFFFFFFFFFFFFFFF0LL);
      if ( v42 == *((_QWORD *)v41[0] + 1) - ((v41[1] - v30) >> 3) )
      {
        if ( v42 )
        {
          QT::QKeySequence::QKeySequence((QT::QKeySequence *)v44, (const QT::QKeySequence *)v38);
          goto LABEL_32;
        }
        if ( v41[1] == v30 )
        {
          QT::QKeySequence::QKeySequence((QT::QKeySequence *)v44, (const QT::QKeySequence *)v38);
          if ( v42 )
            goto LABEL_61;
LABEL_32:
          sub_536B90((__m128i *)v41, 0, 1, nullptr, nullptr, v17);
          v48 = 1;
          ptr = v41;
          v18 = 8 * (v42 - (_QWORD)v34);
          v46 = (char *)v41[1] + 8 * (_QWORD)v34;
          v47 = v46 + 8;
          v49 = v18;
          v35 = (QT::QKeySequence *)v46;
          memmove(v46 + 8, v46, v18);
          p_ptr = v44;
          QT::QKeySequence::QKeySequence(v35, (const QT::QKeySequence *)v44);
          ++v42;
LABEL_33:
          QT::QKeySequence::~QKeySequence((QT::QKeySequence *)v44);
          goto LABEL_34;
        }
        p_ptr = (void **)v38;
        QT::QKeySequence::QKeySequence((QT::QKeySequence *)((char *)v41[1] - 8), (const QT::QKeySequence *)v38);
        v41[1] = (QT::QKeySequence *)((char *)v41[1] - 8);
      }
      else
      {
        p_ptr = (void **)v38;
        QT::QKeySequence::QKeySequence((QT::QKeySequence *)((char *)v41[1] + 8 * v42), (const QT::QKeySequence *)v38);
      }
      ++v42;
LABEL_34:
      if ( !v41[0] || *(int *)v41[0] > 1 )
      {
        p_ptr = nullptr;
        sub_4B1FD0((__m128i *)v41, 0, 0, 0, v19, v20);
      }
      QT::QKeySequence::~QKeySequence((QT::QKeySequence *)v38);
      goto LABEL_38;
    }
LABEL_44:
    QT::QAction::setShortcuts(v36, v41);
    if ( v41[0] && !_InterlockedSub((volatile signed __int32 *)v41[0], 1u) )
    {
      v21 = v41[1];
      v22 = (QT::QKeySequence *)((char *)v41[1] + 8 * v42);
      if ( v41[1] != v22 )
      {
        do
        {
          v23 = v21;
          v21 = (QT::QKeySequence *)((char *)v21 + 8);
          QT::QKeySequence::~QKeySequence(v23);
        }
        while ( v22 != v21 );
      }
      free(v41[0]);
    }
    v24 = v39;
    if ( v39 )
    {
      v25 = v40;
      if ( (_QWORD)v40 )
      {
        v26 = 0;
        do
        {
          v27 = (__int64 *)(v24 + 24 * v26);
          v28 = *v27;
          if ( *v27 )
          {
            v27[1] = 0;
            v3 = qfree(v28, (const char *)v41, v3);
            v24 = v39;
          }
          ++v26;
        }
        while ( v25 != v26 );
      }
      *(_QWORD *)&v40 = 0;
      qfree(v24, (const char *)v41, v3);
    }
  }
  return v50 - __readfsqword(0x28u);
}
