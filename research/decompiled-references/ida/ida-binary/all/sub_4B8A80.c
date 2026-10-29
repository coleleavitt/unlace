unsigned __int64 __fastcall sub_4B8A80(__int64 a1, __int64 a2)
{
  int v2; // r8d
  int v3; // r9d
  _QWORD v5[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  QT::QEvent::QEvent(v5, 2005);
  v5[2] = a2;
  callui(178, a1, a2, (unsigned int)&callui, v2, v3, &ISetWidgetConfigEvent___vtable);
  sub_51B5E0(a1, v5);
  v5[0] = &IWidgetConfigEvent___vtable;
  QT::QEvent::~QEvent((QT::QEvent *)v5);
  return v6 - __readfsqword(0x28u);
}
