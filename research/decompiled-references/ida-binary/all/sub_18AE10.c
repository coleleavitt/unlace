signed __int64 __fastcall sub_18AE10(__int64 a1, double a2, __m128 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rsi
  signed __int64 result; // rax
  __int64 v8; // rdx

  v3 = *(_QWORD *)(a1 + 96);
  if ( v3 )
  {
    if ( *(_DWORD *)(v3 + 124) != 3 )
    {
      *(_BYTE *)(*(_QWORD *)(a1 + 64) + 2LL) = 1;
      if ( (*(_BYTE *)(a1 + 56) & 8) != 0 )
        QT::QWidget::setEnabled(*(QT::QWidget **)(a1 + 200), 1);
    }
  }
  QT::QWidget::setFocus(*(_QWORD *)(a1 + 128), 7);
  sub_18A9E0(a1, **(unsigned __int8 **)(a1 + 64), *(unsigned __int8 *)(*(_QWORD *)(a1 + 64) + 1LL), v4, v5, a2, a3);
  v6 = *(_QWORD *)(a1 + 72);
  result = *(_QWORD *)(a1 + 80);
  v8 = v6 + 8 * result;
  if ( v6 == v8 )
  {
LABEL_9:
    *(_QWORD *)(a1 + 104) = -1;
  }
  else
  {
    result = *(_QWORD *)(a1 + 72);
    while ( *(_QWORD *)(a1 + 96) != *(_QWORD *)result )
    {
      result += 8LL;
      if ( v8 == result )
        goto LABEL_9;
    }
    result -= v6;
    *(_QWORD *)(a1 + 104) = result >> 3;
    if ( result != -8 )
      return sub_186C80(a1, result >> 3);
  }
  return result;
}
