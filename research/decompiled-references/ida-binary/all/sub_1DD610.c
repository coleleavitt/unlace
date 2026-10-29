__int64 __fastcall sub_1DD610(QT::QDockWidget **a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rbx
  _DWORD _0[22]; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars58; // [rsp+58h] [rbp+58h]

  vars58 = __readfsqword(0x28u);
  QT::QStyleOptionToolBar::QStyleOptionToolBar((QT::QStyleOptionToolBar *)_0);
  sub_1DD460((QT::QWidget *)a1, (__int64)_0);
  if ( (QT::QDockWidget::features(a1[5]) & 8) != 0 )
  {
    v1 = 0xFFFFFFFFLL;
    v2 = (unsigned int)(_0[6] + 1 - _0[4]);
  }
  else
  {
    v2 = 0xFFFFFFFFLL;
    v1 = (unsigned int)(_0[7] + 1 - _0[5]);
  }
  v3 = (v1 << 32) | v2;
  QT::QStyleOption::~QStyleOption((QT::QStyleOption *)_0);
  return v3;
}
