unsigned __int64 __fastcall sub_4CA250(
        __int64 a1,
        QT::QWidget *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7)
{
  QT::QObject *v8; // rax
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // rax
  _QWORD *v12; // r14
  char v13; // dl
  int v14; // eax
  __int64 v16; // rax
  QT::QWidget *v17; // rax
  QT::QStackedWidget **v18; // rax
  int v19; // eax
  __int64 v20; // rdi
  unsigned __int64 v21; // [rsp+8h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  if ( !a2 || !**(_QWORD **)(a1 + 40) )
    return v21 - __readfsqword(0x28u);
  if ( dword_8D1D38 == 2 )
  {
    if ( a3 )
      return v21 - __readfsqword(0x28u);
    ++dword_8D1D3C;
    goto LABEL_22;
  }
  ++dword_8D1D3C;
  if ( !a3 )
  {
LABEL_22:
    v13 = 0;
    goto LABEL_10;
  }
  v8 = (QT::QObject *)QT::QApplication::focusWidget((QT::QApplication *)a1);
  v9 = sub_4CF3F0(v8);
  v10 = v9;
  if ( v9 )
  {
    v11 = sub_4CE6E0(v9);
    v12 = (_QWORD *)v11;
    if ( !*((_DWORD *)a2 + 10)
      && v11
      && a2 != (QT::QWidget *)v10
      && v11 != sub_4CE6E0(a2)
      && (*(_BYTE *)(v12[4] + 13LL) & 8) != 0 )
    {
      v18 = sub_4C9FD0(v12, (__int64)a2, v10, 0, -1, a7);
      sub_4CA250(a1, v18, a3);
      v19 = dword_8D1D3C;
      if ( dword_8D1D3C <= 0 || (--dword_8D1D3C, v19 == 1) )
      {
        v20 = sub_47A690((__int64)QT::QCoreApplication::self);
        if ( v20 )
          sub_4C9440(v20, a7);
      }
      return v21 - __readfsqword(0x28u);
    }
  }
  v13 = 1;
LABEL_10:
  sub_4C8FD0(a1, (__int64)a2, v13, a4, a5, a6);
  if ( *(char *)(*(_QWORD *)(a1 + 32) + 9LL) >= 0 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 104LL))(a1, 1);
  if ( !*((_DWORD *)a2 + 10) && a3 )
  {
    if ( a3 == 1 )
    {
      v17 = (QT::QWidget *)QT::QWidget::window(a2);
      QT::QWidget::activateWindow(v17);
    }
    sub_4CD700(a2, 7);
  }
  v14 = dword_8D1D3C;
  if ( dword_8D1D3C <= 0 || (--dword_8D1D3C, v14 == 1) )
  {
    v16 = sub_47A690((__int64)QT::QCoreApplication::self);
    if ( v16 )
      sub_4C9440(v16, a7);
  }
  return v21 - __readfsqword(0x28u);
}
