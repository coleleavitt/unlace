__int64 __fastcall types_show_quick_filter_ah_t__::vfunc_1(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rax

  v2 = *(_DWORD *)(a2 + 8);
  if ( *(_BYTE *)(a1 + 12) )
  {
    if ( v2 != 39 )
      return 6;
    v4 = QT::QMetaObject::cast((QT::QMetaObject *)&off_88EB20, *(const QT::QObject **)a2);
  }
  else
  {
    if ( v2 != 40 )
      return 6;
    v4 = QT::QMetaObject::cast((QT::QMetaObject *)&off_88EAE0, *(const QT::QObject **)a2);
  }
  if ( !v4 )
    return 6;
  return 2;
}
