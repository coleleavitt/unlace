unsigned __int64 __fastcall sub_53E2C0(__int64 a1, double a2)
{
  bool v2; // zf
  __int64 (__fastcall ***v3)(_QWORD); // rbp
  QT::QMetaObject *v4; // rax
  int v5; // r12d
  QT::QMetaObject *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  const char *v11; // r8
  __int128 v13; // [rsp+0h] [rbp-38h] BYREF
  __int64 v14; // [rsp+10h] [rbp-28h]
  unsigned __int64 v15; // [rsp+18h] [rbp-20h]

  v2 = *(_BYTE *)(a1 + 184) == 0;
  v15 = __readfsqword(0x28u);
  if ( v2 )
  {
    v3 = *(__int64 (__fastcall ****)(_QWORD))(a1 + 176);
    if ( v3 )
    {
      v4 = (QT::QMetaObject *)(**v3)(*(_QWORD *)(a1 + 176));
      v5 = QT::QMetaObject::indexOfSlot(v4, "form_deactivate()");
      if ( v5 >= 0 )
      {
        v6 = (QT::QMetaObject *)(**v3)(v3);
        v7 = QT::QMetaObject::method(v6, v5);
        a2 = 0.0;
        v14 = 0;
        v13 = 0;
        QT::QMetaMethod::invokeImpl(v7, v8, v3, 1, 1, &v13, (char *)&v13 + 8);
      }
    }
  }
  sub_53E260((char *)a1, a2);
  return sub_478D00((char *)(a1 + 160), 0, a2, v9, v10, v11);
}
