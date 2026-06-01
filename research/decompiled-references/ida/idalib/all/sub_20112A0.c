__int64 __fastcall sub_20112A0(__m128 *a1, const char *a2, unsigned __int64 *a3, _DWORD **a4, __int64 **a5)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  __m128 v11; // xmm0
  size_t v12; // rax
  unsigned __int64 v13; // rdx
  _DWORD *v14; // rax
  __int64 *v15; // r15
  __int64 v16; // rcx
  int v17; // eax
  const __m128i *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r10
  __int64 v21; // r14
  unsigned __int64 v22; // rdi
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // r8
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  __int32 v28; // eax
  __m128i v29; // xmm4
  unsigned __int64 v30; // rdi
  unsigned __int64 v32; // r13
  __int64 v33; // rax
  __m128i *v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // rdx
  const __m128i *v37; // rsi
  const __m128i *v38; // r11
  __m128i v39; // xmm1
  __int32 v40; // r9d
  __m128i v41; // xmm2
  __int32 v42; // ecx
  __m128i *v43; // [rsp+0h] [rbp-B8h]
  __int64 v44; // [rsp+0h] [rbp-B8h]
  __int64 *v45; // [rsp+8h] [rbp-B0h]
  char v46; // [rsp+17h] [rbp-A1h]
  __int64 v47; // [rsp+28h] [rbp-90h]
  __int64 v48; // [rsp+28h] [rbp-90h]
  __int32 v49; // [rsp+30h] [rbp-88h]
  __int64 v50; // [rsp+38h] [rbp-80h]
  __int64 v51; // [rsp+48h] [rbp-70h] BYREF
  _QWORD v52[5]; // [rsp+50h] [rbp-68h] BYREF
  int v53; // [rsp+78h] [rbp-40h]
  char v54; // [rsp+7Ch] [rbp-3Ch]

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
    v44 = v9;
    sub_2237220(&a1[4], &a1[5], v10 + 1, 8);
    v10 = a1[4].m128_u32[2];
    v9 = v44;
  }
  *(_QWORD *)(a1[4].m128_u64[0] + 8 * v10) = v9;
  v11 = _mm_loadh_ps((const double *)off_2C77EF0);
  ++a1[4].m128_i32[2];
  a1[7].m128_i32[2] = 0;
  a1[8].m128_i32[2] = 0;
  a1[8].m128_i8[12] = 0;
  a1->m128_u64[0] = (unsigned __int64)&off_2C717B0;
  a1[8].m128_u64[0] = (unsigned __int64)off_2C71740;
  a1[9].m128_u64[1] = (unsigned __int64)a1;
  a1[9].m128_u64[0] = (unsigned __int64)&off_2C71760;
  v43 = (__m128i *)&a1[11];
  a1[10].m128_u64[0] = (unsigned __int64)&a1[11];
  a1[10].m128_u64[1] = 0x800000000LL;
  a1[36] = v11;
  v12 = strlen(a2);
  sub_2217250(a1, a2, v12);
  v13 = *a3;
  a1[2].m128_u64[1] = a3[1];
  v14 = *a4;
  a1[2].m128_u64[0] = v13;
  v15 = *a5;
  LODWORD(v14) = *v14;
  a1[8].m128_i8[12] = 1;
  a1[7].m128_i32[2] = (int)v14;
  a1[8].m128_i32[2] = (int)v14;
  if ( v15 != &v15[5 * *((unsigned int *)a5 + 2)] )
  {
    v45 = &v15[5 * *((unsigned int *)a5 + 2)];
    do
    {
      v16 = v15[3];
      v17 = *((_DWORD *)v15 + 4);
      v52[4] = off_2C71740;
      v18 = (const __m128i *)v52;
      v19 = v15[4];
      v20 = *v15;
      v54 = 1;
      v21 = v15[1];
      v22 = a1[10].m128_u32[3];
      v53 = v17;
      v52[2] = v16;
      v23 = a1[10].m128_u32[2];
      v52[3] = v19;
      v24 = a1[10].m128_u64[0];
      LODWORD(v25) = v23;
      v26 = v23 + 1;
      v52[0] = v20;
      v52[1] = v21;
      v27 = v24 + 48 * v23;
      if ( v26 > v22 )
      {
        v32 = -1;
        v46 = 0;
        if ( v24 <= (unsigned __int64)v52 && v27 > (unsigned __int64)v52 )
        {
          v46 = 1;
          v32 = 0xAAAAAAAAAAAAAAABLL * ((__int64)((__int64)v52 - v24) >> 4);
        }
        v47 = v20;
        v33 = sub_2237400(&a1[10], v43, v26, 48, &v51);
        v20 = v47;
        v34 = (__m128i *)a1[10].m128_u64[0];
        v35 = v33;
        v25 = a1[10].m128_u32[2];
        v36 = 48 * v25;
        v37 = v34;
        v38 = &v34[3 * v25];
        if ( v34 != v38 )
        {
          do
          {
            v39 = _mm_loadu_si128(v37);
            v40 = v37[2].m128i_i32[2];
            v37 += 3;
            v35 += 48;
            *(__m128i *)(v35 - 48) = v39;
            v41 = _mm_loadu_si128(v37 - 2);
            *(_DWORD *)(v35 - 8) = v40;
            LOBYTE(v40) = v37[-1].m128i_i8[12];
            *(__m128i *)(v35 - 32) = v41;
            *(_BYTE *)(v35 - 4) = v40;
            *(_QWORD *)(v35 - 16) = off_2C71740;
          }
          while ( v38 != v37 );
        }
        v42 = v51;
        if ( v43 != v34 )
        {
          v50 = v47;
          v49 = v51;
          v48 = v33;
          free(v34);
          v20 = v50;
          v42 = v49;
          v33 = v48;
          v25 = a1[10].m128_u32[2];
          v36 = 48 * v25;
        }
        a1[10].m128_i32[3] = v42;
        v18 = (const __m128i *)v52;
        v27 = v33 + v36;
        a1[10].m128_u64[0] = v33;
        if ( v46 )
          v18 = (const __m128i *)(v33 + 48 * v32);
      }
      v28 = v18[2].m128i_i32[2];
      v15 += 5;
      *(__m128i *)v27 = _mm_loadu_si128(v18);
      v29 = _mm_loadu_si128(v18 + 1);
      *(_DWORD *)(v27 + 40) = v28;
      LOBYTE(v28) = v18[2].m128i_i8[12];
      *(__m128i *)(v27 + 16) = v29;
      *(_BYTE *)(v27 + 44) = v28;
      *(_QWORD *)(v27 + 32) = off_2C71740;
      v30 = a1[9].m128_u64[1];
      a1[10].m128_i32[2] = v25 + 1;
      sub_2216D40(v30, v20, v21);
    }
    while ( v45 != v15 );
  }
  return sub_2218140(a1);
}
