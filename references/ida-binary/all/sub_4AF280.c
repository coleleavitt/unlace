__int64 __fastcall sub_4AF280(QT::QAbstractButton *this, int *a2)
{
  bool v3; // zf
  int v4; // eax
  __m128i v5[3]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v6; // [rsp+38h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  if ( (*((_BYTE *)this + 80) & 2) == 0 && !*a2 )
    return v6 - __readfsqword(0x28u);
  v5[0] = _mm_loadu_si128((const __m128i *)this + 4);
  if ( (unsigned __int8)QT::QColor::operator==(a2, v5) )
    return v6 - __readfsqword(0x28u);
  v3 = *((_DWORD *)this + 16) == 0;
  v4 = *a2;
  *((_QWORD *)this + 8) = *(_QWORD *)a2;
  *(_QWORD *)((char *)this + 70) = *(_QWORD *)((char *)a2 + 6);
  if ( !v3 != (v4 != 0) && (*((_BYTE *)this + 80) & 2) != 0 )
  {
    if ( v4 )
      QT::QAbstractButton::setText(this, (QT::QAbstractButton *)((char *)this + 40));
    else
      sub_4AF1B0(this);
  }
  QT::QWidget::update(this);
  return sub_548AA0(this, (char *)this + 64);
}
