char __fastcall sub_4EB9F0(__int64 *a1, __int64 (__fastcall ***a2)(_QWORD))
{
  _QWORD *v2; // r13
  QT::QMetaObject *v3; // rax
  int v4; // eax
  int v5; // r14d
  QT::QMetaObject *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  char result; // al
  __int64 v10; // rbx
  const char *v11; // rsi
  char v12; // [rsp+Fh] [rbp-81h]
  void *v13[2]; // [rsp+10h] [rbp-80h] BYREF
  __int64 v14; // [rsp+20h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-60h] BYREF
  const char *v16; // [rsp+38h] [rbp-58h]
  __m128i v17; // [rsp+50h] [rbp-40h] BYREF
  _DWORD *v18; // [rsp+60h] [rbp-30h]
  unsigned __int64 v19; // [rsp+68h] [rbp-28h]

  v19 = __readfsqword(0x28u);
  v2 = QT::QCoreApplication::self;
  v3 = (QT::QMetaObject *)(**a2)(a2);
  v4 = QT::QMetaObject::indexOfSlot(v3, "get_font_domain_name()");
  if ( v4 < 0 )
  {
    result = 0;
    v10 = 0;
  }
  else
  {
    v5 = v4;
    v6 = (QT::QMetaObject *)(**a2)(a2);
    v7 = QT::QMetaObject::method(v6, v5);
    v14 = 0;
    *(_OWORD *)v13 = 0;
    v18 = QT::QtPrivate::QMetaTypeInterfaceWrapper<QT::QString>::metaType;
    v17 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v13, (__m128i)(unsigned __int64)"QString");
    result = QT::QMetaMethod::invokeImpl(v7, v8, a2, 1, 1, &v17, &v17.m128i_u64[1]);
    if ( result )
    {
      result = 0;
      v10 = 0;
      if ( v14 )
      {
        QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)v13);
        v11 = v16;
        if ( !v16 )
          v11 = (const char *)&QT::QByteArray::_empty;
        v10 = sub_47A550((__int64)v2, v11);
        if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
          free(ptr);
        result = v10 != 0;
      }
    }
    else
    {
      v10 = 0;
    }
    if ( v13[0] && !_InterlockedSub((volatile signed __int32 *)v13[0], 1u) )
    {
      v12 = result;
      free(v13[0]);
      result = v12;
    }
  }
  *a1 = v10;
  return result;
}
