unsigned __int64 __fastcall sub_2060A0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  int v5; // eax
  QT::QCoreApplication *v6; // rbp

  if ( *((_BYTE *)a1 + 968) )
  {
    if ( !a1[53] )
      goto LABEL_13;
    v5 = *((_DWORD *)a1 + 104);
    switch ( v5 )
    {
      case 2:
        v6 = (QT::QCoreApplication *)a1[112];
        break;
      case 3:
        v6 = (QT::QCoreApplication *)a1[113];
        break;
      case 1:
        v6 = (QT::QCoreApplication *)a1[111];
        break;
      default:
        goto LABEL_9;
    }
    if ( v6 )
    {
      sub_178A40((__int64)v6);
      (*(void (__fastcall **)(QT::QCoreApplication *))(*(_QWORD *)v6 + 360LL))(v6);
      sub_176E70(v6);
    }
  }
LABEL_9:
  a2 = 0;
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 984LL))(a1, 0);
  if ( a1[53] )
    return sub_204FC0(a1, (__int64)(a1 + 48));
LABEL_13:
  sub_1E69C0(a5, (__int64)a1, a2, a3, a4);
  return sub_206150(a1, a2);
}
