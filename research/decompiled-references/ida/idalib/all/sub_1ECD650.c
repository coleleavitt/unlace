__int64 __fastcall sub_1ECD650(__int64 a1)
{
  int v2; // edx
  int v3; // r11d
  __int64 v4; // rdi
  int v5; // esi
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // r15
  __int64 v11; // r14
  __int8 v12; // r11
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // rcx
  __int8 v16; // r10
  __int8 v17; // r9
  __int8 v18; // r8
  __int32 v19; // edi
  __int32 v20; // esi
  __m128i *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 j; // r14
  __int64 v26; // r12
  __int64 v27; // rdi
  __int64 v28; // rsi
  __m128i v29; // xmm0
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // r13
  unsigned __int64 v32; // rcx
  __m128i v33; // xmm2
  __m128i v34; // xmm1
  __m128i v35; // xmm3
  __m128i *v36; // rax
  __int64 v37; // r15
  __int64 result; // rax
  __int64 k; // rbx
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  int v44; // r11d
  __int64 v45; // rcx
  unsigned __int64 v46; // rdx
  __m128i *v47; // rsi
  unsigned __int64 v48; // rdx
  __m128i *v49; // rsi
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // rdi
  __int32 v53; // ecx
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rcx
  __m128i v59; // xmm3
  __m128i v60; // xmm0
  __m128i v61; // xmm2
  __m128i v62; // xmm1
  __m128i *v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdi
  __int64 v66; // rsi
  __int64 v67; // rax
  __int64 v68; // rdi
  __int64 v69; // rsi
  __int64 v70; // rdx
  __int64 v71; // [rsp-10h] [rbp-98h]
  __int64 i; // [rsp+0h] [rbp-88h]
  char v73; // [rsp+2Fh] [rbp-59h] BYREF
  __m128i v74; // [rsp+30h] [rbp-58h] BYREF
  __m128i v75; // [rsp+40h] [rbp-48h]

  v2 = *(_DWORD *)(a1 + 7928);
  if ( !v2 )
  {
    v3 = *(_DWORD *)(a1 + 8168);
    v4 = *(_QWORD *)(a1 + 128);
    if ( v3 )
      goto LABEL_45;
    goto LABEL_3;
  }
  v40 = 0;
  v41 = 0;
  v4 = *(_QWORD *)(a1 + 128);
  do
  {
    while ( 1 )
    {
      if ( (*(_BYTE *)(v4 + 4168) & 1) == 0 && !*(_QWORD *)(v4 + 4168) )
      {
        v42 = *(_QWORD *)(*(_QWORD *)(a1 + 7920) + 8 * v41);
        if ( v42 )
          *(_QWORD *)(v4 + 4168) = 2 * v42 + 1;
        else
          *(_QWORD *)(v4 + 4168) = 0;
        v4 = *(_QWORD *)(a1 + 128);
      }
      if ( (*(_BYTE *)(v4 + 9872) & 1) == 0 && !*(_QWORD *)(v4 + 9872) )
      {
        v45 = *(_QWORD *)(*(_QWORD *)(a1 + 7920) + 8LL * (unsigned int)(v40 + 1));
        if ( v45 )
          *(_QWORD *)(v4 + 9872) = 2 * v45 + 1;
        else
          *(_QWORD *)(v4 + 9872) = 0;
        v4 = *(_QWORD *)(a1 + 128);
      }
      if ( (*(_BYTE *)(v4 + 9880) & 1) != 0 || *(_QWORD *)(v4 + 9880) )
        goto LABEL_36;
      v43 = *(_QWORD *)(*(_QWORD *)(a1 + 7920) + 8LL * (unsigned int)(v40 + 2));
      if ( !v43 )
        break;
      *(_QWORD *)(v4 + 9880) = 2 * v43 + 1;
      v4 = *(_QWORD *)(a1 + 128);
LABEL_36:
      v41 = (unsigned int)(v40 + 3);
      v40 = v41;
      if ( (_DWORD)v41 == v2 )
        goto LABEL_44;
    }
    *(_QWORD *)(v4 + 9880) = 0;
    v41 = (unsigned int)(v40 + 3);
    v4 = *(_QWORD *)(a1 + 128);
    v40 = v41;
  }
  while ( (_DWORD)v41 != v2 );
LABEL_44:
  v44 = *(_DWORD *)(a1 + 8168);
  *(_DWORD *)(a1 + 7928) = 0;
  if ( v44 )
  {
LABEL_45:
    sub_16665E0(v4, 0, *(_DWORD *)(a1 + 8168));
    v4 = *(_QWORD *)(a1 + 128);
  }
LABEL_3:
  v5 = *(_DWORD *)(a1 + 8172);
  if ( v5 != -1 )
  {
    sub_1665B90(v4, v5);
    v4 = *(_QWORD *)(a1 + 128);
  }
  if ( *(_DWORD *)(a1 + 8180) )
  {
    sub_1665BA0(v4, *(_DWORD *)(a1 + 8176), *(_DWORD *)(a1 + 8180));
    v4 = *(_QWORD *)(a1 + 128);
  }
  v6 = *(_BYTE *)(a1 + 8364) == 0;
  *(_DWORD *)(*(_QWORD *)(v4 + 664) + 72LL) = *(_DWORD *)(a1 + 7912);
  if ( !v6 )
  {
    v7 = *(unsigned int *)(a1 + 8384);
    if ( (_DWORD)v7 )
    {
      v8 = *(_QWORD *)(a1 + 8376);
      if ( !*(_DWORD *)(v8 + 4) )
      {
        v50 = *(_QWORD *)(a1 + 128);
        v51 = *(_QWORD *)(v8 + 16);
        v52 = *(_QWORD *)(v8 + 24);
        v53 = *(_DWORD *)(v8 + 8);
        v54 = *(_QWORD *)(v50 + 1236);
        if ( *(_DWORD *)(v50 + 1164) <= *(_DWORD *)(v50 + 1160) )
        {
          v74.m128i_i64[1] = *(_QWORD *)(v8 + 24);
          v75.m128i_i64[0] = v54;
          v75.m128i_i32[2] = v53;
          v74.m128i_i64[0] = v51;
          sub_1ECD510(v50 + 1152, &v74);
          v7 = *(unsigned int *)(a1 + 8384) - 1LL;
          v8 = *(_QWORD *)(a1 + 8376) + 32LL;
        }
        else
        {
          v55 = *(_QWORD *)(v50 + 1152) + 32LL * *(unsigned int *)(v50 + 1160);
          *(_QWORD *)v55 = v51;
          *(_QWORD *)(v55 + 8) = v52;
          *(_QWORD *)(v55 + 16) = v54;
          *(_DWORD *)(v55 + 24) = v53;
          v56 = *(_QWORD *)(a1 + 8376);
          ++*(_DWORD *)(v50 + 1160);
          v8 = v56 + 32;
          v7 = *(unsigned int *)(a1 + 8384) - 1LL;
        }
      }
      for ( i = v8 + 32 * v7; i != v8; v8 += 32 )
      {
        v9 = *(_QWORD *)(a1 + 128);
        v10 = *(_QWORD *)(v8 + 16);
        v11 = *(_QWORD *)(v8 + 24);
        v12 = *(_BYTE *)v8;
        v13 = *(unsigned int *)(v9 + 1160);
        v14 = *(_QWORD *)(v9 + 1152);
        v15 = *(unsigned int *)(v9 + 1164);
        v16 = *(_BYTE *)(v8 + 1);
        v17 = *(_BYTE *)(v8 + 2);
        v18 = *(_BYTE *)(v8 + 3);
        v19 = *(_DWORD *)(v8 + 4);
        v20 = *(_DWORD *)(v8 + 8);
        v21 = (__m128i *)(v14 + 32 * v13);
        if ( v13 >= v15 )
        {
          v46 = v13 + 1;
          v75.m128i_i32[2] = *(_DWORD *)(v8 + 8);
          v47 = &v74;
          v74.m128i_i64[0] = v10;
          v74.m128i_i64[1] = v11;
          v75.m128i_i8[0] = v12;
          v75.m128i_i8[1] = v16;
          v75.m128i_i8[2] = v17;
          v75.m128i_i8[3] = v18;
          v75.m128i_i32[1] = v19;
          if ( v15 < v46 )
          {
            v68 = v9 + 1152;
            v69 = v9 + 1168;
            if ( v14 > (unsigned __int64)&v74 || v21 <= &v74 )
            {
              sub_2237220(v68, v69, v46, 32);
              v47 = &v74;
              v21 = (__m128i *)(*(_QWORD *)(v9 + 1152) + 32LL * *(unsigned int *)(v9 + 1160));
            }
            else
            {
              sub_2237220(v68, v69, v46, 32);
              v70 = *(_QWORD *)(v9 + 1152);
              v47 = (__m128i *)((char *)&v74 + v70 - v14);
              v21 = (__m128i *)(v70 + 32LL * *(unsigned int *)(v9 + 1160));
            }
          }
          *v21 = _mm_loadu_si128(v47);
          v21[1] = _mm_loadu_si128(v47 + 1);
          ++*(_DWORD *)(v9 + 1160);
        }
        else
        {
          v21->m128i_i64[0] = v10;
          v21->m128i_i64[1] = v11;
          v21[1].m128i_i8[0] = v12;
          v21[1].m128i_i8[1] = v16;
          v21[1].m128i_i8[2] = v17;
          v21[1].m128i_i8[3] = v18;
          v21[1].m128i_i32[1] = v19;
          v21[1].m128i_i32[2] = v20;
          ++*(_DWORD *)(v9 + 1160);
        }
      }
    }
    if ( *(_DWORD *)(a1 + 8368) )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 128) + 1236LL) = *(_DWORD *)(a1 + 8360);
      *(_DWORD *)(*(_QWORD *)(a1 + 128) + 1240LL) = *(_DWORD *)(a1 + 8368);
    }
  }
  if ( *(_BYTE *)(a1 + 0x2000) )
  {
    v22 = *(unsigned int *)(a1 + 8208);
    if ( (_DWORD)v22 )
    {
      v23 = *(_QWORD *)(a1 + 8200);
      if ( !*(_DWORD *)(v23 + 8) )
      {
        v57 = *(_QWORD *)(a1 + 128);
        v58 = *(_QWORD *)(v23 + 24);
        v59 = _mm_cvtsi32_si128(*(_DWORD *)(v23 + 12));
        v60 = _mm_cvtsi32_si128(*(_DWORD *)(v57 + 1952));
        v61 = _mm_cvtsi32_si128(*(_DWORD *)(v57 + 1956));
        v62 = _mm_cvtsi32_si128(*(_DWORD *)(v57 + 1960));
        if ( *(_DWORD *)(v57 + 1876) <= *(_DWORD *)(v57 + 1872) )
        {
          v74.m128i_i64[0] = *(_QWORD *)(v23 + 16);
          v74.m128i_i64[1] = v58;
          v75 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v60, v61), _mm_unpacklo_epi32(v62, v59));
          sub_1ECD5B0(v57 + 1864, &v74);
          v22 = *(unsigned int *)(a1 + 8208) - 1LL;
          v23 = *(_QWORD *)(a1 + 8200) + 32LL;
        }
        else
        {
          v63 = (__m128i *)(*(_QWORD *)(v57 + 1864) + 32LL * *(unsigned int *)(v57 + 1872));
          v63->m128i_i64[0] = *(_QWORD *)(v23 + 16);
          v63->m128i_i64[1] = v58;
          v63[1] = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v60, v61), _mm_unpacklo_epi32(v62, v59));
          v64 = *(_QWORD *)(a1 + 8200);
          ++*(_DWORD *)(v57 + 1872);
          v23 = v64 + 32;
          v22 = *(unsigned int *)(a1 + 8208) - 1LL;
        }
      }
      v24 = 32 * v22;
      for ( j = v23 + v24; j != v23; v23 += 32 )
      {
        v26 = *(_QWORD *)(a1 + 128);
        v27 = *(_QWORD *)(v23 + 16);
        v28 = *(_QWORD *)(v23 + 24);
        v29 = _mm_cvtsi32_si128(*(_DWORD *)v23);
        v30 = *(unsigned int *)(v26 + 1872);
        v31 = *(_QWORD *)(v26 + 1864);
        v32 = *(unsigned int *)(v26 + 1876);
        v33 = _mm_cvtsi32_si128(*(_DWORD *)(v23 + 4));
        v34 = _mm_cvtsi32_si128(*(_DWORD *)(v23 + 8));
        v35 = _mm_cvtsi32_si128(*(_DWORD *)(v23 + 12));
        v36 = (__m128i *)(v31 + 32 * v30);
        if ( v30 >= v32 )
        {
          v48 = v30 + 1;
          v74.m128i_i64[1] = *(_QWORD *)(v23 + 24);
          v74.m128i_i64[0] = v27;
          v49 = &v74;
          v75 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v29, v33), _mm_unpacklo_epi32(v34, v35));
          if ( v32 < v48 )
          {
            v65 = v26 + 1864;
            v66 = v26 + 1880;
            if ( v31 > (unsigned __int64)&v74 || v36 <= &v74 )
            {
              sub_2237220(v65, v66, v48, 32);
              v49 = &v74;
              v36 = (__m128i *)(*(_QWORD *)(v26 + 1864) + 32LL * *(unsigned int *)(v26 + 1872));
            }
            else
            {
              sub_2237220(v65, v66, v48, 32);
              v67 = *(_QWORD *)(v26 + 1864);
              v49 = (__m128i *)((char *)&v74 + v67 - v31);
              v36 = (__m128i *)(32LL * *(unsigned int *)(v26 + 1872) + v67);
            }
          }
          *v36 = _mm_loadu_si128(v49);
          v36[1] = _mm_loadu_si128(v49 + 1);
          ++*(_DWORD *)(v26 + 1872);
        }
        else
        {
          v36->m128i_i64[0] = v27;
          v36->m128i_i64[1] = v28;
          v36[1] = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v29, v33), _mm_unpacklo_epi32(v34, v35));
          ++*(_DWORD *)(v26 + 1872);
        }
      }
    }
    if ( *(_DWORD *)(a1 + 8196) )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 128) + 1952LL) = *(_QWORD *)(a1 + 8184);
      *(_DWORD *)(*(_QWORD *)(a1 + 128) + 1960LL) = *(_DWORD *)(a1 + 8196);
    }
  }
  v37 = *(_QWORD *)(a1 + 9192);
  result = *(unsigned int *)(a1 + 9200);
  for ( k = v37 + 8 * result; k != v37; v37 += 8 )
  {
    if ( *(_DWORD *)(v37 + 4) )
    {
      result = sub_1EAD760(a1, *(_DWORD *)v37);
      if ( result )
      {
        sub_FF1730(
          *(_QWORD *)(a1 + 128) + 11128LL,
          result,
          *(_DWORD *)(v37 + 4),
          1,
          (__int64)nullsub_1204,
          (__int64)&v73,
          (char)nullsub_1205);
        result = v71;
      }
    }
  }
  *(_DWORD *)(a1 + 9200) = 0;
  return result;
}
