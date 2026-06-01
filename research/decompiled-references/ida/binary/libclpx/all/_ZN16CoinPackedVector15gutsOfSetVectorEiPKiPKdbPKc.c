void __fastcall CoinPackedVector::gutsOfSetVector(
        unsigned int **this,
        int a2,
        const int *a3,
        const double *a4,
        int a5,
        const char *a6)
{
  int v7; // edi
  __m128i *v8; // r11
  const __m128i *v9; // rdx
  int v10; // edi
  const double *v11; // rcx
  int v12; // r9d
  __int64 v13; // rbp
  const __m128i *v14; // rax
  __m128i *v15; // rsi
  __int64 v16; // r10
  __m128i v17; // xmm1
  __m128i v18; // xmm0
  __int64 v19; // r10
  double *v20; // r13
  unsigned int *v21; // rsi
  __int64 v22; // rdx
  const double *v23; // rax
  __int64 v24; // r10
  __int64 v25; // xmm0_8
  __int64 v26; // r10
  unsigned int *v27; // rax
  unsigned int v28; // edx
  __m128 v29; // xmm7
  __m128i si128; // xmm0
  __m128i v31; // xmm14
  __m128i v32; // xmm13
  __m128i v33; // xmm12
  __m128i v34; // xmm11
  __m128i v35; // xmm10
  __m128i v36; // xmm1
  __m128i v37; // xmm2
  __m128i v38; // xmm8
  __m128i v39; // xmm5
  __m128i v40; // xmm1
  __m128i v41; // xmm8
  __m128i v42; // xmm15
  __m128i v43; // xmm3
  __m128i v44; // xmm8
  __m128i v45; // xmm15
  __m128i v46; // xmm9
  __m128i v47; // xmm6
  __m128i v48; // xmm15
  __m128i v49; // xmm9
  __m128i v50; // xmm4
  __m128i v51; // xmm9
  __m128i v52; // xmm8
  __m128i v53; // xmm2
  __m128i v54; // xmm8
  __m128i v55; // xmm3
  __m128i v56; // xmm5
  __m128i v57; // xmm3
  __m128i v58; // xmm15
  __m128i v59; // xmm1
  __m128i v60; // xmm15
  __m128i v61; // xmm3
  __m128i v62; // xmm2
  __m128i v63; // xmm3
  __m128i v64; // xmm1
  __m128i v65; // xmm1
  __m128 v66; // xmm2
  unsigned int v67; // eax
  int v68; // edx
  int *v69; // rcx
  __m128i *v70; // rsi
  const __m128i *v71; // rax
  __int32 v72; // r14d
  const int *v73; // [rsp+8h] [rbp-80h] BYREF
  const double *v74; // [rsp+10h] [rbp-78h]
  int v75; // [rsp+1Ch] [rbp-6Ch]

  if ( !a2 )
    goto LABEL_2;
  v75 = a5;
  v74 = a4;
  v73 = a3;
  CoinPackedVector::reserve((CoinPackedVector *)this, a2);
  v7 = a2 + 7;
  v8 = (__m128i *)*(this + 4);
  v9 = (const __m128i *)v73;
  if ( a2 >= 0 )
    v7 = a2;
  *((_DWORD *)this + 12) = a2;
  v10 = v7 >> 3;
  v11 = v74;
  v12 = v10;
  LOBYTE(a5) = v75;
  v13 = (unsigned int)(a2 % 8);
  if ( v8 != v9 )
  {
    if ( v10 > 0 )
    {
      if ( (v8 >= &v9[2] || v9 >= &v8[2]) && (unsigned int)v10 > 1 )
      {
        v14 = v9;
        v15 = v8;
        v16 = (unsigned int)(v10 - 1);
        do
        {
          v17 = _mm_loadu_si128(v14);
          v14 += 2;
          v15 += 2;
          v18 = _mm_loadu_si128(v14 - 1);
          v15[-2] = v17;
          v15[-1] = v18;
        }
        while ( v14 != &v9[2 * v16 + 2] );
      }
      else
      {
        v70 = v8;
        v71 = v9;
        v16 = (unsigned int)(v10 - 1);
        do
        {
          v72 = v71->m128i_i32[0];
          v71 += 2;
          v70 += 2;
          v70[-2].m128i_i32[0] = v72;
          v70[-2].m128i_i32[1] = v71[-2].m128i_i32[1];
          v70[-2].m128i_i32[2] = v71[-2].m128i_i32[2];
          v70[-2].m128i_i32[3] = v71[-2].m128i_i32[3];
          v70[-1].m128i_i32[0] = v71[-1].m128i_i32[0];
          v70[-1].m128i_i32[1] = v71[-1].m128i_i32[1];
          v70[-1].m128i_i32[2] = v71[-1].m128i_i32[2];
          v70[-1].m128i_i32[3] = v71[-1].m128i_i32[3];
        }
        while ( v71 != &v9[2 * v16 + 2] );
      }
      v19 = 32 * ((int)v16 + 1LL);
      v9 = (const __m128i *)((char *)v9 + v19);
      v8 = (__m128i *)((char *)v8 + v19);
    }
    switch ( (int)v13 )
    {
      case 1:
        goto LABEL_20;
      case 2:
        goto LABEL_19;
      case 3:
        goto LABEL_18;
      case 4:
        goto LABEL_17;
      case 5:
        goto LABEL_16;
      case 6:
        goto LABEL_15;
      case 7:
        v8[1].m128i_i32[2] = v9[1].m128i_i32[2];
LABEL_15:
        v8[1].m128i_i32[1] = v9[1].m128i_i32[1];
LABEL_16:
        v8[1].m128i_i32[0] = v9[1].m128i_i32[0];
LABEL_17:
        v8->m128i_i32[3] = v9->m128i_i32[3];
LABEL_18:
        v8->m128i_i32[2] = v9->m128i_i32[2];
LABEL_19:
        v8->m128i_i32[1] = v9->m128i_i32[1];
LABEL_20:
        v8->m128i_i32[0] = v9->m128i_i32[0];
        break;
      default:
        break;
    }
  }
  v20 = (double *)*(this + 5);
  v21 = *(this + 7);
  if ( v20 != v11 )
  {
    if ( v10 > 0 )
    {
      v22 = (__int64)*(this + 5);
      v23 = v11;
      v24 = (unsigned int)(v10 - 1);
      do
      {
        v25 = *(_QWORD *)v23;
        v23 += 8;
        v22 += 64;
        *(_QWORD *)(v22 - 64) = v25;
        *(double *)(v22 - 56) = *(v23 - 7);
        *(double *)(v22 - 48) = *(v23 - 6);
        *(double *)(v22 - 40) = *(v23 - 5);
        *(double *)(v22 - 32) = *(v23 - 4);
        *(double *)(v22 - 24) = *(v23 - 3);
        *(double *)(v22 - 16) = *(v23 - 2);
        *(double *)(v22 - 8) = *(v23 - 1);
      }
      while ( v23 != &v11[8 * v24 + 8] );
      v26 = ((int)v24 + 1LL) << 6;
      v11 = (const double *)((char *)v11 + v26);
      v20 = (double *)((char *)v20 + v26);
      switch ( (int)v13 )
      {
        case 1:
          goto LABEL_32;
        case 2:
          goto LABEL_31;
        case 3:
          goto LABEL_30;
        case 4:
          goto LABEL_29;
        case 5:
          goto LABEL_28;
        case 6:
          goto LABEL_27;
        case 7:
          goto LABEL_26;
        default:
          goto LABEL_34;
      }
    }
    switch ( (int)v13 )
    {
      case 1:
        goto LABEL_32;
      case 2:
        goto LABEL_31;
      case 3:
        goto LABEL_30;
      case 4:
        goto LABEL_29;
      case 5:
        goto LABEL_28;
      case 6:
        goto LABEL_27;
      case 7:
LABEL_26:
        v20[6] = v11[6];
LABEL_27:
        v20[5] = v11[5];
LABEL_28:
        v20[4] = v11[4];
LABEL_29:
        v20[3] = v11[3];
LABEL_30:
        v20[2] = v11[2];
LABEL_31:
        v20[1] = v11[1];
LABEL_32:
        *v20 = *v11;
        break;
      default:
        goto LABEL_2;
    }
  }
  if ( v10 <= 0 )
  {
    v69 = (int *)v21;
    v68 = 0;
  }
  else
  {
LABEL_34:
    if ( v10 <= 4 )
    {
      v67 = 0;
      goto LABEL_38;
    }
    v73 = (const int *)(v21 + 8);
    v27 = v21;
    v28 = 0;
    v29 = _mm_loadh_ps((const double *)&v73);
    si128 = _mm_load_si128((const __m128i *)&xmmword_290820);
    v31 = _mm_load_si128((const __m128i *)&xmmword_28A1A0);
    v32 = _mm_load_si128((const __m128i *)&xmmword_290830);
    v33 = _mm_load_si128((const __m128i *)&xmmword_289C00);
    v34 = _mm_load_si128((const __m128i *)&xmmword_28CCB0);
    v35 = _mm_load_si128((const __m128i *)&xmmword_290840);
    do
    {
      ++v28;
      v36 = _mm_add_epi32(si128, v33);
      v27 += 32;
      v37 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_289BC0), si128);
      v38 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_290850), si128);
      v39 = _mm_unpacklo_epi32(v36, v38);
      v40 = _mm_unpackhi_epi32(v36, v38);
      v41 = _mm_add_epi32(si128, v34);
      v42 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_290860), si128);
      v43 = _mm_unpackhi_epi32(v41, v42);
      v44 = _mm_unpacklo_epi32(v41, v42);
      v45 = _mm_add_epi32(si128, v35);
      v46 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_290870), si128);
      v47 = _mm_unpackhi_epi32(v45, v46);
      v48 = _mm_unpacklo_epi32(v45, v46);
      v49 = _mm_unpacklo_epi32(si128, v37);
      v50 = _mm_unpackhi_epi32(v49, v44);
      v51 = _mm_unpacklo_epi32(v49, v44);
      v52 = _mm_unpackhi_epi32(si128, v37);
      v53 = _mm_unpackhi_epi32(v52, v43);
      v54 = _mm_unpacklo_epi32(v52, v43);
      v55 = v39;
      v56 = _mm_unpackhi_epi32(v39, v48);
      v57 = _mm_unpacklo_epi32(v55, v48);
      v58 = v40;
      v59 = _mm_unpackhi_epi32(v40, v47);
      v60 = _mm_unpacklo_epi32(v58, v47);
      *((__m128i *)v27 - 8) = _mm_unpacklo_epi32(v51, v57);
      *((__m128i *)v27 - 6) = _mm_unpacklo_epi32(v50, v56);
      *((__m128i *)v27 - 7) = _mm_unpackhi_epi32(v51, v57);
      *((__m128i *)v27 - 4) = _mm_unpacklo_epi32(v54, v60);
      v61 = v53;
      v62 = _mm_unpackhi_epi32(v53, v59);
      v63 = _mm_unpacklo_epi32(v61, v59);
      v64 = _mm_load_si128((const __m128i *)&xmmword_298760);
      *((__m128i *)v27 - 1) = v62;
      v65 = _mm_add_epi32(v64, si128);
      si128 = _mm_add_epi32(si128, v32);
      *((__m128i *)v27 - 5) = _mm_unpackhi_epi32(v50, v56);
      *((__m128i *)v27 - 3) = _mm_unpackhi_epi32(v54, v60);
      *((__m128i *)v27 - 2) = v63;
      v66 = (__m128)_mm_add_epi64(_mm_load_si128((const __m128i *)&xmmword_28A1B0), (__m128i)v29);
      v29 = (__m128)_mm_add_epi64((__m128i)v29, v31);
    }
    while ( v28 < (unsigned int)v10 >> 2 );
    v67 = 8 * (v10 & 0xFFFFFFFC);
    v12 = v10 - (v10 & 0xFFFFFFFC);
    v68 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v65, 255));
    v69 = (int *)_mm_movehl_ps(v29, v66).m128_u64[0];
    v21 += 8 * (v10 & 0xFFFFFFFC);
    if ( v10 != (v10 & 0xFFFFFFFC) )
    {
LABEL_38:
      *v21 = v67;
      v69 = (int *)(v21 + 8);
      v21[1] = v67 + 1;
      v21[2] = v67 + 2;
      v21[3] = v67 + 3;
      v21[4] = v67 + 4;
      v21[5] = v67 + 5;
      v21[6] = v67 + 6;
      v21[7] = v67 + 7;
      v68 = v67 + 8;
      if ( v12 != 1 )
      {
        v21[8] = v68;
        v69 = (int *)(v21 + 16);
        v21[9] = v67 + 9;
        v21[10] = v67 + 10;
        v21[11] = v67 + 11;
        v21[12] = v67 + 12;
        v21[13] = v67 + 13;
        v21[14] = v67 + 14;
        v21[15] = v67 + 15;
        v68 = v67 + 16;
        if ( v12 != 2 )
        {
          v21[16] = v68;
          v69 = (int *)(v21 + 24);
          v21[17] = v67 + 17;
          v21[18] = v67 + 18;
          v21[19] = v67 + 19;
          v21[20] = v67 + 20;
          v21[21] = v67 + 21;
          v21[22] = v67 + 22;
          v21[23] = v67 + 23;
          v68 = v67 + 24;
          if ( v12 != 3 )
          {
            v21[24] = v68;
            v69 = (int *)(v21 + 32);
            v21[25] = v67 + 25;
            v21[26] = v67 + 26;
            v21[27] = v67 + 27;
            v21[28] = v67 + 28;
            v21[29] = v67 + 29;
            v21[30] = v67 + 30;
            v21[31] = v67 + 31;
            v68 = v67 + 32;
          }
        }
      }
    }
  }
  switch ( v13 )
  {
    case 1LL:
      goto LABEL_50;
    case 2LL:
      goto LABEL_49;
    case 3LL:
      goto LABEL_48;
    case 4LL:
      goto LABEL_47;
    case 5LL:
      goto LABEL_46;
    case 6LL:
      goto LABEL_45;
    case 7LL:
      v69[6] = v68 + 6;
LABEL_45:
      v69[5] = v68 + 5;
LABEL_46:
      v69[4] = v68 + 4;
LABEL_47:
      v69[3] = v68 + 3;
LABEL_48:
      v69[2] = v68 + 2;
LABEL_49:
      v69[1] = v68 + 1;
LABEL_50:
      *v69 = v68;
      break;
    default:
      break;
  }
LABEL_2:
  if ( (_BYTE)a5 )
  {
    CoinPackedVectorBase::setTestForDuplicateIndex((CoinPackedVectorBase *)this, 1);
  }
  else
  {
    *((_BYTE *)this + 24) = 0;
    *((_BYTE *)this + 25) = 0;
  }
}

