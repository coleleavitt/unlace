void __fastcall sub_15AB8B0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  int v4; // eax
  unsigned __int64 v5; // rdx
  char v6; // cl
  __m128i v7; // kr00_16
  unsigned __int64 v8; // [rsp+8h] [rbp-40h] BYREF
  __m128i v9; // [rsp+10h] [rbp-38h] BYREF
  __m128i v10; // [rsp+20h] [rbp-28h] BYREF

  v9.m128i_i64[0] = a2;
  v9.m128i_i64[1] = a3;
  if ( a2 )
  {
    v3 = sub_E90530(v9.m128i_i64) >> 32;
    v4 = 0;
    if ( v9.m128i_i64[0] )
    {
      v10 = _mm_load_si128(&v9);
      v5 = *(_QWORD *)(v9.m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v5 )
      {
        v8 = v10.m128i_u64[1];
        v6 = 0;
        v10 = (__m128i)_mm_loadh_ps((const double *)&v8);
        while ( (*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v6 = 1;
          v5 = *(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        }
        if ( v6 )
          v10.m128i_i64[0] = v5;
      }
      v4 = sub_E90530(v10.m128i_i64);
    }
    v7 = v9;
    *(_DWORD *)a1 = v4;
    *(_DWORD *)(a1 + 4) = v3;
    sub_E90AB0(a1 + 8, v7.m128i_u64[0], v7.m128i_i64[1]);
  }
  else
  {
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 24) = 0;
  }
}
