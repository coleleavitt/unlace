QT::QIcon *__fastcall sub_30C8D0(QT::QIcon *this, __int64 a2, int a3)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  unsigned __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rbx
  const char *v11; // rsi
  void *v12; // rdi
  unsigned __int64 v13; // rbx
  size_t v14; // r14
  __int64 v15; // r13
  size_t v16; // r15
  __int64 v17; // rsi
  const char *v18; // rbx
  size_t v19; // rax
  double v20; // xmm0_8
  unsigned __int64 v22; // rbx
  size_t v23; // r14
  __int64 v24; // r13
  size_t v25; // r15
  __int64 v26; // rsi
  unsigned __int64 v27; // rbx
  size_t v28; // r14
  __int64 v29; // r13
  size_t v30; // r15
  __int64 v31; // rsi
  __int64 v32; // [rsp+0h] [rbp-98h] BYREF
  __int128 v33; // [rsp+8h] [rbp-90h]
  void *ptr[4]; // [rsp+20h] [rbp-78h] BYREF
  void *src; // [rsp+40h] [rbp-58h] BYREF
  __int128 v36; // [rsp+48h] [rbp-50h]
  unsigned __int64 v37; // [rsp+58h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v33 = 0;
  v32 = 0;
  v5 = qvector_reserve(&v32, 0, 22, 1);
  v32 = v5;
  *(_QWORD *)&v33 = 22;
  *(__m128i *)v5 = _mm_load_si128((const __m128i *)&xmmword_5DCF90);
  v6 = v32;
  *(_QWORD *)(v5 + 13) = 0x2F7070612F736563LL;
  v7 = v33;
  *(_BYTE *)(v6 + 21) = 0;
  if ( v7 )
  {
    v9 = v7 + 2;
    v8 = v7 + 3;
    --v7;
    if ( *((_QWORD *)&v33 + 1) >= v8 )
      goto LABEL_3;
  }
  else
  {
    v8 = 4;
    v9 = 3;
    if ( *((_QWORD *)&v33 + 1) >= 4u )
      goto LABEL_3;
  }
  v32 = qvector_reserve(&v32, v6, v8, 1);
  v6 = v32;
LABEL_3:
  *(_QWORD *)&v33 = v8;
  *(_BYTE *)(v6 + v9) = 0;
  v10 = v32 + v7;
  *(_WORD *)v10 = 29296;
  *(_BYTE *)(v10 + 2) = 111;
  switch ( a3 )
  {
    case 1:
      v11 = nullptr;
      v36 = 0;
      src = nullptr;
      src = (void *)qvector_reserve(&src, 0, 12, 1);
      *(_QWORD *)&v36 = 12;
      strcpy((char *)src, "/medium.png");
      v12 = src;
      v27 = v36;
      if ( (_QWORD)v36 )
      {
        v28 = v36 - 1;
        if ( (_QWORD)v36 != 1 )
        {
          v29 = v33;
          v30 = v36 - 1;
          if ( (_QWORD)v33 )
          {
            v29 = v33 - 1;
            v30 = v28 + v33 - 1;
            v27 = v36 + v33 - 1;
          }
          v31 = v32;
          if ( *((_QWORD *)&v33 + 1) < v27 )
          {
            v32 = qvector_reserve(&v32, v32, v27, 1);
            v31 = v32;
          }
          *(_QWORD *)&v33 = v27;
          *(_BYTE *)(v31 + v30) = 0;
          v11 = (const char *)src;
          memcpy((void *)(v29 + v32), src, v28);
          v12 = src;
        }
      }
      if ( v12 )
        goto LABEL_14;
      break;
    case 2:
      v11 = nullptr;
      v36 = 0;
      src = nullptr;
      src = (void *)qvector_reserve(&src, 0, 11, 1);
      *(_QWORD *)&v36 = 11;
      strcpy((char *)src, "/large.png");
      v12 = src;
      v22 = v36;
      if ( (_QWORD)v36 )
      {
        v23 = v36 - 1;
        if ( (_QWORD)v36 != 1 )
        {
          v24 = v33;
          v25 = v36 - 1;
          if ( (_QWORD)v33 )
          {
            v24 = v33 - 1;
            v25 = v23 + v33 - 1;
            v22 = v36 + v33 - 1;
          }
          v26 = v32;
          if ( *((_QWORD *)&v33 + 1) < v22 )
          {
            v32 = qvector_reserve(&v32, v32, v22, 1);
            v26 = v32;
          }
          *(_QWORD *)&v33 = v22;
          *(_BYTE *)(v26 + v25) = 0;
          v11 = (const char *)src;
          memcpy((void *)(v24 + v32), src, v23);
          v12 = src;
        }
      }
      if ( v12 )
        goto LABEL_14;
      break;
    case 0:
      v11 = nullptr;
      v36 = 0;
      src = nullptr;
      src = (void *)qvector_reserve(&src, 0, 11, 1);
      *(_QWORD *)&v36 = 11;
      strcpy((char *)src, "/small.png");
      v12 = src;
      v13 = v36;
      if ( (_QWORD)v36 )
      {
        v14 = v36 - 1;
        if ( (_QWORD)v36 != 1 )
        {
          v15 = v33;
          v16 = v36 - 1;
          if ( (_QWORD)v33 )
          {
            v15 = v33 - 1;
            v16 = v14 + v33 - 1;
            v13 = v36 + v33 - 1;
          }
          v17 = v32;
          if ( *((_QWORD *)&v33 + 1) < v13 )
          {
            v32 = qvector_reserve(&v32, v32, v13, 1);
            v17 = v32;
          }
          *(_QWORD *)&v33 = v13;
          *(_BYTE *)(v17 + v16) = 0;
          v11 = (const char *)src;
          memcpy((void *)(v15 + v32), src, v14);
          v12 = src;
        }
      }
      if ( v12 )
      {
LABEL_14:
        *(_QWORD *)&v36 = 0;
        qfree(v12, v11);
      }
      break;
  }
  v18 = &s1;
  if ( (_QWORD)v33 )
    v18 = (const char *)v32;
  v19 = 0;
  if ( v18 )
    v19 = strlen(v18);
  v20 = QT::QString::fromUtf8(ptr, v19, v18);
  QT::QPixmap::QPixmap(&src, ptr, 0, 0);
  QT::QIcon::QIcon(this, (const QT::QPixmap *)&src);
  QT::QPixmap::~QPixmap((QT::QPixmap *)&src);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32, (const char *)&src, v20);
  }
  return this;
}
