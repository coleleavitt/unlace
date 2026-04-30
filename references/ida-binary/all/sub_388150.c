unsigned __int64 __fastcall sub_388150(int a1)
{
  char *v1; // rdx
  char *v2; // rax
  const char *v4; // r13
  char *v5; // rdx
  char *v6; // rax
  char *v7; // [rsp+8h] [rbp-60h] BYREF
  char *v8; // [rsp+10h] [rbp-58h] BYREF
  char *v9; // [rsp+18h] [rbp-50h] BYREF
  char *v10; // [rsp+20h] [rbp-48h] BYREF
  __int128 v11; // [rsp+28h] [rbp-40h]
  unsigned __int64 v12; // [rsp+38h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( a1 <= 0 )
  {
    sub_388000(1, "Up", nullptr);
    QT::QIcon::QIcon((QT::QIcon *)&v7);
    v10 = nullptr;
    v11 = 0;
    v4 = (const char *)QT::QCoreApplication::self;
    v10 = (char *)qvector_reserve(&v10, 0, 15, 1);
    *(_QWORD *)&v11 = 15;
    strcpy(v10, "SetDirectionUp");
    sub_3086A0((__int64)&v8, v4, (__int64)&v10);
    v5 = v8;
    v6 = v7;
    v8 = nullptr;
    v7 = v5;
    v9 = v6;
    QT::QIcon::~QIcon((QT::QIcon *)&v9);
    QT::QIcon::~QIcon((QT::QIcon *)&v8);
    if ( v10 )
    {
      *(_QWORD *)&v11 = 0;
      qfree(v10, v4);
    }
  }
  else
  {
    sub_388000(1, "Down", nullptr);
    QT::QIcon::QIcon((QT::QIcon *)&v7);
    (*(void (__fastcall **)(char **, _QWORD *, QT::QAction *))(*QT::QCoreApplication::self + 144LL))(
      &v9,
      QT::QCoreApplication::self,
      qword_8C9FF8);
    v1 = v9;
    v2 = v7;
    v9 = nullptr;
    v7 = v1;
    v10 = v2;
    QT::QIcon::~QIcon((QT::QIcon *)&v10);
    QT::QIcon::~QIcon((QT::QIcon *)&v9);
  }
  QT::QAction::setIcon(qword_8C9FF8, (const QT::QIcon *)&v7);
  QT::QIcon::~QIcon((QT::QIcon *)&v7);
  return v12 - __readfsqword(0x28u);
}
