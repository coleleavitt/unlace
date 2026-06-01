__int64 __fastcall sub_3FF3B0(const QT::QObject **a1)
{
  __int64 v1; // rax
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // esi

  v1 = QT::QMetaObject::cast((QT::QMetaObject *)&off_8934E0, *a1);
  v4 = 0;
  if ( v1 )
  {
    if ( *(_QWORD *)(v1 + 352) )
    {
      v5 = *(_QWORD *)(v1 + 376);
      if ( v5 )
      {
        v6 = (unsigned int)(v5 - 1);
        v7 = *(_DWORD *)(v1 + 384) - 1;
        if ( v7 < 0 )
          v7 = v6;
        *(_DWORD *)(v1 + 384) = v7;
        sub_3FF1D0(v1, v7, 0, v6, v2, v3);
        return 1;
      }
    }
  }
  return v4;
}
