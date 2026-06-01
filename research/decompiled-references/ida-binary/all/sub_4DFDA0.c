__int64 __fastcall sub_4DFDA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, const char *a5, double a6)
{
  bool v6; // zf
  __int64 v7; // rbx
  __int64 v9; // rbp
  __int64 *v10; // rax
  __int64 *v11; // rdx
  __int64 v12; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-30h]

  v6 = *(_BYTE *)(a1 + 1120) == 0;
  v13 = __readfsqword(0x28u);
  v7 = a1;
  if ( v6 && *(_QWORD *)(a1 + 1112) )
  {
    if ( under_debugger )
      BUG();
    interr(40846, a2, a3, a4, a6);
  }
  sub_478D00((char *)(a1 + 1096), a2, a6, a3, a4, a5);
  if ( *(_BYTE *)(a1 + 1120) )
    return v13 - __readfsqword(0x28u);
  v9 = *(_QWORD *)(a1 + 1112);
  if ( !v9 )
    return v13 - __readfsqword(0x28u);
  QT::QObject::connect(&v12, *(_QWORD *)(a1 + 1112), "2filter_changed()", a1 + 1072, "1on_quick_filter_changed()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v12);
  QT::QObject::connect(
    &v12,
    v9,
    "2reserved_key_press(const QKeyEvent &)",
    a1 + 1072,
    "1on_quick_filter_reserved_key_press(const QKeyEvent &)",
    0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v12);
  if ( a1 )
  {
    v10 = (__int64 *)qword_8D1E60;
    v11 = (__int64 *)(qword_8D1E60 + 16 * xmmword_8D1E68);
    if ( (__int64 *)qword_8D1E60 == v11 )
      goto LABEL_16;
    while ( a1 != v10[1] )
    {
      v10 += 2;
      if ( v11 == v10 )
        goto LABEL_16;
    }
    if ( !v10 )
LABEL_16:
      v7 = 0;
    else
      v7 = *v10;
  }
  return sub_51D550(v9, v7);
}
