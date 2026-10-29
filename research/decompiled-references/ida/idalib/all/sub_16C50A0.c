unsigned __int64 __fastcall sub_16C50A0(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rax
  char v3; // cl
  __int64 v5; // [rsp+0h] [rbp-20h] BYREF
  __m128 v6; // [rsp+8h] [rbp-18h] BYREF

  if ( (*(_QWORD *)a1 & 0x80000LL) == 0 )
    return *(unsigned int *)(a1 + 4);
  v1 = *(_QWORD *)(a1 + 32);
  if ( !v1 )
    return 0;
  v5 = *(_QWORD *)(a1 + 40);
  v6 = _mm_loadh_ps((const double *)&v5);
  v2 = *(_QWORD *)(v1 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v2 )
  {
    v6.m128_u64[0] = v2;
    v3 = 0;
    while ( (*(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v3 = 1;
      v2 = *(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    }
    if ( v3 )
      v6.m128_u64[0] = v2;
  }
  return sub_E90530((__int64 *)&v6);
}
