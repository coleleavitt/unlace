__int64 __fastcall CoinPackedVector::gutsOfSetConstant(
        unsigned int **this,
        int a2,
        const int *a3,
        double a4,
        _BOOL4 a5,
        const char *a6)
{
  int v9; // esi
  __m128i *v10; // r10
  const __m128i *v11; // rdx
  int v12; // esi
  unsigned int *v13; // rdi
  int v14; // r9d
  double v15; // xmm0_8
  __int64 v16; // rbp
  double *v17; // rax
  const __m128i *v18; // r8
  __m128i *v19; // r11
  __int64 v20; // r13
  __m128i v21; // xmm2
  __m128i v22; // xmm1
  __int64 v23; // r8
  int v24; // edx
  unsigned int *v25; // rax
  unsigned int v26; // edx
  __m128 v27; // xmm7
  __m128i si128; // xmm0
  __m128i v29; // xmm14
  __m128i v30; // xmm13
  __m128i v31; // xmm12
  __m128i v32; // xmm11
  __m128i v33; // xmm10
  __m128i v34; // xmm1
  __m128i v35; // xmm2
  __m128i v36; // xmm8
  __m128i v37; // xmm5
  __m128i v38; // xmm1
  __m128i v39; // xmm8
  __m128i v40; // xmm15
  __m128i v41; // xmm3
  __m128i v42; // xmm8
  __m128i v43; // xmm15
  __m128i v44; // xmm9
  __m128i v45; // xmm6
  __m128i v46; // xmm15
  __m128i v47; // xmm9
  __m128i v48; // xmm4
  __m128i v49; // xmm9
  __m128i v50; // xmm8
  __m128i v51; // xmm2
  __m128i v52; // xmm8
  __m128i v53; // xmm3
  __m128i v54; // xmm5
  __m128i v55; // xmm3
  __m128i v56; // xmm15
  __m128i v57; // xmm1
  __m128i v58; // xmm15
  __m128i v59; // xmm3
  __m128i v60; // xmm2
  __m128i v61; // xmm3
  __m128i v62; // xmm1
  __m128i v63; // xmm1
  __m128 v64; // xmm2
  unsigned int v65; // eax
  int v66; // edx
  int *v67; // r8
  __m128i *v68; // r11
  const __m128i *v69; // r8
  __int32 v70; // r15d
  const int *v71; // [rsp+8h] [rbp-80h] BYREF
  double v72; // [rsp+10h] [rbp-78h]
  _BOOL4 v73; // [rsp+1Ch] [rbp-6Ch]

  if ( a2 )
  {
    v73 = a5;
    v72 = a4;
    v71 = a3;
    CoinPackedVector::reserve((CoinPackedVector *)this, a2);
    v9 = a2 + 7;
    v10 = (__m128i *)*(this + 4);
    v11 = (const __m128i *)v71;
    if ( a2 >= 0 )
      v9 = a2;
    *((_DWORD *)this + 12) = a2;
    v12 = v9 >> 3;
    v13 = *(this + 7);
    v14 = v12;
    LOBYTE(a5) = v73;
    v15 = v72;
    v16 = (unsigned int)(a2 % 8);
    v17 = (double *)*(this + 5);
    if ( v10 != v11 )
    {
      if ( v12 > 0 )
      {
        if ( (v10 >= &v11[2] || v11 >= &v10[2]) && (unsigned int)v12 > 1 )
        {
          v18 = v11;
          v19 = v10;
          v20 = (unsigned int)(v12 - 1);
          do
          {
            v21 = _mm_loadu_si128(v18);
            v18 += 2;
            v19 += 2;
            v22 = _mm_loadu_si128(v18 - 1);
            v19[-2] = v21;
            v19[-1] = v22;
          }
          while ( v18 != &v11[2 * v20 + 2] );
        }
        else
        {
          v68 = v10;
          v69 = v11;
          v20 = (unsigned int)(v12 - 1);
          do
          {
            v70 = v69->m128i_i32[0];
            v69 += 2;
            v68 += 2;
            v68[-2].m128i_i32[0] = v70;
            v68[-2].m128i_i32[1] = v69[-2].m128i_i32[1];
            v68[-2].m128i_i32[2] = v69[-2].m128i_i32[2];
            v68[-2].m128i_i32[3] = v69[-2].m128i_i32[3];
            v68[-1].m128i_i32[0] = v69[-1].m128i_i32[0];
            v68[-1].m128i_i32[1] = v69[-1].m128i_i32[1];
            v68[-1].m128i_i32[2] = v69[-1].m128i_i32[2];
            v68[-1].m128i_i32[3] = v69[-1].m128i_i32[3];
          }
          while ( v69 != &v11[2 * v20 + 2] );
        }
        v23 = 32 * ((int)v20 + 1LL);
        v11 = (const __m128i *)((char *)v11 + v23);
        v10 = (__m128i *)((char *)v10 + v23);
        switch ( (int)v16 )
        {
          case 1:
            goto LABEL_18;
          case 2:
            goto LABEL_17;
          case 3:
            goto LABEL_16;
          case 4:
            goto LABEL_15;
          case 5:
            goto LABEL_14;
          case 6:
            goto LABEL_13;
          case 7:
            goto LABEL_12;
          default:
            goto LABEL_20;
        }
      }
      switch ( (int)v16 )
      {
        case 0:
          goto LABEL_46;
        case 1:
          goto LABEL_18;
        case 2:
          goto LABEL_17;
        case 3:
          goto LABEL_16;
        case 4:
          goto LABEL_15;
        case 5:
          goto LABEL_14;
        case 6:
          goto LABEL_13;
        case 7:
LABEL_12:
          v10[1].m128i_i32[2] = v11[1].m128i_i32[2];
LABEL_13:
          v10[1].m128i_i32[1] = v11[1].m128i_i32[1];
LABEL_14:
          v10[1].m128i_i32[0] = v11[1].m128i_i32[0];
LABEL_15:
          v10->m128i_i32[3] = v11->m128i_i32[3];
LABEL_16:
          v10->m128i_i32[2] = v11->m128i_i32[2];
LABEL_17:
          v10->m128i_i32[1] = v11->m128i_i32[1];
LABEL_18:
          v10->m128i_i32[0] = v11->m128i_i32[0];
          break;
        default:
          return CoinPackedVectorBase::setTestForDuplicateIndex((CoinPackedVectorBase *)this, a5);
      }
    }
    if ( v12 > 0 )
    {
LABEL_20:
      v24 = v12;
      do
      {
        *v17 = v15;
        v17 += 8;
        *(v17 - 7) = v15;
        *(v17 - 6) = v15;
        *(v17 - 5) = v15;
        *(v17 - 4) = v15;
        *(v17 - 3) = v15;
        *(v17 - 2) = v15;
        *(v17 - 1) = v15;
        --v24;
      }
      while ( v24 );
      switch ( (int)v16 )
      {
        case 1:
          goto LABEL_29;
        case 2:
          goto LABEL_28;
        case 3:
          goto LABEL_27;
        case 4:
          goto LABEL_26;
        case 5:
          goto LABEL_25;
        case 6:
          goto LABEL_24;
        case 7:
          goto LABEL_23;
        default:
          goto LABEL_30;
      }
    }
LABEL_46:
    switch ( (int)v16 )
    {
      case 1:
        *v17 = v15;
        v67 = (int *)v13;
        v66 = 0;
        goto LABEL_38;
      case 2:
        goto LABEL_28;
      case 3:
        goto LABEL_27;
      case 4:
        goto LABEL_26;
      case 5:
        goto LABEL_25;
      case 6:
        goto LABEL_24;
      case 7:
LABEL_23:
        v17[6] = v15;
LABEL_24:
        v17[5] = v15;
LABEL_25:
        v17[4] = v15;
LABEL_26:
        v17[3] = v15;
LABEL_27:
        v17[2] = v15;
LABEL_28:
        v17[1] = v15;
LABEL_29:
        *v17 = v15;
        if ( v12 <= 0 )
        {
          v67 = (int *)v13;
          v66 = 0;
          goto LABEL_38;
        }
LABEL_30:
        if ( v12 <= 4 )
        {
          v65 = 0;
        }
        else
        {
          v71 = (const int *)(v13 + 8);
          v25 = v13;
          v26 = 0;
          v27 = _mm_loadh_ps((const double *)&v71);
          si128 = _mm_load_si128((const __m128i *)&xmmword_290820);
          v29 = _mm_load_si128((const __m128i *)&xmmword_28A1A0);
          v30 = _mm_load_si128((const __m128i *)&xmmword_290830);
          v31 = _mm_load_si128((const __m128i *)&xmmword_289C00);
          v32 = _mm_load_si128((const __m128i *)&xmmword_28CCB0);
          v33 = _mm_load_si128((const __m128i *)&xmmword_290840);
          do
          {
            ++v26;
            v34 = _mm_add_epi32(si128, v31);
            v25 += 32;
            v35 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_289BC0), si128);
            v36 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_290850), si128);
            v37 = _mm_unpacklo_epi32(v34, v36);
            v38 = _mm_unpackhi_epi32(v34, v36);
            v39 = _mm_add_epi32(si128, v32);
            v40 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_290860), si128);
            v41 = _mm_unpackhi_epi32(v39, v40);
            v42 = _mm_unpacklo_epi32(v39, v40);
            v43 = _mm_add_epi32(si128, v33);
            v44 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_290870), si128);
            v45 = _mm_unpackhi_epi32(v43, v44);
            v46 = _mm_unpacklo_epi32(v43, v44);
            v47 = _mm_unpacklo_epi32(si128, v35);
            v48 = _mm_unpackhi_epi32(v47, v42);
            v49 = _mm_unpacklo_epi32(v47, v42);
            v50 = _mm_unpackhi_epi32(si128, v35);
            v51 = _mm_unpackhi_epi32(v50, v41);
            v52 = _mm_unpacklo_epi32(v50, v41);
            v53 = v37;
            v54 = _mm_unpackhi_epi32(v37, v46);
            v55 = _mm_unpacklo_epi32(v53, v46);
            v56 = v38;
            v57 = _mm_unpackhi_epi32(v38, v45);
            v58 = _mm_unpacklo_epi32(v56, v45);
            *((__m128i *)v25 - 8) = _mm_unpacklo_epi32(v49, v55);
            *((__m128i *)v25 - 6) = _mm_unpacklo_epi32(v48, v54);
            *((__m128i *)v25 - 7) = _mm_unpackhi_epi32(v49, v55);
            *((__m128i *)v25 - 4) = _mm_unpacklo_epi32(v52, v58);
            v59 = v51;
            v60 = _mm_unpackhi_epi32(v51, v57);
            v61 = _mm_unpacklo_epi32(v59, v57);
            v62 = _mm_load_si128((const __m128i *)&xmmword_298760);
            *((__m128i *)v25 - 1) = v60;
            v63 = _mm_add_epi32(v62, si128);
            si128 = _mm_add_epi32(si128, v30);
            *((__m128i *)v25 - 5) = _mm_unpackhi_epi32(v48, v54);
            *((__m128i *)v25 - 3) = _mm_unpackhi_epi32(v52, v58);
            *((__m128i *)v25 - 2) = v61;
            v64 = (__m128)_mm_add_epi64(_mm_load_si128((const __m128i *)&xmmword_28A1B0), (__m128i)v27);
            v27 = (__m128)_mm_add_epi64((__m128i)v27, v29);
          }
          while ( v26 < (unsigned int)v12 >> 2 );
          v65 = 8 * (v12 & 0xFFFFFFFC);
          v14 = v12 - (v12 & 0xFFFFFFFC);
          v66 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v63, 255));
          v67 = (int *)_mm_movehl_ps(v27, v64).m128_u64[0];
          v13 += 8 * (v12 & 0xFFFFFFFC);
          if ( v12 == (v12 & 0xFFFFFFFC) )
            goto LABEL_38;
        }
        *v13 = v65;
        v67 = (int *)(v13 + 8);
        v13[1] = v65 + 1;
        v13[2] = v65 + 2;
        v13[3] = v65 + 3;
        v13[4] = v65 + 4;
        v13[5] = v65 + 5;
        v13[6] = v65 + 6;
        v13[7] = v65 + 7;
        v66 = v65 + 8;
        if ( v14 != 1 )
        {
          v13[8] = v66;
          v67 = (int *)(v13 + 16);
          v13[9] = v65 + 9;
          v13[10] = v65 + 10;
          v13[11] = v65 + 11;
          v13[12] = v65 + 12;
          v13[13] = v65 + 13;
          v13[14] = v65 + 14;
          v13[15] = v65 + 15;
          v66 = v65 + 16;
          if ( v14 != 2 )
          {
            v13[16] = v66;
            v67 = (int *)(v13 + 24);
            v13[17] = v65 + 17;
            v13[18] = v65 + 18;
            v13[19] = v65 + 19;
            v13[20] = v65 + 20;
            v13[21] = v65 + 21;
            v13[22] = v65 + 22;
            v13[23] = v65 + 23;
            v66 = v65 + 24;
            if ( v14 != 3 )
            {
              v13[24] = v66;
              v67 = (int *)(v13 + 32);
              v13[25] = v65 + 25;
              v13[26] = v65 + 26;
              v13[27] = v65 + 27;
              v13[28] = v65 + 28;
              v13[29] = v65 + 29;
              v13[30] = v65 + 30;
              v13[31] = v65 + 31;
              v66 = v65 + 32;
            }
          }
        }
LABEL_38:
        switch ( v16 )
        {
          case 1LL:
            goto LABEL_45;
          case 2LL:
            goto LABEL_44;
          case 3LL:
            goto LABEL_43;
          case 4LL:
            goto LABEL_42;
          case 5LL:
            goto LABEL_41;
          case 6LL:
            goto LABEL_40;
          case 7LL:
            v67[6] = v66 + 6;
LABEL_40:
            v67[5] = v66 + 5;
LABEL_41:
            v67[4] = v66 + 4;
LABEL_42:
            v67[3] = v66 + 3;
LABEL_43:
            v67[2] = v66 + 2;
LABEL_44:
            v67[1] = v66 + 1;
LABEL_45:
            *v67 = v66;
            break;
          default:
            return CoinPackedVectorBase::setTestForDuplicateIndex((CoinPackedVectorBase *)this, a5);
        }
        break;
      default:
        return CoinPackedVectorBase::setTestForDuplicateIndex((CoinPackedVectorBase *)this, a5);
    }
  }
  return CoinPackedVectorBase::setTestForDuplicateIndex((CoinPackedVectorBase *)this, a5);
}

