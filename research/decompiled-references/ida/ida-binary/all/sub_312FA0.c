__int64 sub_312FA0()
{
  _QWORD *v0; // r13
  __int64 (__fastcall ***v1)(_QWORD); // rax
  __int64 (__fastcall ***v2)(_QWORD); // rbx
  QT::QMetaObject *v3; // rax
  int v4; // r12d
  QT::QMetaObject *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  void **v8; // rsi
  void **v9; // r12
  size_t v10; // rbx
  __int64 v11; // rbx
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  void *v15; // rdi
  size_t v16; // rdx
  __m128i v17; // [rsp+0h] [rbp-F0h] BYREF
  _QWORD *v18; // [rsp+18h] [rbp-D8h]
  __int64 v19; // [rsp+20h] [rbp-D0h] BYREF
  __m128i v20; // [rsp+28h] [rbp-C8h]
  void *v21[2]; // [rsp+40h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+50h] [rbp-A0h]
  __int64 v23; // [rsp+60h] [rbp-90h] BYREF
  __m128i v24; // [rsp+68h] [rbp-88h] BYREF
  void *ptr; // [rsp+80h] [rbp-70h] BYREF
  void *src; // [rsp+88h] [rbp-68h]
  size_t n; // [rsp+90h] [rbp-60h]
  __m128i v28; // [rsp+A0h] [rbp-50h] BYREF
  void *v29; // [rsp+B0h] [rbp-40h]
  unsigned __int64 v30; // [rsp+B8h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  v18 = QT::QCoreApplication::self;
  if ( !QT::QCoreApplication::self )
    return 0;
  v0 = QT::QCoreApplication::self + 2;
  v19 = 0;
  v20 = 0;
  v1 = (__int64 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 48LL))(QT::QCoreApplication::self + 2);
  v2 = v1;
  if ( v1 )
  {
    v3 = (QT::QMetaObject *)(**v1)(v1);
    v4 = QT::QMetaObject::indexOfSlot(v3, "get_widget_help()");
    if ( v4 != -1 )
    {
      v22 = 0;
      *(_OWORD *)v21 = 0;
      v5 = (QT::QMetaObject *)(**v2)(v2);
      v6 = QT::QMetaObject::method(v5, v4);
      v29 = &QT::QtPrivate::QMetaTypeInterfaceWrapper<QT::QString>::metaType;
      v28 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v21, (__m128i)(unsigned __int64)"QString");
      if ( (unsigned __int8)QT::QMetaMethod::invokeImpl(v6, v7, v2, 1, 1, &v28, &v28.m128i_u64[1]) )
      {
        v8 = v21;
        QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)v21);
        v9 = (void **)src;
        v10 = n;
        if ( !src )
          v9 = (void **)&QT::QByteArray::_empty;
        v23 = 0;
        v24 = 0;
        if ( n )
        {
          v15 = nullptr;
          v16 = n + 1;
          if ( n != -1 )
          {
            v17.m128i_i64[0] = n + 1;
            v23 = qvector_reserve(&v23, 0, v16, 1);
            v16 = v10 + 1;
            v15 = (void *)v23;
          }
          v24.m128i_i64[0] = v16;
          v8 = v9;
          memmove(v15, v9, v10);
          *(_BYTE *)(v23 + v10) = 0;
        }
        if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
          free(ptr);
        v11 = v23;
        v23 = 0;
        v12 = _mm_loadu_si128(&v24);
        v24 = 0;
        if ( v19 )
        {
          v17 = v12;
          v20.m128i_i64[0] = 0;
          qfree(v19, (const char *)v8);
          v13 = _mm_load_si128(&v17);
          v19 = v11;
          v20 = v13;
          if ( v23 )
          {
            v24.m128i_i64[0] = 0;
            qfree(v23, (const char *)v8);
          }
        }
        else
        {
          v19 = v11;
          v20 = v12;
        }
      }
      if ( v21[0] && !_InterlockedSub((volatile signed __int32 *)v21[0], 1u) )
        free(v21[0]);
    }
  }
  (*(void (__fastcall **)(_QWORD *, __int64 *))(v18[2] + 136LL))(v0, &v19);
  if ( v19 )
  {
    v20.m128i_i64[0] = 0;
    qfree(v19, (const char *)&v19);
  }
  return 1;
}
