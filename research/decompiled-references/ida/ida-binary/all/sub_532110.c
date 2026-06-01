unsigned __int64 __fastcall sub_532110(_QWORD *a1, __int64 a2)
{
  char *v5; // r12
  size_t v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rdi
  const char *v9; // rdx
  const char *v10; // rsi
  __int64 v11; // rax
  void *v12; // rdi
  __int64 v13; // [rsp+0h] [rbp-A8h]
  size_t n; // [rsp+8h] [rbp-A0h]
  void *v15; // [rsp+10h] [rbp-98h] BYREF
  __int128 v16; // [rsp+18h] [rbp-90h]
  void *ptr; // [rsp+30h] [rbp-78h] BYREF
  char *s; // [rsp+38h] [rbp-70h]
  void *v19[3]; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+68h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  a1[1] = 0;
  *a1 = &ui_action_execution_data_t___vtable;
  if ( (*(_BYTE *)(a2 + 114) & 4) != 0 )
    return v20 - __readfsqword(0x28u);
  QT::QAction::text((QT::QAction *)v19);
  QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)v19);
  v5 = s;
  v15 = nullptr;
  v16 = 0;
  if ( s )
  {
    v6 = strlen(s);
    v7 = v6 + 1;
  }
  else
  {
    v5 = (char *)&QT::QByteArray::_empty;
    if ( !&QT::QByteArray::_empty )
      goto LABEL_6;
    v7 = 1;
    v6 = 0;
  }
  v13 = v7;
  n = v6;
  v15 = (void *)qvector_reserve(&v15, 0, v7, 1);
  *(_QWORD *)&v16 = v13;
  memmove(v15, v5, n);
  *((_BYTE *)v15 + n) = 0;
LABEL_6:
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  if ( v19[0] && !_InterlockedSub((volatile signed __int32 *)v19[0], 1u) )
    free(v19[0]);
  sub_52FD10((__int64)&v15, "&", (const char *)&unk_5C2F25);
  v8 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 88LL))(QT::QCoreApplication::self + 2);
  v9 = &s1;
  if ( !(_QWORD)v16 )
  {
    v10 = &s1;
    if ( !*(_QWORD *)(a2 + 40) )
      goto LABEL_14;
    goto LABEL_16;
  }
  v9 = (const char *)v15;
  v10 = &s1;
  if ( *(_QWORD *)(a2 + 40) )
LABEL_16:
    v10 = *(const char **)(a2 + 32);
LABEL_14:
  v11 = (*(__int64 (__fastcall **)(__int64, const char *, const char *))(*(_QWORD *)v8 + 88LL))(v8, v10, v9);
  v12 = v15;
  a1[1] = v11;
  if ( v12 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v12, v10);
  }
  return v20 - __readfsqword(0x28u);
}
