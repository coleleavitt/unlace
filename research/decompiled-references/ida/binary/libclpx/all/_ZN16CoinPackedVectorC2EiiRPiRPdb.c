// Alternative name is '_ZN16CoinPackedVectorC1EiiRPiRPdb'
void __fastcall CoinPackedVector::CoinPackedVector(CoinPackedVector *this, int a2, int a3, int **a4, double **a5)
{
  __int64 v8; // rax
  unsigned int *v9; // rax
  unsigned int v10; // ecx
  int v11; // r9d
  unsigned int v12; // r10d
  __m128i si128; // xmm0
  unsigned int v14; // esi
  __m128i *v15; // rdx
  unsigned int v16; // ecx
  __m128i v17; // xmm14
  __m128i v18; // xmm13
  __m128i v19; // xmm12
  __m128i v20; // xmm11
  __m128i v21; // xmm10
  __m128i v22; // xmm9
  __m128i v23; // xmm2
  __m128i v24; // xmm4
  __m128i v25; // xmm2
  __m128i v26; // xmm5
  __m128i v27; // xmm7
  __m128i v28; // xmm3
  __m128i v29; // xmm1
  __m128i v30; // xmm5
  __m128i v31; // xmm15
  __m128i v32; // xmm7
  __m128i v33; // xmm3
  __m128i v34; // xmm15
  __m128i v35; // xmm8
  __m128i v36; // xmm6
  __m128i v37; // xmm15
  __m128i v38; // xmm8
  __m128i v39; // xmm4
  __m128i v40; // xmm8
  __m128i v41; // xmm7
  __m128i v42; // xmm2
  __m128i v43; // xmm7
  __m128i v44; // xmm3
  __m128i v45; // xmm5
  __m128i v46; // xmm3
  __m128i v47; // xmm15
  __m128i v48; // xmm1
  __m128i v49; // xmm15
  unsigned int v50; // r8d
  unsigned int *v51; // rdx
  int v52; // ecx

  CoinPackedVectorBase::CoinPackedVectorBase(this);
  *(_QWORD *)this = off_4D1A98;
  *((_QWORD *)this + 4) = *a4;
  v8 = (__int64)*a5;
  *((_DWORD *)this + 12) = a3;
  *((_QWORD *)this + 7) = 0;
  *((_DWORD *)this + 16) = a2;
  *((_QWORD *)this + 5) = v8;
  *a4 = nullptr;
  *a5 = nullptr;
  if ( (unsigned __int64)a2 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v9 = (unsigned int *)operator new[](4LL * a2);
  *((_QWORD *)this + 7) = v9;
  if ( a3 )
  {
    v10 = a3 / 8;
    v11 = a3 / 8;
    if ( a3 / 8 <= 0 )
    {
      v52 = 0;
LABEL_12:
      switch ( a3 % 8 )
      {
        case 1:
          goto LABEL_19;
        case 2:
          goto LABEL_18;
        case 3:
          goto LABEL_17;
        case 4:
          goto LABEL_16;
        case 5:
          goto LABEL_15;
        case 6:
          goto LABEL_14;
        case 7:
          v9[6] = v52 + 6;
LABEL_14:
          v9[5] = v52 + 5;
LABEL_15:
          v9[4] = v52 + 4;
LABEL_16:
          v9[3] = v52 + 3;
LABEL_17:
          v9[2] = v52 + 2;
LABEL_18:
          v9[1] = v52 + 1;
LABEL_19:
          *v9 = v52;
          break;
        default:
          return;
      }
      return;
    }
    v12 = v10 - 1;
    if ( (int)(v10 - 1) <= 2 )
    {
      v51 = v9;
      v50 = 0;
    }
    else
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_290820);
      v14 = v10 >> 2;
      v15 = (__m128i *)v9;
      v16 = 0;
      v17 = _mm_load_si128((const __m128i *)&xmmword_290830);
      v18 = _mm_load_si128((const __m128i *)&xmmword_289C00);
      v19 = _mm_load_si128((const __m128i *)&xmmword_28CCB0);
      v20 = _mm_load_si128((const __m128i *)&xmmword_290840);
      v21 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
      v22 = _mm_load_si128((const __m128i *)&xmmword_290850);
      do
      {
        ++v16;
        v23 = _mm_add_epi32(si128, v21);
        v15 += 8;
        v24 = _mm_unpacklo_epi32(si128, v23);
        v25 = _mm_unpackhi_epi32(si128, v23);
        v26 = _mm_add_epi32(si128, v18);
        v27 = _mm_add_epi32(si128, v22);
        v28 = _mm_add_epi32(si128, v19);
        v29 = _mm_unpackhi_epi32(v26, v27);
        v30 = _mm_unpacklo_epi32(v26, v27);
        v31 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_290860), si128);
        v32 = _mm_unpacklo_epi32(v28, v31);
        v33 = _mm_unpackhi_epi32(v28, v31);
        v34 = _mm_add_epi32(si128, v20);
        v35 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_290870), si128);
        v36 = _mm_unpackhi_epi32(v34, v35);
        si128 = _mm_add_epi32(si128, v17);
        v37 = _mm_unpacklo_epi32(v34, v35);
        v38 = v24;
        v39 = _mm_unpackhi_epi32(v24, v32);
        v40 = _mm_unpacklo_epi32(v38, v32);
        v41 = v25;
        v42 = _mm_unpackhi_epi32(v25, v33);
        v43 = _mm_unpacklo_epi32(v41, v33);
        v44 = v30;
        v45 = _mm_unpackhi_epi32(v30, v37);
        v46 = _mm_unpacklo_epi32(v44, v37);
        v47 = v29;
        v48 = _mm_unpackhi_epi32(v29, v36);
        v49 = _mm_unpacklo_epi32(v47, v36);
        v15[-8] = _mm_unpacklo_epi32(v40, v46);
        v15[-6] = _mm_unpacklo_epi32(v39, v45);
        v15[-7] = _mm_unpackhi_epi32(v40, v46);
        v15[-4] = _mm_unpacklo_epi32(v43, v49);
        v15[-5] = _mm_unpackhi_epi32(v39, v45);
        v15[-3] = _mm_unpackhi_epi32(v43, v49);
        v15[-2] = _mm_unpacklo_epi32(v42, v48);
        v15[-1] = _mm_unpackhi_epi32(v42, v48);
      }
      while ( v16 < v14 );
      v10 = v11 - (v11 & 0xFFFFFFFC);
      v50 = 8 * (v11 & 0xFFFFFFFC);
      v51 = &v9[8 * (v11 & 0xFFFFFFFC)];
      if ( v11 == (v11 & 0xFFFFFFFC) )
      {
LABEL_11:
        v52 = 8 * v11;
        v9 += 8 * (int)v12 + 8;
        goto LABEL_12;
      }
    }
    *v51 = v50;
    v51[1] = v50 + 1;
    v51[2] = v50 + 2;
    v51[3] = v50 + 3;
    v51[4] = v50 + 4;
    v51[5] = v50 + 5;
    v51[6] = v50 + 6;
    v51[7] = v50 + 7;
    if ( v10 != 1 )
    {
      v51[8] = v50 + 8;
      v51[9] = v50 + 9;
      v51[10] = v50 + 10;
      v51[11] = v50 + 11;
      v51[12] = v50 + 12;
      v51[13] = v50 + 13;
      v51[14] = v50 + 14;
      v51[15] = v50 + 15;
      if ( v10 != 2 )
      {
        v51[16] = v50 + 16;
        v51[17] = v50 + 17;
        v51[18] = v50 + 18;
        v51[19] = v50 + 19;
        v51[20] = v50 + 20;
        v51[21] = v50 + 21;
        v51[22] = v50 + 22;
        v51[23] = v50 + 23;
      }
    }
    goto LABEL_11;
  }
}

