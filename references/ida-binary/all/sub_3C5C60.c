__int64 __fastcall sub_3C5C60(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx

  v1 = *(_QWORD *)(a1 + 328);
  if ( v1 )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 8) + 16LL) + 8LL) + 16LL);
    if ( !v2 )
      return 0;
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 232) )
      return 0;
    v2 = 0x1003E0003LL;
  }
  if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_890D60, (const QT::QObject *)v2) )
    return v2;
  return 0;
}
