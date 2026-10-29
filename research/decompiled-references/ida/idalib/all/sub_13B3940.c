__int64 __fastcall sub_13B3940(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __m128 v5; // xmm0
  double v6[4]; // [rsp+8h] [rbp-20h] BYREF

  v3 = *(_DWORD *)(a1 + 88) + 1;
  *(_DWORD *)(a1 + 88) = v3;
  if ( a3 && v3 == 1 )
  {
    *(_QWORD *)&v6[0] = a2;
    v5 = _mm_loadh_ps(v6);
    *(_QWORD *)&v6[0] = a3;
    *(__m128 *)(a1 + 64) = v5;
    *(_QWORD *)(a1 + 80) = *(_QWORD *)(a3 + 88);
    sub_145EC20(a3, a1 + 16);
  }
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 32) + 24LL))(*(_QWORD *)(a1 + 32), a2);
}
