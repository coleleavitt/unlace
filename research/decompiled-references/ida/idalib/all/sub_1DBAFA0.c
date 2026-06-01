void __fastcall sub_1DBAFA0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  double v4[3]; // [rsp+0h] [rbp-18h] BYREF

  *(_QWORD *)&v4[0] = a3;
  *(_QWORD *)&v4[1] = a2;
  *(_DWORD *)(a1 + 136) = a4;
  *(__m128 *)(a1 + 120) = _mm_loadh_ps(v4);
}
