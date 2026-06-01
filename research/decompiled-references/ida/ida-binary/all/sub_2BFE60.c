unsigned __int64 sub_2BFE60(__int64 a1, int a2, __int64 a3, ...)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbp
  int *v6; // rax
  QT::QLabel *v7; // rbp
  size_t v8; // rax
  void *ptr[3]; // [rsp+0h] [rbp-508h] BYREF
  gcc_va_list va; // [rsp+18h] [rbp-4F0h] BYREF
  char s[1032]; // [rsp+30h] [rbp-4D8h] BYREF
  unsigned __int64 v13; // [rsp+438h] [rbp-D0h]
  __int64 v14; // [rsp+458h] [rbp-B0h]
  __int64 v15; // [rsp+460h] [rbp-A8h]
  __int64 v16; // [rsp+468h] [rbp-A0h]

  va_start(va, a3);
  v14 = va_arg(va, _QWORD);
  v15 = va_arg(va, _QWORD);
  v16 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a3);
  v13 = __readfsqword(0x28u);
  __vsnprintf_chk(s, 1024, 1, 1024, a3, va);
  v5 = *(_QWORD *)(a1 + 16);
  if ( v5 )
  {
    v6 = *(int **)(v5 + 976);
    if ( !v6 || *v6 > 1 )
      sub_178660(v5 + 976, 0, 0, 0, v3, v4);
    v7 = *(QT::QLabel **)(*(_QWORD *)(v5 + 984) + 8LL * a2);
    v8 = strlen(s);
    QT::QString::fromUtf8(ptr, v8, s);
    QT::QLabel::setText(v7, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  return v13 - __readfsqword(0x28u);
}
