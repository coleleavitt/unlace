unsigned __int64 __fastcall sub_27D5C0(_QWORD *a1, __int64 a2, QT::QAbstractSlider *a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // r8
  __int64 *v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 *v9; // r8
  unsigned __int64 v10; // rcx
  __int64 v11; // rsi
  unsigned __int64 result; // rax
  float v13; // xmm0_4
  float v14; // xmm1_4
  int v15; // edx

  if ( !(unsigned __int8)sub_331080(a1) )
    return sub_1EC520(a1, a2);
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 128LL))(a2);
  v5 = a1[126];
  if ( v5 )
  {
    v6 = (__int64 *)a1[125];
    v7 = 0;
    v8 = 0;
    v9 = &v6[2 * v5];
    do
    {
      v10 = v6[1];
      v11 = *v6;
      if ( !v8 && v10 >= v4 )
        v8 = v4 + v7 - v11;
      v6 += 2;
      v7 = v7 + v10 - v11;
    }
    while ( v6 != v9 );
    result = QT::QAbstractSlider::maximum(a3);
    if ( (_DWORD)result && v7 )
    {
      if ( v8 < 0 )
      {
        v13 = (float)(v8 & 1 | (unsigned int)((unsigned __int64)v8 >> 1))
            + (float)(v8 & 1 | (unsigned int)((unsigned __int64)v8 >> 1));
        if ( v7 >= 0 )
          goto LABEL_12;
      }
      else
      {
        v13 = (float)(int)v8;
        if ( v7 >= 0 )
        {
LABEL_12:
          v14 = (float)(int)v7;
LABEL_13:
          v15 = (int)(float)((float)(v13 / v14) * (float)(int)result);
          if ( v15 < 0 )
            v15 = 0;
          if ( v15 <= (int)result )
            return (unsigned int)v15;
          return result;
        }
      }
      v14 = (float)(v7 & 1 | (unsigned int)((unsigned __int64)v7 >> 1))
          + (float)(v7 & 1 | (unsigned int)((unsigned __int64)v7 >> 1));
      goto LABEL_13;
    }
  }
  else
  {
    result = QT::QAbstractSlider::maximum(a3);
  }
  if ( (result & 0x80000000) == 0LL )
    return 0;
  return result;
}
