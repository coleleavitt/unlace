__int64 __fastcall sub_154D3C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // [rsp+8h] [rbp-20h] BYREF
  __m128 v7; // [rsp+10h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a1 + 96);
  v6 = a1;
  v7 = _mm_loadh_ps((const double *)&v6);
  return sub_183F1A0(v4, a3, sub_154D320, &v7);
}
