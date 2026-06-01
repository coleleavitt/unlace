__int64 __fastcall sub_147E3E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v6; // [rsp+8h] [rbp-20h] BYREF
  __m128 v7; // [rsp+10h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 96);
  v6 = a2;
  v4 = *(unsigned int *)(a2 + 88);
  v6 = a1;
  v7 = _mm_loadh_ps((const double *)&v6);
  return sub_15F0FC0(v3, v4, sub_1498E10, &v7);
}
