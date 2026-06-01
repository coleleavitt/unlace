QT::QString *__fastcall sub_40CA70(QT::QString *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  const char *v4; // r15
  unsigned __int64 v5; // r14
  unsigned __int8 v7; // bl
  const char *v8; // rsi
  const char *v9; // rax
  unsigned __int8 v10; // bl
  __int64 v11; // rsi
  __m128i v12; // rax
  double v13; // xmm0_8
  const char *v14; // rax
  const char *v15; // rdx
  void *ptr[4]; // [rsp+28h] [rbp-158h] BYREF
  void *v18; // [rsp+48h] [rbp-138h] BYREF
  void *v19[4]; // [rsp+68h] [rbp-118h] BYREF
  void *v20[4]; // [rsp+88h] [rbp-F8h] BYREF
  void *v21[4]; // [rsp+A8h] [rbp-D8h] BYREF
  void *v22[4]; // [rsp+C8h] [rbp-B8h] BYREF
  void *v23[4]; // [rsp+E8h] [rbp-98h] BYREF
  __m128i v24; // [rsp+108h] [rbp-78h] BYREF
  __m128i v25; // [rsp+118h] [rbp-68h]
  __m128i v26; // [rsp+128h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+140h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  *((_QWORD *)this + 2) = 0;
  *(_OWORD *)this = 0;
  v3 = *(_QWORD *)(a2 + 8);
  if ( !v3 )
    return this;
  v4 = *(const char **)a2;
  v5 = *(_QWORD *)a2 + v3 - 1;
  if ( *(_QWORD *)a2 >= v5 )
    return this;
  while ( *v4 == 1 )
  {
    if ( (unsigned __int64)(v4 + 1) >= v5 )
      return this;
    v7 = v4[1];
    v8 = v4 + 2;
    if ( v7 == 40 )
    {
      if ( (unsigned __int64)v8 < v5 )
      {
        v14 = v4 + 2;
        do
        {
          if ( !*v14 )
            break;
          if ( &(++v14)[-2LL - (_QWORD)v4] == (const char *)&word_10 )
            break;
        }
        while ( (unsigned __int64)v14 < v5 );
        if ( v14 - v8 == 16 )
        {
          v4 = v14;
          goto LABEL_55;
        }
      }
      return this;
    }
    if ( (unsigned __int64)v8 >= v5 )
      return this;
    v9 = v4 + 2;
    while ( 1 )
    {
      v4 = v9 + 1;
      if ( *v9 == 1 )
        break;
      if ( *v9 == 2 )
      {
        if ( (unsigned __int64)v4 >= v5 )
          goto LABEL_14;
        if ( v9[1] == v7 )
        {
          v4 = v9 + 2;
          if ( v8 >= v9 + 2 )
            goto LABEL_55;
          goto LABEL_14;
        }
LABEL_41:
        ++v9;
      }
      else
      {
        ++v9;
LABEL_43:
        if ( (unsigned __int64)v9 >= v5 )
        {
          v4 = v9;
          goto LABEL_14;
        }
      }
    }
    if ( (unsigned __int64)v4 >= v5 )
      goto LABEL_14;
    if ( v9[1] != 40 )
      goto LABEL_41;
    v4 = v9 + 2;
    if ( (unsigned __int64)(v9 + 2) >= v5 )
      goto LABEL_14;
    v15 = v9 + 2;
    do
    {
      if ( !*v15 )
        break;
      if ( &(++v15)[-2LL - (_QWORD)v9] == (const char *)&word_10 )
        break;
    }
    while ( (unsigned __int64)v15 < v5 );
    if ( v15 - v4 == 16 )
    {
      v9 = v15;
      goto LABEL_43;
    }
    if ( v8 >= v4 )
      continue;
LABEL_14:
    QT::QByteArray::QByteArray((QT::QByteArray *)ptr, v8, v4 - v8 - 2);
    QT::QString::fromUtf8(&v18, ptr[2], (const char *)ptr[1]);
    if ( a3 )
    {
      v10 = v7 - 6;
      v11 = 2165563904LL;
      if ( v10 <= 0x1Cu )
        v11 = dword_5EADE0[v10];
      v12.m128i_i64[0] = sub_524FA0(a3 + 40, v11, 0);
    }
    else
    {
      v12.m128i_i64[0] = sub_40B380(v7);
    }
    v26 = v12;
    v25 = _mm_load_si128(&v26);
    v24 = v25;
    sub_40B9D0((__int64)v19, (QT::QColor *)&v24);
    v13 = QT::QString::fromUtf8(v20, 26, "<font color=\"%1\">%2</font>");
    QT::QString::arg(v21, v20, v19, 0, 32, v13);
    QT::QString::toHtmlEscaped((QT::QString *)v22);
    QT::QString::arg(v23, v21, v22, 0, 32, v13);
    QT::QString::append(this, (const QT::QString *)v23);
    if ( v23[0] && !_InterlockedSub((volatile signed __int32 *)v23[0], 1u) )
      free(v23[0]);
    if ( v22[0] && !_InterlockedSub((volatile signed __int32 *)v22[0], 1u) )
      free(v22[0]);
    if ( v21[0] && !_InterlockedSub((volatile signed __int32 *)v21[0], 1u) )
      free(v21[0]);
    if ( v20[0] && !_InterlockedSub((volatile signed __int32 *)v20[0], 1u) )
      free(v20[0]);
    if ( v19[0] && !_InterlockedSub((volatile signed __int32 *)v19[0], 1u) )
      free(v19[0]);
    if ( v18 && !_InterlockedSub((volatile signed __int32 *)v18, 1u) )
      free(v18);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
LABEL_55:
    if ( (unsigned __int64)v4 >= v5 )
      return this;
  }
  if ( *v4 != 3 )
  {
    QT::QString::fromUtf8(v22, v4 != nullptr, v4);
    QT::QString::toHtmlEscaped((QT::QString *)v23);
    QT::QString::append(this, (const QT::QString *)v23);
    if ( v23[0] && !_InterlockedSub((volatile signed __int32 *)v23[0], 1u) )
      free(v23[0]);
    if ( v22[0] && !_InterlockedSub((volatile signed __int32 *)v22[0], 1u) )
      free(v22[0]);
    ++v4;
    goto LABEL_55;
  }
  if ( (unsigned __int64)(v4 + 1) < v5 )
  {
    QT::QString::fromUtf8(v22, 1, v4 + 1);
    QT::QString::toHtmlEscaped((QT::QString *)v23);
    QT::QString::append(this, (const QT::QString *)v23);
    if ( v23[0] && !_InterlockedSub((volatile signed __int32 *)v23[0], 1u) )
      free(v23[0]);
    if ( v22[0] && !_InterlockedSub((volatile signed __int32 *)v22[0], 1u) )
      free(v22[0]);
    v4 += 2;
    goto LABEL_55;
  }
  return this;
}
