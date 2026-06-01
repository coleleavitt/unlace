__int64 __fastcall sub_4EBBA0(QT::QObject *this)
{
  unsigned int v1; // eax
  unsigned int v2; // ebx
  _QWORD *v4; // rbx
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // [rsp+8h] [rbp-60h] BYREF
  __int64 v8; // [rsp+10h] [rbp-58h] BYREF
  int v9; // [rsp+18h] [rbp-50h]
  __int64 v10; // [rsp+20h] [rbp-48h] BYREF
  int v11; // [rsp+28h] [rbp-40h]
  unsigned __int64 v12; // [rsp+38h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v7 = 0;
  LOBYTE(v1) = sub_4EB9F0(&v7, (__int64 (__fastcall ***)(_QWORD))this);
  v2 = v1;
  if ( (_BYTE)v1 )
  {
    v4 = QT::QCoreApplication::self;
    QT::QFont::QFont((QT::QFont *)&v8);
    v5 = v7;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64 *, __int64))(*v4 + 216LL))(v4, &v8, v7) )
    {
      (*(void (__fastcall **)(__int64 *, _QWORD *, __int64))(*v4 + 208LL))(&v10, v4, v5);
      v6 = v8;
      v8 = v10;
      v10 = v6;
      LODWORD(v6) = v9;
      v9 = v11;
      v11 = v6;
      QT::QFont::~QFont((QT::QFont *)&v10);
    }
    v2 = sub_4EB8F0((__int64 (__fastcall ***)(QT::QObject *))this, (QT::QFont *)&v8);
    QT::QFont::~QFont((QT::QFont *)&v8);
  }
  return v2;
}
