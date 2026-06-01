__int64 __fastcall sub_21EA2C0(
        __m128 *a1,
        const char *a2,
        _DWORD *a3,
        __int32 **a4,
        unsigned __int64 *a5,
        __int64 **a6)
{
  __int64 v11; // rax
  __int64 v12; // rcx
  __m128 v13; // xmm0
  size_t v14; // rax
  unsigned __int64 v15; // rdx
  __int32 v16; // eax
  unsigned __int64 v17; // rax
  __int64 *v18; // r15
  __int64 v19; // rcx
  int v20; // eax
  const __m128i *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // r10
  __int64 v24; // r14
  unsigned __int64 v25; // rdi
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // r8
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  __int32 v31; // eax
  __m128i v32; // xmm4
  unsigned __int64 v33; // rdi
  unsigned __int64 v35; // r13
  __int64 v36; // rax
  __m128i *v37; // rdi
  __int64 v38; // rcx
  __int64 v39; // rdx
  const __m128i *v40; // rsi
  const __m128i *v41; // r11
  __m128i v42; // xmm1
  __int32 v43; // r9d
  __m128i v44; // xmm2
  __int32 v45; // ecx
  __m128i *v46; // [rsp+0h] [rbp-B8h]
  __int64 v47; // [rsp+0h] [rbp-B8h]
  __int64 v48; // [rsp+8h] [rbp-B0h]
  char v49; // [rsp+17h] [rbp-A1h]
  __int64 v50; // [rsp+28h] [rbp-90h]
  __int64 v51; // [rsp+28h] [rbp-90h]
  __int32 v52; // [rsp+30h] [rbp-88h]
  __int64 v53; // [rsp+38h] [rbp-80h]
  __int64 v54; // [rsp+48h] [rbp-70h] BYREF
  _QWORD v55[5]; // [rsp+50h] [rbp-68h] BYREF
  int v56; // [rsp+78h] [rbp-40h]
  char v57; // [rsp+7Ch] [rbp-3Ch]

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
  v11 = sub_2210FF0((const char *)a1);
  v12 = a1[4].m128_u32[2];
  if ( v12 + 1 > (unsigned __int64)a1[4].m128_u32[3] )
  {
    v47 = v11;
    sub_2237220(&a1[4], &a1[5], v12 + 1, 8);
    v12 = a1[4].m128_u32[2];
    v11 = v47;
  }
  *(_QWORD *)(a1[4].m128_u64[0] + 8 * v12) = v11;
  v13 = _mm_loadh_ps((const double *)off_2C78008);
  ++a1[4].m128_i32[2];
  a1[7].m128_i32[2] = 0;
  a1[8].m128_u64[0] = (unsigned __int64)off_2C74E50;
  a1[8].m128_i8[12] = 0;
  a1->m128_u64[0] = (unsigned __int64)&off_2C74EC0;
  a1[8].m128_i32[2] = 0;
  a1[9].m128_u64[1] = (unsigned __int64)a1;
  a1[9].m128_u64[0] = (unsigned __int64)&off_2C74E70;
  v46 = (__m128i *)&a1[11];
  a1[10].m128_u64[0] = (unsigned __int64)&a1[11];
  a1[10].m128_u64[1] = 0x800000000LL;
  a1[36] = v13;
  v14 = strlen(a2);
  sub_2217250(a1, a2, v14);
  a1->m128_i8[10] = (32 * (*a3 & 3)) | a1->m128_i8[10] & 0x9F;
  v15 = *a5;
  v16 = **a4;
  a1[8].m128_i8[12] = 1;
  a1[7].m128_i32[2] = v16;
  a1[8].m128_i32[2] = v16;
  v17 = a5[1];
  a1[2].m128_u64[0] = v15;
  a1[2].m128_u64[1] = v17;
  v18 = *a6;
  if ( *a6 != &(*a6)[5 * *((unsigned int *)a6 + 2)] )
  {
    v48 = (__int64)&(*a6)[5 * *((unsigned int *)a6 + 2)];
    do
    {
      v19 = v18[3];
      v20 = *((_DWORD *)v18 + 4);
      v55[4] = off_2C74E50;
      v21 = (const __m128i *)v55;
      v22 = v18[4];
      v23 = *v18;
      v57 = 1;
      v24 = v18[1];
      v25 = a1[10].m128_u32[3];
      v56 = v20;
      v55[2] = v19;
      v26 = a1[10].m128_u32[2];
      v55[3] = v22;
      v27 = a1[10].m128_u64[0];
      LODWORD(v28) = v26;
      v29 = v26 + 1;
      v55[0] = v23;
      v55[1] = v24;
      v30 = v27 + 48 * v26;
      if ( v29 > v25 )
      {
        v35 = -1;
        v49 = 0;
        if ( v27 <= (unsigned __int64)v55 && v30 > (unsigned __int64)v55 )
        {
          v49 = 1;
          v35 = 0xAAAAAAAAAAAAAAABLL * ((__int64)((__int64)v55 - v27) >> 4);
        }
        v50 = v23;
        v36 = sub_2237400(&a1[10], v46, v29, 48, &v54);
        v23 = v50;
        v37 = (__m128i *)a1[10].m128_u64[0];
        v38 = v36;
        v28 = a1[10].m128_u32[2];
        v39 = 48 * v28;
        v40 = v37;
        v41 = &v37[3 * v28];
        if ( v37 != v41 )
        {
          do
          {
            v42 = _mm_loadu_si128(v40);
            v43 = v40[2].m128i_i32[2];
            v40 += 3;
            v38 += 48;
            *(__m128i *)(v38 - 48) = v42;
            v44 = _mm_loadu_si128(v40 - 2);
            *(_DWORD *)(v38 - 8) = v43;
            LOBYTE(v43) = v40[-1].m128i_i8[12];
            *(__m128i *)(v38 - 32) = v44;
            *(_BYTE *)(v38 - 4) = v43;
            *(_QWORD *)(v38 - 16) = off_2C74E50;
          }
          while ( v41 != v40 );
        }
        v45 = v54;
        if ( v46 != v37 )
        {
          v53 = v50;
          v52 = v54;
          v51 = v36;
          free(v37);
          v23 = v53;
          v45 = v52;
          v36 = v51;
          v28 = a1[10].m128_u32[2];
          v39 = 48 * v28;
        }
        a1[10].m128_i32[3] = v45;
        v21 = (const __m128i *)v55;
        v30 = v36 + v39;
        a1[10].m128_u64[0] = v36;
        if ( v49 )
          v21 = (const __m128i *)(v36 + 48 * v35);
      }
      v31 = v21[2].m128i_i32[2];
      v18 += 5;
      *(__m128i *)v30 = _mm_loadu_si128(v21);
      v32 = _mm_loadu_si128(v21 + 1);
      *(_DWORD *)(v30 + 40) = v31;
      LOBYTE(v31) = v21[2].m128i_i8[12];
      *(__m128i *)(v30 + 16) = v32;
      *(_BYTE *)(v30 + 44) = v31;
      *(_QWORD *)(v30 + 32) = off_2C74E50;
      v33 = a1[9].m128_u64[1];
      a1[10].m128_i32[2] = v28 + 1;
      sub_2216D40(v33, v23, v24);
    }
    while ( (__int64 *)v48 != v18 );
  }
  return sub_2218140(a1);
}
