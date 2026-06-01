unsigned __int64 __fastcall sub_389840(__int64 a1, __int64 *a2, unsigned int *a3)
{
  __int64 v3; // rax
  const QT::QMetaObject *v4; // rdx
  __int64 v6; // [rsp+8h] [rbp-30h] BYREF
  _BYTE v7[8]; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v3 = *a2;
  ++*(_DWORD *)(v3 + 40);
  v4 = (const QT::QMetaObject *)*a3;
  v6 = v3;
  QT::qt_QMetaEnum_debugOperator((QT::QDebug *)v7, (__int64)&v6, v4, (const char *)&QT::Qt::staticMetaObject);
  QT::QDebug::~QDebug((QT::QDebug *)v7);
  QT::QDebug::~QDebug((QT::QDebug *)&v6);
  return v8 - __readfsqword(0x28u);
}
