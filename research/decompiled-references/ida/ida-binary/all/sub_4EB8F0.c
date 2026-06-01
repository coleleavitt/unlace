__int64 __fastcall sub_4EB8F0(__int64 (__fastcall ***this)(QT::QObject *), QT::QFont *a2)
{
  __int64 (__fastcall **v2)(QT::QObject *); // rax
  QT::QMetaObject *v3; // rax
  int v4; // eax
  int v5; // ebp
  QT::QMetaObject *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD v10[2]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v11[9]; // [rsp+10h] [rbp-48h] BYREF

  v2 = *this;
  v11[5] = __readfsqword(0x28u);
  v3 = (QT::QMetaObject *)(*v2)((QT::QObject *)this);
  v4 = QT::QMetaObject::indexOfSlot(v3, "set_font(QFont)");
  if ( v4 < 0 )
  {
    sub_4EB870((QT::QObject *)this, a2);
    return 1;
  }
  else
  {
    v5 = v4;
    v6 = (QT::QMetaObject *)(**this)((QT::QObject *)this);
    v7 = QT::QMetaObject::method(v6, v5);
    v10[1] = a2;
    v10[0] = 0;
    v11[1] = "QFont";
    v11[3] = &unk_86BEE0;
    v11[0] = 0;
    v11[2] = 0;
    return QT::QMetaMethod::invokeImpl(v7, v8, this, 1, 2, v10, v11);
  }
}
