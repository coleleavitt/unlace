__int64 __fastcall sub_4C5D70(__int64 a1, __int64 a2, double a3, double a4)
{
  __int64 result; // rax
  QT::QEventPoint *v6; // rdi
  double v7; // xmm0_8
  double v8; // xmm1_8
  int v9; // ebp
  int v10; // eax
  int v11; // ebp
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // rbp

  result = *(_QWORD *)(a1 + 40);
  if ( result )
  {
    result = *(_QWORD *)(result + 32);
    if ( (*(_BYTE *)(result + 13) & 8) == 0 && (*(_BYTE *)(a2 + 68) & 1) != 0 )
    {
      v6 = *(QT::QEventPoint **)(a2 + 48);
      QT::QEventPoint::position(v6);
      v7 = a3 + COERCE_DOUBLE(*(_QWORD *)&a3 & 0x8000000000000000LL | 0x3FE0000000000000LL);
      v8 = a4 + COERCE_DOUBLE(*(_QWORD *)&a4 & 0x8000000000000000LL | 0x3FE0000000000000LL);
      v9 = *(_DWORD *)(a1 + 60) - (int)v7;
      if ( v9 < 0 )
        v9 = (int)v7 - *(_DWORD *)(a1 + 60);
      v10 = (int)v8 - *(_DWORD *)(a1 + 64);
      if ( *(_DWORD *)(a1 + 64) - (int)v8 >= 0 )
        v10 = *(_DWORD *)(a1 + 64) - (int)v8;
      v11 = v10 + v9;
      result = QT::QApplication::startDragDistance(v6);
      if ( (int)result <= v11 )
      {
        QT::QBasicTimer::stop((QT::QBasicTimer *)(a1 + 48));
        QT::QBasicTimer::stop((QT::QBasicTimer *)(a1 + 52));
        v12 = *(_QWORD *)(a1 + 40);
        *(_QWORD *)(a1 + 40) = 0;
        v13 = **(_QWORD **)(v12 + 40);
        v14 = QT::QMetaObject::cast(
                (QT::QMetaObject *)&off_898320,
                *(const QT::QObject **)(*(_QWORD *)(v12 + 8) + 16LL));
        if ( !v14 )
          v14 = v12;
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13 + 464LL))(v13) == 1 )
          v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 456LL))(v13, 0);
        return sub_4D2BD0(v13, v14, *(unsigned int *)(a1 + 60));
      }
    }
  }
  return result;
}
