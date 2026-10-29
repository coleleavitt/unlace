__int64 __fastcall sub_200F900(__m128 *a1, const char *a2, _DWORD *a3, unsigned __int64 *a4, __int64 **a5)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  __m128 v11; // xmm0
  size_t v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 *v15; // r15
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  const __m128i *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // r10
  __int64 v22; // r14
  unsigned __int64 v23; // rdi
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // r8
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  __int32 v29; // eax
  __m128i v30; // xmm4
  unsigned __int64 v31; // rdi
  unsigned __int64 v33; // r13
  __int64 v34; // rax
  __m128i *v35; // rdi
  __int64 v36; // rcx
  __int64 v37; // rdx
  const __m128i *v38; // rsi
  const __m128i *v39; // r11
  __m128i v40; // xmm1
  __int32 v41; // r9d
  __m128i v42; // xmm2
  __int32 v43; // ecx
  __m128i *v44; // [rsp+0h] [rbp-B8h]
  __int64 v45; // [rsp+0h] [rbp-B8h]
  __int64 v46; // [rsp+8h] [rbp-B0h]
  char v47; // [rsp+17h] [rbp-A1h]
  __int64 v48; // [rsp+28h] [rbp-90h]
  __int64 v49; // [rsp+28h] [rbp-90h]
  __int32 v50; // [rsp+30h] [rbp-88h]
  __int64 v51; // [rsp+38h] [rbp-80h]
  __int64 v52; // [rsp+48h] [rbp-70h] BYREF
  _QWORD v53[5]; // [rsp+50h] [rbp-68h] BYREF
  int v54; // [rsp+78h] [rbp-40h]
  char v55; // [rsp+7Ch] [rbp-3Ch]

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
    v45 = v9;
    sub_2237220(&a1[4], &a1[5], v10 + 1, 8);
    v10 = a1[4].m128_u32[2];
    v9 = v45;
  }
  *(_QWORD *)(a1[4].m128_u64[0] + 8 * v10) = v9;
  v11 = _mm_loadh_ps((const double *)&off_2C77EC8);
  ++a1[4].m128_i32[2];
  a1[7].m128_i32[2] = 0;
  a1[8].m128_i32[2] = 0;
  a1[8].m128_i8[12] = 0;
  a1->m128_u64[0] = (unsigned __int64)&off_2C71578;
  a1[8].m128_u64[0] = (unsigned __int64)off_2C71508;
  a1[9].m128_u64[1] = (unsigned __int64)a1;
  a1[9].m128_u64[0] = (unsigned __int64)&off_2C71528;
  v44 = (__m128i *)&a1[11];
  a1[10].m128_u64[0] = (unsigned __int64)&a1[11];
  a1[10].m128_u64[1] = 0x800000000LL;
  a1[36] = v11;
  v12 = strlen(a2);
  sub_2217250(a1, a2, v12);
  a1->m128_i8[10] = (32 * (*a3 & 3)) | a1->m128_i8[10] & 0x9F;
  v13 = *a4;
  a1[2].m128_u64[1] = a4[1];
  v14 = *((unsigned int *)a5 + 2);
  a1[2].m128_u64[0] = v13;
  v15 = *a5;
  v16 = 5 * v14;
  if ( *a5 != &(*a5)[v16] )
  {
    v46 = (__int64)&(*a5)[v16];
    do
    {
      v17 = v15[3];
      v18 = *((_DWORD *)v15 + 4);
      v53[4] = off_2C71508;
      v19 = (const __m128i *)v53;
      v20 = v15[4];
      v21 = *v15;
      v55 = 1;
      v22 = v15[1];
      v23 = a1[10].m128_u32[3];
      v54 = v18;
      v53[2] = v17;
      v24 = a1[10].m128_u32[2];
      v53[3] = v20;
      v25 = a1[10].m128_u64[0];
      LODWORD(v26) = v24;
      v27 = v24 + 1;
      v53[0] = v21;
      v53[1] = v22;
      v28 = v25 + 48 * v24;
      if ( v27 > v23 )
      {
        v33 = -1;
        v47 = 0;
        if ( v25 <= (unsigned __int64)v53 && v28 > (unsigned __int64)v53 )
        {
          v47 = 1;
          v33 = 0xAAAAAAAAAAAAAAABLL * ((__int64)((__int64)v53 - v25) >> 4);
        }
        v48 = v21;
        v34 = sub_2237400(&a1[10], v44, v27, 48, &v52);
        v21 = v48;
        v35 = (__m128i *)a1[10].m128_u64[0];
        v36 = v34;
        v26 = a1[10].m128_u32[2];
        v37 = 48 * v26;
        v38 = v35;
        v39 = &v35[3 * v26];
        if ( v35 != v39 )
        {
          do
          {
            v40 = _mm_loadu_si128(v38);
            v41 = v38[2].m128i_i32[2];
            v38 += 3;
            v36 += 48;
            *(__m128i *)(v36 - 48) = v40;
            v42 = _mm_loadu_si128(v38 - 2);
            *(_DWORD *)(v36 - 8) = v41;
            LOBYTE(v41) = v38[-1].m128i_i8[12];
            *(__m128i *)(v36 - 32) = v42;
            *(_BYTE *)(v36 - 4) = v41;
            *(_QWORD *)(v36 - 16) = off_2C71508;
          }
          while ( v39 != v38 );
        }
        v43 = v52;
        if ( v44 != v35 )
        {
          v51 = v48;
          v50 = v52;
          v49 = v34;
          free(v35);
          v21 = v51;
          v43 = v50;
          v34 = v49;
          v26 = a1[10].m128_u32[2];
          v37 = 48 * v26;
        }
        a1[10].m128_i32[3] = v43;
        v19 = (const __m128i *)v53;
        v28 = v34 + v37;
        a1[10].m128_u64[0] = v34;
        if ( v47 )
          v19 = (const __m128i *)(v34 + 48 * v33);
      }
      v29 = v19[2].m128i_i32[2];
      v15 += 5;
      *(__m128i *)v28 = _mm_loadu_si128(v19);
      v30 = _mm_loadu_si128(v19 + 1);
      *(_DWORD *)(v28 + 40) = v29;
      LOBYTE(v29) = v19[2].m128i_i8[12];
      *(__m128i *)(v28 + 16) = v30;
      *(_BYTE *)(v28 + 44) = v29;
      *(_QWORD *)(v28 + 32) = off_2C71508;
      v31 = a1[9].m128_u64[1];
      a1[10].m128_i32[2] = v26 + 1;
      sub_2216D40(v31, v21, v22);
    }
    while ( (__int64 *)v46 != v15 );
  }
  return sub_2218140(a1);
}
