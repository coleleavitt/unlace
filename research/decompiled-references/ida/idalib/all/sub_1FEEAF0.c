__int64 __fastcall sub_1FEEAF0(__m128 *a1, const char *a2, unsigned __int64 *a3, char **a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __m128 v8; // xmm0
  size_t v9; // rax
  unsigned __int64 v10; // rdx
  char *v11; // r12
  __int64 v12; // rdx
  __int64 v14; // [rsp+8h] [rbp-50h]
  void *v15[2]; // [rsp+10h] [rbp-48h] BYREF
  _BYTE v16[56]; // [rsp+20h] [rbp-38h] BYREF

  a1[4].m128_u64[0] = (unsigned __int64)&a1[5];
  a1[1].m128_u64[0] = 0;
  a1[1].m128_u64[1] = 0;
  a1->m128_u64[0] = (unsigned __int64)&off_2C758B0;
  a1->m128_u64[1] &= 0x80000000;
  a1[4].m128_u64[1] = 0x100000000LL;
  a1[2].m128_u64[0] = 0;
  a1[2].m128_u64[1] = 0;
  a1[3].m128_u64[0] = 0;
  a1[3].m128_u64[1] = 0;
  a1[5].m128_u64[1] = (unsigned __int64)&a1[7];
  a1[6].m128_u64[0] = 1;
  a1[6].m128_i32[2] = 0;
  a1[6].m128_i8[12] = 1;
  v6 = sub_2210FF0((const char *)a1);
  v7 = a1[4].m128_u32[2];
  if ( v7 + 1 > (unsigned __int64)a1[4].m128_u32[3] )
  {
    v14 = v6;
    sub_2237220(&a1[4], &a1[5], v7 + 1, 8);
    v7 = a1[4].m128_u32[2];
    v6 = v14;
  }
  *(_QWORD *)(a1[4].m128_u64[0] + 8 * v7) = v6;
  v8 = _mm_loadh_ps((const double *)off_2C77938);
  a1[7].m128_u64[1] = (unsigned __int64)&a1[8].m128_u64[1];
  a1[10].m128_u64[0] = (unsigned __int64)&a1[11];
  ++a1[4].m128_i32[2];
  a1[8].m128_u64[0] = 0;
  a1[9].m128_u64[1] = (unsigned __int64)off_2BEAAE8;
  a1[8].m128_i8[8] = 0;
  a1[11].m128_i8[0] = 0;
  a1->m128_u64[0] = (unsigned __int64)off_2C757E0;
  a1[10].m128_u64[1] = 0;
  a1[12].m128_i8[0] = 0;
  a1[12].m128_u64[1] = (unsigned __int64)off_2BEAC58;
  a1[14] = v8;
  v9 = strlen(a2);
  sub_2217250(a1, a2, v9);
  v10 = *a3;
  v11 = *a4;
  a1[2].m128_u64[1] = a3[1];
  a1[2].m128_u64[0] = v10;
  v12 = -1;
  v15[0] = v16;
  if ( v11 )
    v12 = (__int64)&v11[strlen(v11)];
  sub_1FEDD70(v15, v11, v12);
  sub_9EE8A0((__int64)&a1[7].m128_i64[1], (__int64)v15);
  a1[12].m128_i8[0] = 1;
  sub_9EE8A0((__int64)&a1[10], (__int64)v15);
  if ( v15[0] != v16 )
    operator delete(v15[0]);
  return sub_2218140(a1);
}
