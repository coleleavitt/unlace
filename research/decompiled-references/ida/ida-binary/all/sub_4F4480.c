unsigned __int64 __fastcall sub_4F4480(QT::QMetaObject::Connection *a1, __int64 a2, QT::QMetaObject::Connection *a3)
{
  unsigned __int64 v3; // r9
  QT::QMetaObject::Connection *v5; // rdi
  QT::QMetaObject::Connection *v6; // rbp
  QT::QMetaObject::Connection *v7; // r8
  QT::QMetaObject::Connection *v8; // rax
  QT::QMetaObject::Connection *v9; // rsi
  __int64 v10; // rcx
  QT::QMetaObject::Connection *v11; // rdx
  QT::QMetaObject::Connection *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  unsigned __int64 v16; // [rsp+8h] [rbp-40h] BYREF
  QT::QMetaObject::Connection **v17; // [rsp+10h] [rbp-38h]
  QT::QMetaObject::Connection *v18; // [rsp+18h] [rbp-30h]
  QT::QMetaObject::Connection *v19; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-20h]

  v3 = (unsigned __int64)a3 + 8 * a2;
  v5 = a3;
  v16 = (unsigned __int64)a3;
  v20 = __readfsqword(0x28u);
  v18 = a3;
  v17 = (QT::QMetaObject::Connection **)&v16;
  if ( (unsigned __int64)a1 >= v3 )
  {
    if ( (QT::QMetaObject::Connection *)v3 == a3 )
      return v20 - __readfsqword(0x28u);
    v6 = a1;
    v7 = (QT::QMetaObject::Connection *)((char *)a3 + 8 * a2);
  }
  else
  {
    v6 = (QT::QMetaObject::Connection *)((char *)a3 + 8 * a2);
    v7 = a1;
    if ( a3 == a1 )
    {
      v19 = a1;
      v17 = &v19;
      goto LABEL_6;
    }
  }
  v8 = a1;
  v9 = (QT::QMetaObject::Connection *)((char *)a1 + v7 - a3);
  do
  {
    v10 = *(_QWORD *)v8;
    *(_QWORD *)v8 = 0;
    v8 = (QT::QMetaObject::Connection *)((char *)v8 + 8);
    a3 = (QT::QMetaObject::Connection *)((char *)a3 + 8);
    *((_QWORD *)a3 - 1) = v10;
  }
  while ( v8 != v9 );
  v16 = (unsigned __int64)v7;
  v19 = v7;
  a1 = (QT::QMetaObject::Connection *)((char *)v7 + a1 - v5);
  v17 = &v19;
  if ( (QT::QMetaObject::Connection *)v3 == v7 )
    goto LABEL_10;
LABEL_6:
  v11 = v7;
  v12 = a1;
  do
  {
    v13 = *(_QWORD *)v11;
    v14 = *(_QWORD *)v12;
    v12 = (QT::QMetaObject::Connection *)((char *)v12 + 8);
    v11 = (QT::QMetaObject::Connection *)((char *)v11 + 8);
    *((_QWORD *)v11 - 1) = v14;
    *((_QWORD *)v12 - 1) = v13;
  }
  while ( v12 != (QT::QMetaObject::Connection *)((char *)a1 + v3 - (_QWORD)v7) );
  v16 = v3;
  a1 = (QT::QMetaObject::Connection *)((QT::QMetaObject::Connection *)((char *)a1 + v3) - v7);
  while ( a1 != v6 )
  {
    a1 = (QT::QMetaObject::Connection *)((char *)a1 - 8);
    QT::QMetaObject::Connection::~Connection(a1);
LABEL_10:
    ;
  }
  return v20 - __readfsqword(0x28u);
}
