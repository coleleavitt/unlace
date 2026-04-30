unsigned __int64 __fastcall sub_51F1E0(QT::QAbstractItemView *this, __int64 a2)
{
  __int64 v3; // rax
  _QWORD v4[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  if ( (*((_BYTE *)this + 1984) & 0x10) == 0 )
  {
    sub_4DECB0(v4, (__int64)this + 304, 0x800u);
    v3 = QT::QAbstractItemView::model(this);
    sub_490400(v3 + 224, a2);
    sub_4DECE0(v4);
  }
  return v5 - __readfsqword(0x28u);
}
