void __fastcall sub_4CB2D0(QT::QWidget *a1, QT::QWidget *a2, unsigned int a3, double a4)
{
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9

  if ( a2
    && (!*((_DWORD *)a2 + 10) || (*(int (__fastcall **)(QT::QWidget *))(*(_QWORD *)a2 + 464LL))(a2) > 0)
    && dword_8D1D38 != 2 )
  {
    v7 = sub_4CE6E0(a2);
    if ( v7 )
      sub_4CA250(v7, a2, a3, v6, v8, v9, a4);
    else
      sub_4CAC80(a1, (__int64)a2, 4, a4);
  }
}
