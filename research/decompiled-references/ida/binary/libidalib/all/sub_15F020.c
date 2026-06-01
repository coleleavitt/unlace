__int64 __fastcall sub_15F020(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  float v4; // xmm0_4
  float v5; // xmm0_4
  unsigned __int64 v6; // rsi
  __int64 v7; // rsi
  unsigned int v8; // edx

  v2 = *(_QWORD *)(a1 + 744);
  v3 = *(_QWORD *)(a1 + 752) - v2;
  if ( v3 < 0 )
    v4 = (float)(v3 & 1 | (unsigned int)((unsigned __int64)v3 >> 1))
       + (float)(v3 & 1 | (unsigned int)((unsigned __int64)v3 >> 1));
  else
    v4 = (float)(int)v3;
  v5 = (float)(v4 / (float)*(__int16 *)(a1 + 736)) * (float)*(int *)(a2 + 72);
  if ( v5 >= 9.223372e18 )
    v6 = (unsigned int)(int)(float)(v5 - 9.223372e18) ^ 0x8000000000000000LL;
  else
    v6 = (unsigned int)(int)v5;
  v7 = v2 + v6;
  v8 = 0;
  if ( *(_QWORD *)(a1 + 752) == v7 )
    v8 = 0x7FFFFFFF;
  return sub_15EFE0(a1, v7, v8);
}

