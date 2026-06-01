__int64 __fastcall sub_499A40(QT::QAbstractItemView *this, int a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rsi
  __int64 v7; // rax
  _DWORD v8[4]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v9; // [rsp+10h] [rbp-48h]
  _QWORD v10[7]; // [rsp+20h] [rbp-38h] BYREF

  v10[3] = __readfsqword(0x28u);
  if ( a2 < 0 )
  {
    v3 = QT::QAbstractItemView::selectionModel(this);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 120LL))(v3);
  }
  else if ( a2 <= (int)sub_4A0D70(*((_QWORD *)this + 5)) )
  {
    v4 = (_QWORD *)QT::QAbstractItemView::model(this);
    v5 = (unsigned int)a2;
    v6 = v4;
    v7 = *v4;
    v10[0] = -1;
    v10[1] = 0;
    v10[2] = 0;
    (*(void (__fastcall **)(_DWORD *, _QWORD *, __int64, _QWORD, _QWORD *))(v7 + 96))(v8, v6, v5, 0, v10);
    if ( (v8[1] | v8[0]) >= 0 )
    {
      if ( v9 )
        QT::QAbstractItemView::setCurrentIndex(this, v8);
    }
  }
  return 1;
}
