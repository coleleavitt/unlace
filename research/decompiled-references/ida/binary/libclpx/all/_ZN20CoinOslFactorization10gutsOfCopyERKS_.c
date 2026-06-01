__int64 __fastcall CoinOslFactorization::gutsOfCopy(CoinOslFactorization *this, const CoinOslFactorization *a2)
{
  const __m128i *v2; // rdx
  const CoinOslFactorization *v3; // r12
  int v5; // eax
  __int64 v6; // xmm0_8
  int v7; // eax
  int v8; // ebx
  int v9; // r14d
  int v10; // eax
  int v11; // ebp
  int v12; // eax
  __int64 v13; // rsi
  __m128i si128; // xmm2
  __m128i v15; // xmm0
  __m128i v16; // xmm2
  __int64 v17; // rax
  __m128i v18; // xmm2
  __m128i v19; // xmm0
  __m128i v20; // xmm2
  __int64 v21; // rax
  int v22; // ebp
  __int64 v23; // rax
  int v24; // edx
  int v25; // r13d
  int v26; // ebx
  int v27; // ebp
  unsigned __int64 v28; // rax
  int v29; // ecx
  __int64 v30; // rax
  _QWORD *v31; // rdi
  _QWORD *v32; // r10
  __m128i v33; // xmm2
  __m128i v34; // xmm0
  __m128i v35; // xmm2
  __m128i v36; // xmm2
  __m128i v37; // xmm0
  __m128i v38; // xmm2
  __int64 result; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned __int64 v42; // r10
  unsigned int v43; // edi
  const __m128i *v44; // rdx
  unsigned __int64 v45; // rsi
  __int64 v46; // rdi
  __m128i v47; // xmm1
  __m128i v48; // xmm0
  __int64 v49; // rdx
  _DWORD *v50; // r11
  _DWORD *v51; // rdx
  __int64 v52; // rdx
  int *v53; // rsi
  int *v54; // rdx
  unsigned int v55; // edi
  __int64 v56; // r11
  unsigned __int64 v57; // rdi
  int v58; // r10d
  __int64 v59; // r11
  __m128i v60; // xmm0
  __int64 v61; // rdi
  __int64 v62; // rax
  _QWORD *v63; // rsi
  __int64 *v64; // rdx
  __int64 v65; // r11
  __int64 v66; // xmm0_8
  __int64 v67; // rdx
  _QWORD *v68; // rsi
  _QWORD *v69; // rdx
  __int64 v70; // r11
  __int64 *v71; // rcx
  __int64 *v72; // r11
  __int64 *v73; // rdx
  __int64 *v74; // rsi
  __int64 v75; // r13
  __int64 v76; // xmm0_8
  __int64 v77; // r13
  __int64 v78; // rbx
  int *v79; // r11
  int *v80; // rdi
  int *v81; // rbx
  int v82; // r8d
  unsigned __int64 v83; // rsi
  int *v84; // rdx
  int v85; // r8d
  __int64 v86; // rdi
  __int64 v87; // rdx
  int *v88; // rsi
  int *v89; // rdx
  unsigned int v90; // r10d
  __int64 v91; // rax
  __int64 v92; // r10
  __m128i v93; // xmm0
  __int64 v94; // rax
  int v95; // r11d
  __int64 v96; // rsi
  __int64 *v97; // r10
  __int64 *v98; // rsi
  __int64 *v99; // rax
  __int64 *v100; // rdx
  __int64 v101; // rbx
  __int64 v102; // xmm0_8
  __int64 v103; // rax
  __int64 v104; // r13
  __int64 v105; // r12
  __int64 v106; // rbx
  int v107; // eax
  __int64 v108; // r14
  __int64 v109; // rsi
  int v110; // eax
  int *v111; // rdi
  int *v112; // rax
  int v113; // r9d
  int v114; // [rsp+Ch] [rbp-9Ch]
  int v115; // [rsp+Ch] [rbp-9Ch]
  char *v116; // [rsp+10h] [rbp-98h]
  int v117; // [rsp+18h] [rbp-90h]
  int v118; // [rsp+1Ch] [rbp-8Ch]
  __int64 v119; // [rsp+20h] [rbp-88h]
  __int64 v120; // [rsp+28h] [rbp-80h]
  __int64 v121; // [rsp+30h] [rbp-78h]
  __int64 v122; // [rsp+38h] [rbp-70h]
  const CoinOslFactorization *v123; // [rsp+38h] [rbp-70h]
  __int64 v124; // [rsp+40h] [rbp-68h]
  __int64 v125; // [rsp+48h] [rbp-60h]
  int v126; // [rsp+50h] [rbp-58h]
  int v127; // [rsp+54h] [rbp-54h]
  int v128; // [rsp+54h] [rbp-54h]
  int v129; // [rsp+5Ch] [rbp-4Ch]
  _DWORD v130[15]; // [rsp+6Ch] [rbp-3Ch] BYREF

  v2 = (const __m128i *)((char *)a2 + 104);
  v3 = a2;
  v5 = *((_DWORD *)a2 + 9);
  *((_QWORD *)this + 1) = *((_QWORD *)a2 + 1);
  *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
  v6 = *((_QWORD *)a2 + 3);
  *((_DWORD *)this + 9) = v5;
  v7 = *((_DWORD *)a2 + 10);
  *((_QWORD *)this + 3) = v6;
  *((_DWORD *)this + 10) = v7;
  *((_DWORD *)this + 15) = *((_DWORD *)a2 + 15);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
  *((_DWORD *)this + 24) = *((_DWORD *)a2 + 24);
  *((_DWORD *)this + 11) = *((_DWORD *)a2 + 11);
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 13) = *((_DWORD *)a2 + 13);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 14);
  v8 = *((_DWORD *)a2 + 87);
  v9 = *((_DWORD *)a2 + 91);
  *((_QWORD *)this + 10) = 0;
  v116 = (char *)this + 104;
  v10 = *((_DWORD *)this + 120);
  *((_QWORD *)this + 9) = 0;
  *((_QWORD *)this + 11) = 0;
  v11 = *((_DWORD *)this + 87);
  v114 = v10;
  v12 = *((_DWORD *)a2 + 120);
  v13 = *((_QWORD *)this + 28);
  v117 = v12;
  if ( v13 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_298420);
    *((_QWORD *)this + 29) += 8LL;
    *((__m128i *)this + 10) = _mm_add_epi64(_mm_loadu_si128((const __m128i *)this + 10), si128);
    v15 = _mm_add_epi64(_mm_loadu_si128((const __m128i *)this + 11), si128);
    v16 = _mm_add_epi64(si128, _mm_loadu_si128((const __m128i *)this + 9));
    *((__m128i *)this + 11) = v15;
    *((__m128i *)this + 9) = v16;
  }
  v17 = *((_QWORD *)this + 34);
  if ( v17 )
  {
    *((_QWORD *)this + 33) += 4LL;
    *((_QWORD *)this + 35) += 8LL;
    *((_QWORD *)this + 34) = v17 + 4;
  }
  if ( *((_QWORD *)v3 + 28) )
  {
    v18 = _mm_load_si128((const __m128i *)&xmmword_298420);
    *((_QWORD *)v3 + 29) += 8LL;
    *((__m128i *)v3 + 10) = _mm_add_epi64(_mm_loadu_si128((const __m128i *)v3 + 10), v18);
    v19 = _mm_add_epi64(_mm_loadu_si128((const __m128i *)v3 + 11), v18);
    v20 = _mm_add_epi64(v18, _mm_loadu_si128((const __m128i *)v3 + 9));
    *((__m128i *)v3 + 11) = v19;
    *((__m128i *)v3 + 9) = v20;
  }
  v21 = *((_QWORD *)v3 + 34);
  if ( v21 )
  {
    *((_QWORD *)v3 + 33) += 4LL;
    *((_QWORD *)v3 + 35) += 8LL;
    *((_QWORD *)v3 + 34) = v21 + 4;
  }
  *(__m128i *)((char *)this + 104) = _mm_loadu_si128((const __m128i *)((char *)v3 + 104));
  *(__m128i *)((char *)this + 120) = _mm_loadu_si128(v2 + 1);
  *((_QWORD *)this + 17) = v2[2].m128i_i64[0];
  *(__m128i *)((char *)this + 344) = _mm_loadu_si128((const __m128i *)((char *)v3 + 344));
  *(__m128i *)((char *)this + 360) = _mm_loadu_si128((const __m128i *)((char *)v3 + 360));
  *(__m128i *)((char *)this + 376) = _mm_loadu_si128((const __m128i *)((char *)v3 + 376));
  *(__m128i *)((char *)this + 392) = _mm_loadu_si128((const __m128i *)((char *)v3 + 392));
  *(__m128i *)((char *)this + 408) = _mm_loadu_si128((const __m128i *)((char *)v3 + 408));
  *(__m128i *)((char *)this + 424) = _mm_loadu_si128((const __m128i *)((char *)v3 + 424));
  *(__m128i *)((char *)this + 440) = _mm_loadu_si128((const __m128i *)((char *)v3 + 440));
  *(__m128i *)((char *)this + 456) = _mm_loadu_si128((const __m128i *)((char *)v3 + 456));
  *(__m128i *)((char *)this + 472) = _mm_loadu_si128((const __m128i *)((char *)v3 + 472));
  *((_DWORD *)this + 122) = *((_DWORD *)v3 + 122);
  if ( v8 )
  {
    if ( v114 == v117 )
    {
      if ( v8 == v11 )
        goto LABEL_12;
    }
    else
    {
      clp_free(*((void **)this + 34));
      clp_free(*((void **)this + 33));
      clp_free(*((void **)this + 35));
      clp_free(*((void **)this + 36));
      *((_QWORD *)this + 34) = 0;
      *((_QWORD *)this + 33) = 0;
      *((_QWORD *)this + 35) = 0;
      *((_QWORD *)this + 36) = 0;
      if ( v8 == v11 )
        goto LABEL_12;
    }
    clp_free(*((void **)this + 28));
    *((_QWORD *)this + 28) = 0;
    *((_QWORD *)this + 39) = 0;
    v40 = sub_20D420((__int64)this + 104, 1, v130);
    *((_QWORD *)this + 28) = v40;
    *((_QWORD *)this + 39) = v40;
LABEL_12:
    sub_20D420((__int64)this + 104, 0, v130);
    v22 = *((_DWORD *)v3 + 116);
    v23 = 0;
    v9 = *((_DWORD *)this + 120);
    if ( v22 )
      v23 = 4LL * *(int *)(*((_QWORD *)v3 + 31) + 4LL * (v22 + 1));
    v24 = *((_DWORD *)v3 + 98);
    v25 = v24 + 20;
    v26 = ((*((_QWORD *)v3 + 34) + 4LL * v9 - (*((_QWORD *)v3 + 30) + v23)) >> 2) + 20;
    if ( v26 > v9 )
      v26 = *((_DWORD *)this + 120);
    if ( v25 > v9 )
      v25 = *((_DWORD *)this + 120);
    v27 = v24 | v22;
    if ( v27 )
    {
      v27 = v26;
    }
    else if ( *((_DWORD *)v3 + 97) )
    {
      v27 = v26;
    }
    else
    {
      v25 = 0;
    }
    memcpy(*((void **)this + 39), *((const void **)v3 + 39), 8LL * v130[0]);
    if ( !*((_DWORD *)this + 99) && *((_DWORD *)this + 111) )
    {
      if ( v114 == v117 )
      {
        if ( *((_QWORD *)this + 36) )
          goto LABEL_24;
      }
      else
      {
        v41 = clp_double(v9);
        *((_QWORD *)this + 36) = v41;
        if ( v41 )
          goto LABEL_59;
      }
      *((_DWORD *)this + 122) = v9;
      *((_DWORD *)this + 111) = 0;
    }
    else
    {
      clp_free(*((void **)this + 36));
      *((_QWORD *)this + 36) = 0;
      *((_DWORD *)this + 111) = 0;
    }
    if ( v114 == v117 )
    {
LABEL_24:
      v28 = *((_QWORD *)this + 34);
      goto LABEL_25;
    }
LABEL_59:
    v28 = clp_int(v9);
    *((_QWORD *)this + 34) = v28;
LABEL_25:
    if ( v28 )
    {
      v118 = v9 - v26;
      v29 = v25 | v27;
      if ( v25 | v27 )
      {
        v42 = *((_QWORD *)v3 + 34);
        if ( v25 && v42 != v28 )
        {
          v43 = v25 >> 3;
          if ( v25 >> 3 <= 0 )
          {
            v51 = (_DWORD *)v28;
            v50 = *((_DWORD **)v3 + 34);
          }
          else
          {
            if ( (v42 >= v28 + 32 || v28 >= v42 + 32) && v43 > 1 )
            {
              v44 = *((const __m128i **)v3 + 34);
              v45 = v28;
              v46 = v43 - 1;
              do
              {
                v47 = _mm_loadu_si128(v44);
                v44 += 2;
                v45 += 32LL;
                v48 = _mm_loadu_si128(v44 - 1);
                *(__m128i *)(v45 - 32) = v47;
                *(__m128i *)(v45 - 16) = v48;
              }
              while ( v44 != (const __m128i *)(v42 + 32 + 32 * v46) );
            }
            else
            {
              v83 = v28;
              v84 = *((int **)v3 + 34);
              v46 = v43 - 1;
              do
              {
                v85 = *v84;
                v84 += 8;
                v83 += 32LL;
                *(_DWORD *)(v83 - 32) = v85;
                *(_DWORD *)(v83 - 28) = *(v84 - 7);
                *(_DWORD *)(v83 - 24) = *(v84 - 6);
                *(_DWORD *)(v83 - 20) = *(v84 - 5);
                *(_DWORD *)(v83 - 16) = *(v84 - 4);
                *(_DWORD *)(v83 - 12) = *(v84 - 3);
                *(_DWORD *)(v83 - 8) = *(v84 - 2);
                *(_DWORD *)(v83 - 4) = *(v84 - 1);
              }
              while ( v84 != (int *)(v42 + 32 * (v46 + 1)) );
            }
            v49 = 32 * ((int)v46 + 1LL);
            v50 = (_DWORD *)(v42 + v49);
            v51 = (_DWORD *)(v28 + v49);
          }
          switch ( v25 % 8 )
          {
            case 1:
              goto LABEL_75;
            case 2:
              goto LABEL_74;
            case 3:
              goto LABEL_73;
            case 4:
              goto LABEL_72;
            case 5:
              goto LABEL_71;
            case 6:
              goto LABEL_70;
            case 7:
              v51[6] = v50[6];
LABEL_70:
              v51[5] = v50[5];
LABEL_71:
              v51[4] = v50[4];
LABEL_72:
              v51[3] = v50[3];
LABEL_73:
              v51[2] = v50[2];
LABEL_74:
              v51[1] = v50[1];
LABEL_75:
              *v51 = *v50;
              break;
            default:
              break;
          }
        }
        v52 = 4LL * v118;
        v53 = (int *)(v28 + v52);
        v54 = (int *)(v42 + v52);
        if ( v27 && v53 != v54 )
        {
          v55 = v27 >> 3;
          if ( v27 >> 3 > 0 )
          {
            if ( ((unsigned __int64)v53 >= 4LL * v118 + 32 + v42 || (unsigned __int64)v54 >= v28 + 4LL * v118 + 32)
              && v55 > 1 )
            {
              v56 = v55 - 1;
              v57 = 0;
              v58 = v56;
              v59 = 32 * (v56 + 1);
              do
              {
                v60 = _mm_loadu_si128((const __m128i *)&v54[v57 / 4 + 4]);
                *(__m128i *)&v53[v57 / 4] = _mm_loadu_si128((const __m128i *)&v54[v57 / 4]);
                *(__m128i *)&v53[v57 / 4 + 4] = v60;
                v57 += 32LL;
              }
              while ( v57 != v59 );
            }
            else
            {
              v78 = v55 - 1;
              v79 = v54;
              v80 = v53;
              v58 = v78;
              v81 = &v53[8 * v78 + 8];
              do
              {
                v82 = *v79;
                v80 += 8;
                v79 += 8;
                *(v80 - 8) = v82;
                *(v80 - 7) = *(v79 - 7);
                *(v80 - 6) = *(v79 - 6);
                *(v80 - 5) = *(v79 - 5);
                *(v80 - 4) = *(v79 - 4);
                *(v80 - 3) = *(v79 - 3);
                *(v80 - 2) = *(v79 - 2);
                *(v80 - 1) = *(v79 - 1);
              }
              while ( v80 != v81 );
            }
            v61 = 32 * (v58 + 1LL);
            v54 = (int *)((char *)v54 + v61);
            v53 = (int *)((char *)v53 + v61);
          }
          switch ( v27 % 8 )
          {
            case 1:
              goto LABEL_92;
            case 2:
              goto LABEL_91;
            case 3:
              goto LABEL_90;
            case 4:
              goto LABEL_89;
            case 5:
              goto LABEL_88;
            case 6:
              goto LABEL_87;
            case 7:
              v53[6] = v54[6];
LABEL_87:
              v53[5] = v54[5];
LABEL_88:
              v53[4] = v54[4];
LABEL_89:
              v53[3] = v54[3];
LABEL_90:
              v53[2] = v54[2];
LABEL_91:
              v53[1] = v54[1];
LABEL_92:
              *v53 = *v54;
              break;
            default:
              break;
          }
        }
      }
      if ( !v9 )
        goto LABEL_38;
      if ( v114 == v117 )
      {
        v30 = *((_QWORD *)this + 33);
      }
      else
      {
        v30 = clp_int(v9);
        v29 = v25 | v27;
        *((_QWORD *)this + 33) = v30;
      }
      if ( !v30 )
      {
        v28 = *((_QWORD *)this + 34);
        v9 = 0;
        goto LABEL_38;
      }
      if ( *((_BYTE *)this + 460) && v29 )
      {
        v86 = *((_QWORD *)v3 + 33);
        v120 = v86 - 4;
        v122 = v30 - 4;
        v124 = *((_QWORD *)this + 18);
        v125 = *((_QWORD *)this + 20);
        v87 = 4LL * v118;
        v88 = (int *)(v30 + v87);
        v89 = (int *)(v86 + v87);
        if ( v88 != v89 && v27 )
        {
          v90 = v27 >> 3;
          if ( v27 >> 3 > 0 )
          {
            if ( ((unsigned __int64)v88 >= 4LL * v118 + 32 + v86 || (unsigned __int64)v89 >= 4LL * v118 + 32 + v30)
              && v90 > 1 )
            {
              v91 = 0;
              v92 = v90 - 1;
              do
              {
                v93 = _mm_loadu_si128((const __m128i *)&v89[v91 + 4]);
                *(__m128i *)&v88[v91] = _mm_loadu_si128((const __m128i *)&v89[v91]);
                *(__m128i *)&v88[v91 + 4] = v93;
                v91 += 8;
              }
              while ( v91 != 8 * (v92 + 1) );
            }
            else
            {
              v111 = v89;
              v92 = v90 - 1;
              v112 = v88;
              do
              {
                v113 = *v111;
                v112 += 8;
                v111 += 8;
                *(v112 - 8) = v113;
                *(v112 - 7) = *(v111 - 7);
                *(v112 - 6) = *(v111 - 6);
                *(v112 - 5) = *(v111 - 5);
                *(v112 - 4) = *(v111 - 4);
                *(v112 - 3) = *(v111 - 3);
                *(v112 - 2) = *(v111 - 2);
                *(v112 - 1) = *(v111 - 1);
              }
              while ( v112 != &v88[8 * v92 + 8] );
            }
            v94 = 32 * ((int)v92 + 1LL);
            v89 = (int *)((char *)v89 + v94);
            v88 = (int *)((char *)v88 + v94);
          }
          switch ( v27 % 8 )
          {
            case 1:
              goto LABEL_144;
            case 2:
              goto LABEL_143;
            case 3:
              goto LABEL_142;
            case 4:
              goto LABEL_141;
            case 5:
              goto LABEL_140;
            case 6:
              goto LABEL_139;
            case 7:
              v88[6] = v89[6];
LABEL_139:
              v88[5] = v89[5];
LABEL_140:
              v88[4] = v89[4];
LABEL_141:
              v88[3] = v89[3];
LABEL_142:
              v88[2] = v89[2];
LABEL_143:
              v88[1] = v89[1];
LABEL_144:
              *v88 = *v89;
              break;
            default:
              break;
          }
        }
        v95 = *((_DWORD *)this + 86);
        v119 = *((_QWORD *)this + 36);
        if ( v119 )
        {
          v96 = 8LL * v118;
          v97 = (__int64 *)(v119 + v96);
          v98 = (__int64 *)(*((_QWORD *)v3 + 36) + v96);
          v121 = *((_QWORD *)v3 + 36);
          if ( v97 != v98 && v27 )
          {
            if ( v27 >> 3 > 0 )
            {
              v99 = v97;
              v100 = v98;
              v101 = (unsigned int)((v27 >> 3) - 1);
              do
              {
                v102 = *v100;
                v99 += 8;
                v100 += 8;
                *(v99 - 8) = v102;
                *(v99 - 7) = *(v100 - 7);
                *(v99 - 6) = *(v100 - 6);
                *(v99 - 5) = *(v100 - 5);
                *(v99 - 4) = *(v100 - 4);
                *(v99 - 3) = *(v100 - 3);
                *(v99 - 2) = *(v100 - 2);
                *(v99 - 1) = *(v100 - 1);
              }
              while ( v99 != &v97[8 * v101 + 8] );
              v103 = ((int)v101 + 1LL) << 6;
              v98 = (__int64 *)((char *)v98 + v103);
              v97 = (__int64 *)((char *)v97 + v103);
            }
            switch ( v27 % 8 )
            {
              case 1:
                goto LABEL_159;
              case 2:
                goto LABEL_158;
              case 3:
                goto LABEL_157;
              case 4:
                goto LABEL_156;
              case 5:
                goto LABEL_155;
              case 6:
                goto LABEL_154;
              case 7:
                v97[6] = v98[6];
LABEL_154:
                v97[5] = v98[5];
LABEL_155:
                v97[4] = v98[4];
LABEL_156:
                v97[3] = v98[3];
LABEL_157:
                v97[2] = v98[2];
LABEL_158:
                v97[1] = v98[1];
LABEL_159:
                *v97 = *v98;
                break;
              default:
                break;
            }
          }
          if ( v95 > 0 )
          {
            v127 = v25;
            v129 = v29;
            v104 = v122;
            v123 = v3;
            v105 = 1;
            do
            {
              v106 = *(int *)(v124 + 4 * v105 - 4);
              memcpy((void *)(v104 + 4 * v106), (const void *)(v120 + 4 * v106), 4LL * *(int *)(v125 + 4 * v105 - 4));
              memcpy(
                (void *)(v119 + 8 * v106 - 8),
                (const void *)(v121 + 8 * v106 - 8),
                8LL * *(int *)(v125 + 4 * v105 - 4));
              v107 = v105++;
            }
            while ( *((_DWORD *)this + 86) > v107 );
            v25 = v127;
            v29 = v129;
            v3 = v123;
          }
        }
        else if ( v95 > 0 )
        {
          v126 = v9;
          v108 = 1;
          v128 = v29;
          do
          {
            v109 = 4LL * *(int *)(v124 + 4 * v108 - 4);
            memcpy((void *)(v122 + v109), (const void *)(v120 + v109), 4LL * *(int *)(v125 + 4 * v108 - 4));
            v110 = v108++;
          }
          while ( *((_DWORD *)this + 86) > v110 );
          v9 = v126;
          v29 = v128;
        }
      }
      if ( v114 == v117 )
      {
        v31 = *((_QWORD **)this + 35);
      }
      else
      {
        v115 = v29;
        v62 = clp_double(v9);
        v29 = v115;
        v31 = (_QWORD *)v62;
        *((_QWORD *)this + 35) = v62;
      }
      v28 = *((_QWORD *)this + 34);
      if ( v31 )
      {
        v32 = *((_QWORD **)v3 + 35);
        if ( v29 )
        {
          if ( v25 && v32 != v31 )
          {
            if ( v25 >> 3 <= 0 )
            {
              v69 = v31;
              v68 = *((_QWORD **)v3 + 35);
            }
            else
            {
              v63 = v31;
              v64 = *((__int64 **)v3 + 35);
              v65 = (unsigned int)((v25 >> 3) - 1);
              do
              {
                v66 = *v64;
                v64 += 8;
                v63 += 8;
                *(v63 - 8) = v66;
                *(v63 - 7) = *(v64 - 7);
                *(v63 - 6) = *(v64 - 6);
                *(v63 - 5) = *(v64 - 5);
                *(v63 - 4) = *(v64 - 4);
                *(v63 - 3) = *(v64 - 3);
                *(v63 - 2) = *(v64 - 2);
                *(v63 - 1) = *(v64 - 1);
              }
              while ( v64 != &v32[8 * v65 + 8] );
              v67 = ((int)v65 + 1LL) << 6;
              v68 = (_QWORD *)((char *)v32 + v67);
              v69 = (_QWORD *)((char *)v31 + v67);
            }
            switch ( v25 % 8 )
            {
              case 1:
                goto LABEL_108;
              case 2:
                goto LABEL_107;
              case 3:
                goto LABEL_106;
              case 4:
                goto LABEL_105;
              case 5:
                goto LABEL_104;
              case 6:
                goto LABEL_103;
              case 7:
                v69[6] = v68[6];
LABEL_103:
                v69[5] = v68[5];
LABEL_104:
                v69[4] = v68[4];
LABEL_105:
                v69[3] = v68[3];
LABEL_106:
                v69[2] = v68[2];
LABEL_107:
                v69[1] = v68[1];
LABEL_108:
                *v69 = *v68;
                break;
              default:
                break;
            }
          }
          v70 = v118;
          v71 = &v31[v70];
          v72 = &v32[v70];
          if ( v27 && v71 != v72 )
          {
            if ( v27 >> 3 > 0 )
            {
              v73 = v71;
              v74 = v72;
              v75 = (unsigned int)((v27 >> 3) - 1);
              do
              {
                v76 = *v74;
                v73 += 8;
                v74 += 8;
                *(v73 - 8) = v76;
                *(v73 - 7) = *(v74 - 7);
                *(v73 - 6) = *(v74 - 6);
                *(v73 - 5) = *(v74 - 5);
                *(v73 - 4) = *(v74 - 4);
                *(v73 - 3) = *(v74 - 3);
                *(v73 - 2) = *(v74 - 2);
                *(v73 - 1) = *(v74 - 1);
              }
              while ( v73 != &v71[8 * v75 + 8] );
              v77 = ((int)v75 + 1LL) << 6;
              v72 = (__int64 *)((char *)v72 + v77);
              v71 = (__int64 *)((char *)v71 + v77);
            }
            switch ( v27 % 8 )
            {
              case 1:
                goto LABEL_128;
              case 2:
                goto LABEL_127;
              case 3:
                goto LABEL_126;
              case 4:
                goto LABEL_125;
              case 5:
                goto LABEL_124;
              case 6:
                goto LABEL_123;
              case 7:
                v71[6] = v72[6];
LABEL_123:
                v71[5] = v72[5];
LABEL_124:
                v71[4] = v72[4];
LABEL_125:
                v71[3] = v72[3];
LABEL_126:
                v71[2] = v72[2];
LABEL_127:
                v71[1] = v72[1];
LABEL_128:
                *v71 = *v72;
                break;
              default:
                break;
            }
          }
        }
        *((_QWORD *)this + 31) = *((_QWORD *)this + 19) + *((_QWORD *)v3 + 31) - *((_QWORD *)v3 + 19);
        *((_QWORD *)this + 30) = v28 + *((_QWORD *)v3 + 30) - *((_QWORD *)v3 + 34);
        *((_QWORD *)this + 32) = (char *)v31 + *((_QWORD *)v3 + 32) - (_QWORD)v32;
        goto LABEL_38;
      }
    }
    v9 = 0;
LABEL_38:
    v13 = *((_QWORD *)this + 28);
    goto LABEL_39;
  }
  v28 = *((_QWORD *)this + 34);
LABEL_39:
  *((_DWORD *)this + 91) = v9;
  if ( v13 )
  {
    v33 = _mm_load_si128((const __m128i *)&xmmword_298430);
    *((_QWORD *)this + 29) -= 8LL;
    *((__m128i *)this + 10) = _mm_add_epi64(_mm_loadu_si128((const __m128i *)this + 10), v33);
    v34 = _mm_add_epi64(_mm_loadu_si128((const __m128i *)this + 11), v33);
    v35 = _mm_add_epi64(v33, _mm_loadu_si128((const __m128i *)this + 9));
    *((__m128i *)this + 11) = v34;
    *((__m128i *)this + 9) = v35;
  }
  if ( v28 )
  {
    *((_QWORD *)this + 33) -= 4LL;
    *((_QWORD *)this + 35) -= 8LL;
    *((_QWORD *)this + 34) = v28 - 4;
  }
  clp_setup_pointers(v116);
  if ( *((_QWORD *)v3 + 28) )
  {
    v36 = _mm_load_si128((const __m128i *)&xmmword_298430);
    *((_QWORD *)v3 + 29) -= 8LL;
    *((__m128i *)v3 + 10) = _mm_add_epi64(_mm_loadu_si128((const __m128i *)v3 + 10), v36);
    v37 = _mm_add_epi64(_mm_loadu_si128((const __m128i *)v3 + 11), v36);
    v38 = _mm_add_epi64(v36, _mm_loadu_si128((const __m128i *)v3 + 9));
    *((__m128i *)v3 + 11) = v37;
    *((__m128i *)v3 + 9) = v38;
  }
  result = *((_QWORD *)v3 + 34);
  if ( result )
  {
    *((_QWORD *)v3 + 33) -= 4LL;
    *((_QWORD *)v3 + 35) -= 8LL;
    result -= 4;
    *((_QWORD *)v3 + 34) = result;
  }
  return result;
}

