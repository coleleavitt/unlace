unsigned __int64 __fastcall sub_9C8850(__int64 a1)
{
  __int64 v1; // rax
  double v3[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
    v1 = sub_B8C3D0(a1);
    *(_QWORD *)&v3[0] = *(_QWORD *)v1 + 8LL * *(unsigned int *)(v1 + 8);
    if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
      _mm_loadl_epi64((const __m128i *)sub_B8C3D0(a1));
  }
  else
  {
    v3[0] = 0.0;
  }
  return _mm_loadh_ps(v3).m128_u64[0];
}
