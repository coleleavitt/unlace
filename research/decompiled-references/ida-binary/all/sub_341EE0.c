void __fastcall sub_341EE0(QT::QWidget *this, __int64 a2, double a3)
{
  int v3; // r12d
  int v4; // edx
  unsigned int v5; // ebx
  unsigned __int64 v6; // rax

  if ( *(_DWORD *)(a2 + 64) == 1 && *((_QWORD *)this + 21) )
  {
    QT::QEventPoint::position(*(QT::QEventPoint **)(a2 + 48));
    v3 = (int)(a3 + COERCE_DOUBLE(*(_QWORD *)&a3 & 0x8000000000000000LL | 0x3FE0000000000000LL));
    QT::QEventPoint::position(*(QT::QEventPoint **)(a2 + 48));
    v4 = (int)(COERCE_DOUBLE(*(_QWORD *)&a3 & 0x8000000000000000LL | 0x3FE0000000000000LL)
             + COERCE_DOUBLE(*(_QWORD *)&a3 & 0x8000000000000000LL | 0x3FE0000000000000LL));
    if ( *((_BYTE *)this + 345) )
    {
      v3 = (int)(COERCE_DOUBLE(*(_QWORD *)&a3 & 0x8000000000000000LL | 0x3FE0000000000000LL)
               + COERCE_DOUBLE(*(_QWORD *)&a3 & 0x8000000000000000LL | 0x3FE0000000000000LL));
      v4 = (int)(a3 + COERCE_DOUBLE(*(_QWORD *)&a3 & 0x8000000000000000LL | 0x3FE0000000000000LL));
    }
    v5 = (*(_DWORD *)(a2 + 32) >> 26) & 1 | 2;
    if ( (*(_DWORD *)(a2 + 32) & 0x2000000) == 0 )
      v5 = (*(_DWORD *)(a2 + 32) >> 26) & 1;
    v6 = sub_3417A0((__int64)this, v3, v4, nullptr);
    if ( (unsigned __int8)sub_3412C0(this, v6, 1, v5) )
      QT::QWidget::update(this);
  }
}
