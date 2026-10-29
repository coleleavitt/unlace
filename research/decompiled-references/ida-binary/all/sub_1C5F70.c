unsigned __int64 sub_1C5F70()
{
  QT::QObject *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // r15
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rax
  _BYTE v22[8]; // [rsp+8h] [rbp-60h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+10h] [rbp-58h] BYREF
  __int64 v24; // [rsp+18h] [rbp-50h]
  unsigned __int64 v25; // [rsp+28h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  if ( !qword_8CAF18 )
  {
    v1 = (QT::QObject *)operator new(0x10u);
    QT::QObject::QObject(v1, nullptr);
    qword_8CAF18 = (__int64)v1;
    QT::QObject::setObjectName(v1, "IDP Monitor Signal Connections", 30);
    v2 = sub_414310();
    v24 = 0;
    v3 = qword_8CAF18;
    v4 = v2;
    v23 = sub_4751B0;
    v5 = operator new(0x10u);
    *(_QWORD *)(v5 + 8) = sub_1C44A0;
    *(_DWORD *)v5 = 1;
    QT::QObject::connectImpl(v22, v4, &v23, v3, 0, v5, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v22);
    v6 = qword_8CAF18;
    v24 = 0;
    v23 = sub_475240;
    v7 = operator new(0x10u);
    *(_QWORD *)(v7 + 8) = sub_1C44A0;
    *(_DWORD *)v7 = 1;
    QT::QObject::connectImpl(v22, v4, &v23, v6, 0, v7, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v22);
    v8 = qword_8CAF18;
    v24 = 0;
    v23 = sub_4752D0;
    v9 = operator new(0x10u);
    *(_QWORD *)(v9 + 8) = sub_1C44A0;
    *(_DWORD *)v9 = 1;
    QT::QObject::connectImpl(v22, v4, &v23, v8, 0, v9, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v22);
    v10 = qword_8CAF18;
    v24 = 0;
    v23 = sub_475360;
    v11 = operator new(0x10u);
    *(_QWORD *)(v11 + 8) = sub_1C44A0;
    *(_DWORD *)v11 = 1;
    QT::QObject::connectImpl(v22, v4, &v23, v10, 0, v11, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v22);
    v12 = qword_8CAF18;
    v24 = 0;
    v23 = sub_4753D0;
    v13 = operator new(0x10u);
    *(_DWORD *)v13 = 1;
    *(_QWORD *)(v13 + 8) = sub_1C43D0;
    QT::QObject::connectImpl(v22, v4, &v23, v12, 0, v13, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v22);
    v14 = qword_8CAF18;
    v24 = 0;
    v23 = sub_4753F0;
    v15 = operator new(0x10u);
    *(_DWORD *)v15 = 1;
    *(_QWORD *)(v15 + 8) = sub_1C53D0;
    QT::QObject::connectImpl(v22, v4, &v23, v14, 0, v15, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v22);
    v16 = qword_8CAF18;
    v24 = 0;
    v23 = sub_475410;
    v17 = operator new(0x10u);
    *(_DWORD *)v17 = 1;
    *(_QWORD *)(v17 + 8) = sub_1C5350;
    QT::QObject::connectImpl(v22, v4, &v23, v16, 0, v17, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v22);
    v18 = qword_8CAF18;
    v24 = 0;
    v23 = sub_475430;
    v19 = operator new(0x10u);
    *(_DWORD *)v19 = 1;
    *(_QWORD *)(v19 + 8) = sub_1C5740;
    QT::QObject::connectImpl(v22, v4, &v23, v18, 0, v19, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v22);
    v20 = qword_8CAF18;
    v24 = 0;
    v23 = sub_475450;
    v21 = operator new(0x10u);
    *(_DWORD *)v21 = 1;
    *(_QWORD *)(v21 + 8) = sub_1C55B0;
    QT::QObject::connectImpl(v22, v4, &v23, v20, 0, v21, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v22);
  }
  return v25 - __readfsqword(0x28u);
}
