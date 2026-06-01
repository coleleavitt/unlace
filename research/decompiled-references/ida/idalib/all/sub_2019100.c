__int64 __fastcall sub_2019100(__m128 *a1, const char *a2, _DWORD **a3, _DWORD *a4, unsigned __int64 *a5, __int64 **a6)
{
  __int64 v10; // rax
  __int64 v11; // rcx
  __m128 v12; // xmm0
  size_t v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 *v17; // r14
  int v18; // eax
  const __m128i *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // r10
  __int64 v22; // r13
  unsigned __int64 v23; // rdi
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // r8
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  __int32 v29; // eax
  __m128i v30; // xmm4
  unsigned __int64 v31; // rdi
  unsigned __int64 v33; // rbp
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
  _DWORD *v44; // rax
  __m128i *v46; // [rsp+0h] [rbp-B8h]
  __int64 v47; // [rsp+8h] [rbp-B0h]
  __int64 v48; // [rsp+8h] [rbp-B0h]
  char v49; // [rsp+17h] [rbp-A1h]
  __int64 v50; // [rsp+28h] [rbp-90h]
  __int64 v51; // [rsp+28h] [rbp-90h]
  __int32 v52; // [rsp+30h] [rbp-88h]
  __int64 v53; // [rsp+38h] [rbp-80h]
  __int64 v54; // [rsp+48h] [rbp-70h] BYREF
  _QWORD v55[4]; // [rsp+50h] [rbp-68h] BYREF
  __int64 (__fastcall **v56)(); // [rsp+70h] [rbp-48h]
  int v57; // [rsp+78h] [rbp-40h]
  char v58; // [rsp+7Ch] [rbp-3Ch]

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
  v10 = sub_2210FF0((const char *)a1);
  v11 = a1[4].m128_u32[2];
  if ( v11 + 1 > (unsigned __int64)a1[4].m128_u32[3] )
  {
    v48 = v10;
    sub_2237220(&a1[4], &a1[5], v11 + 1, 8);
    v11 = a1[4].m128_u32[2];
    v10 = v48;
  }
  *(_QWORD *)(a1[4].m128_u64[0] + 8 * v11) = v10;
  v12 = _mm_loadh_ps((const double *)off_2C77E40);
  ++a1[4].m128_i32[2];
  a1[7].m128_u64[1] = 0;
  a1[8].m128_u64[0] = (unsigned __int64)off_2C71F28;
  a1[8].m128_i8[12] = 0;
  a1[9].m128_u64[1] = (unsigned __int64)a1;
  a1->m128_u64[0] = (unsigned __int64)&off_2C71F98;
  a1[10].m128_u64[0] = (unsigned __int64)&a1[11];
  a1[36] = v12;
  a1[9].m128_u64[0] = (unsigned __int64)&off_2C71F48;
  a1[10].m128_u64[1] = 0x800000000LL;
  v13 = strlen(a2);
  sub_2217250(a1, a2, v13);
  if ( a1[7].m128_u64[1] )
  {
    v14 = sub_227D6D0(a1, a2);
    v55[0] = "cl::location(x) specified more than once!";
    LOWORD(v56) = 259;
    sub_22116C0(a1, v55, 0, 0, v14);
  }
  else
  {
    v44 = *a3;
    a1[7].m128_u64[1] = (unsigned __int64)*a3;
    LODWORD(v44) = *v44;
    a1[8].m128_i8[12] = 1;
    a1[8].m128_i32[2] = (int)v44;
  }
  a1->m128_i8[10] = (32 * (*a4 & 3)) | a1->m128_i8[10] & 0x9F;
  v15 = *a5;
  a1[2].m128_u64[1] = a5[1];
  v16 = *((unsigned int *)a6 + 2);
  a1[2].m128_u64[0] = v15;
  v17 = *a6;
  v47 = (__int64)&(*a6)[5 * v16];
  if ( *a6 != (__int64 *)v47 )
  {
    v46 = (__m128i *)&a1[11];
    do
    {
      v18 = *((_DWORD *)v17 + 4);
      v19 = (const __m128i *)v55;
      v20 = v17[4];
      v21 = *v17;
      v22 = v17[1];
      v23 = a1[10].m128_u32[3];
      v55[2] = v17[3];
      v24 = a1[10].m128_u32[2];
      v55[3] = v20;
      v57 = v18;
      v25 = a1[10].m128_u64[0];
      LODWORD(v26) = v24;
      v27 = v24 + 1;
      v55[0] = v21;
      v55[1] = v22;
      v56 = off_2C71F28;
      v28 = v25 + 48 * v24;
      v58 = 1;
      if ( v27 > v23 )
      {
        v33 = -1;
        v49 = 0;
        if ( v25 <= (unsigned __int64)v55 && v28 > (unsigned __int64)v55 )
        {
          v49 = 1;
          v33 = 0xAAAAAAAAAAAAAAABLL * ((__int64)((__int64)v55 - v25) >> 4);
        }
        v50 = v21;
        v34 = sub_2237400(&a1[10], v46, v27, 48, &v54);
        v21 = v50;
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
            *(_QWORD *)(v36 - 16) = off_2C71F28;
          }
          while ( v39 != v38 );
        }
        v43 = v54;
        if ( v46 != v35 )
        {
          v53 = v50;
          v52 = v54;
          v51 = v34;
          free(v35);
          v21 = v53;
          v43 = v52;
          v34 = v51;
          v26 = a1[10].m128_u32[2];
          v37 = 48 * v26;
        }
        a1[10].m128_i32[3] = v43;
        v19 = (const __m128i *)v55;
        v28 = v34 + v37;
        a1[10].m128_u64[0] = v34;
        if ( v49 )
          v19 = (const __m128i *)(v34 + 48 * v33);
      }
      v29 = v19[2].m128i_i32[2];
      v17 += 5;
      *(__m128i *)v28 = _mm_loadu_si128(v19);
      v30 = _mm_loadu_si128(v19 + 1);
      *(_DWORD *)(v28 + 40) = v29;
      LOBYTE(v29) = v19[2].m128i_i8[12];
      *(__m128i *)(v28 + 16) = v30;
      *(_BYTE *)(v28 + 44) = v29;
      *(_QWORD *)(v28 + 32) = off_2C71F28;
      v31 = a1[9].m128_u64[1];
      a1[10].m128_i32[2] = v26 + 1;
      sub_2216D40(v31, v21, v22);
    }
    while ( (__int64 *)v47 != v17 );
  }
  return sub_2218140(a1);
}
