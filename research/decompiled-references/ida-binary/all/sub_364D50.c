unsigned __int64 __fastcall sub_364D50(__int64 a1, __int64 a2, QT::QLineEdit *a3, QT::QLineEdit *a4)
{
  int v5; // edx
  size_t v7; // rax
  size_t v8; // rdx
  const char *v9; // rbp
  double v10; // xmm0_8
  size_t v11; // rax
  char *v12; // r12
  unsigned __int64 v13; // rdx
  double v14; // xmm0_8
  char *s; // [rsp+0h] [rbp-58h] BYREF
  __int128 v17; // [rsp+8h] [rbp-50h]
  void *ptr[3]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-20h]

  v5 = *(unsigned __int16 *)(a2 + 32);
  v19 = __readfsqword(0x28u);
  s = nullptr;
  v17 = 0;
  if ( (_WORD)v5 )
    sub_169A50((__int64 *)&s, (__int64)"%u", v5);
  v7 = *(_QWORD *)(a2 + 16);
  if ( v7 )
  {
    --v7;
    v9 = *(const char **)(a2 + 8);
    v8 = v7 >> 63;
  }
  else
  {
    LOBYTE(v8) = 0;
    v9 = &s1;
  }
  if ( !v9 || (_BYTE)v8 )
  {
    v7 = 0;
    if ( v9 )
      v7 = strlen(v9);
  }
  v10 = QT::QString::fromUtf8(ptr, v7, v9);
  QT::QLineEdit::setText(a3, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( (_QWORD)v17 )
  {
    v11 = v17 - 1;
    v12 = s;
    v13 = (unsigned __int64)(v17 - 1) >> 63;
  }
  else
  {
    LOBYTE(v13) = 0;
    v11 = 0;
    v12 = (char *)&s1;
  }
  if ( !v12 || (_BYTE)v13 )
  {
    v11 = 0;
    if ( v12 )
      v11 = strlen(v12);
  }
  v14 = QT::QString::fromUtf8(ptr, v11, v12, v10);
  QT::QLineEdit::setText(a4, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( s )
  {
    *(_QWORD *)&v17 = 0;
    qfree(s, (const char *)ptr, v14);
  }
  return v19 - __readfsqword(0x28u);
}
