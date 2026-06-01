__m128i *__fastcall database_persistent_t__::vfunc_7(__m128i *a1, __int64 a2, const __m128i *a3, double a4, __m128 a5)
{
  void *v6; // rsi
  __int64 v7; // rbx
  _QWORD *v8; // rsi
  const char *v9; // rbx
  size_t v10; // rbp
  char *v11; // rax
  size_t v12; // rax
  double v13; // xmm0_8
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // r8
  __int64 v19; // r9
  __m128i v20[2]; // [rsp+18h] [rbp-4C8h] BYREF
  void *v21; // [rsp+38h] [rbp-4A8h] BYREF
  void *s1; // [rsp+40h] [rbp-4A0h]
  size_t n; // [rsp+48h] [rbp-498h]
  const char *v24; // [rsp+58h] [rbp-488h] BYREF
  __int128 v25; // [rsp+60h] [rbp-480h]
  __m128i v26; // [rsp+78h] [rbp-468h] BYREF
  __int64 v27; // [rsp+88h] [rbp-458h]
  char s[1032]; // [rsp+98h] [rbp-448h] BYREF
  unsigned __int64 v29; // [rsp+4A0h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  a1[1].m128i_i64[0] = 0;
  *a1 = 0;
  sub_1CE9C0(v20, a3, 0.0, a5);
  QT::QString::toUtf8_helper((QT::QString *)&v26, (const QT::QString *)v20);
  v6 = (void *)v26.m128i_i64[1];
  if ( !v26.m128i_i64[1] )
    v6 = &QT::QByteArray::_empty;
  v7 = netnode_hashval(*(_QWORD *)(a2 + 32), v6, 0, 0, 72);
  sub_17F470((void **)&v26);
  if ( v7 >= 0 )
  {
    QT::QString::toUtf8_helper((QT::QString *)&v21, (const QT::QString *)v20);
    v8 = s1;
    v24 = nullptr;
    v25 = 0;
    v9 = (const char *)s1;
    if ( s1 || (v9 = (const char *)&QT::QByteArray::_empty) != nullptr )
    {
      v10 = n;
      if ( !s1 )
        goto LABEL_17;
LABEL_6:
      if ( !memcmp(v9, v8, v10) )
      {
        do
        {
          if ( v9[v10] )
          {
            qstrncpy(s, &v9[v10], 1024);
            v11 = strchr(s, 92);
            if ( v11 )
              *v11 = 0;
            v12 = strlen(s);
            v13 = QT::QString::fromUtf8(&v26, v12, s);
            if ( QT::QtPrivate::QStringList_indexOf(a1, v27, v26.m128i_i64[1], 0, 1, v13) == -1 )
            {
              sub_1D5510(a1, a1[1].m128i_i64[0], &v26, v14, v15, v16);
              if ( !a1->m128i_i64[0] || *(int *)a1->m128i_i64[0] > 1 )
                sub_1B21C0(a1, 0, 0, 0, v18, v19);
            }
            sub_16D970((void **)&v26);
          }
          v8 = &v24;
          if ( netnode_qhashnext(*(_QWORD *)(a2 + 32), &v24, v9, 72) < 0 )
            break;
          v9 = &::s1;
          if ( (_QWORD)v25 )
            v9 = v24;
          if ( !v9 )
            break;
          v8 = s1;
          v10 = n;
          if ( s1 )
            goto LABEL_6;
LABEL_17:
          v8 = &QT::QByteArray::_empty;
        }
        while ( !memcmp(v9, &QT::QByteArray::_empty, v10) );
      }
      if ( v24 )
      {
        *(_QWORD *)&v25 = 0;
        qfree(v24, (const char *)v8);
      }
    }
    sub_17F470(&v21);
  }
  sub_16D970((void **)v20);
  return a1;
}
