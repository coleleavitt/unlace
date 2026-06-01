__int64 __fastcall sub_20C2960(
        __m128 *a1,
        const char *a2,
        unsigned __int64 *a3,
        _DWORD *a4,
        _BYTE *a5,
        __int32 **a6,
        __int64 **a7)
{
  __int64 v11; // rax
  __int64 v12; // rcx
  __m128 v13; // xmm0
  size_t v14; // rax
  unsigned __int64 v15; // rsi
  char v16; // al
  __int8 v17; // al
  __int32 v18; // eax
  __int64 *v19; // r14
  __int64 v20; // rcx
  int v21; // eax
  const __m128i *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // r10
  __int64 v25; // r15
  __int64 v26; // rcx
  unsigned __int64 v27; // rdi
  __int64 v28; // r8
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rcx
  __int32 v32; // eax
  __m128i v33; // xmm4
  unsigned __int64 v34; // rdi
  unsigned __int64 v36; // r12
  __int64 v37; // rax
  __m128i *v38; // rdi
  __int64 v39; // rcx
  __int64 v40; // rdx
  const __m128i *v41; // rsi
  const __m128i *v42; // r11
  __m128i v43; // xmm1
  __int32 v44; // r9d
  __m128i v45; // xmm2
  __int32 v46; // ecx
  __m128i *v47; // [rsp+0h] [rbp-B8h]
  __int64 v48; // [rsp+0h] [rbp-B8h]
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
  v11 = sub_2210FF0((const char *)a1);
  v12 = a1[4].m128_u32[2];
  if ( v12 + 1 > (unsigned __int64)a1[4].m128_u32[3] )
  {
    v48 = v11;
    sub_2237220(&a1[4], &a1[5], v12 + 1, 8);
    v12 = a1[4].m128_u32[2];
    v11 = v48;
  }
  *(_QWORD *)(a1[4].m128_u64[0] + 8 * v12) = v11;
  v13 = _mm_loadh_ps((const double *)off_2C78630);
  ++a1[4].m128_i32[2];
  a1[7].m128_i32[2] = 0;
  a1[8].m128_i32[2] = 0;
  a1[8].m128_i8[12] = 0;
  a1->m128_u64[0] = (unsigned __int64)&off_2C728B0;
  a1[8].m128_u64[0] = (unsigned __int64)off_2C72840;
  a1[9].m128_u64[1] = (unsigned __int64)a1;
  a1[9].m128_u64[0] = (unsigned __int64)&off_2C72860;
  v47 = (__m128i *)&a1[11];
  a1[10].m128_u64[0] = (unsigned __int64)&a1[11];
  a1[10].m128_u64[1] = 0x800000000LL;
  a1[36] = v13;
  v14 = strlen(a2);
  sub_2217250(a1, a2, v14);
  v15 = *a3;
  v16 = *a4 & 3;
  a1[2].m128_u64[1] = a3[1];
  a1[2].m128_u64[0] = v15;
  v17 = (32 * v16) | a1->m128_i8[10] & 0x9F;
  a1->m128_i8[10] = v17;
  a1->m128_i8[10] = (8 * (*a5 & 3)) | v17 & 0xE7;
  v18 = **a6;
  a1[8].m128_i8[12] = 1;
  a1[7].m128_i32[2] = v18;
  a1[8].m128_i32[2] = v18;
  v19 = *a7;
  v50 = (__int64)&(*a7)[5 * *((unsigned int *)a7 + 2)];
  if ( *a7 != (__int64 *)v50 )
  {
    do
    {
      v20 = v19[3];
      v21 = *((_DWORD *)v19 + 4);
      v57[4] = off_2C72840;
      v22 = (const __m128i *)v57;
      v23 = v19[4];
      v24 = *v19;
      v59 = 1;
      v25 = v19[1];
      v57[2] = v20;
      v26 = a1[10].m128_u32[2];
      v57[3] = v23;
      v58 = v21;
      v27 = a1[10].m128_u32[3];
      LODWORD(v28) = v26;
      v29 = v26 + 1;
      v30 = a1[10].m128_u64[0];
      v57[0] = v24;
      v57[1] = v25;
      v31 = v30 + 48 * v26;
      if ( v29 > v27 )
      {
        v36 = -1;
        v51 = 0;
        if ( v30 <= (unsigned __int64)v57 && v31 > (unsigned __int64)v57 )
        {
          v51 = 1;
          v36 = 0xAAAAAAAAAAAAAAABLL * ((__int64)((__int64)v57 - v30) >> 4);
        }
        v52 = v24;
        v37 = sub_2237400(&a1[10], v47, v29, 48, &v56);
        v24 = v52;
        v38 = (__m128i *)a1[10].m128_u64[0];
        v39 = v37;
        v28 = a1[10].m128_u32[2];
        v40 = 48 * v28;
        v41 = v38;
        v42 = &v38[3 * v28];
        if ( v38 != v42 )
        {
          do
          {
            v43 = _mm_loadu_si128(v41);
            v44 = v41[2].m128i_i32[2];
            v41 += 3;
            v39 += 48;
            *(__m128i *)(v39 - 48) = v43;
            v45 = _mm_loadu_si128(v41 - 2);
            *(_DWORD *)(v39 - 8) = v44;
            LOBYTE(v44) = v41[-1].m128i_i8[12];
            *(__m128i *)(v39 - 32) = v45;
            *(_BYTE *)(v39 - 4) = v44;
            *(_QWORD *)(v39 - 16) = off_2C72840;
          }
          while ( v42 != v41 );
        }
        v46 = v56;
        if ( v47 != v38 )
        {
          v55 = v52;
          v54 = v56;
          v53 = v37;
          free(v38);
          v24 = v55;
          v46 = v54;
          v37 = v53;
          v28 = a1[10].m128_u32[2];
          v40 = 48 * v28;
        }
        a1[10].m128_i32[3] = v46;
        v22 = (const __m128i *)v57;
        v31 = v37 + v40;
        a1[10].m128_u64[0] = v37;
        if ( v51 )
          v22 = (const __m128i *)(v37 + 48 * v36);
      }
      v32 = v22[2].m128i_i32[2];
      v19 += 5;
      *(__m128i *)v31 = _mm_loadu_si128(v22);
      v33 = _mm_loadu_si128(v22 + 1);
      *(_DWORD *)(v31 + 40) = v32;
      LOBYTE(v32) = v22[2].m128i_i8[12];
      *(__m128i *)(v31 + 16) = v33;
      *(_BYTE *)(v31 + 44) = v32;
      *(_QWORD *)(v31 + 32) = off_2C72840;
      v34 = a1[9].m128_u64[1];
      a1[10].m128_i32[2] = v28 + 1;
      sub_2216D40(v34, v24, v25);
    }
    while ( (__int64 *)v50 != v19 );
  }
  return sub_2218140(a1);
}
