void __fastcall sub_36B20(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r15
  __int64 v5; // rcx
  size_t v6; // rax
  const char *v7; // rdx
  QT::QWidget *v8; // r12
  __int64 v9; // rax
  size_t v10; // rax
  const char *v11; // [rsp+8h] [rbp-E0h]
  _BYTE v12[16]; // [rsp+10h] [rbp-D8h] BYREF
  void *v13[4]; // [rsp+20h] [rbp-C8h] BYREF
  void *ptr[4]; // [rsp+40h] [rbp-A8h] BYREF
  void *v15[4]; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v16[40]; // [rsp+80h] [rbp-68h] BYREF
  unsigned __int64 v17; // [rsp+A8h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v4 = **(_BYTE **)(a4 + 8);
      QT::QString::fromUtf8(v15, 10, "Xref Graph");
      QT::QString::fromUtf8(ptr, 8, "Hex-Rays");
      QT::QSettings::QSettings(v12, ptr, v15, 0);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      if ( v15[0] && !_InterlockedSub((volatile signed __int32 *)v15[0], 1u) )
        free(v15[0]);
      QT::QVariant::QVariant((QT::QVariant *)v16, v4);
      QT::QString::fromUtf8(ptr, 13, "%1/layout/run");
      v5 = *(_QWORD *)(a2 + 32);
      v6 = 0;
      v7 = s1;
      if ( *(_QWORD *)(v5 + 32) )
      {
        v7 = *(const char **)(v5 + 24);
        if ( v7 )
        {
          if ( *v7 )
          {
            v11 = *(const char **)(v5 + 24);
            v10 = strlen(v7 + 1);
            v7 = v11;
            v6 = v10 + 1;
          }
        }
      }
      QT::QString::fromUtf8(v13, v6, v7);
      QT::QString::arg(v15, ptr, v13, 0, 32);
      QT::QSettings::setValue(v12, v15[1], (unsigned __int64)v15[2] | 0x8000000000000000LL, v16);
      if ( v15[0] && !_InterlockedSub((volatile signed __int32 *)v15[0], 1u) )
        free(v15[0]);
      if ( v13[0] && !_InterlockedSub((volatile signed __int32 *)v13[0], 1u) )
        free(v13[0]);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      QT::QVariant::~QVariant((QT::QVariant *)v16);
      v8 = *(QT::QWidget **)(a2 + 16);
      v9 = QT::QWidget::style(v8);
      if ( v4 )
      {
        (*(void (__fastcall **)(void **, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 256LL))(v15, v9, 63, 0, 0);
        QT::QAbstractButton::setIcon(v8, (const QT::QIcon *)v15);
        QT::QIcon::~QIcon((QT::QIcon *)v15);
        QT::QTimer::start(*(QT::QTimer **)(a2 + 24), 16);
      }
      else
      {
        (*(void (__fastcall **)(void **, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 256LL))(v15, v9, 61, 0, 0);
        QT::QAbstractButton::setIcon(v8, (const QT::QIcon *)v15);
        QT::QIcon::~QIcon((QT::QIcon *)v15);
        QT::QTimer::stop(*(QT::QTimer **)(a2 + 24));
      }
      QT::QSettings::~QSettings((QT::QSettings *)v12);
    }
  }
  else if ( a2 )
  {
    operator delete((void *)a2, 0x28u);
  }
}
