void __fastcall sub_F410D0(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  size_t v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 *v14; // rbx
  unsigned __int64 *i; // rbp
  __m128 v16; // [rsp+0h] [rbp-58h] BYREF
  __int64 v17; // [rsp+18h] [rbp-40h]
  __int128 v18; // [rsp+20h] [rbp-38h]
  __int128 v19; // [rsp+30h] [rbp-28h]

  v16.m128_u64[0] = a1;
  v17 = a1;
  sub_F2AD60(a1, a2);
  if ( *(_QWORD *)(a2 + 88) )
  {
    v16.m128_u64[0] = *(_QWORD *)(a2 + 88);
    v18 = 0u;
    v19 = (__int128)_mm_loadh_ps((const double *)v16.m128_u64);
    v2 = j__strlen(&byte_22F0C30);
    sub_F3F2B0(v17, (__int64)&byte_22F0C30, v2, v3, v4, v5, v18, v19);
  }
  v6 = sub_BA8FC0(a2);
  if ( v6 )
  {
    v16.m128_u64[0] = v6;
    v18 = 0u;
    v19 = (__int128)_mm_loadh_ps((const double *)v16.m128_u64);
    v10 = j__strlen(&byte_22F0C30);
    sub_F3F2B0(v17, (__int64)&byte_22F0C30, v10, v11, v12, v13, v18, v19);
  }
  v14 = *(unsigned __int64 **)(a2 + 104);
  for ( i = &v14[*(unsigned int *)(a2 + 112)]; i != v14; ++v14 )
  {
    if ( *v14 )
    {
      v16.m128_u64[0] = *v14;
      v18 = 0u;
      v16 = _mm_loadh_ps((const double *)v16.m128_u64);
      v19 = (__int128)v16;
      sub_F3F2B0(v17, (__int64)&byte_22F0C30, 0, v7, v8, v9, 0, (__int128)v16);
    }
  }
}
