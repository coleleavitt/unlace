unsigned __int64 __fastcall sub_30EF20(__int64 a1)
{
  const char **v1; // rbx
  const char *v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  if ( (_DWORD)qword_8CD760 != 4 )
    sub_16B930((__int64)"The %s directive in idagui.cfg is either missing, or has the wrong format.", "MENUS_LAYOUT");
  v1 = (const char **)&off_8658A0;
  sub_540860(a1, qword_8CD768);
  do
  {
    v2 = *v1;
    if ( !sub_53DC50(a1, *v1) )
      sub_16B930(
        (__int64)"Missing mandatory menu with name: %s; please check directive 'MENUS_LAYOUT' in idagui.cfg",
        v2);
    ++v1;
  }
  while ( v1 != (const char **)algn_8659A8 );
  v3 = sub_53DC50(a1, "File");
  QT::QObject::connect(&v8, v3, "2aboutToShow()", a1, "1fileMenuToShow()", 1);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v8);
  v4 = sub_53DC50(a1, "Types_S:Edit");
  QT::QObject::connect(&v8, v4, "2aboutToShow()", a1, "1structEditMenuToShow()", 1);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v8);
  v5 = sub_53DC50(a1, "Toolbars");
  QT::QObject::connect(&v8, v5, "2aboutToShow()", a1, "1toolBarsMenuToShow()", 1);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v8);
  v6 = sub_53DC50(a1, "Options");
  QT::QObject::connect(&v8, v6, "2aboutToShow()", a1, "1windowsMenuToShow()", 1);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v8);
  return v9 - __readfsqword(0x28u);
}
