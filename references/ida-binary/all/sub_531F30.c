__int64 __fastcall sub_531F30(__int64 a1, const QT::QObject *a2, __int64 a3)
{
  unsigned int v3; // r14d
  __int64 (__fastcall **v4)(const QT::QObject *); // rax
  QT::QMetaObject *v6; // rax
  int v7; // eax
  int v8; // r12d
  QT::QMetaObject *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v13; // [rsp+8h] [rbp-70h] BYREF
  _QWORD v14[2]; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v15[11]; // [rsp+20h] [rbp-58h] BYREF

  v3 = 0;
  v4 = *(__int64 (__fastcall ***)(const QT::QObject *))a2;
  v15[5] = __readfsqword(0x28u);
  v6 = (QT::QMetaObject *)(*v4)(a2);
  v7 = QT::QMetaObject::indexOfSlot(v6, "populate_popup(void*)");
  if ( v7 >= 0 )
  {
    v8 = v7;
    v9 = (QT::QMetaObject *)(**(__int64 (__fastcall ***)(const QT::QObject *))a2)(a2);
    v10 = QT::QMetaObject::method(v9, v8);
    v13 = a1;
    v14[0] = 0;
    v14[1] = &v13;
    v15[1] = "void *";
    v15[0] = 0;
    v15[3] = &QT::QtPrivate::QMetaTypeInterfaceWrapper<void *>::metaType;
    v15[2] = 0;
    v3 = QT::QMetaMethod::invokeImpl(v10, v11, a2, 1, 2, v14, v15);
  }
  sub_4ED380(a1, a2, a3);
  return v3;
}
