__int64 __fastcall sub_20139C0(__m128 *a1, const char *a2, _DWORD **a3, __int64 **a4, _BYTE *a5, _QWORD *a6)
{
  __int64 v10; // rax
  __int64 v11; // rcx
  __m128 v12; // xmm0
  size_t v13; // rax
  _DWORD *v14; // rax
  __int64 *v15; // r15
  __int64 *v16; // r13
  __int64 v17; // rcx
  int v18; // eax
  const __m128i *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // r10
  __int64 v22; // r15
  __int64 v23; // rcx
  unsigned __int64 v24; // rdi
  __int64 v25; // r8
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rcx
  __int32 v29; // eax
  __m128i v30; // xmm4
  unsigned __int64 v31; // rdi
  unsigned __int64 v32; // rax
  unsigned __int64 v34; // r12
  __int64 v35; // rax
  __m128i *v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // rdx
  const __m128i *v39; // rsi
  const __m128i *v40; // r11
  __m128i v41; // xmm1
  __int32 v42; // r9d
  __m128i v43; // xmm2
  __int32 v44; // ecx
  __m128i *v45; // [rsp+0h] [rbp-C8h]
  __int64 v46; // [rsp+0h] [rbp-C8h]
  __int64 *v47; // [rsp+8h] [rbp-C0h]
  char v49; // [rsp+1Fh] [rbp-A9h]
  _QWORD *v50; // [rsp+20h] [rbp-A8h]
  __int64 v51; // [rsp+38h] [rbp-90h]
  __int64 v52; // [rsp+38h] [rbp-90h]
  __int32 v53; // [rsp+40h] [rbp-88h]
  __int64 v54; // [rsp+48h] [rbp-80h]
  __int64 v55; // [rsp+58h] [rbp-70h] BYREF
  _QWORD v56[5]; // [rsp+60h] [rbp-68h] BYREF
  int v57; // [rsp+88h] [rbp-40h]
  char v58; // [rsp+8Ch] [rbp-3Ch]

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
    v46 = v10;
    sub_2237220(&a1[4], &a1[5], v11 + 1, 8);
    v11 = a1[4].m128_u32[2];
    v10 = v46;
  }
  *(_QWORD *)(a1[4].m128_u64[0] + 8 * v11) = v10;
  v12 = _mm_loadh_ps((const double *)off_2C78B88);
  ++a1[4].m128_i32[2];
  a1[7].m128_i32[2] = 0;
  a1[8].m128_i32[2] = 0;
  a1[8].m128_i8[12] = 0;
  a1->m128_u64[0] = (unsigned __int64)&off_2C71AC0;
  a1[8].m128_u64[0] = (unsigned __int64)off_2C71A50;
  a1[9].m128_u64[1] = (unsigned __int64)a1;
  a1[9].m128_u64[0] = (unsigned __int64)&off_2C71A70;
  v45 = (__m128i *)&a1[11];
  a1[10].m128_u64[0] = (unsigned __int64)&a1[11];
  a1[10].m128_u64[1] = 0x800000000LL;
  a1[36] = v12;
  v13 = strlen(a2);
  sub_2217250(a1, a2, v13);
  v14 = *a3;
  v15 = *a4;
  LODWORD(v14) = *v14;
  a1[8].m128_i8[12] = 1;
  a1[7].m128_i32[2] = (int)v14;
  a1[8].m128_i32[2] = (int)v14;
  v47 = &v15[5 * *((unsigned int *)a4 + 2)];
  if ( v15 != v47 )
  {
    v50 = a6;
    v16 = v15;
    do
    {
      v17 = v16[3];
      v18 = *((_DWORD *)v16 + 4);
      v56[4] = off_2C71A50;
      v19 = (const __m128i *)v56;
      v20 = v16[4];
      v21 = *v16;
      v58 = 1;
      v22 = v16[1];
      v56[2] = v17;
      v23 = a1[10].m128_u32[2];
      v56[3] = v20;
      v57 = v18;
      v24 = a1[10].m128_u32[3];
      LODWORD(v25) = v23;
      v26 = v23 + 1;
      v27 = a1[10].m128_u64[0];
      v56[0] = v21;
      v56[1] = v22;
      v28 = v27 + 48 * v23;
      if ( v26 > v24 )
      {
        v34 = -1;
        v49 = 0;
        if ( v27 <= (unsigned __int64)v56 && v28 > (unsigned __int64)v56 )
        {
          v49 = 1;
          v34 = 0xAAAAAAAAAAAAAAABLL * ((__int64)((__int64)v56 - v27) >> 4);
        }
        v51 = v21;
        v35 = sub_2237400(&a1[10], v45, v26, 48, &v55);
        v21 = v51;
        v36 = (__m128i *)a1[10].m128_u64[0];
        v37 = v35;
        v25 = a1[10].m128_u32[2];
        v38 = 48 * v25;
        v39 = v36;
        v40 = &v36[3 * v25];
        if ( v36 != v40 )
        {
          do
          {
            v41 = _mm_loadu_si128(v39);
            v42 = v39[2].m128i_i32[2];
            v39 += 3;
            v37 += 48;
            *(__m128i *)(v37 - 48) = v41;
            v43 = _mm_loadu_si128(v39 - 2);
            *(_DWORD *)(v37 - 8) = v42;
            LOBYTE(v42) = v39[-1].m128i_i8[12];
            *(__m128i *)(v37 - 32) = v43;
            *(_BYTE *)(v37 - 4) = v42;
            *(_QWORD *)(v37 - 16) = off_2C71A50;
          }
          while ( v40 != v39 );
        }
        v44 = v55;
        if ( v45 != v36 )
        {
          v54 = v51;
          v53 = v55;
          v52 = v35;
          free(v36);
          v21 = v54;
          v44 = v53;
          v35 = v52;
          v25 = a1[10].m128_u32[2];
          v38 = 48 * v25;
        }
        a1[10].m128_i32[3] = v44;
        v19 = (const __m128i *)v56;
        v28 = v35 + v38;
        a1[10].m128_u64[0] = v35;
        if ( v49 )
          v19 = (const __m128i *)(v35 + 48 * v34);
      }
      v29 = v19[2].m128i_i32[2];
      v16 += 5;
      *(__m128i *)v28 = _mm_loadu_si128(v19);
      v30 = _mm_loadu_si128(v19 + 1);
      *(_DWORD *)(v28 + 40) = v29;
      LOBYTE(v29) = v19[2].m128i_i8[12];
      *(__m128i *)(v28 + 16) = v30;
      *(_BYTE *)(v28 + 44) = v29;
      *(_QWORD *)(v28 + 32) = off_2C71A50;
      v31 = a1[9].m128_u64[1];
      a1[10].m128_i32[2] = v25 + 1;
      sub_2216D40(v31, v21, v22);
    }
    while ( v47 != v16 );
    a6 = v50;
  }
  a1->m128_i8[10] = (32 * (*a5 & 3)) | a1->m128_i8[10] & 0x9F;
  v32 = a6[1];
  a1[2].m128_u64[0] = *a6;
  a1[2].m128_u64[1] = v32;
  return sub_2218140(a1);
}
