__int64 __fastcall sub_27D740(__int64 a1, QT::QAbstractSlider *a2)
{
  int v4; // r12d
  int v5; // eax
  float v6; // xmm0_4
  int v7; // r10d
  unsigned __int64 v8; // rax
  __int64 v9; // r9
  __int64 *v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rcx
  unsigned int v14; // edx

  if ( !(unsigned __int8)sub_331080(a1) )
    return sub_1EC260((_QWORD *)a1, a2);
  v4 = QT::QAbstractSlider::sliderPosition(a2);
  v5 = QT::QAbstractSlider::maximum(a2);
  v6 = (float)v4 * *(float *)(a1 + 1024);
  v7 = v5;
  v8 = v6 >= 9.223372e18 ? (unsigned int)(int)(float)(v6 - 9.223372e18) ^ 0x8000000000000000LL : (unsigned int)(int)v6;
  v9 = *(_QWORD *)(a1 + 1008);
  if ( !v9 )
    return sub_1EC260((_QWORD *)a1, a2);
  v10 = *(__int64 **)(a1 + 1000);
  v11 = 0;
  while ( 1 )
  {
    v12 = v10[1];
    v13 = *v10;
    if ( v12 - *v10 >= v8 )
      break;
    ++v11;
    v10 += 2;
    v8 = v13 + v8 - v12;
    if ( v11 == v9 )
      return sub_1EC260((_QWORD *)a1, a2);
  }
  v14 = 0x7FFFFFFF;
  if ( v4 != v7 )
  {
    v12 = v13 + v8;
    v14 = 0;
  }
  return sub_1EBC80(a1, v12, v14);
}
