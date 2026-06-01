__int64 __fastcall sub_4FA760(__int64 a1, QT::QHBoxLayout **a2, __int64 a3, int *a4, _DWORD *a5, __int64 a6)
{
  int v10; // ecx
  int v11; // eax
  QT::QHBoxLayout *v13; // r15

  if ( *a2 )
  {
    v10 = *a4;
  }
  else
  {
    v13 = (QT::QHBoxLayout *)operator new(0x20u);
    QT::QHBoxLayout::QHBoxLayout(v13);
    *a2 = v13;
    v10 = *(_DWORD *)(a3 + 24);
    *a4 = v10;
  }
  v11 = *(_DWORD *)(a3 + 24) - *a5 - v10;
  if ( v11 < 0 )
    v11 = 0;
  *a5 += *(_DWORD *)(a3 + 28) + v11;
  return QT::QBoxLayout::addWidget(*a2, a6, 0, 0);
}
