void __fastcall sub_4D2E80(__int64 a1, __int64 a2, double a3, double a4)
{
  QT::QWidget *v5; // rax
  QT::QEventPoint *v6; // rdi
  double v7; // xmm0_8
  double v8; // xmm1_8
  int v9; // ebx
  int v10; // eax
  const QT::QObject *v11; // rbx
  QT::QApplication *v12; // rax

  if ( (*(_BYTE *)(a2 + 68) & 1) != 0 )
  {
    v5 = (QT::QWidget *)QT::QWidget::window(*(QT::QWidget **)(a1 + 40));
    if ( !(unsigned __int8)QT::QWidget::isFullScreen(v5) )
    {
      v6 = *(QT::QEventPoint **)(a2 + 48);
      QT::QEventPoint::position(v6);
      v7 = a3 + COERCE_DOUBLE(*(_QWORD *)&a3 & 0x8000000000000000LL | 0x3FE0000000000000LL);
      v8 = a4 + COERCE_DOUBLE(*(_QWORD *)&a4 & 0x8000000000000000LL | 0x3FE0000000000000LL);
      v9 = *(_DWORD *)(a1 + 64) - (int)v7;
      if ( v9 < 0 )
        v9 = (int)v7 - *(_DWORD *)(a1 + 64);
      v10 = (int)v8 - *(_DWORD *)(a1 + 68);
      if ( *(_DWORD *)(a1 + 68) - (int)v8 >= 0 )
        v10 = *(_DWORD *)(a1 + 68) - (int)v8;
      if ( (int)QT::QApplication::startDragDistance(v6) <= v10 + v9 )
      {
        v11 = *(const QT::QObject **)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 16LL);
        if ( v11 )
        {
          while ( 1 )
          {
            v12 = (QT::QApplication *)QT::QMetaObject::cast((QT::QMetaObject *)&off_898320, v11);
            if ( v12 )
              break;
            v11 = *(const QT::QObject **)(*((_QWORD *)v11 + 1) + 16LL);
            if ( !v11 )
              return;
          }
          sub_4D2BD0(*(QT::QWidget **)(a1 + 40), v12, *(_DWORD *)(a1 + 64), v7);
        }
      }
    }
  }
}
