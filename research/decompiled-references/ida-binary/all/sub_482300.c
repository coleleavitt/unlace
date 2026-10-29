unsigned __int64 __fastcall sub_482300(__int64 a1, double a2, __m128 a3)
{
  double v3; // xmm0_8
  __int64 v4; // r8
  __int64 v5; // r9
  int *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r14
  size_t v10; // rbp
  void **p_ptr; // rsi
  char *v12; // r15
  __int64 v14; // rbx
  __int64 v15; // rbp
  QT::QFileInfo *v16; // rdi
  _BYTE v17[8]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v18[8]; // [rsp+38h] [rbp-C0h] BYREF
  __m128i v19; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-A8h]
  void *v21[4]; // [rsp+60h] [rbp-98h] BYREF
  void *v22; // [rsp+80h] [rbp-78h] BYREF
  __int128 v23; // [rsp+88h] [rbp-70h]
  void *ptr; // [rsp+A0h] [rbp-58h] BYREF
  char *s; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v26; // [rsp+B8h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v3 = QT::QString::fromUtf8(&ptr, 33, ":/libui/resources/chooser_widget/");
  QT::QDir::QDir((QT::QDir *)v17, (const QT::QString *)&ptr);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  QT::QDir::entryInfoList(&v19, v17, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v3);
  v6 = (int *)v19.m128i_i64[0];
  if ( !v19.m128i_i64[0] || *(int *)v19.m128i_i64[0] > 1 )
  {
    sub_309250(&v19, 0, 0, 0, v4, v5);
    v6 = (int *)v19.m128i_i64[0];
  }
  v7 = v19.m128i_i64[1];
  v8 = v19.m128i_i64[1];
  if ( !v6 || *v6 > 1 )
  {
    sub_309250(&v19, 0, 0, 0, v4, v5);
    v7 = v19.m128i_i64[1];
  }
  v9 = v7 + 8 * v20;
  if ( v8 != v9 )
  {
    while ( 1 )
    {
      QT::QFileInfo::fileName((QT::QFileInfo *)v21);
      QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)v21);
      v12 = s;
      v22 = nullptr;
      v23 = 0;
      if ( s )
        goto LABEL_12;
      if ( &QT::QByteArray::_empty )
        break;
LABEL_13:
      if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
        free(ptr);
      QT::QFileInfo::absoluteFilePath((QT::QFileInfo *)&ptr);
      p_ptr = &ptr;
      QT::QIcon::QIcon((QT::QIcon *)v18, (const QT::QString *)&ptr);
      if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
        free(ptr);
      if ( !(unsigned __int8)QT::QIcon::isNull((QT::QIcon *)v18) )
      {
        p_ptr = (void **)v18;
        sub_481B70(a1, (const QT::QIcon *)v18, (__int64)&v22, 0.0, a3);
      }
      QT::QIcon::~QIcon((QT::QIcon *)v18);
      if ( v22 )
      {
        *(_QWORD *)&v23 = 0;
        qfree(v22, (const char *)p_ptr);
      }
      if ( v21[0] && !_InterlockedSub((volatile signed __int32 *)v21[0], 1u) )
        free(v21[0]);
      v8 += 8;
      if ( v9 == v8 )
        goto LABEL_30;
    }
    v12 = (char *)&QT::QByteArray::_empty;
LABEL_12:
    v10 = strlen(v12);
    v22 = (void *)qvector_reserve(&v22, 0, v10 + 1, 1);
    *(_QWORD *)&v23 = v10 + 1;
    memmove(v22, v12, v10);
    *((_BYTE *)v22 + v10) = 0;
    goto LABEL_13;
  }
LABEL_30:
  if ( v19.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v19.m128i_i64[0], 1u) )
  {
    v14 = v19.m128i_i64[1];
    v15 = v19.m128i_i64[1] + 8 * v20;
    if ( v19.m128i_i64[1] != v15 )
    {
      do
      {
        v16 = (QT::QFileInfo *)v14;
        v14 += 8;
        QT::QFileInfo::~QFileInfo(v16);
      }
      while ( v15 != v14 );
    }
    free((void *)v19.m128i_i64[0]);
  }
  QT::QDir::~QDir((QT::QDir *)v17);
  return v26 - __readfsqword(0x28u);
}
