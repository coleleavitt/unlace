__int64 __fastcall IDAApplication__::vfunc_9(__int64 a1, _QWORD *a2, __int64 (__fastcall ***a3)(_QWORD))
{
  QT::QMetaObject *v4; // rax
  int v5; // r13d
  QT::QMetaObject *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __m128i si128; // xmm0
  __int64 v10; // rdx
  char *v11; // rbx
  size_t v12; // rax
  size_t v13; // r14
  size_t v15; // r15
  void *v16; // rdi
  void *ptr[2]; // [rsp+10h] [rbp-90h] BYREF
  __int64 v18; // [rsp+20h] [rbp-80h]
  char *s[2]; // [rsp+30h] [rbp-70h] BYREF
  __int64 v20; // [rsp+40h] [rbp-60h]
  __m128i v21; // [rsp+50h] [rbp-50h] BYREF
  _DWORD *v22; // [rsp+60h] [rbp-40h]
  unsigned __int64 v23; // [rsp+68h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  v18 = 0;
  *(_OWORD *)ptr = 0;
  v4 = (QT::QMetaObject *)(**a3)(a3);
  v5 = QT::QMetaObject::indexOfSlot(v4, "get_generic_title()");
  if ( v5 >= 0 )
  {
    v6 = (QT::QMetaObject *)(**a3)(a3);
    v7 = QT::QMetaObject::method(v6, v5);
    v22 = QT::QtPrivate::QMetaTypeInterfaceWrapper<QT::QString>::metaType;
    v21 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)ptr, (__m128i)(unsigned __int64)"QString");
    QT::QMetaMethod::invokeImpl(v7, v8, a3, 1, 1, &v21, &v21.m128i_u64[1]);
  }
  if ( !v18 )
  {
    QT::QWidget::windowTitle((QT::QWidget *)s);
    si128 = _mm_load_si128((const __m128i *)ptr);
    v10 = v18;
    *(__m128i *)ptr = _mm_load_si128((const __m128i *)s);
    v18 = v20;
    v20 = v10;
    *(__m128i *)s = si128;
    if ( si128.m128i_i64[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)si128.m128i_i64[0], 1u) )
        free(s[0]);
    }
  }
  QT::QString::toUtf8_helper((QT::QString *)s, (const QT::QString *)ptr);
  v11 = s[1];
  if ( (s[1] || (v11 = (char *)&QT::QByteArray::_empty) != nullptr) && (v12 = strlen(v11), (v13 = v12) != 0) )
  {
    v15 = v12 + 1;
    v16 = (void *)*a2;
    if ( a2[2] < v12 + 1 )
    {
      v16 = (void *)qvector_reserve(a2, *a2, v15, 1);
      *a2 = v16;
    }
    a2[1] = v15;
    memmove(v16, v11, v13);
    *(_BYTE *)(*a2 + v13) = 0;
  }
  else
  {
    a2[1] = 0;
  }
  if ( s[0] && !_InterlockedSub((volatile signed __int32 *)s[0], 1u) )
    free(s[0]);
  LOBYTE(v11) = a2[1] > 1u;
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return (unsigned int)v11;
}
