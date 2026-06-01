unsigned __int64 __fastcall sub_341D50(QT::QWidget *this, double a2, __m128 a3)
{
  __int64 v4; // [rsp+8h] [rbp-20h] BYREF
  __int64 v5; // [rsp+10h] [rbp-18h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v4 = QT::QCursor::pos(this);
  v5 = QT::QWidget::mapFromGlobal(this, &v4);
  sub_341C30(this, (int *)&v5, a2, a3);
  return v6 - __readfsqword(0x28u);
}
