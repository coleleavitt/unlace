__int64 __fastcall sub_18C98A0(__m128 *a1, __int64 *a2)
{
  unsigned __int64 v2; // rax
  __int64 *v3; // r12
  int v4; // edx
  unsigned __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // edx
  unsigned __int64 v10; // rax
  __m128i v11; // xmm0
  __m128i v12[2]; // [rsp+8h] [rbp-20h] BYREF

  v2 = a1[3].m128_u64[0];
  v3 = (__int64 *)a1[4].m128_u64[1];
  if ( v2 == a1[4].m128_u64[0] - 16 )
  {
    if ( a1->m128_u64[1] - ((__int64)((__int64)v3 - a1->m128_u64[0]) >> 3) <= 1 )
    {
      sub_160A9F0((__int64)a1, 1u, 0);
      v3 = (__int64 *)a1[4].m128_u64[1];
    }
    v7 = operator new(0x200u);
    v8 = *a2;
    v9 = *((_DWORD *)a2 + 2);
    v3[1] = v7;
    v10 = a1[3].m128_u64[0];
    *(_DWORD *)(v10 + 8) = v9;
    *(_QWORD *)v10 = v8;
    v3 = (__int64 *)(a1[4].m128_u64[1] + 8);
    v12[0].m128i_i64[0] = *v3;
    v11 = _mm_loadl_epi64(v12);
    a1[3] = (__m128)_mm_unpacklo_epi64(v11, v11);
    v12[0].m128i_i64[0] = (__int64)v3;
    a1[4] = _mm_loadh_ps((const double *)v12[0].m128i_i64);
  }
  else
  {
    v4 = *((_DWORD *)a2 + 2);
    v5 = v2 + 16;
    *(_QWORD *)(v5 - 16) = *a2;
    *(_DWORD *)(v5 - 8) = v4;
    a1[3].m128_u64[0] = v5;
    if ( v5 != a1[3].m128_u64[1] )
      return v5 - 16;
  }
  return *(v3 - 1) + 496;
}
