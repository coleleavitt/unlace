unsigned __int64 __fastcall sub_334950(__int64 a1)
{
  __int64 v1; // rbx
  char *v2; // rbp
  size_t v3; // r13
  __int64 v4; // r15
  const char *v5; // rsi
  const char *v6; // rdi
  void *v8; // [rsp+0h] [rbp-98h] BYREF
  __int128 v9; // [rsp+8h] [rbp-90h]
  void *v10[4]; // [rsp+20h] [rbp-78h] BYREF
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  char *s; // [rsp+48h] [rbp-50h]
  unsigned __int64 v13; // [rsp+58h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  v1 = sub_5313F0(a1);
  QT::QAction::text((QT::QAction *)v10);
  QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)v10);
  v2 = s;
  v8 = nullptr;
  v9 = 0;
  if ( s )
  {
    v3 = strlen(s);
    v4 = v3 + 1;
  }
  else
  {
    v2 = (char *)&QT::QByteArray::_empty;
    if ( !&QT::QByteArray::_empty )
      goto LABEL_4;
    v4 = 1;
    v3 = 0;
  }
  v8 = (void *)qvector_reserve(&v8, 0, v4, 1);
  *(_QWORD *)&v9 = v4;
  memmove(v8, v2, v3);
  *((_BYTE *)v8 + v3) = 0;
LABEL_4:
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  if ( v10[0] && !_InterlockedSub((volatile signed __int32 *)v10[0], 1u) )
    free(v10[0]);
  sub_32EC20((__int64)&v8, "&", (const char *)&unk_5C2F25);
  v5 = &s1;
  if ( (_QWORD)v9 )
    v5 = (const char *)v8;
  v6 = &s1;
  if ( *(_QWORD *)(v1 + 40) )
    v6 = *(const char **)(v1 + 32);
  sub_32E720(v6, v5);
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8, v5);
  }
  return v13 - __readfsqword(0x28u);
}
