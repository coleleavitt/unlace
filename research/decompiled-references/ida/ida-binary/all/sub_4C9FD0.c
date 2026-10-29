QT::QStackedWidget **__fastcall sub_4C9FD0(_QWORD *a1, __int64 a2, __int64 a3, char a4, int a5, double a6)
{
  __int64 v9; // rax
  QT::QWidget *v10; // rbx
  QT::QWidget *v11; // r12
  QT::QStackedWidget **v12; // rbx
  int v13; // edx
  __int64 v15; // rax
  __int64 v16; // rax
  void (__fastcall *v17)(QT::QWidget *, _QWORD, __int64); // r15
  unsigned int v18; // eax
  unsigned int v19; // [rsp+Ch] [rbp-4Ch]
  char v20; // [rsp+17h] [rbp-41h] BYREF
  unsigned __int64 v21; // [rsp+18h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  if ( !a3 )
    return nullptr;
  v9 = sub_4CE740(a3);
  v10 = (QT::QWidget *)v9;
  if ( !v9 )
    return nullptr;
  ++dword_8D1D3C;
  if ( *(_DWORD *)(v9 + 40) == 1 || (v11 = (QT::QWidget *)v9, a4) )
  {
    v11 = (QT::QWidget *)operator new(0x60u);
    sub_4CE960(v11);
    QT::QWidget::setBaseSize(
      v11,
      *(_DWORD *)(*((_QWORD *)v10 + 4) + 28LL) + 1 - *(_DWORD *)(*((_QWORD *)v10 + 4) + 20LL),
      *(_DWORD *)(*((_QWORD *)v10 + 4) + 32LL) + 1 - *(_DWORD *)(*((_QWORD *)v10 + 4) + 24LL));
    v19 = (*(__int64 (__fastcall **)(QT::QWidget *, __int64))(*(_QWORD *)v10 + 448LL))(v10, a3);
    if ( v19 == -1 )
    {
      v12 = nullptr;
      goto LABEL_6;
    }
    (*(void (__fastcall **)(QT::QWidget *))(*(_QWORD *)v10 + 488LL))(v10);
    QT::QWidget::setUpdatesEnabled(v10, 0);
    v16 = *(_QWORD *)v10;
    ++dword_8D1DC0;
    (*(void (__fastcall **)(QT::QWidget *, _QWORD, QT::QWidget *))(v16 + 472))(v10, v19, v11);
    (*(void (__fastcall **)(QT::QWidget *, _QWORD))(*(_QWORD *)v10 + 480LL))(v10, v19);
    v17 = *(void (__fastcall **)(QT::QWidget *, _QWORD, __int64))(*(_QWORD *)v11 + 472LL);
    v18 = (*(__int64 (__fastcall **)(QT::QWidget *))(*(_QWORD *)v11 + 512LL))(v11);
    v17(v11, v18, a3);
    sub_4D2110(&v20);
    (*(void (__fastcall **)(QT::QWidget *))(*(_QWORD *)v10 + 496LL))(v10);
    QT::QWidget::setUpdatesEnabled(v10, 1);
    sub_4C5F10(a1);
  }
  v12 = sub_4C9670(a6, (__int64)a1, a2, (QT::QStackedWidget **)v11, a5);
LABEL_6:
  v13 = dword_8D1D3C;
  if ( dword_8D1D3C <= 0 || (--dword_8D1D3C, v13 == 1) )
  {
    v15 = sub_47A690((__int64)QT::QCoreApplication::self);
    if ( v15 )
      sub_4C9440(v15, a6);
  }
  return v12;
}
