__int64 __fastcall sub_37A4E0(__int64 a1, __int64 a2, int a3, __int64 a4, QT::QCoreApplication **a5, int *a6)
{
  QT::QCoreApplication *v7; // rcx
  QT::QCoreApplication *v9; // rax

  switch ( (_DWORD)a4 )
  {
    case 0xFFFFFFFF:
      if ( a5 )
      {
        v7 = a5[41];
        if ( !v7 )
        {
          v7 = a5[29];
          if ( !v7 )
            v7 = *a5;
        }
        return sub_37A270(a1, a2, a3, v7, a6);
      }
      return 0;
    case 3:
      v9 = (QT::QCoreApplication *)sub_28BE30(a1, a2, a5, a4, a6);
      return sub_37A270(a1, a2, a3, v9, a6);
    case 0x1B:
      return sub_37A270(a1, a2, a3, (QT::QCoreApplication *)qword_8CD7E8, a6);
    default:
      v7 = nullptr;
      return sub_37A270(a1, a2, a3, v7, a6);
  }
}
