__int64 __fastcall sub_1EC350(_QWORD *a1, _DWORD *a2, QT::QAbstractSlider *a3)
{
  int v4; // r12d
  int v5; // r14d
  int v6; // eax
  __int64 v7; // rax
  float v8; // xmm1_4
  __int64 v9; // rax
  float v10; // xmm0_4
  float v11; // xmm0_4
  unsigned __int64 v12; // rax
  unsigned __int64 v14; // rdx
  _DWORD *v15; // rbp
  _DWORD *v16; // rbp

  v4 = QT::QAbstractSlider::sliderPosition(a3);
  v5 = QT::QAbstractSlider::minimum(a3);
  v6 = QT::QAbstractSlider::maximum(a3);
  if ( v4 != v5 )
  {
    if ( v4 == v6 )
    {
LABEL_12:
      v15 = (_DWORD *)sub_1EBC80((__int64)a1, 0, 0);
      (*(void (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v15 + 24LL))(v15, a1[116]);
      v15[2] = 0x7FFFFFFF;
      *a2 = 2;
      return (__int64)v15;
    }
    v7 = a1[90] - a1[89];
    if ( v7 < 0 )
    {
      v14 = v7 & 1 | ((unsigned __int64)v7 >> 1);
      v9 = a1[88];
      v8 = (float)(int)v14 + (float)(int)v14;
      if ( v9 >= 0 )
        goto LABEL_5;
    }
    else
    {
      v8 = (float)(int)v7;
      v9 = a1[88];
      if ( v9 >= 0 )
      {
LABEL_5:
        v10 = (float)(int)v9;
        goto LABEL_6;
      }
    }
    v10 = (float)(v9 & 1 | (unsigned int)((unsigned __int64)v9 >> 1))
        + (float)(v9 & 1 | (unsigned int)((unsigned __int64)v9 >> 1));
LABEL_6:
    v11 = (float)(int)QT::QAbstractSlider::sliderPosition(a3) * (float)(v8 / v10);
    if ( v11 >= 9.223372e18 )
      v12 = (unsigned int)(int)(float)(v11 - 9.223372e18) ^ 0x8000000000000000LL;
    else
      v12 = (unsigned int)(int)v11;
    if ( a1[90] != a1[89] + v12 )
      return (*(__int64 (__fastcall **)(_QWORD *, QT::QAbstractSlider *))(*a1 + 616LL))(a1, a3);
    goto LABEL_12;
  }
  v16 = (_DWORD *)sub_1EBC80((__int64)a1, 0, 0);
  (*(void (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v16 + 24LL))(v16, a1[115]);
  v16[2] = 0;
  *a2 = 1;
  return (__int64)v16;
}
