__m128i *__fastcall CoinPackedVector::assignVector(CoinPackedVector *this, int a2, int **a3, double **a4, char a5)
{
  __m128i *result; // rax
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  int v14; // edx
  int v15; // edx
  int v16; // r8d
  int v17; // r9d
  __m128i si128; // xmm0
  unsigned int v19; // esi
  __m128i *v20; // rdx
  unsigned int v21; // ecx
  __m128i v22; // xmm14
  __m128i v23; // xmm13
  __m128i v24; // xmm12
  __m128i v25; // xmm11
  __m128i v26; // xmm10
  __m128i v27; // xmm9
  __m128i v28; // xmm2
  __m128i v29; // xmm4
  __m128i v30; // xmm2
  __m128i v31; // xmm5
  __m128i v32; // xmm7
  __m128i v33; // xmm3
  __m128i v34; // xmm1
  __m128i v35; // xmm5
  __m128i v36; // xmm15
  __m128i v37; // xmm7
  __m128i v38; // xmm3
  __m128i v39; // xmm15
  __m128i v40; // xmm8
  __m128i v41; // xmm6
  __m128i v42; // xmm15
  __m128i v43; // xmm8
  __m128i v44; // xmm4
  __m128i v45; // xmm8
  __m128i v46; // xmm7
  __m128i v47; // xmm2
  __m128i v48; // xmm7
  __m128i v49; // xmm3
  __m128i v50; // xmm5
  __m128i v51; // xmm3
  __m128i v52; // xmm15
  __m128i v53; // xmm1
  __m128i v54; // xmm15
  int v55; // r10d
  unsigned int v56; // ecx
  unsigned int *v57; // rdx
  int v58; // r8d

  result = (__m128i *)CoinPackedVector::clear(this);
  if ( !a2 )
    goto LABEL_29;
  v11 = *((void **)this + 4);
  *((_DWORD *)this + 12) = a2;
  if ( v11 )
    operator delete[](v11);
  v12 = *((void **)this + 5);
  *((_QWORD *)this + 4) = *a3;
  *a3 = nullptr;
  if ( v12 )
    operator delete[](v12);
  v13 = *((void **)this + 7);
  *((_QWORD *)this + 5) = *a4;
  *a4 = nullptr;
  if ( v13 )
    operator delete[](v13);
  if ( (unsigned __int64)a2 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  result = (__m128i *)operator new[](4LL * a2);
  v14 = a2 + 7;
  *((_QWORD *)this + 7) = result;
  if ( a2 >= 0 )
    v14 = a2;
  v15 = v14 >> 3;
  v16 = v15;
  if ( v15 <= 0 )
  {
    v58 = 0;
    goto LABEL_20;
  }
  v17 = v15 - 1;
  if ( v15 - 1 <= 2 )
  {
    v57 = (unsigned int *)result;
    v55 = v16;
    v56 = 0;
    goto LABEL_16;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_290820);
  v19 = (unsigned int)v15 >> 2;
  v20 = result;
  v21 = 0;
  v22 = _mm_load_si128((const __m128i *)&xmmword_290830);
  v23 = _mm_load_si128((const __m128i *)&xmmword_289C00);
  v24 = _mm_load_si128((const __m128i *)&xmmword_28CCB0);
  v25 = _mm_load_si128((const __m128i *)&xmmword_290840);
  v26 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
  v27 = _mm_load_si128((const __m128i *)&xmmword_290850);
  do
  {
    ++v21;
    v28 = _mm_add_epi32(si128, v26);
    v20 += 8;
    v29 = _mm_unpacklo_epi32(si128, v28);
    v30 = _mm_unpackhi_epi32(si128, v28);
    v31 = _mm_add_epi32(si128, v23);
    v32 = _mm_add_epi32(si128, v27);
    v33 = _mm_add_epi32(si128, v24);
    v34 = _mm_unpackhi_epi32(v31, v32);
    v35 = _mm_unpacklo_epi32(v31, v32);
    v36 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_290860), si128);
    v37 = _mm_unpacklo_epi32(v33, v36);
    v38 = _mm_unpackhi_epi32(v33, v36);
    v39 = _mm_add_epi32(si128, v25);
    v40 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_290870), si128);
    v41 = _mm_unpackhi_epi32(v39, v40);
    si128 = _mm_add_epi32(si128, v22);
    v42 = _mm_unpacklo_epi32(v39, v40);
    v43 = v29;
    v44 = _mm_unpackhi_epi32(v29, v37);
    v45 = _mm_unpacklo_epi32(v43, v37);
    v46 = v30;
    v47 = _mm_unpackhi_epi32(v30, v38);
    v48 = _mm_unpacklo_epi32(v46, v38);
    v49 = v35;
    v50 = _mm_unpackhi_epi32(v35, v42);
    v51 = _mm_unpacklo_epi32(v49, v42);
    v52 = v34;
    v53 = _mm_unpackhi_epi32(v34, v41);
    v54 = _mm_unpacklo_epi32(v52, v41);
    v20[-8] = _mm_unpacklo_epi32(v45, v51);
    v20[-6] = _mm_unpacklo_epi32(v44, v50);
    v20[-7] = _mm_unpackhi_epi32(v45, v51);
    v20[-4] = _mm_unpacklo_epi32(v48, v54);
    v20[-5] = _mm_unpackhi_epi32(v44, v50);
    v20[-3] = _mm_unpackhi_epi32(v48, v54);
    v20[-2] = _mm_unpacklo_epi32(v47, v53);
    v20[-1] = _mm_unpackhi_epi32(v47, v53);
  }
  while ( v19 > v21 );
  v55 = v16 - (v16 & 0xFFFFFFFC);
  v56 = 8 * (v16 & 0xFFFFFFFC);
  v57 = (unsigned int *)&result[2 * (v16 & 0xFFFFFFFC)];
  if ( (v16 & 0xFFFFFFFC) != v16 )
  {
LABEL_16:
    *v57 = v56;
    v57[1] = v56 + 1;
    v57[2] = v56 + 2;
    v57[3] = v56 + 3;
    v57[4] = v56 + 4;
    v57[5] = v56 + 5;
    v57[6] = v56 + 6;
    v57[7] = v56 + 7;
    if ( v55 != 1 )
    {
      v57[8] = v56 + 8;
      v57[9] = v56 + 9;
      v57[10] = v56 + 10;
      v57[11] = v56 + 11;
      v57[12] = v56 + 12;
      v57[13] = v56 + 13;
      v57[14] = v56 + 14;
      v57[15] = v56 + 15;
      if ( v55 != 2 )
      {
        v57[16] = v56 + 16;
        v57[17] = v56 + 17;
        v57[18] = v56 + 18;
        v57[19] = v56 + 19;
        v57[20] = v56 + 20;
        v57[21] = v56 + 21;
        v57[23] = v56 + 23;
        v57[22] = v56 + 22;
      }
    }
  }
  v58 = 8 * v16;
  result += 2 * v17 + 2;
LABEL_20:
  switch ( a2 % 8 )
  {
    case 1:
      goto LABEL_27;
    case 2:
      goto LABEL_26;
    case 3:
      goto LABEL_25;
    case 4:
      goto LABEL_24;
    case 5:
      goto LABEL_23;
    case 6:
      goto LABEL_22;
    case 7:
      result[1].m128i_i32[2] = v58 + 6;
LABEL_22:
      result[1].m128i_i32[1] = v58 + 5;
LABEL_23:
      result[1].m128i_i32[0] = v58 + 4;
LABEL_24:
      result->m128i_i32[3] = v58 + 3;
LABEL_25:
      result->m128i_i32[2] = v58 + 2;
LABEL_26:
      result->m128i_i32[1] = v58 + 1;
LABEL_27:
      result->m128i_i32[0] = v58;
      break;
    default:
      break;
  }
  *((_DWORD *)this + 16) = a2;
LABEL_29:
  if ( a5 )
    return (__m128i *)CoinPackedVectorBase::setTestForDuplicateIndex(this, 1);
  *((_BYTE *)this + 24) = 0;
  *((_BYTE *)this + 25) = 0;
  return result;
}

