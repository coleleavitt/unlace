__int64 __fastcall DockArea::closeTree(__int64 a1, __int64 a2, double a3)
{
  int v3; // eax
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10[5]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *(_DWORD *)(a2 + 40);
  v10[1] = __readfsqword(0x28u);
  if ( v3 == 2 )
  {
    QT::QMetaObject::cast(
      (QT::QMetaObject *)&off_898320,
      *(const QT::QObject **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 16LL));
    if ( a2 && dword_8D1D38 != 2 )
    {
      v5 = (_QWORD *)sub_4CE6E0(a2);
      if ( v5 )
        sub_4C97F0(v5, (__int64 *)a2, a3);
    }
    QT::QWidget::close((QT::QWidget *)a2);
    return 0;
  }
  if ( v3 )
    return 0;
  if ( !*(_BYTE *)(a1 + 24) )
    return 0xFFFFFFFFLL;
  if ( !(unsigned __int8)QT::QWidget::close((QT::QWidget *)a2) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return 0xFFFFFFFFLL;
  }
  *(_BYTE *)(a1 + 24) = 1;
  v10[0] = a2;
  sub_4C7E80((__int64 *)(a1 + 32), v10, v6, v7, v8, v9);
  return (unsigned int)*(unsigned __int8 *)(a1 + 24) - 1;
}
