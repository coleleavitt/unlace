__int64 __fastcall sub_20125F0(__m128 *a1, const char *a2, char **a3, _BYTE *a4, unsigned __int64 *a5)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __m128 v10; // xmm0
  size_t v11; // rax
  char *v12; // r13
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v16; // [rsp+8h] [rbp-60h]
  void *v17[2]; // [rsp+10h] [rbp-58h] BYREF
  _BYTE v18[72]; // [rsp+20h] [rbp-48h] BYREF

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
  v8 = sub_2210FF0((const char *)a1);
  v9 = a1[4].m128_u32[2];
  if ( v9 + 1 > (unsigned __int64)a1[4].m128_u32[3] )
  {
    v16 = v8;
    sub_2237220(&a1[4], &a1[5], v9 + 1, 8);
    v9 = a1[4].m128_u32[2];
    v8 = v16;
  }
  *(_QWORD *)(a1[4].m128_u64[0] + 8 * v9) = v8;
  v10 = _mm_loadh_ps((const double *)off_2C77938);
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
  a1[14] = v10;
  v11 = strlen(a2);
  sub_2217250(a1, a2, v11);
  v12 = *a3;
  v13 = -1;
  v17[0] = v18;
  if ( v12 )
    v13 = (__int64)&v12[strlen(v12)];
  sub_2012530(v17, v12, v13);
  sub_9EE8A0((__int64)&a1[7].m128_i64[1], (__int64)v17);
  a1[12].m128_i8[0] = 1;
  sub_9EE8A0((__int64)&a1[10], (__int64)v17);
  if ( v17[0] != v18 )
    operator delete(v17[0]);
  a1->m128_i8[10] = (32 * (*a4 & 3)) | a1->m128_i8[10] & 0x9F;
  v14 = a5[1];
  a1[2].m128_u64[0] = *a5;
  a1[2].m128_u64[1] = v14;
  return sub_2218140(a1);
}
