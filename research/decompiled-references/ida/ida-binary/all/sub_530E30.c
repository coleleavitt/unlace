__int64 __fastcall sub_530E30(__int64 a1, __int64 a2)
{
  int v2; // eax
  QT::QAction *v3; // r13
  unsigned int v4; // ebp
  bool v5; // r12

  v2 = sub_479040((__int64)(QT::QCoreApplication::self + 2), a1, a2);
  v3 = *(QT::QAction **)(a1 + 192);
  *(_DWORD *)(a1 + 120) = v2;
  v4 = v2;
  v5 = v2 <= 3;
  if ( v2 <= 3 != (unsigned __int8)QT::QAction::isEnabled(v3) )
    QT::QAction::setEnabled(v3, v5);
  *(_DWORD *)(a1 + 116) |= 1u;
  return v4;
}
