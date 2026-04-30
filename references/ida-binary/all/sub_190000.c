unsigned __int64 __fastcall sub_190000(__int64 a1, __int64 a2)
{
  QT::QTextEdit *v2; // rbx
  size_t v3; // rax
  char *v4; // rbp
  unsigned __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  char *s; // [rsp+0h] [rbp-58h] BYREF
  __int64 v11; // [rsp+8h] [rbp-50h]
  void *ptr[3]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 48) = a2;
  v2 = *(QT::QTextEdit **)(*(_QWORD *)(a1 + 56) + 24LL);
  sub_36C8C0(&s, a2, 0);
  if ( v11 )
  {
    v3 = v11 - 1;
    v4 = s;
    v5 = (unsigned __int64)(v11 - 1) >> 63;
  }
  else
  {
    LOBYTE(v5) = 0;
    v3 = 0;
    v4 = (char *)&s1;
  }
  if ( !v4 || (_BYTE)v5 )
  {
    v3 = 0;
    if ( v4 )
      v3 = strlen(v4);
  }
  QT::QString::fromUtf8(ptr, v3, v4);
  QT::QTextEdit::setText(v2, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( s )
  {
    v11 = 0;
    qfree(s, ptr, v6, v7, v8);
  }
  return v13 - __readfsqword(0x28u);
}
