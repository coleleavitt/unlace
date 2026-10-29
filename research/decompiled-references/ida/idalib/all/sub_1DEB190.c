__int64 __fastcall sub_1DEB190(unsigned __int64 a1, unsigned __int64 a2, void *a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  char v5; // r9
  __int64 v8; // r13
  void *v10; // [rsp+8h] [rbp-70h] BYREF
  __m128 v11; // [rsp+10h] [rbp-68h] BYREF
  __int64 v12; // [rsp+20h] [rbp-58h]
  unsigned int v13; // [rsp+28h] [rbp-50h]
  __int64 v14; // [rsp+30h] [rbp-48h]
  int v15; // [rsp+38h] [rbp-40h]
  __int64 v16; // [rsp+40h] [rbp-38h]
  __int16 v17; // [rsp+48h] [rbp-30h]
  char v18; // [rsp+4Ah] [rbp-2Eh]

  if ( !a2 )
    return 0;
  v11.m128_u64[0] = a2;
  v11.m128_u64[1] = (unsigned __int64)a3;
  v4 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v4 )
  {
    v5 = 0;
    v10 = a3;
    v11 = _mm_loadh_ps((const double *)&v10);
    while ( (*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v5 = 1;
      v4 = *(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    }
    if ( v5 )
      v11.m128_u64[0] = v4;
  }
  v15 = sub_E90530((__int64 *)&v11);
  v14 = a4;
  v11 = (__m128)a1;
  v12 = 0;
  v13 = 0;
  v16 = 0;
  v17 = 1;
  v18 = 0;
  v8 = sub_1DD3CF0((__int64)&v11, a2, a3, 0, 0);
  operator delete(v11.m128_u64[1], 16LL * v13, 8);
  return v8;
}
