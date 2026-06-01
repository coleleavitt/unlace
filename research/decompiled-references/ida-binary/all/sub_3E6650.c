unsigned __int64 __fastcall sub_3E6650(
        QT::QAbstractItemView *this,
        unsigned int *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  __int64 v18; // rsi

  result = QT::QAbstractItemView::model(this);
  v18 = *((_QWORD *)a2 + 1);
  if ( !v18 )
  {
    v13 = *a2;
    if ( (int)v13 < 0 || (v12 = a2[1], (int)v12 < 0) || !*((_QWORD *)a2 + 2) )
    {
      v18 = *(_QWORD *)(result + 32);
      if ( *(_DWORD *)(v18 + 56) != 4 )
        return result;
      goto LABEL_9;
    }
    v18 = 0;
  }
  if ( *(_DWORD *)(v18 + 56) != 4 )
    return result;
LABEL_9:
  result = (unsigned int)(*(_DWORD *)(v18 + 372) - 2);
  if ( (unsigned int)result <= 1 )
    return sub_3E64B0(this, v18, a3, a4, a5, a6, v16, v17, a9, a10, v12, v13, v14, v15);
  return result;
}
