__int64 __fastcall registry_persistent_t__::vfunc_12(__int64 a1, const QT::QString *a2, __int64 a3)
{
  void *v4; // r13
  void *v5; // rdi
  size_t v6; // rax
  char *v7; // rbp
  const char *v8; // rsi
  unsigned int v9; // ebx
  char *s; // [rsp+0h] [rbp-88h] BYREF
  __int128 v12; // [rsp+8h] [rbp-80h]
  void *v13; // [rsp+20h] [rbp-68h] BYREF
  void *v14; // [rsp+28h] [rbp-60h]
  void *v15; // [rsp+40h] [rbp-48h] BYREF
  void *v16; // [rsp+48h] [rbp-40h]
  unsigned __int64 v17; // [rsp+58h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  s = nullptr;
  v12 = 0;
  QT::QString::toUtf8_helper((QT::QString *)&v15, (const QT::QString *)(a1 + 8));
  v4 = v16;
  if ( !v16 )
    v4 = &QT::QByteArray::_empty;
  QT::QString::toUtf8_helper((QT::QString *)&v13, a2);
  v5 = v14;
  if ( !v14 )
    v5 = &QT::QByteArray::_empty;
  reg_bin_op(v5, 0, &s, 0, v4, 2);
  sub_17F470(&v13);
  sub_17F470(&v15);
  v6 = v12;
  v7 = s;
  if ( (__int64)v12 < 0 )
  {
    v6 = 0;
    if ( s )
      v6 = strlen(s);
  }
  v8 = *(const char **)(a3 + 16);
  QT::QByteArray::insert(a3, v8, v6, v7);
  v9 = *(_DWORD *)(a3 + 16);
  if ( s )
  {
    *(_QWORD *)&v12 = 0;
    qfree(s, v8);
  }
  return v9;
}
