unsigned __int64 __fastcall sub_4D3710(__int64 a1, unsigned __int64 *a2, unsigned int *a3)
{
  unsigned __int64 v3; // rax
  const QT::QMetaObject *v4; // rdx
  unsigned __int64 v6; // [rsp+0h] [rbp-38h] BYREF
  _BYTE v7[8]; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 v8; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v3 = *a2;
  *(_DWORD *)(v3 + 40) += 2;
  v4 = (const QT::QMetaObject *)*a3;
  v6 = v3;
  v8 = v3;
  QT::qt_QMetaEnum_flagDebugOperator(
    (QT::QDebug *)v7,
    (unsigned __int64)&v8,
    v4,
    (const char *)&QT::Qt::staticMetaObject);
  QT::QDebug::~QDebug((QT::QDebug *)&v8);
  QT::QDebug::~QDebug((QT::QDebug *)v7);
  QT::QDebug::~QDebug((QT::QDebug *)&v6);
  return v9 - __readfsqword(0x28u);
}
