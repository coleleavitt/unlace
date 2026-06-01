unsigned __int64 __fastcall sub_547110(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // [rsp+0h] [rbp-38h] BYREF
  __int64 v6; // [rsp+8h] [rbp-30h] BYREF
  __int64 v7; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v3 = *a2;
  v8 = __readfsqword(0x28u);
  v5 = 0;
  ++*(_DWORD *)(v3 + 40);
  v7 = v3;
  sub_546E60(&v6, (QT::QDebug *)&v7, "QList", a3);
  QT::QDebug::~QDebug((QT::QDebug *)&v7);
  QT::QDebug::~QDebug((QT::QDebug *)&v6);
  QT::QDebug::~QDebug((QT::QDebug *)&v5);
  return v8 - __readfsqword(0x28u);
}
