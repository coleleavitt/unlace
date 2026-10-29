unsigned __int64 __fastcall sub_1705DC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  double v12[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
    v6 = sub_B8C3D0(a1, a2, a3, a4, a5, a6);
    v10 = *((unsigned int *)v6 + 2);
    *(_QWORD *)&v12[0] = *v6 + 8 * v10;
    if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
      _mm_loadl_epi64((const __m128i *)sub_B8C3D0(a1, a2, v10, v7, v8, v9));
  }
  else
  {
    v12[0] = 0.0;
  }
  return _mm_loadh_ps(v12).m128_u64[0];
}
