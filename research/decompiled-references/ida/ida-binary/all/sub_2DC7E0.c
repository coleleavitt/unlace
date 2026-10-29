_DWORD *__fastcall sub_2DC7E0(
        QT::QAbstractItemView *this,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  _DWORD *result; // rax
  signed int v11; // r12d
  __int64 v12; // rdx
  double v13; // xmm4_8
  double v14; // xmm5_8
  _DWORD *v15; // rcx

  sub_521FC0();
  sub_534680(&qword_8CCEC0, &unk_862260, 3, 0);
  result = (_DWORD *)sub_539A10(a2, &qword_8CCEC0);
  v11 = *((_DWORD *)this + 553);
  if ( v11 >= 0 )
  {
    v12 = QT::QAbstractItemView::model(this);
    result = *(_DWORD **)(v12 + 96);
    v15 = &result[*(_QWORD *)(v12 + 104)];
    if ( result != v15 )
    {
      while ( (~*result & 0x50000) != 0 )
      {
        if ( v15 == ++result )
          return result;
      }
      return (_DWORD *)sub_19B180(a2, v11, a3, a4, a5, a6, v13, v14, a9, a10);
    }
  }
  return result;
}
