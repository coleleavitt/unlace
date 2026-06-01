__int64 __fastcall sub_346190(QT::QWidget *this, int a2)
{
  QT::QWidget *v3; // rdi
  bool v4; // bp
  char v5; // al
  char v6; // si
  __int64 v7; // r12
  _BOOL8 v8; // rsi
  void (__fastcall *v9)(__int64, _BOOL8); // r13
  __int64 v10; // rax
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  char v14; // r12
  char v15; // bp
  char v17; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v18; // [rsp+8h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v3 = *((QT::QWidget **)this + 87);
  v4 = a2 == 5;
  v5 = *((_BYTE *)v3 + 345);
  if ( a2 == 5 )
  {
    if ( v5 )
      sub_341750(v3, 0);
  }
  else
  {
    v6 = (unsigned int)(a2 - 1) <= 1;
    if ( v6 != v5 )
      sub_341750(v3, v6);
  }
  (*(void (__fastcall **)(_QWORD, bool))(**((_QWORD **)this + 86) + 104LL))(*((_QWORD *)this + 86), v4);
  v7 = *((_QWORD *)this + 6);
  v8 = 0;
  v9 = *(void (__fastcall **)(__int64, _BOOL8))(*(_QWORD *)v7 + 104LL);
  if ( !*(_BYTE *)(*((_QWORD *)this + 87) + 345LL) )
    v8 = (unsigned int)reg_int_op("BandLegend", 0, 1, 0) != 0;
  v9(v7, v8);
  v17 = 0;
  v10 = sub_534430("navigator:ToggleDisplay");
  if ( v10 )
    sub_533460(v10, 7, (unsigned int)&v17, v11, v12, v13);
  v14 = v17;
  v15 = v17 & v4;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 10) + 104LL))(
    *((_QWORD *)this + 10),
    v15 & (*(_BYTE *)(*((_QWORD *)this + 87) + 345LL) ^ 1u));
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 88) + 104LL))(
    *((_QWORD *)this + 88),
    v14 & (*(_BYTE *)(*((_QWORD *)this + 87) + 345LL) ^ 1u));
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 11) + 104LL))(
    *((_QWORD *)this + 11),
    v15 & (*(_BYTE *)(*((_QWORD *)this + 87) + 345LL) ^ 1u));
  if ( *(_BYTE *)(*((_QWORD *)this + 87) + 345LL) )
  {
    QT::QWidget::setMaximumHeight(this, 0xFFFFFF);
    QT::QWidget::setMaximumWidth(this, 100);
    QT::QWidget::setSizePolicy(this, &unk_750000);
  }
  else
  {
    QT::QWidget::setMaximumWidth(this, 0xFFFFFF);
    QT::QWidget::setMaximumHeight(this, 300);
    QT::QWidget::setSizePolicy(this, 5701632);
  }
  return sub_345BD0(this);
}
