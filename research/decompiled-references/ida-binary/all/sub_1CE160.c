__int64 __fastcall registry_persistent_t__::vfunc_11(__int64 a1, __int64 a2, const QT::QString *a3)
{
  void *v4; // r13
  void *v5; // rsi
  size_t v6; // rax
  char *v7; // rbp
  unsigned __int64 v8; // rdx
  const char *v9; // rsi
  double v10; // xmm0_8
  char *s; // [rsp+0h] [rbp-88h] BYREF
  __int128 v13; // [rsp+8h] [rbp-80h]
  void *v14; // [rsp+20h] [rbp-68h] BYREF
  void *v15; // [rsp+28h] [rbp-60h]
  void *v16; // [rsp+40h] [rbp-48h] BYREF
  void *v17; // [rsp+48h] [rbp-40h]
  unsigned __int64 v18; // [rsp+58h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  s = nullptr;
  v13 = 0;
  QT::QString::toUtf8_helper((QT::QString *)&v16, (const QT::QString *)(a2 + 8));
  v4 = v17;
  if ( !v17 )
    v4 = &QT::QByteArray::_empty;
  QT::QString::toUtf8_helper((QT::QString *)&v14, a3);
  v5 = v15;
  if ( !v15 )
    v5 = &QT::QByteArray::_empty;
  reg_str_get(&s, v5, v4);
  sub_17F470(&v14);
  sub_17F470(&v16);
  if ( (_QWORD)v13 )
  {
    v6 = v13 - 1;
    v7 = s;
    v8 = (unsigned __int64)(v13 - 1) >> 63;
  }
  else
  {
    LOBYTE(v8) = 0;
    v6 = 0;
    v7 = (char *)&s1;
  }
  if ( !v7 || (_BYTE)v8 )
  {
    v6 = 0;
    if ( v7 )
      v6 = strlen(v7);
  }
  v9 = (const char *)v6;
  v10 = QT::QString::fromUtf8(a1, v6, v7);
  if ( s )
  {
    *(_QWORD *)&v13 = 0;
    qfree(s, v9, v10);
  }
  return a1;
}
