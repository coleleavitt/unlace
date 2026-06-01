void __fastcall sub_1F6F8B0(_QWORD *a1, __int64 a2)
{
  int v4; // esi
  int v5; // eax
  __int64 v6; // rbx
  unsigned int v7; // ecx
  __int64 v8; // r14
  int v9; // eax
  __int64 v10; // rbp
  __int64 v11; // rax
  int v12; // esi
  __int64 v13; // rax
  const __m128i *v14; // r8
  __int64 v15; // rbp
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int8 *v19; // rdi
  const __m128i *v20; // rcx
  __m128i *v21; // rax
  __m128i v22; // xmm0
  __m128i v23; // xmm2
  __m128i v24; // xmm1
  __m128i v25; // xmm0
  __m128i v26; // xmm3
  __m128i v27; // xmm7
  __m128i v28; // xmm2
  __m128i v29; // xmm1
  __m128i v30; // xmm3
  __m128i v31; // xmm0
  __m128i v32; // xmm7
  __m128i v33; // xmm8
  __m128i v34; // xmm2
  __m128i v35; // xmm8
  __m128i v36; // xmm7
  __m128i v37; // xmm2
  __m128i v38; // xmm1
  __m128i v39; // xmm2
  __m128i v40; // xmm3
  __m128i v41; // xmm1
  unsigned __int64 v42; // rcx
  char *v43; // r8
  char *v44; // rax
  __int64 i; // rax
  const __m128i *v46; // [rsp+8h] [rbp-250h]
  const __m128i *v47; // [rsp+8h] [rbp-250h]
  void *ptr; // [rsp+10h] [rbp-248h] BYREF
  __int64 v49; // [rsp+18h] [rbp-240h]
  _BYTE v50[568]; // [rsp+20h] [rbp-238h] BYREF

  v4 = 2 * *(unsigned __int8 *)(a2 + 1237);
  ptr = v50;
  v49 = 0x4000000000LL;
  v5 = v4 | *(unsigned __int8 *)(a2 + 1239);
  if ( *(_BYTE *)(a2 + 1236) )
    v5 |= 8u;
  sub_9B9C90((__int64)&ptr, v5 | (16 * (unsigned int)*(unsigned __int8 *)(a2 + 1238)));
  sub_1F6F570(a1, *(_DWORD *)(a2 + 1240), (__int64)&ptr);
  sub_9B9C90((__int64)&ptr, *(unsigned int *)(a2 + 1160));
  v6 = *(_QWORD *)(a2 + 1152);
  v7 = v49;
  v8 = v6 + 32LL * *(unsigned int *)(a2 + 1160);
  if ( v6 != v8 )
  {
    while ( 1 )
    {
      v9 = (2 * *(unsigned __int8 *)(v6 + 17)) | *(unsigned __int8 *)(v6 + 19);
      if ( *(_BYTE *)(v6 + 16) )
        v9 |= 8u;
      v10 = v9 | (16 * (unsigned int)*(unsigned __int8 *)(v6 + 18));
      v11 = v7;
      if ( (unsigned __int64)v7 + 1 > HIDWORD(v49) )
      {
        sub_2237220(&ptr, v50, v7 + 1LL, 8);
        v11 = (unsigned int)v49;
      }
      *((_QWORD *)ptr + v11) = v10;
      v12 = *(_DWORD *)(v6 + 20);
      LODWORD(v49) = v49 + 1;
      sub_1F6F570(a1, v12, (__int64)&ptr);
      sub_1F6F570(a1, *(_DWORD *)(v6 + 24), (__int64)&ptr);
      v13 = (unsigned int)v49;
      v14 = *(const __m128i **)v6;
      v15 = *(_QWORD *)(v6 + 8);
      v16 = (unsigned int)v49 + 1LL;
      if ( v16 > HIDWORD(v49) )
      {
        v46 = *(const __m128i **)v6;
        sub_2237220(&ptr, v50, v16, 8);
        v13 = (unsigned int)v49;
        v14 = v46;
      }
      *((_QWORD *)ptr + v13) = v15;
      v17 = (unsigned int)(v49 + 1);
      v18 = v15 + v17;
      LODWORD(v49) = v49 + 1;
      if ( v15 + v17 > (unsigned __int64)HIDWORD(v49) )
      {
        v47 = v14;
        sub_2237220(&ptr, v50, v18, 8);
        v17 = (unsigned int)v49;
        v14 = v47;
        v18 = v15 + (unsigned int)v49;
      }
      v19 = (char *)ptr + 8 * v17;
      if ( v15 <= 0 )
        goto LABEL_33;
      if ( (v19 >= &v14->m128i_i8[v15] || v14 >= (const __m128i *)((char *)ptr + 8 * v18))
        && (unsigned __int64)(v15 - 1) > 0xE )
      {
        v20 = v14;
        v21 = (__m128i *)((char *)ptr + 8 * v17);
        do
        {
          v22 = _mm_loadu_si128(v20++);
          v21 += 8;
          v23 = _mm_cmpgt_epi8((__m128i)0LL, v22);
          v24 = _mm_unpacklo_epi8(v22, v23);
          v25 = _mm_unpackhi_epi8(v22, v23);
          v26 = _mm_cmpgt_epi16((__m128i)0LL, v24);
          v27 = _mm_cmpgt_epi16((__m128i)0LL, v25);
          v28 = _mm_unpacklo_epi16(v24, v26);
          v29 = _mm_unpackhi_epi16(v24, v26);
          v30 = _mm_unpacklo_epi16(v25, v27);
          v31 = _mm_unpackhi_epi16(v25, v27);
          v32 = _mm_cmpgt_epi32((__m128i)0LL, v28);
          v33 = v28;
          v34 = _mm_unpackhi_epi32(v28, v32);
          v35 = _mm_unpacklo_epi32(v33, v32);
          v36 = v29;
          v21[-7] = v34;
          v37 = _mm_cmpgt_epi32((__m128i)0LL, v29);
          v21[-8] = v35;
          v21[-5] = _mm_unpackhi_epi32(v29, v37);
          v38 = _mm_cmpgt_epi32((__m128i)0LL, v30);
          v21[-6] = _mm_unpacklo_epi32(v36, v37);
          v39 = _mm_unpacklo_epi32(v30, v38);
          v40 = _mm_unpackhi_epi32(v30, v38);
          v41 = _mm_cmpgt_epi32((__m128i)0LL, v31);
          v21[-4] = v39;
          v21[-3] = v40;
          v21[-2] = _mm_unpacklo_epi32(v31, v41);
          v21[-1] = _mm_unpackhi_epi32(v31, v41);
        }
        while ( v20 != (const __m128i *)&v14->m128i_i8[v15 & 0xFFFFFFFFFFFFFFF0LL] );
        v42 = v15 - (v15 & 0xFFFFFFFFFFFFFFF0LL);
        v43 = &v14->m128i_i8[v15 & 0xFFFFFFFFFFFFFFF0LL];
        v44 = &v19[8 * (v15 & 0xFFFFFFFFFFFFFFF0LL)];
        if ( v15 != (v15 & 0xFFFFFFFFFFFFFFF0LL) )
        {
          *(_QWORD *)v44 = *v43;
          if ( v42 != 1 )
          {
            *((_QWORD *)v44 + 1) = v43[1];
            if ( v42 != 2 )
            {
              *((_QWORD *)v44 + 2) = v43[2];
              if ( v42 != 3 )
              {
                *((_QWORD *)v44 + 3) = v43[3];
                if ( v42 != 4 )
                {
                  *((_QWORD *)v44 + 4) = v43[4];
                  if ( v42 != 5 )
                  {
                    *((_QWORD *)v44 + 5) = v43[5];
                    if ( v42 != 6 )
                    {
                      *((_QWORD *)v44 + 6) = v43[6];
                      if ( v42 != 7 )
                      {
                        *((_QWORD *)v44 + 7) = v43[7];
                        if ( v42 != 8 )
                        {
                          *((_QWORD *)v44 + 8) = v43[8];
                          if ( v42 != 9 )
                          {
                            *((_QWORD *)v44 + 9) = v43[9];
                            if ( v42 != 10 )
                            {
                              *((_QWORD *)v44 + 10) = v43[10];
                              if ( v42 != 11 )
                              {
                                *((_QWORD *)v44 + 11) = v43[11];
                                if ( v42 != 12 )
                                {
                                  *((_QWORD *)v44 + 12) = v43[12];
                                  if ( v42 != 13 )
                                  {
                                    *((_QWORD *)v44 + 13) = v43[13];
                                    if ( v42 != 14 )
                                      *((_QWORD *)v44 + 14) = v43[14];
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_33:
        v6 += 32;
        v7 = v18;
        LODWORD(v49) = v18;
        if ( v8 == v6 )
          break;
      }
      else
      {
        for ( i = 0; i != v15; ++i )
          *(_QWORD *)&v19[8 * i] = v14->m128i_i8[i];
        v6 += 32;
        v7 = v18;
        LODWORD(v49) = v18;
        if ( v8 == v6 )
          break;
      }
    }
  }
  sub_1F6EB90(a1[2], 0x3Du, (__int64)&ptr);
  if ( ptr != v50 )
    free(ptr);
}
