void __fastcall sub_5474B0(__int64 a1, int a2, int a3, __int64 a4, void **a5)
{
  __int64 v5; // rax

  if ( a2 )
  {
    if ( a2 == 5 )
    {
      v5 = *(_QWORD *)(a4 + 8);
      if ( *(__int64 (__fastcall **)(QT::QMetaObject *, __int64, __int64, __int64, void **))v5 == sub_5474A0
        && !*(_QWORD *)(v5 + 8) )
      {
        **(_DWORD **)a4 = 0;
      }
    }
  }
  else if ( a3 )
  {
    if ( a3 == 1 )
      sub_498180(a1);
  }
  else
  {
    QT::QMetaObject::activate((QT::QMetaObject *)a1, (QT::QObject *)&off_896140, nullptr, 0, a5);
  }
}
