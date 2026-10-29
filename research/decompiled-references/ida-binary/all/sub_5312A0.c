unsigned __int64 __fastcall sub_5312A0(__int64 *a1)
{
  _QWORD *v1; // rbp
  __int64 v2; // rbx
  __int64 v3; // r13
  QT::QAction *v4; // r15
  void (__fastcall *v5)(_BYTE *, _QWORD *, _QWORD); // r14
  unsigned int v6; // eax
  __int64 v8; // [rsp+8h] [rbp-50h]
  _BYTE v9[8]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  v1 = QT::QCoreApplication::self;
  if ( QT::QCoreApplication::self )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD *))(*QT::QCoreApplication::self + 224LL))(QT::QCoreApplication::self);
    if ( v8 )
    {
      v2 = *a1;
      v3 = *a1 + 8 * a1[1];
      if ( *a1 != v3 )
      {
        do
        {
          while ( *(_QWORD *)(*(_QWORD *)v2 + 176LL) <= 1u )
          {
            v2 += 8;
            if ( v3 == v2 )
              return v10 - __readfsqword(0x28u);
          }
          v4 = *(QT::QAction **)(*(_QWORD *)v2 + 192LL);
          v5 = *(void (__fastcall **)(_BYTE *, _QWORD *, _QWORD))(*v1 + 136LL);
          v6 = sub_53C520(v8);
          v5(v9, v1, v6);
          QT::QAction::setIcon(v4, (const QT::QIcon *)v9);
          v2 += 8;
          QT::QIcon::~QIcon((QT::QIcon *)v9);
        }
        while ( v3 != v2 );
      }
    }
  }
  return v10 - __readfsqword(0x28u);
}
