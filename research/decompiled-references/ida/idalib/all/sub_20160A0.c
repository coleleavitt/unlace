__int64 __fastcall sub_20160A0(__m128 *a1, const char *a2, _BYTE *a3, __int32 **a4, __int64 **a5)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  __m128 v11; // xmm0
  size_t v12; // rax
  __int64 *v13; // r15
  __int32 v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  const __m128i *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r10
  __int64 v20; // r14
  unsigned __int64 v21; // rdi
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // r8
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int32 v27; // eax
  __m128i v28; // xmm4
  unsigned __int64 v29; // rdi
  unsigned __int64 v31; // r13
  __int64 v32; // rax
  __m128i *v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rdx
  const __m128i *v36; // rsi
  const __m128i *v37; // r11
  __m128i v38; // xmm1
  __int32 v39; // r9d
  __m128i v40; // xmm2
  __int32 v41; // ecx
  __m128i *v42; // [rsp+0h] [rbp-B8h]
  __int64 v43; // [rsp+0h] [rbp-B8h]
  __int64 *v44; // [rsp+8h] [rbp-B0h]
  char v45; // [rsp+17h] [rbp-A1h]
  __int64 v46; // [rsp+28h] [rbp-90h]
  __int64 v47; // [rsp+28h] [rbp-90h]
  __int32 v48; // [rsp+30h] [rbp-88h]
  __int64 v49; // [rsp+38h] [rbp-80h]
  __int64 v50; // [rsp+48h] [rbp-70h] BYREF
  _QWORD v51[5]; // [rsp+50h] [rbp-68h] BYREF
  int v52; // [rsp+78h] [rbp-40h]
  char v53; // [rsp+7Ch] [rbp-3Ch]

  a1[1].m128_u64[0] = 0;
  a1[1].m128_u64[1] = 0;
  a1[2].m128_u64[0] = 0;
  a1->m128_u64[0] = (unsigned __int64)&off_2C758B0;
  a1->m128_u64[1] &= 0x80000000;
  a1[4].m128_u64[1] = 0x100000000LL;
  a1[2].m128_u64[1] = 0;
  a1[3].m128_u64[0] = 0;
  a1[3].m128_u64[1] = 0;
  a1[4].m128_u64[0] = (unsigned __int64)&a1[5];
  a1[5].m128_u64[1] = (unsigned __int64)&a1[7];
  a1[6].m128_u64[0] = 1;
  a1[6].m128_i32[2] = 0;
  a1[6].m128_i8[12] = 1;
  v9 = sub_2210FF0((const char *)a1);
  v10 = a1[4].m128_u32[2];
  if ( v10 + 1 > (unsigned __int64)a1[4].m128_u32[3] )
  {
    v43 = v9;
    sub_2237220(&a1[4], &a1[5], v10 + 1, 8);
    v10 = a1[4].m128_u32[2];
    v9 = v43;
  }
  *(_QWORD *)(a1[4].m128_u64[0] + 8 * v10) = v9;
  v11 = _mm_loadh_ps((const double *)off_2C78B38);
  ++a1[4].m128_i32[2];
  a1[7].m128_i32[2] = 0;
  a1[8].m128_i32[2] = 0;
  a1[8].m128_i8[12] = 0;
  a1->m128_u64[0] = (unsigned __int64)&off_2C71DE8;
  a1[8].m128_u64[0] = (unsigned __int64)off_2C71D78;
  a1[9].m128_u64[1] = (unsigned __int64)a1;
  a1[9].m128_u64[0] = (unsigned __int64)&off_2C71D98;
  v42 = (__m128i *)&a1[11];
  a1[10].m128_u64[0] = (unsigned __int64)&a1[11];
  a1[10].m128_u64[1] = 0x800000000LL;
  a1[36] = v11;
  v12 = strlen(a2);
  sub_2217250(a1, a2, v12);
  a1->m128_i8[10] = (32 * (*a3 & 3)) | a1->m128_i8[10] & 0x9F;
  v13 = *a5;
  v14 = **a4;
  a1[8].m128_i8[12] = 1;
  a1[7].m128_i32[2] = v14;
  a1[8].m128_i32[2] = v14;
  if ( v13 != &v13[5 * *((unsigned int *)a5 + 2)] )
  {
    v44 = &v13[5 * *((unsigned int *)a5 + 2)];
    do
    {
      v15 = v13[3];
      v16 = *((_DWORD *)v13 + 4);
      v51[4] = off_2C71D78;
      v17 = (const __m128i *)v51;
      v18 = v13[4];
      v19 = *v13;
      v53 = 1;
      v20 = v13[1];
      v21 = a1[10].m128_u32[3];
      v52 = v16;
      v51[2] = v15;
      v22 = a1[10].m128_u32[2];
      v51[3] = v18;
      v23 = a1[10].m128_u64[0];
      LODWORD(v24) = v22;
      v25 = v22 + 1;
      v51[0] = v19;
      v51[1] = v20;
      v26 = v23 + 48 * v22;
      if ( v25 > v21 )
      {
        v31 = -1;
        v45 = 0;
        if ( v23 <= (unsigned __int64)v51 && v26 > (unsigned __int64)v51 )
        {
          v45 = 1;
          v31 = 0xAAAAAAAAAAAAAAABLL * ((__int64)((__int64)v51 - v23) >> 4);
        }
        v46 = v19;
        v32 = sub_2237400(&a1[10], v42, v25, 48, &v50);
        v19 = v46;
        v33 = (__m128i *)a1[10].m128_u64[0];
        v34 = v32;
        v24 = a1[10].m128_u32[2];
        v35 = 48 * v24;
        v36 = v33;
        v37 = &v33[3 * v24];
        if ( v33 != v37 )
        {
          do
          {
            v38 = _mm_loadu_si128(v36);
            v39 = v36[2].m128i_i32[2];
            v36 += 3;
            v34 += 48;
            *(__m128i *)(v34 - 48) = v38;
            v40 = _mm_loadu_si128(v36 - 2);
            *(_DWORD *)(v34 - 8) = v39;
            LOBYTE(v39) = v36[-1].m128i_i8[12];
            *(__m128i *)(v34 - 32) = v40;
            *(_BYTE *)(v34 - 4) = v39;
            *(_QWORD *)(v34 - 16) = off_2C71D78;
          }
          while ( v37 != v36 );
        }
        v41 = v50;
        if ( v42 != v33 )
        {
          v49 = v46;
          v48 = v50;
          v47 = v32;
          free(v33);
          v19 = v49;
          v41 = v48;
          v32 = v47;
          v24 = a1[10].m128_u32[2];
          v35 = 48 * v24;
        }
        a1[10].m128_i32[3] = v41;
        v17 = (const __m128i *)v51;
        v26 = v32 + v35;
        a1[10].m128_u64[0] = v32;
        if ( v45 )
          v17 = (const __m128i *)(v32 + 48 * v31);
      }
      v27 = v17[2].m128i_i32[2];
      v13 += 5;
      *(__m128i *)v26 = _mm_loadu_si128(v17);
      v28 = _mm_loadu_si128(v17 + 1);
      *(_DWORD *)(v26 + 40) = v27;
      LOBYTE(v27) = v17[2].m128i_i8[12];
      *(__m128i *)(v26 + 16) = v28;
      *(_BYTE *)(v26 + 44) = v27;
      *(_QWORD *)(v26 + 32) = off_2C71D78;
      v29 = a1[9].m128_u64[1];
      a1[10].m128_i32[2] = v24 + 1;
      sub_2216D40(v29, v19, v20);
    }
    while ( v44 != v13 );
  }
  return sub_2218140(a1);
}
