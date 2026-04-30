__int64 __fastcall sub_54A1B0(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax

  v1 = QT::QTabBar::currentIndex(*(QT::QTabBar **)(a1 + 64));
  result = sub_4CEAC0((QT::QStackedWidget **)a1, v1);
  *(_DWORD *)(a1 + 56) = result;
  return result;
}
