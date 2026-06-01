unsigned __int64 __fastcall sub_459D80(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // [rsp+8h] [rbp-30h] BYREF
  _BYTE v5[8]; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v2 = *a2;
  ++*(_DWORD *)(v2 + 40);
  v4 = v2;
  QT::operator<<(v5, &v4);
  QT::QDebug::~QDebug((QT::QDebug *)v5);
  QT::QDebug::~QDebug((QT::QDebug *)&v4);
  return v6 - __readfsqword(0x28u);
}
