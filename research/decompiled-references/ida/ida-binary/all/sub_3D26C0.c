unsigned __int64 __fastcall sub_3D26C0(QT::QPlainTextEdit *this, const char *a2)
{
  __int64 v3; // rdi
  unsigned __int8 tinfo_details; // r13
  const char *v5; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  int *v8; // rax
  const QT::QObject **v9; // rdx
  const QT::QObject **v10; // rbx
  const QT::QObject **k; // rbp
  QT::QWidget *v12; // rax
  QT::QWidget *v13; // r12
  size_t v14; // rax
  __int64 v15; // rdi
  __int64 v16; // r12
  __int64 v17; // rbp
  _QWORD *v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v22; // rsi
  unsigned __int64 i; // rbp
  int v24; // ebx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // r12
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  char *v30; // rdi
  __int64 v31; // rcx
  __int64 *v32; // rdx
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned __int64 v37; // r12
  __int64 j; // rbp
  volatile signed __int32 *v39; // rax
  void **v40; // rbx
  void **v41; // rbp
  __int64 v42; // rcx
  __int64 v43; // rcx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rsi
  unsigned __int64 v46; // rdx
  char *v47; // rdi
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v54; // [rsp+30h] [rbp-F8h] BYREF
  __int128 v55; // [rsp+38h] [rbp-F0h]
  void *v56[2]; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v57; // [rsp+60h] [rbp-C8h]
  void *ptr; // [rsp+70h] [rbp-B8h] BYREF
  const QT::QObject **v59; // [rsp+78h] [rbp-B0h]
  __int64 v60; // [rsp+80h] [rbp-A8h]
  void *v61[2]; // [rsp+90h] [rbp-98h] BYREF
  __int64 v62; // [rsp+B0h] [rbp-78h] BYREF
  __int128 v63; // [rsp+B8h] [rbp-70h]
  __int128 v64; // [rsp+C8h] [rbp-60h]
  __int64 v65; // [rsp+D8h] [rbp-50h]
  int v66; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v67; // [rsp+E8h] [rbp-40h]

  v67 = __readfsqword(0x28u);
  v55 = 0;
  *((_QWORD *)this + 34) = 0;
  v3 = *((_QWORD *)this + 23);
  v54 = 0;
  v62 = 0;
  v65 = 0;
  v66 = 1;
  v63 = 0;
  v64 = 0;
  if ( (get_tinfo_property(v3, 2) & 0x3F) != 0xD
    || !(unsigned __int8)get_tinfo_details(*((_QWORD *)this + 23), 13, &v62)
    || !(unsigned __int8)sub_3D1F00(&v54, &v62) )
  {
    goto LABEL_2;
  }
  v22 = 13;
  if ( HIBYTE(v66) )
    v22 = 29;
  if ( (unsigned __int8)create_tinfo((char *)this + 184, v22, 13, &v62)
    && (tinfo_details = get_tinfo_details(*((_QWORD *)this + 23), 13, &v62)) != 0 )
  {
    for ( i = 0; i < (unsigned __int64)v55; ++i )
    {
      v24 = *(_DWORD *)(v54 + 4 * i);
      if ( v24 >= 0 )
      {
        v25 = *((_QWORD *)this + 34);
        v26 = *((_QWORD *)this + 33);
        v27 = v24 + 1;
        if ( v27 != v25 )
        {
          v28 = *((_QWORD *)this + 33);
          *(_OWORD *)v56 = -1;
          if ( v27 >= v25 )
          {
            v29 = *((_QWORD *)this + 35);
            v30 = (char *)this + 264;
            if ( (unsigned __int64)v56 < v26 || (unsigned __int64)v56 >= v26 + 16 * v29 )
            {
              if ( v29 < v27 )
              {
                v49 = qvector_reserve(v30, v26, v24 + 1, 16);
                *((_QWORD *)this + 33) = v49;
                v28 = v49;
                v25 = *((_QWORD *)this + 34);
              }
              if ( v25 >= v27 )
              {
                v26 = *((_QWORD *)this + 33);
              }
              else
              {
                do
                {
                  v43 = v25++;
                  *(__m128i *)(v28 + 16 * v43) = _mm_load_si128((const __m128i *)v56);
                  v28 = *((_QWORD *)this + 33);
                  v26 = v28;
                }
                while ( v27 != v25 );
              }
            }
            else if ( v29 >= v27
                   || (v28 = qvector_reserve(v30, v26, v24 + 1, 16),
                       *((_QWORD *)this + 33) = v28,
                       v25 = *((_QWORD *)this + 34),
                       v26 = v28,
                       v25 < v27) )
            {
              do
              {
                v31 = v25++;
                *(_OWORD *)(v28 + 16 * v31) = -1;
                v28 = *((_QWORD *)this + 33);
                v26 = v28;
              }
              while ( v27 != v25 );
            }
          }
          *((_QWORD *)this + 34) = v27;
        }
        v32 = (__int64 *)(v62 + 144 * i);
        v33 = (_QWORD *)(v26 + 16LL * v24);
        if ( *v33 == -1 )
        {
          v42 = *v32;
          v33[1] = 0;
          *v33 = v42;
          v34 = 0;
        }
        else
        {
          v34 = v33[1];
        }
        v33[1] = v32[1] + v34;
      }
    }
    QT::QPlainTextEdit::document(this);
    QT::QTextDocument::toPlainText((QT::QTextDocument *)&ptr);
    QT::QString::fromUtf8(v61, 1, "\n");
    QT::QString::split(v56, &ptr, v61, 0, 1);
    if ( v61[0] && !_InterlockedSub((volatile signed __int32 *)v61[0], 1u) )
      free(v61[0]);
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
    v37 = (int)v57;
    for ( j = (int)v57 - 1; ; --j )
    {
      v39 = (volatile signed __int32 *)v56[0];
      if ( (int)v37 <= 0 )
        break;
      if ( !v56[0] || *(int *)v56[0] > 1 )
        sub_1B21C0((__m128i *)v56, 0, 0, 0, v35, v36);
      if ( QT::QtPrivate::lastIndexOf(*((_QWORD *)v56[1] + 3 * j + 2), *((_QWORD *)v56[1] + 3 * j + 1), -1, 59, 1) != -1 )
      {
        v44 = *((_QWORD *)this + 34);
        if ( v37 != v44 )
        {
          *(_OWORD *)v61 = -1;
          if ( v37 >= v44 )
          {
            v45 = *((_QWORD *)this + 33);
            v46 = *((_QWORD *)this + 35);
            v47 = (char *)this + 264;
            if ( (unsigned __int64)v61 < v45 || (unsigned __int64)v61 >= v45 + 16 * v46 )
            {
              if ( v46 >= v37
                || (v52 = qvector_reserve(v47, v45, v37, 16),
                    *((_QWORD *)this + 33) = v52,
                    v45 = v52,
                    v44 = *((_QWORD *)this + 34),
                    v44 < v37) )
              {
                while ( 1 )
                {
                  v51 = v44++;
                  *(__m128i *)(v45 + 16 * v51) = _mm_load_si128((const __m128i *)v61);
                  if ( v37 == v44 )
                    break;
                  v45 = *((_QWORD *)this + 33);
                }
              }
            }
            else if ( v46 >= v37
                   || (v50 = qvector_reserve(v47, v45, v37, 16),
                       *((_QWORD *)this + 33) = v50,
                       v45 = v50,
                       v44 = *((_QWORD *)this + 34),
                       v44 < v37) )
            {
              while ( 1 )
              {
                v48 = v44++;
                *(_OWORD *)(v45 + 16 * v48) = -1;
                if ( v44 >= v37 )
                  break;
                v45 = *((_QWORD *)this + 33);
              }
            }
          }
          *((_QWORD *)this + 34) = v37;
        }
        *(_QWORD *)(*((_QWORD *)this + 33) + 16 * j + 8) = 8 * get_tinfo_size(0, *((_QWORD *)this + 23), 0);
        v39 = (volatile signed __int32 *)v56[0];
        break;
      }
      v37 = (int)v37 - 1;
    }
    if ( v39 && !_InterlockedSub(v39, 1u) )
    {
      v40 = (void **)v56[1];
      v41 = (void **)((char *)v56[1] + 24 * v57);
      if ( v56[1] != v41 )
      {
        do
        {
          if ( *v40 && !_InterlockedSub((volatile signed __int32 *)*v40, 1u) )
            free(*v40);
          v40 += 3;
        }
        while ( v41 != v40 );
      }
      free(v56[0]);
    }
  }
  else
  {
LABEL_2:
    tinfo_details = 0;
  }
  v5 = (const char *)this;
  sub_527DA0(&ptr, this);
  v8 = (int *)ptr;
  if ( !ptr || *(int *)ptr > 1 )
  {
    v5 = nullptr;
    sub_3D22B0((__int64)&ptr, 0, 0, 0, v6, v7);
    v8 = (int *)ptr;
  }
  v9 = v59;
  v10 = v59;
  if ( !v8 || *v8 > 1 )
  {
    v5 = nullptr;
    sub_3D22B0((__int64)&ptr, 0, 0, 0, v6, v7);
    v9 = v59;
  }
  for ( k = &v9[v60]; k != v10; ++v10 )
  {
    v5 = (const char *)*v10;
    v12 = (QT::QWidget *)QT::QMetaObject::cast((QT::QMetaObject *)&off_891AE0, *v10);
    v13 = v12;
    if ( v12 )
    {
      (*(void (__fastcall **)(QT::QWidget *, _QWORD))(*(_QWORD *)v12 + 104LL))(v12, tinfo_details);
      v5 = (char *)this + 184;
      sub_3CFCC0(v13, (_QWORD *)this + 23);
    }
  }
  if ( a2 )
  {
    v14 = strlen(a2);
    QT::QString::fromUtf8(v61, v14, a2);
    v5 = (const char *)v61;
    QT::QPlainTextEdit::setPlainText(this, (const QT::QString *)v61);
    if ( v61[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)v61[0], 1u) )
        free(v61[0]);
    }
  }
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  v15 = v62;
  if ( v62 )
  {
    v16 = v63;
    if ( (_QWORD)v63 )
    {
      v17 = 0;
      do
      {
        v18 = (_QWORD *)(v15 + 144 * v17);
        clear_tinfo_t(v18 + 8);
        v19 = v18[5];
        if ( v19 )
        {
          v18[6] = 0;
          qfree(v19, v5);
        }
        v20 = v18[2];
        if ( v20 )
        {
          v18[3] = 0;
          qfree(v20, v5);
        }
        ++v17;
        v15 = v62;
      }
      while ( v16 != v17 );
    }
    *(_QWORD *)&v63 = 0;
    qfree(v15, v5);
  }
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree(v54, v5);
  }
  return v67 - __readfsqword(0x28u);
}
