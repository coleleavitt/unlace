__int64 __fastcall sub_3D0D20(QT::QPlainTextEdit *this, _QWORD *a2, unsigned int a3, const char **a4)
{
  unsigned int v5; // ebp
  const char *v7; // r14
  size_t v8; // rax
  size_t v9; // r12
  void **v10; // rsi
  const char *v11; // r15
  char *v12; // r14
  size_t v13; // rax
  size_t v14; // r12
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // r15
  const char *v17; // r8
  const char *v18; // rsi
  unsigned int v19; // ebx
  void *v20; // rbp
  const char *v21; // rax
  const char *v22; // rdi
  unsigned __int64 v23; // rdx
  __m128i v24; // xmm0
  __m128i v25; // xmm1
  char *v26; // rax
  void *v27; // rdi
  unsigned int v28; // ecx
  __int64 v29; // r15
  char *v30; // rax
  const char **v32; // r15
  __int64 v33; // rax
  void *v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // rax
  const char **v39; // r15
  __int64 v40; // rax
  int v41; // eax
  __m128i v42; // [rsp+0h] [rbp-B8h] BYREF
  const char **v43; // [rsp+10h] [rbp-A8h]
  unsigned int v44; // [rsp+1Ch] [rbp-9Ch]
  void *dest; // [rsp+20h] [rbp-98h] BYREF
  __int128 v46; // [rsp+28h] [rbp-90h]
  void *v47[4]; // [rsp+40h] [rbp-78h] BYREF
  void *ptr; // [rsp+60h] [rbp-58h] BYREF
  char *s[2]; // [rsp+68h] [rbp-50h] BYREF
  unsigned __int64 v50; // [rsp+78h] [rbp-40h]

  v5 = a3;
  v43 = a4;
  v50 = __readfsqword(0x28u);
  if ( (a3 & 8) == 0 )
    v5 = a3 | 4;
  if ( !a2 )
    goto LABEL_13;
  QT::QPlainTextEdit::document(this);
  QT::QTextDocument::toPlainText((QT::QTextDocument *)v47);
  v42.m128i_i64[1] = (__int64)&ptr;
  QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)v47);
  v7 = s[0];
  if ( !s[0] )
  {
    if ( !&QT::QByteArray::_empty )
      goto LABEL_6;
    v7 = (const char *)&QT::QByteArray::_empty;
  }
  v8 = strlen(v7);
  v9 = v8;
  if ( v8 )
  {
    v34 = (void *)a2[7];
    v35 = v8 + 1;
    if ( a2[9] < v8 + 1 )
    {
      v37 = a2[7];
      v42.m128i_i64[0] = v8 + 1;
      v38 = qvector_reserve(a2 + 7, v37, v35, 1);
      a2[7] = v38;
      v35 = v42.m128i_i64[0];
      v34 = (void *)v38;
    }
    a2[8] = v35;
    memmove(v34, v7, v9);
    *(_BYTE *)(a2[7] + v9) = 0;
    goto LABEL_7;
  }
LABEL_6:
  a2[8] = 0;
LABEL_7:
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  if ( v47[0] && !_InterlockedSub((volatile signed __int32 *)v47[0], 1u) )
  {
    free(v47[0]);
    trim(a2[7]);
  }
  else
  {
    trim(a2[7]);
  }
LABEL_13:
  dest = nullptr;
  v46 = 0;
  QT::QPlainTextEdit::document(this);
  QT::QTextDocument::toPlainText((QT::QTextDocument *)v47);
  v10 = v47;
  v42.m128i_i64[1] = (__int64)&ptr;
  QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)v47);
  v11 = s[0];
  v12 = nullptr;
  if ( s[0] )
    goto LABEL_14;
  v11 = (const char *)&QT::QByteArray::_empty;
  if ( dest == &QT::QByteArray::_empty )
  {
    v15 = v46;
    goto LABEL_16;
  }
  if ( &QT::QByteArray::_empty )
  {
LABEL_14:
    v13 = strlen(v11);
    v14 = v13;
    if ( v13 )
    {
      v36 = v13 + 1;
      if ( *((_QWORD *)&v46 + 1) < v13 + 1 )
      {
        v42.m128i_i64[0] = v13 + 1;
        dest = (void *)qvector_reserve(&dest, 0, v36, 1);
        v36 = v42.m128i_i64[0];
        v12 = (char *)dest;
      }
      *(_QWORD *)&v46 = v36;
      v10 = (void **)v11;
      memmove(v12, v11, v14);
      *((_BYTE *)dest + v14) = 0;
      v15 = v46;
      v12 = (char *)dest;
      goto LABEL_16;
    }
  }
  *(_QWORD *)&v46 = 0;
  v15 = 0;
LABEL_16:
  v42.m128i_i64[0] = (__int64)&dest;
LABEL_17:
  if ( v15 > 1 )
  {
LABEL_45:
    v28 = v12[v15 - 2];
    v29 = v15 - 1;
    while ( v28 <= 0x7F )
    {
      v44 = v28;
      v41 = isspace(v28);
      v28 = v44;
      if ( !v41 )
        break;
      if ( v29 > 1 )
      {
        if ( *((_QWORD *)&v46 + 1) < (unsigned __int64)v29 )
        {
          v10 = (void **)v12;
          dest = (void *)qvector_reserve(v42.m128i_i64[0], v12, v15 - 1, 1);
          v12 = (char *)dest;
        }
        *(_QWORD *)&v46 = v15 - 1;
        v12[v15 - 2] = 0;
        v15 = v46;
        v12 = (char *)dest;
        goto LABEL_17;
      }
      if ( v12 )
        goto LABEL_20;
    }
    if ( v12[v15 - 2] != 59 )
      goto LABEL_24;
  }
  else
  {
    while ( isspace(0) )
    {
      if ( v12 )
      {
LABEL_20:
        *(_QWORD *)&v46 = 0;
        qfree(v12, (const char *)v10);
        v15 = v46;
        v12 = nullptr;
        dest = nullptr;
        *((_QWORD *)&v46 + 1) = 0;
        if ( (unsigned __int64)v46 > 1 )
          goto LABEL_45;
        if ( !isspace(0) )
        {
          v16 = 2;
          if ( !v15 )
            goto LABEL_59;
          v15 = 1;
          goto LABEL_24;
        }
        if ( isspace(0) )
          goto LABEL_17;
        break;
      }
    }
    v16 = 2;
    if ( !v15 )
      goto LABEL_25;
LABEL_24:
    v16 = v15-- + 1;
LABEL_25:
    if ( *((_QWORD *)&v46 + 1) >= v16 )
      goto LABEL_26;
LABEL_59:
    dest = (void *)qvector_reserve(&dest, v12, v16, 1);
    v12 = (char *)dest;
LABEL_26:
    *(_QWORD *)&v46 = v16;
    v12[v15] = 59;
    *((_BYTE *)dest + v15 + 1) = 0;
  }
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  if ( v47[0] && !_InterlockedSub((volatile signed __int32 *)v47[0], 1u) )
    free(v47[0]);
  v17 = &s1;
  if ( (_QWORD)v46 )
    v17 = (const char *)dest;
  v18 = (const char *)(a2 + 1);
  v19 = parse_decl_ex(a2, a2 + 1, a2 + 4, 0, v17, v5);
  if ( (_BYTE)v19 != 1 && v43 )
  {
    *(_OWORD *)s = 0;
    ptr = nullptr;
    ptr = (void *)qvector_reserve(v42.m128i_i64[1], 0, 12, 1);
    s[0] = byte_9 + 3;
    strcpy((char *)ptr, "Parse error");
    v20 = ptr;
    v21 = v43[1];
    v22 = *v43;
    v23 = (unsigned __int64)v43[2];
    v18 = v21 + 1;
    if ( v42.m128i_i64[1] < (unsigned __int64)*v43 || v42.m128i_i64[1] >= (unsigned __int64)&v22[24 * v23] )
    {
      if ( v23 < (unsigned __int64)v18 )
      {
        v32 = v43;
        v18 = *v43;
        v33 = qvector_reserve(v43, *v43, v21 + 1, 24);
        *v43 = (const char *)v33;
        v22 = (const char *)v33;
        v20 = ptr;
        v21 = v32[1];
      }
      v30 = (char *)&v22[24 * (_QWORD)v21];
      *(__m128i *)(v30 + 8) = _mm_loadu_si128((const __m128i *)s);
      *(_QWORD *)v30 = v20;
      ++v43[1];
    }
    else
    {
      v24 = _mm_loadl_epi64((const __m128i *)s);
      v25 = _mm_loadl_epi64((const __m128i *)&s[1]);
      ptr = nullptr;
      *(_OWORD *)s = 0;
      if ( v23 < (unsigned __int64)v18 )
      {
        v39 = v43;
        v18 = v22;
        v42.m128i_i64[1] = v25.m128i_i64[0];
        v42.m128i_i64[0] = v24.m128i_i64[0];
        v40 = qvector_reserve(v43, v22, v21 + 1, 24);
        *v43 = (const char *)v40;
        v22 = (const char *)v40;
        v21 = v39[1];
        v25 = _mm_loadl_epi64((const __m128i *)&v42.m128i_u64[1]);
        v24 = _mm_loadl_epi64(&v42);
      }
      v26 = (char *)&v22[24 * (_QWORD)v21];
      *(__m128i *)(v26 + 8) = _mm_unpacklo_epi64(v24, v25);
      *(_QWORD *)v26 = v20;
      v27 = ptr;
      ++v43[1];
      if ( v27 )
      {
        s[0] = nullptr;
        qfree(v27, v18);
      }
    }
  }
  if ( dest )
  {
    *(_QWORD *)&v46 = 0;
    qfree(dest, v18);
  }
  return v19;
}
