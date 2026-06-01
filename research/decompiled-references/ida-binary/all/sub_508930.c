QT::QObject *__fastcall sub_508930(
        const char *src,
        unsigned int a2,
        const __m128i *a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  size_t v12; // rax
  size_t v13; // rbp
  size_t v14; // rbx
  char *i; // rbx
  char *v16; // rbp
  __int64 *v17; // r15
  char v18; // r13
  size_t v19; // rax
  const char *v20; // rdi
  QT::QObject *v21; // rbx
  const char *v22; // rsi
  size_t v24; // rbp
  void *v25; // rdi
  size_t v26; // r12
  __m128i *v27; // rbp
  double v28; // xmm4_8
  double v29; // xmm5_8
  size_t v30; // rax
  __int64 v31; // rax
  char *s; // [rsp+10h] [rbp-98h] BYREF
  __int128 v35; // [rsp+18h] [rbp-90h]
  const char *v36; // [rsp+30h] [rbp-78h] BYREF
  __int128 v37; // [rsp+38h] [rbp-70h]
  __m128i v38; // [rsp+50h] [rbp-58h] BYREF
  __int64 v39; // [rsp+60h] [rbp-48h]
  unsigned __int64 v40; // [rsp+68h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  if ( batch )
    return nullptr;
  s = nullptr;
  v35 = 0;
  if ( src
    && (v12 = strlen(src),
        v13 = v12 + 1,
        v14 = v12,
        s = (char *)qvector_reserve(&s, 0, v12 + 1, 1),
        *(_QWORD *)&v35 = v13,
        memmove(s, src, v14),
        s[v14] = 0,
        (_QWORD)v35) )
  {
    for ( i = s; *i == 36; ++i )
      ;
    v16 = strchr(i, 10);
  }
  else
  {
    v16 = nullptr;
    i = (char *)&s1;
  }
  while ( 2 )
  {
    v17 = (__int64 *)off_86D600;
    v18 = 0;
    if ( strncmp("BUTTON", i, 6u) )
      goto LABEL_10;
    if ( !v16 )
    {
LABEL_13:
      v36 = nullptr;
      v37 = 0;
LABEL_14:
      v20 = &s1;
      goto LABEL_15;
    }
LABEL_9:
    i = v16 + 1;
    v18 = 1;
    v16 = strchr(v16 + 1, 10);
LABEL_10:
    while ( &`vtable for'msg_entries_t != ++v17 )
    {
      v19 = strlen((const char *)*v17);
      if ( !strncmp((const char *)*v17, i, v19) )
      {
        if ( v16 )
          goto LABEL_9;
        goto LABEL_13;
      }
    }
    if ( v18 )
      continue;
    break;
  }
  v36 = nullptr;
  v37 = 0;
  if ( v16 )
  {
    v24 = v16 - i;
    if ( !v24 )
      goto LABEL_14;
    v25 = nullptr;
    v26 = v24 + 1;
    if ( v24 == -1 )
      goto LABEL_27;
    v31 = qvector_reserve(&v36, 0, v24 + 1, 1);
  }
  else
  {
    if ( !i )
      goto LABEL_14;
    v30 = strlen(i);
    v26 = v30 + 1;
    v24 = v30;
    v31 = qvector_reserve(&v36, 0, v30 + 1, 1);
  }
  v36 = (const char *)v31;
  v25 = (void *)v31;
LABEL_27:
  *(_QWORD *)&v37 = v26;
  memmove(v25, i, v24);
  v36[v24] = 0;
  if ( !(_QWORD)v37 )
    goto LABEL_14;
  v20 = v36;
LABEL_15:
  v21 = (QT::QObject *)sub_4FAE20(v20, 0);
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36, nullptr);
  }
  if ( v21 )
  {
    v22 = (const char *)v21;
    sub_479090((__int64)(QT::QCoreApplication::self + 2), v21);
  }
  else
  {
    v27 = (__m128i *)sub_4F9C00();
    v22 = src;
    v38 = _mm_loadu_si128(a3);
    v39 = a3[1].m128i_i64[0];
    if ( (unsigned __int8)sub_5075F0(v27, src, v38.m128i_i32, *(double *)v38.m128i_i64, a5, a6, a7, v28, v29, a10, a11) )
    {
      v22 = (const char *)a2;
      sub_4FA500(v27->m128i_i64, a2);
      v21 = (QT::QObject *)v27;
    }
    else if ( v27 )
    {
      (*(void (__fastcall **)(__m128i *))(v27->m128i_i64[0] + 32))(v27);
    }
  }
  if ( s )
  {
    *(_QWORD *)&v35 = 0;
    qfree(s, v22);
  }
  return v21;
}
