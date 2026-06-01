__int64 __fastcall sub_9C7250(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rax
  unsigned __int64 v4; // rax
  char v5; // cl
  __int64 v7; // [rsp+0h] [rbp-20h] BYREF
  __m128 v8; // [rsp+8h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  if ( (*(_QWORD *)v1 & 0x80000LL) == 0 )
    return *(unsigned int *)(v1 + 4);
  v2 = *(_QWORD *)(v1 + 32);
  v3 = *(_QWORD *)(v1 + 40);
  if ( !v2 )
    return 0;
  v7 = v3;
  v8 = _mm_loadh_ps((const double *)&v7);
  v4 = *(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v4 )
  {
    v8.m128_u64[0] = *(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    v5 = 0;
    while ( (*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v5 = 1;
      v4 = *(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    }
    if ( v5 )
      v8.m128_u64[0] = v4;
  }
  return sub_E6C7F0(&v8);
}

