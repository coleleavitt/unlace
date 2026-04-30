__int64 __fastcall sub_3C5C20(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(v1 + 16);
  if ( v2 && QT::QMetaObject::cast((QT::QMetaObject *)&off_890D60, *(const QT::QObject **)(v1 + 16)) )
    return v2;
  else
    return 0;
}
