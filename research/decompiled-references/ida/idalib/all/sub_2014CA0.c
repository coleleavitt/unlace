__int64 __fastcall sub_2014CA0(
        __m128 *a1,
        const char *a2,
        __int32 **a3,
        _DWORD *a4,
        unsigned __int64 *a5,
        __int64 **a6)
{
  __int64 v11; // rax
  __int64 v12; // rcx
  __m128 v13; // xmm0
  size_t v14; // rax
  __int32 v15; // edx
  char v16; // al
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 *v19; // r15
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // eax
  const __m128i *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // r10
  __int64 v26; // r14
  unsigned __int64 v27; // rdi
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  __int64 v30; // r8
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  __int32 v33; // eax
  __m128i v34; // xmm4
  unsigned __int64 v35; // rdi
  unsigned __int64 v37; // r13
  __int64 v38; // rax
  __m128i *v39; // rdi
  __int64 v40; // rcx
  __int64 v41; // rdx
  const __m128i *v42; // rsi
  const __m128i *v43; // r11
  __m128i v44; // xmm1
  __int32 v45; // r9d
  __m128i v46; // xmm2
  __int32 v47; // ecx
  __m128i *v48; // [rsp+0h] [rbp-B8h]
  __int64 v49; // [rsp+0h] [rbp-B8h]
  __int64 v50; // [rsp+8h] [rbp-B0h]
  char v51; // [rsp+17h] [rbp-A1h]
  __int64 v52; // [rsp+28h] [rbp-90h]
  __int64 v53; // [rsp+28h] [rbp-90h]
  __int32 v54; // [rsp+30h] [rbp-88h]
  __int64 v55; // [rsp+38h] [rbp-80h]
  __int64 v56; // [rsp+48h] [rbp-70h] BYREF
  _QWORD v57[5]; // [rsp+50h] [rbp-68h] BYREF
  int v58; // [rsp+78h] [rbp-40h]
  char v59; // [rsp+7Ch] [rbp-3Ch]

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
    v49 = v11;
    sub_2237220(&a1[4], &a1[5], v12 + 1, 8);
    v12 = a1[4].m128_u32[2];
    v11 = v49;
  }
  *(_QWORD *)(a1[4].m128_u64[0] + 8 * v12) = v11;
  v13 = _mm_loadh_ps((const double *)off_2C78988);
  ++a1[4].m128_i32[2];
  a1[7].m128_i32[2] = 0;
  a1[8].m128_u64[0] = (unsigned __int64)off_2C71BD0;
  a1[8].m128_i8[12] = 0;
  a1->m128_u64[0] = (unsigned __int64)&off_2C71C40;
  a1[8].m128_i32[2] = 0;
  a1[9].m128_u64[1] = (unsigned __int64)a1;
  a1[9].m128_u64[0] = (unsigned __int64)&off_2C71BF0;
  v48 = (__m128i *)&a1[11];
  a1[10].m128_u64[0] = (unsigned __int64)&a1[11];
  a1[10].m128_u64[1] = 0x800000000LL;
  a1[36] = v13;
  v14 = strlen(a2);
  sub_2217250(a1, a2, v14);
  v15 = **a3;
  v16 = *a4 & 3;
  a1[8].m128_i8[12] = 1;
  a1[7].m128_i32[2] = v15;
  a1[8].m128_i32[2] = v15;
  a1->m128_i8[10] = (32 * v16) | a1->m128_i8[10] & 0x9F;
  v17 = *a5;
  a1[2].m128_u64[1] = a5[1];
  v18 = *((unsigned int *)a6 + 2);
  a1[2].m128_u64[0] = v17;
  v19 = *a6;
  v20 = 5 * v18;
  if ( *a6 != &(*a6)[v20] )
  {
    v50 = (__int64)&(*a6)[v20];
    do
    {
      v21 = v19[3];
      v22 = *((_DWORD *)v19 + 4);
      v57[4] = off_2C71BD0;
      v23 = (const __m128i *)v57;
      v24 = v19[4];
      v25 = *v19;
      v59 = 1;
      v26 = v19[1];
      v27 = a1[10].m128_u32[3];
      v58 = v22;
      v57[2] = v21;
      v28 = a1[10].m128_u32[2];
      v57[3] = v24;
      v29 = a1[10].m128_u64[0];
      LODWORD(v30) = v28;
      v31 = v28 + 1;
      v57[0] = v25;
      v57[1] = v26;
      v32 = v29 + 48 * v28;
      if ( v31 > v27 )
      {
        v37 = -1;
        v51 = 0;
        if ( v29 <= (unsigned __int64)v57 && v32 > (unsigned __int64)v57 )
        {
          v51 = 1;
          v37 = 0xAAAAAAAAAAAAAAABLL * ((__int64)((__int64)v57 - v29) >> 4);
        }
        v52 = v25;
        v38 = sub_2237400(&a1[10], v48, v31, 48, &v56);
        v25 = v52;
        v39 = (__m128i *)a1[10].m128_u64[0];
        v40 = v38;
        v30 = a1[10].m128_u32[2];
        v41 = 48 * v30;
        v42 = v39;
        v43 = &v39[3 * v30];
        if ( v39 != v43 )
        {
          do
          {
            v44 = _mm_loadu_si128(v42);
            v45 = v42[2].m128i_i32[2];
            v42 += 3;
            v40 += 48;
            *(__m128i *)(v40 - 48) = v44;
            v46 = _mm_loadu_si128(v42 - 2);
            *(_DWORD *)(v40 - 8) = v45;
            LOBYTE(v45) = v42[-1].m128i_i8[12];
            *(__m128i *)(v40 - 32) = v46;
            *(_BYTE *)(v40 - 4) = v45;
            *(_QWORD *)(v40 - 16) = off_2C71BD0;
          }
          while ( v43 != v42 );
        }
        v47 = v56;
        if ( v48 != v39 )
        {
          v55 = v52;
          v54 = v56;
          v53 = v38;
          free(v39);
          v25 = v55;
          v47 = v54;
          v38 = v53;
          v30 = a1[10].m128_u32[2];
          v41 = 48 * v30;
        }
        a1[10].m128_i32[3] = v47;
        v23 = (const __m128i *)v57;
        v32 = v38 + v41;
        a1[10].m128_u64[0] = v38;
        if ( v51 )
          v23 = (const __m128i *)(v38 + 48 * v37);
      }
      v33 = v23[2].m128i_i32[2];
      v19 += 5;
      *(__m128i *)v32 = _mm_loadu_si128(v23);
      v34 = _mm_loadu_si128(v23 + 1);
      *(_DWORD *)(v32 + 40) = v33;
      LOBYTE(v33) = v23[2].m128i_i8[12];
      *(__m128i *)(v32 + 16) = v34;
      *(_BYTE *)(v32 + 44) = v33;
      *(_QWORD *)(v32 + 32) = off_2C71BD0;
      v35 = a1[9].m128_u64[1];
      a1[10].m128_i32[2] = v30 + 1;
      sub_2216D40(v35, v25, v26);
    }
    while ( (__int64 *)v50 != v19 );
  }
  return sub_2218140(a1);
}
