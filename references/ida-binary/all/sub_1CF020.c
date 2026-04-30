__int64 __fastcall sub_1CF020(QT::QString *a1, __m128i *a2, __m128i *a3)
{
  void *v5; // rsi
  char *v6; // rax
  const char *v7; // rbx
  size_t v8; // rax
  __m128i v9; // xmm1
  __int64 v10; // rax
  __m128i v11; // xmm0
  size_t v12; // rax
  __int64 v13; // rax
  __m128i v14; // xmm1
  __m128i v15; // xmm0
  __m128i v17; // [rsp+0h] [rbp-468h] BYREF
  __int64 v18; // [rsp+10h] [rbp-458h]
  char s[1032]; // [rsp+20h] [rbp-448h] BYREF
  unsigned __int64 v20; // [rsp+428h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  QT::QString::toUtf8_helper((QT::QString *)&v17, a1);
  v5 = (void *)v17.m128i_i64[1];
  if ( !v17.m128i_i64[1] )
    v5 = &QT::QByteArray::_empty;
  qstrncpy(s, v5, 1024);
  sub_17F470((void **)&v17);
  v6 = strrchr(s, 92);
  if ( v6 )
  {
    *v6 = 0;
    v7 = v6 + 1;
    v8 = strlen(s);
    QT::QString::fromUtf8(&v17, v8, s);
    v9 = _mm_load_si128(&v17);
    v10 = a2[1].m128i_i64[0];
    v11 = _mm_loadu_si128(a2);
    a2[1].m128i_i64[0] = v18;
    *a2 = v9;
    v17 = v11;
    v18 = v10;
    sub_16D970((void **)&v17);
    v12 = strlen(v7);
    QT::QString::fromUtf8(&v17, v12, v7);
    v13 = a3[1].m128i_i64[0];
    v14 = _mm_load_si128(&v17);
    v15 = _mm_loadu_si128(a3);
    a3[1].m128i_i64[0] = v18;
    *a3 = v14;
    v18 = v13;
    v17 = v15;
    sub_16D970((void **)&v17);
    return 1;
  }
  else
  {
    QT::QString::assign(a2, &unk_5C2F25, 0);
    QT::QString::operator=(a3, a1);
    return 0;
  }
}
