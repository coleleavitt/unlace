__int64 __fastcall CoinPackedVector::setFull(CoinPackedVector *this, int a2, double *a3, bool a4)
{
  int v9; // edx
  int *v10; // rsi
  int v11; // edx
  __int64 v12; // rbp
  __int64 v13; // rax
  unsigned int v14; // ecx
  __m128i v15; // xmm0
  __m128i v16; // xmm14
  __m128i v17; // xmm13
  __m128i v18; // xmm12
  __m128i v19; // xmm11
  __m128i v20; // xmm10
  __m128i v21; // xmm9
  __m128i v22; // xmm2
  __m128i v23; // xmm3
  __m128i v24; // xmm2
  __m128i v25; // xmm4
  __m128i v26; // xmm5
  __m128i v27; // xmm8
  __m128i v28; // xmm1
  __m128i v29; // xmm4
  __m128i v30; // xmm7
  __m128i v31; // xmm5
  __m128i v32; // xmm6
  __m128i v33; // xmm8
  __m128i v34; // xmm7
  __m128i v35; // xmm15
  __m128i v36; // xmm7
  __m128i v37; // xmm6
  __m128i v38; // xmm3
  __m128i v39; // xmm6
  __m128i v40; // xmm5
  __m128i v41; // xmm2
  __m128i v42; // xmm5
  __m128i v43; // xmm8
  __m128i v44; // xmm4
  __m128i v45; // xmm8
  __m128i v46; // xmm7
  __m128i v47; // xmm1
  __m128i v48; // xmm7
  int v49; // r10d
  unsigned int v50; // ecx
  unsigned int *v51; // rax
  unsigned int *v52; // rcx
  int v53; // eax
  unsigned int *v54; // rax
  unsigned int v55; // esi
  __m128 v56; // xmm7
  __m128i v57; // xmm0
  __m128i v58; // xmm14
  __m128i v59; // xmm13
  __m128i v60; // xmm12
  __m128i v61; // xmm11
  __m128i v62; // xmm10
  __m128i v63; // xmm2
  __m128i v64; // xmm4
  __m128i v65; // xmm5
  __m128i v66; // xmm9
  __m128i v67; // xmm1
  __m128i v68; // xmm4
  __m128i v69; // xmm8
  __m128i v70; // xmm5
  __m128i v71; // xmm9
  __m128i v72; // xmm8
  __m128i v73; // xmm6
  __m128i v74; // xmm15
  __m128i v75; // xmm8
  __m128i v76; // xmm6
  __m128i v77; // xmm3
  __m128i v78; // xmm6
  __m128i v79; // xmm5
  __m128i v80; // xmm2
  __m128i v81; // xmm5
  __m128i v82; // xmm9
  __m128i v83; // xmm4
  __m128i v84; // xmm9
  __m128i v85; // xmm8
  __m128i v86; // xmm1
  __m128i v87; // xmm8
  __m128i v88; // xmm3
  __m128i v89; // xmm2
  __m128i v90; // xmm3
  __m128i v91; // xmm1
  __m128i v92; // xmm1
  __m128 v93; // xmm2
  unsigned int v94; // eax
  int v95; // r11d
  int v96; // r8d
  int *v97; // r10
  double *v98; // rdi
  double *v99; // rax
  double *v100; // rcx
  __int64 v101; // rdx
  __int64 v102; // xmm0_8
  __int64 v103; // rdx
  int v104; // r11d
  int v105; // r10d
  int v106; // r9d
  int v107; // r8d
  int v108; // edi
  int v109; // r14d
  __m128i si128; // [rsp+0h] [rbp-58h] BYREF
  __m128i v111; // [rsp+10h] [rbp-48h] BYREF
  __m128i v112[3]; // [rsp+20h] [rbp-38h] BYREF

  CoinPackedVector::clear(this);
  if ( !a2 )
    return CoinPackedVectorBase::setTestForDuplicateIndexWhenTrue(this, a4);
  CoinPackedVector::reserve(this, a2);
  v9 = a2 + 7;
  *((_DWORD *)this + 12) = a2;
  v10 = *((int **)this + 7);
  if ( a2 >= 0 )
    v9 = a2;
  v11 = v9 >> 3;
  v12 = (unsigned int)(a2 % 8);
  if ( v11 > 0 )
  {
    if ( v11 - 1 <= 2 )
    {
      v51 = *((unsigned int **)this + 7);
      v49 = v11;
      v50 = 0;
    }
    else
    {
      v13 = *((_QWORD *)this + 7);
      v14 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_290850);
      v111 = _mm_load_si128((const __m128i *)&xmmword_290860);
      v15 = _mm_load_si128((const __m128i *)&xmmword_290820);
      v16 = _mm_load_si128((const __m128i *)&xmmword_290830);
      v17 = _mm_load_si128((const __m128i *)&xmmword_289C00);
      v18 = _mm_load_si128((const __m128i *)&xmmword_28CCB0);
      v19 = _mm_load_si128((const __m128i *)&xmmword_290840);
      v20 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
      v21 = _mm_load_si128((const __m128i *)&xmmword_290870);
      do
      {
        ++v14;
        v22 = _mm_add_epi32(v15, v20);
        v13 += 128;
        v23 = _mm_unpacklo_epi32(v15, v22);
        v24 = _mm_unpackhi_epi32(v15, v22);
        v25 = _mm_add_epi32(v15, v17);
        v26 = _mm_add_epi32(_mm_load_si128(&si128), v15);
        v27 = _mm_add_epi32(v15, v18);
        v28 = _mm_unpackhi_epi32(v25, v26);
        v29 = _mm_unpacklo_epi32(v25, v26);
        v30 = _mm_add_epi32(_mm_load_si128(&v111), v15);
        v31 = _mm_unpacklo_epi32(v27, v30);
        v32 = _mm_add_epi32(v15, v21);
        v33 = _mm_unpackhi_epi32(v27, v30);
        v34 = _mm_add_epi32(v15, v19);
        v15 = _mm_add_epi32(v15, v16);
        v35 = _mm_unpackhi_epi32(v34, v32);
        v36 = _mm_unpacklo_epi32(v34, v32);
        v37 = v23;
        v38 = _mm_unpackhi_epi32(v23, v31);
        v39 = _mm_unpacklo_epi32(v37, v31);
        v40 = v24;
        v41 = _mm_unpackhi_epi32(v24, v33);
        v42 = _mm_unpacklo_epi32(v40, v33);
        v43 = v29;
        v44 = _mm_unpackhi_epi32(v29, v36);
        v45 = _mm_unpacklo_epi32(v43, v36);
        v46 = v28;
        v47 = _mm_unpackhi_epi32(v28, v35);
        v48 = _mm_unpacklo_epi32(v46, v35);
        *(__m128i *)(v13 - 112) = _mm_unpackhi_epi32(v39, v45);
        *(__m128i *)(v13 - 128) = _mm_unpacklo_epi32(v39, v45);
        *(__m128i *)(v13 - 80) = _mm_unpackhi_epi32(v38, v44);
        *(__m128i *)(v13 - 96) = _mm_unpacklo_epi32(v38, v44);
        *(__m128i *)(v13 - 64) = _mm_unpacklo_epi32(v42, v48);
        *(__m128i *)(v13 - 48) = _mm_unpackhi_epi32(v42, v48);
        *(__m128i *)(v13 - 32) = _mm_unpacklo_epi32(v41, v47);
        *(__m128i *)(v13 - 16) = _mm_unpackhi_epi32(v41, v47);
      }
      while ( (unsigned int)v11 >> 2 > v14 );
      v49 = v11 - (v11 & 0xFFFFFFFC);
      v50 = 8 * (v11 & 0xFFFFFFFC);
      v51 = (unsigned int *)&v10[8 * (v11 & 0xFFFFFFFC)];
      if ( v11 == (v11 & 0xFFFFFFFC) )
        goto LABEL_13;
    }
    *v51 = v50;
    v51[1] = v50 + 1;
    v51[2] = v50 + 2;
    v51[3] = v50 + 3;
    v51[4] = v50 + 4;
    v51[5] = v50 + 5;
    v51[6] = v50 + 6;
    v51[7] = v50 + 7;
    if ( v49 != 1 )
    {
      v51[8] = v50 + 8;
      v51[9] = v50 + 9;
      v51[10] = v50 + 10;
      v51[11] = v50 + 11;
      v51[12] = v50 + 12;
      v51[13] = v50 + 13;
      v51[14] = v50 + 14;
      v51[15] = v50 + 15;
      if ( v49 != 2 )
      {
        v51[16] = v50 + 16;
        v51[17] = v50 + 17;
        v51[18] = v50 + 18;
        v51[19] = v50 + 19;
        v51[20] = v50 + 20;
        v51[21] = v50 + 21;
        v51[23] = v50 + 23;
        v51[22] = v50 + 22;
      }
    }
LABEL_13:
    v52 = *((unsigned int **)this + 4);
    v10 += 8 * v11;
    v53 = 8 * v11;
    switch ( (int)v12 )
    {
      case 1:
        *v10 = v53;
        goto LABEL_15;
      case 2:
        v108 = v53 + 1;
        goto LABEL_50;
      case 3:
        v107 = v53 + 2;
        v108 = v53 + 1;
        goto LABEL_49;
      case 4:
        v106 = v53 + 3;
        v107 = v53 + 2;
        v108 = v53 + 1;
        goto LABEL_48;
      case 5:
        v105 = v53 + 4;
        v106 = v53 + 3;
        v107 = v53 + 2;
        v108 = v53 + 1;
        goto LABEL_47;
      case 6:
        v104 = v53 + 5;
        v105 = v53 + 4;
        v106 = v53 + 3;
        v107 = v53 + 2;
        v108 = v53 + 1;
        goto LABEL_46;
      case 7:
        v109 = v53 + 6;
        v104 = v53 + 5;
        v105 = v53 + 4;
        v106 = v53 + 3;
        v107 = v53 + 2;
        v108 = v53 + 1;
        goto LABEL_57;
      default:
        goto LABEL_15;
    }
  }
  v52 = *((unsigned int **)this + 4);
  switch ( (int)v12 )
  {
    case 1:
      *v10 = 0;
      v97 = (int *)v52;
      v96 = 0;
      goto LABEL_23;
    case 2:
      v108 = 1;
      v53 = 0;
      goto LABEL_50;
    case 3:
      v108 = 1;
      v107 = 2;
      v53 = 0;
      goto LABEL_49;
    case 4:
      v108 = 1;
      v107 = 2;
      v106 = 3;
      v53 = 0;
      goto LABEL_48;
    case 5:
      v108 = 1;
      v107 = 2;
      v106 = 3;
      v105 = 4;
      v53 = 0;
      goto LABEL_47;
    case 6:
      v108 = 1;
      v107 = 2;
      v106 = 3;
      v105 = 4;
      v104 = 5;
      v53 = 0;
      goto LABEL_46;
    case 7:
      v108 = 1;
      v107 = 2;
      v106 = 3;
      v105 = 4;
      v104 = 5;
      v109 = 6;
      v53 = 0;
LABEL_57:
      v10[6] = v109;
LABEL_46:
      v10[5] = v104;
LABEL_47:
      v10[4] = v105;
LABEL_48:
      v10[3] = v106;
LABEL_49:
      v10[2] = v107;
LABEL_50:
      v10[1] = v108;
      *v10 = v53;
      if ( v11 <= 0 )
      {
        v97 = (int *)v52;
        v96 = 0;
        goto LABEL_23;
      }
LABEL_15:
      if ( v11 <= 4 )
      {
        v95 = v11;
        v94 = 0;
      }
      else
      {
        v54 = v52;
        si128.m128i_i64[0] = (__int64)(v52 + 8);
        v55 = 0;
        v56 = _mm_loadh_ps((const double *)si128.m128i_i64);
        v57 = _mm_load_si128((const __m128i *)&xmmword_290820);
        si128 = _mm_load_si128((const __m128i *)&xmmword_290850);
        v111 = _mm_load_si128((const __m128i *)&xmmword_290860);
        v112[0] = _mm_load_si128((const __m128i *)&xmmword_290870);
        v58 = _mm_load_si128((const __m128i *)&xmmword_290830);
        v59 = _mm_load_si128((const __m128i *)&xmmword_289C00);
        v60 = _mm_load_si128((const __m128i *)&xmmword_28CCB0);
        v61 = _mm_load_si128((const __m128i *)&xmmword_290840);
        v62 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
        do
        {
          ++v55;
          v63 = _mm_add_epi32(v57, v62);
          v54 += 32;
          v64 = _mm_add_epi32(v57, v59);
          v65 = _mm_add_epi32(_mm_load_si128(&si128), v57);
          v66 = _mm_add_epi32(v57, v60);
          v67 = _mm_unpackhi_epi32(v64, v65);
          v68 = _mm_unpacklo_epi32(v64, v65);
          v69 = _mm_add_epi32(_mm_load_si128(&v111), v57);
          v70 = _mm_unpacklo_epi32(v66, v69);
          v71 = _mm_unpackhi_epi32(v66, v69);
          v72 = _mm_add_epi32(v57, v61);
          v73 = _mm_add_epi32(_mm_load_si128(v112), v57);
          v74 = _mm_unpackhi_epi32(v72, v73);
          v75 = _mm_unpacklo_epi32(v72, v73);
          v76 = _mm_unpacklo_epi32(v57, v63);
          v77 = _mm_unpackhi_epi32(v76, v70);
          v78 = _mm_unpacklo_epi32(v76, v70);
          v79 = _mm_unpackhi_epi32(v57, v63);
          v80 = _mm_unpackhi_epi32(v79, v71);
          v81 = _mm_unpacklo_epi32(v79, v71);
          v82 = v68;
          v83 = _mm_unpackhi_epi32(v68, v75);
          v84 = _mm_unpacklo_epi32(v82, v75);
          v85 = v67;
          v86 = _mm_unpackhi_epi32(v67, v74);
          v87 = _mm_unpacklo_epi32(v85, v74);
          *((__m128i *)v54 - 7) = _mm_unpackhi_epi32(v78, v84);
          *((__m128i *)v54 - 8) = _mm_unpacklo_epi32(v78, v84);
          *((__m128i *)v54 - 5) = _mm_unpackhi_epi32(v77, v83);
          *((__m128i *)v54 - 6) = _mm_unpacklo_epi32(v77, v83);
          *((__m128i *)v54 - 4) = _mm_unpacklo_epi32(v81, v87);
          v88 = v80;
          v89 = _mm_unpackhi_epi32(v80, v86);
          v90 = _mm_unpacklo_epi32(v88, v86);
          v91 = _mm_load_si128((const __m128i *)&xmmword_298760);
          *((__m128i *)v54 - 1) = v89;
          v92 = _mm_add_epi32(v91, v57);
          v57 = _mm_add_epi32(v57, v58);
          *((__m128i *)v54 - 3) = _mm_unpackhi_epi32(v81, v87);
          *((__m128i *)v54 - 2) = v90;
          v93 = (__m128)_mm_add_epi64(_mm_load_si128((const __m128i *)&xmmword_28A1B0), (__m128i)v56);
          v56 = (__m128)_mm_add_epi64((__m128i)v56, (__m128i)xmmword_28A1A0);
        }
        while ( (unsigned int)v11 >> 2 > v55 );
        v94 = 8 * (v11 & 0xFFFFFFFC);
        v95 = v11 - (v11 & 0xFFFFFFFC);
        v96 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v92, 255));
        v52 += 8 * (v11 & 0xFFFFFFFC);
        v97 = (int *)_mm_movehl_ps(v56, v93).m128_u64[0];
        if ( v11 == (v11 & 0xFFFFFFFC) )
          goto LABEL_23;
      }
      *v52 = v94;
      v97 = (int *)(v52 + 8);
      v96 = v94 + 8;
      v52[1] = v94 + 1;
      v52[2] = v94 + 2;
      v52[3] = v94 + 3;
      v52[4] = v94 + 4;
      v52[5] = v94 + 5;
      v52[6] = v94 + 6;
      v52[7] = v94 + 7;
      if ( v95 != 1 )
      {
        v52[8] = v96;
        v97 = (int *)(v52 + 16);
        v96 = v94 + 16;
        v52[9] = v94 + 9;
        v52[10] = v94 + 10;
        v52[11] = v94 + 11;
        v52[12] = v94 + 12;
        v52[13] = v94 + 13;
        v52[14] = v94 + 14;
        v52[15] = v94 + 15;
        if ( v95 != 2 )
        {
          v52[16] = v96;
          v97 = (int *)(v52 + 24);
          v96 = v94 + 24;
          v52[17] = v94 + 17;
          v52[18] = v94 + 18;
          v52[19] = v94 + 19;
          v52[20] = v94 + 20;
          v52[21] = v94 + 21;
          v52[22] = v94 + 22;
          v52[23] = v94 + 23;
          if ( v95 != 3 )
          {
            v52[24] = v96;
            v97 = (int *)(v52 + 32);
            v96 = v94 + 32;
            v52[25] = v94 + 25;
            v52[26] = v94 + 26;
            v52[27] = v94 + 27;
            v52[28] = v94 + 28;
            v52[29] = v94 + 29;
            v52[30] = v94 + 30;
            v52[31] = v94 + 31;
          }
        }
      }
LABEL_23:
      switch ( (int)v12 )
      {
        case 1:
          goto LABEL_30;
        case 2:
          goto LABEL_29;
        case 3:
          goto LABEL_28;
        case 4:
          goto LABEL_27;
        case 5:
          goto LABEL_26;
        case 6:
          goto LABEL_25;
        case 7:
          v97[6] = v96 + 6;
LABEL_25:
          v97[5] = v96 + 5;
LABEL_26:
          v97[4] = v96 + 4;
LABEL_27:
          v97[3] = v96 + 3;
LABEL_28:
          v97[2] = v96 + 2;
LABEL_29:
          v97[1] = v96 + 1;
LABEL_30:
          *v97 = v96;
          break;
        default:
          break;
      }
LABEL_31:
      v98 = *((double **)this + 5);
      if ( v98 != a3 )
      {
        if ( v11 > 0 )
        {
          v99 = *((double **)this + 5);
          v100 = a3;
          v101 = (unsigned int)(v11 - 1);
          do
          {
            v102 = *(_QWORD *)v100;
            v99 += 8;
            v100 += 8;
            *((_QWORD *)v99 - 8) = v102;
            *(v99 - 7) = *(v100 - 7);
            *(v99 - 6) = *(v100 - 6);
            *(v99 - 5) = *(v100 - 5);
            *(v99 - 4) = *(v100 - 4);
            *(v99 - 3) = *(v100 - 3);
            *(v99 - 2) = *(v100 - 2);
            *(v99 - 1) = *(v100 - 1);
          }
          while ( v99 != &v98[8 * v101 + 8] );
          v103 = ((int)v101 + 1LL) << 6;
          a3 = (double *)((char *)a3 + v103);
          v98 = (double *)((char *)v98 + v103);
        }
        switch ( v12 )
        {
          case 1LL:
            goto LABEL_43;
          case 2LL:
            goto LABEL_42;
          case 3LL:
            goto LABEL_41;
          case 4LL:
            goto LABEL_40;
          case 5LL:
            goto LABEL_39;
          case 6LL:
            goto LABEL_38;
          case 7LL:
            v98[6] = a3[6];
LABEL_38:
            v98[5] = a3[5];
LABEL_39:
            v98[4] = a3[4];
LABEL_40:
            v98[3] = a3[3];
LABEL_41:
            v98[2] = a3[2];
LABEL_42:
            v98[1] = a3[1];
LABEL_43:
            *v98 = *a3;
            break;
          default:
            return CoinPackedVectorBase::setTestForDuplicateIndexWhenTrue(this, a4);
        }
      }
      break;
    default:
      goto LABEL_31;
  }
  return CoinPackedVectorBase::setTestForDuplicateIndexWhenTrue(this, a4);
}

