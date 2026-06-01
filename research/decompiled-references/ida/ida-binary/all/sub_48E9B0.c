unsigned __int64 __fastcall sub_48E9B0(QT::QAbstractItemView *this, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  const char **v11; // rsi
  _QWORD v13[5]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v7 = *(_QWORD *)this;
  v14 = __readfsqword(0x28u);
  v9 = (*(__int64 (__fastcall **)(QT::QAbstractItemView *))(v7 + 800))(this);
  v13[1] = a2;
  v13[0] = v9;
  v13[3] = a4;
  v13[2] = a5;
  v10 = QT::QAbstractItemView::model(this);
  v11 = *(const char ***)(v10 + 216);
  if ( !v11 )
    v11 = *(const char ***)(v10 + 208);
  sub_489640(v13, v11, a3);
  return v14 - __readfsqword(0x28u);
}
