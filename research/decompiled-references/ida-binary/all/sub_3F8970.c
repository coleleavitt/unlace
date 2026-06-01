__int64 __fastcall sub_3F8970(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebp
  volatile signed __int32 *v5; // rax
  const char *v7; // rdx
  const char *v8; // rsi
  const char *v9; // rbp
  __int64 v10; // rax
  __m128i ptr; // [rsp+0h] [rbp-78h] BYREF
  __int64 v12; // [rsp+10h] [rbp-68h]
  const char *v13; // [rsp+20h] [rbp-58h] BYREF
  __int128 v14; // [rsp+28h] [rbp-50h]
  void *v15; // [rsp+40h] [rbp-38h] BYREF
  const char *v16; // [rsp+48h] [rbp-30h]
  unsigned __int64 v17; // [rsp+58h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  v3 = QT::QMetaObject::cast((QT::QMetaObject *)&off_8934E0, *(const QT::QObject **)a2);
  if ( !v3 )
    return 7;
  v4 = 7;
  sub_3F7360(&ptr, v3);
  if ( !v12 )
  {
    v5 = (volatile signed __int32 *)ptr.m128i_i64[0];
    if ( !ptr.m128i_i64[0] )
      return v4;
    goto LABEL_4;
  }
  v13 = nullptr;
  v14 = 0;
  QT::QString::toUtf8_helper((QT::QString *)&v15, (const QT::QString *)&ptr);
  v7 = v16;
  if ( !v16 )
    v7 = (const char *)&QT::QByteArray::_empty;
  v8 = "Hide \"%s\"";
  sub_169A50((__int64 *)&v13, (__int64)"Hide \"%s\"", v7);
  if ( !v15 || _InterlockedSub((volatile signed __int32 *)v15, 1u) )
  {
    v9 = &s1;
    if ( !(_QWORD)v14 )
      goto LABEL_12;
    goto LABEL_18;
  }
  v9 = &s1;
  free(v15);
  if ( (_QWORD)v14 )
LABEL_18:
    v9 = v13;
LABEL_12:
  v10 = sub_534430(*(_QWORD *)(a2 + 72));
  if ( v10 )
  {
    v8 = (_BYTE *)(&dword_0 + 1);
    sub_537630(v10, 1, v9);
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13, v8);
  }
  v5 = (volatile signed __int32 *)ptr.m128i_i64[0];
  v4 = 3;
  if ( ptr.m128i_i64[0] )
  {
LABEL_4:
    if ( !_InterlockedSub(v5, 1u) )
      free((void *)ptr.m128i_i64[0]);
  }
  return v4;
}
