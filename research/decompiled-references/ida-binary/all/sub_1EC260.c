__int64 __fastcall sub_1EC260(_QWORD *a1, QT::QAbstractSlider *a2)
{
  __int64 v2; // rax
  float v3; // xmm1_4
  __int64 v4; // rax
  float v5; // xmm0_4
  float v6; // xmm0_4
  unsigned __int64 v7; // rsi
  __int64 v8; // rsi
  unsigned int v9; // edx
  __int64 v11; // rdx

  v2 = a1[90] - a1[89];
  if ( v2 < 0 )
    v3 = (float)(v2 & 1 | (unsigned int)((unsigned __int64)v2 >> 1))
       + (float)(v2 & 1 | (unsigned int)((unsigned __int64)v2 >> 1));
  else
    v3 = (float)(int)v2;
  v4 = a1[88];
  if ( v4 < 0 )
  {
    v11 = a1[88] & 1LL | (a1[88] >> 1);
    v5 = (float)(int)v11 + (float)(int)v11;
  }
  else
  {
    v5 = (float)(int)v4;
  }
  v6 = (float)(int)QT::QAbstractSlider::sliderPosition(a2) * (float)(v3 / v5);
  if ( v6 >= 9.223372e18 )
    v7 = (unsigned int)(int)(float)(v6 - 9.223372e18) ^ 0x8000000000000000LL;
  else
    v7 = (unsigned int)(int)v6;
  v8 = a1[89] + v7;
  v9 = 0;
  if ( a1[90] == v8 )
    v9 = 0x7FFFFFFF;
  return sub_1EBC80((__int64)a1, v8, v9);
}
