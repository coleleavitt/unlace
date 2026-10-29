__int64 __fastcall sub_F3FC0(__int64 a1, __int64 a2)
{
  __int64 *v4; // rdx
  int v5; // r10d
  float v6; // xmm0_4
  unsigned __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdx

  if ( !(unsigned __int8)sub_13C2E0() )
    return sub_15F020(a1, a2, v4);
  v5 = *(_DWORD *)(a2 + 72);
  v6 = (float)v5 * *(float *)(a1 + 1192);
  v7 = v6 >= 9.223372e18 ? (unsigned int)(int)(float)(v6 - 9.223372e18) ^ 0x8000000000000000LL : (unsigned int)(int)v6;
  v8 = *(_QWORD *)(a1 + 1176);
  if ( !v8 )
    return sub_15F020(a1, a2, v4);
  v4 = *(__int64 **)(a1 + 1168);
  v9 = 0;
  while ( 1 )
  {
    v10 = v4[1];
    v11 = *v4;
    if ( v10 - *v4 >= v7 )
      break;
    ++v9;
    v4 += 2;
    v7 = v11 + v7 - v10;
    if ( v9 == v8 )
      return sub_15F020(a1, a2, v4);
  }
  v12 = 0x7FFFFFFF;
  if ( v5 != *(_DWORD *)(a2 + 100) )
  {
    v10 = v11 + v7;
    v12 = 0;
  }
  return sub_15EFE0(a1, v10, v12);
}

