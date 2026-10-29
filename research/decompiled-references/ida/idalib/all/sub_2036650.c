__int64 __fastcall sub_2036650(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, char a6, char a7)
{
  __int64 v7; // r14
  __m128 v8; // xmm0
  __int64 result; // rax
  __m128i v11; // xmm1
  __m128i v12; // xmm2
  unsigned __int64 v13; // rdi
  __m128 *v14; // rbp
  __m128 *v15; // r12
  __int64 (__fastcall *v16)(_QWORD); // rax
  _QWORD *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r15
  __int64 v22; // rdx
  __int64 *v23; // r12
  unsigned __int64 v24; // rcx
  __int64 *v25; // rsi
  __int64 v26; // rdi
  unsigned __int64 v27; // rdi
  unsigned __int8 (__fastcall *v28)(_QWORD); // rax
  _QWORD *v29; // rdi
  int v30; // r8d
  __int64 *v31; // rax
  int v32; // esi
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rax
  unsigned int v36; // eax
  __m128i *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // r11d
  __int64 v41; // rcx
  __m128i *v42; // rsi
  unsigned __int64 v43; // rdx
  __int64 *v44; // rcx
  __int64 *v45; // r10
  __int64 v46; // rcx
  unsigned int v47; // edx
  __int64 *v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // rdi
  int v51; // r9d
  __int64 *v52; // r8
  int v53; // r9d
  __int64 *v54; // r8
  unsigned __int64 v55; // rax
  __int64 v56; // rax
  __m128i *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  int v60; // r10d
  __int64 v61; // rcx
  __m128i *v62; // rsi
  unsigned __int64 v63; // rdx
  __int64 *v64; // rcx
  __int64 *v65; // r9
  __int64 v66; // r11
  unsigned int v67; // edx
  __int64 *v68; // rcx
  __int64 v69; // rsi
  __int64 v70; // rdi
  __int64 v71; // rcx
  __int64 v72; // rcx
  __m128i *v73; // rsi
  unsigned __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rcx
  __m128i *v77; // rsi
  unsigned __int64 v78; // rdx
  int v79; // r9d
  int v80; // r8d
  __int64 *v81; // rdi
  unsigned __int64 v82; // [rsp+8h] [rbp-100h] BYREF
  unsigned __int64 v83; // [rsp+10h] [rbp-F8h]
  __int64 v84; // [rsp+18h] [rbp-F0h]
  __int64 v85; // [rsp+20h] [rbp-E8h]
  __int64 v86; // [rsp+28h] [rbp-E0h]
  __int64 *v87; // [rsp+30h] [rbp-D8h]
  __int64 v88; // [rsp+38h] [rbp-D0h]
  __int64 *v89; // [rsp+40h] [rbp-C8h]
  unsigned int i; // [rsp+48h] [rbp-C0h]
  int v91; // [rsp+4Ch] [rbp-BCh]
  __m128i v92; // [rsp+50h] [rbp-B8h] BYREF
  __m128i v93; // [rsp+60h] [rbp-A8h]
  __m128 v94; // [rsp+70h] [rbp-98h] BYREF
  __int64 (__fastcall *v95)(__int64 *); // [rsp+80h] [rbp-88h]
  __int64 v96; // [rsp+88h] [rbp-80h]
  __m128i v97; // [rsp+90h] [rbp-78h] BYREF
  __m128i v98; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v99; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v100; // [rsp+B8h] [rbp-50h]
  __int64 v101; // [rsp+C0h] [rbp-48h]
  __int64 v102; // [rsp+C8h] [rbp-40h]

  v7 = a1 + 272;
  *(_QWORD *)(a1 + 32) = a3;
  v82 = a4;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  v8 = _mm_loadh_ps((const double *)&v82);
  *(_QWORD *)(a1 + 40) = a4;
  *(__m128 *)a1 = v8;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_OWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_BYTE *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 224) = a5;
  *(_BYTE *)(a1 + 272) = a6;
  *(_DWORD *)(a1 + 192) = 0;
  *(_BYTE *)(a1 + 273) = a7;
  *(_QWORD *)(a1 + 304) = a1 + 320;
  result = 0x800000000LL;
  *(_OWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 256) = a1 + 272;
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 288) = 0;
  *(_DWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 312) = 0x800000000LL;
  *(_QWORD *)(a1 + 448) = a1 + 464;
  *(_QWORD *)(a1 + 456) = 0x800000000LL;
  *(_QWORD *)(a1 + 592) = 0;
  *(_QWORD *)(a1 + 600) = 0;
  *(_DWORD *)(a1 + 608) = 0;
  if ( a4 )
  {
    v84 = a1 + 232;
    sub_20BE360(&v97, a4);
    v11 = _mm_load_si128(&v97);
    v12 = _mm_load_si128(&v98);
    v83 = v99;
    v92 = v11;
    v82 = v100;
    v93 = v12;
    v86 = v101;
    v85 = v102;
LABEL_3:
    if ( *(_OWORD *)&v92 != __PAIR128__(v82, v83) || v93.m128i_i64[1] != v85 || (result = v86, v93.m128i_i64[0] != v86) )
    {
      v13 = 0;
      v14 = &v94;
      v94.m128_u64[1] = 0;
      v94.m128_u64[0] = (unsigned __int64)sub_202EC60;
      v15 = &v94;
      v95 = sub_202EC80;
      v96 = 0;
      while ( 1 )
      {
        v16 = (__int64 (__fastcall *)(_QWORD))v15->m128_u64[0];
        v17 = (__int64 *)((char *)v92.m128i_i64 + v13);
        if ( (v15->m128_u64[0] & 1) != 0 )
          v16 = *(__int64 (__fastcall **)(_QWORD))((char *)v16 + *v17 - 1);
        v18 = v16(v17);
        if ( v18 )
          break;
        ++v15;
        v13 = v15->m128_u64[1];
      }
      v21 = *(_QWORD *)(v18 + 48);
      if ( !v21 )
        goto LABEL_13;
      v22 = *(unsigned int *)(a1 + 248);
      v23 = *(__int64 **)(a1 + 232);
      if ( (_DWORD)v22 )
      {
        i = ((unsigned int)v21 >> 9) ^ ((unsigned int)v21 >> 4);
        v24 = (unsigned int)(v22 - 1);
        v20 = (unsigned int)v24 & i;
        v25 = &v23[v20];
        v26 = *v25;
        if ( v21 == *v25 )
        {
LABEL_12:
          sub_20365E0(&v94, v25, &v23[v22], v84, 1);
LABEL_13:
          v27 = 0;
          v94.m128_u64[1] = 0;
          v94.m128_u64[0] = (unsigned __int64)sub_202EC00;
          v95 = sub_202EC30;
          v96 = 0;
          while ( 1 )
          {
            v28 = (unsigned __int8 (__fastcall *)(_QWORD))v14->m128_u64[0];
            v29 = (__int64 *)((char *)v92.m128i_i64 + v27);
            if ( (v14->m128_u64[0] & 1) != 0 )
            {
              if ( (*(unsigned __int8 (**)(void))((char *)v28 + *v29 - 1))() )
                goto LABEL_3;
            }
            else if ( v28(v29) )
            {
              goto LABEL_3;
            }
            ++v14;
            v27 = v14->m128_u64[1];
          }
        }
        v30 = 1;
        v31 = nullptr;
        if ( v26 == -4096 )
          goto LABEL_23;
        while ( 1 )
        {
          if ( !v31 && v26 == -8192 )
            v31 = v25;
          v20 = (unsigned int)v24 & (v30 + (_DWORD)v20);
          v25 = &v23[(unsigned int)v20];
          v26 = *v25;
          if ( v21 == *v25 )
            goto LABEL_12;
          if ( v26 == -4096 )
            break;
          ++v30;
        }
        if ( !v31 )
LABEL_23:
          v31 = v25;
        v32 = *(_DWORD *)(a1 + 240) + 1;
        v19 = (unsigned int)(4 * v32);
        if ( (unsigned int)v19 < 3 * (int)v22 )
        {
          v33 = (unsigned int)v22 >> 3;
          if ( (int)v22 - *(_DWORD *)(a1 + 244) - v32 > (unsigned int)v33 )
          {
            v34 = *v31;
            goto LABEL_27;
          }
          LODWORD(v87) = v22;
          v36 = (((((((((v24 | (v24 >> 1)) >> 2) | v24 | (v24 >> 1)) >> 4) | ((v24 | (v24 >> 1)) >> 2)
                                                                           | v24
                                                                           | (v24 >> 1)) >> 8)
                 | ((((v24 | (v24 >> 1)) >> 2) | v24 | (v24 >> 1)) >> 4)
                 | ((v24 | (v24 >> 1)) >> 2)
                 | v24
                 | (v24 >> 1)) >> 16)
               | ((((((v24 | (v24 >> 1)) >> 2) | v24 | (v24 >> 1)) >> 4) | ((v24 | (v24 >> 1)) >> 2) | v24 | (v24 >> 1)) >> 8)
               | ((((v24 | (v24 >> 1)) >> 2) | v24 | (v24 >> 1)) >> 4)
               | ((v24 | (v24 >> 1)) >> 2)
               | v24
               | (v24 >> 1))
              + 1;
          if ( v36 < 0x40 )
            v36 = 64;
          *(_DWORD *)(a1 + 248) = v36;
          v37 = (__m128i *)sub_22300B0(8LL * v36, 8, v22, 64, v33, v20);
          v38 = (unsigned int)v87;
          *(_QWORD *)(a1 + 232) = v37;
          if ( !v23 )
          {
            v71 = *(unsigned int *)(a1 + 248);
            *(_QWORD *)(a1 + 240) = 0;
            v72 = 8 * v71;
            if ( v37 != (__m128i *)&v37->m128i_i8[v72] )
            {
              v73 = v37;
              v74 = ((unsigned __int64)(v72 - 8) >> 3) + 1;
              if ( v72 == 8 )
                goto LABEL_102;
              do
              {
                ++v73;
                v73[-1] = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
              }
              while ( &v37[v74 >> 1] != v73 );
              v37 = (__m128i *)((char *)v37 + 8 * (v74 & 0xFFFFFFFFFFFFFFFELL));
              if ( (v74 & 0xFFFFFFFFFFFFFFFELL) != v74 )
LABEL_102:
                v37->m128i_i64[0] = -4096;
            }
            goto LABEL_48;
          }
          v39 = *(unsigned int *)(a1 + 248);
          *(_QWORD *)(a1 + 240) = 0;
          v88 = 8 * v38;
          v40 = v39;
          v41 = 8 * v39;
          v89 = &v23[v38];
          if ( v37 != (__m128i *)&v37->m128i_i8[v41] )
          {
            v42 = v37;
            v43 = ((unsigned __int64)(v41 - 8) >> 3) + 1;
            if ( v41 == 8 )
            {
              v44 = (__int64 *)v37;
LABEL_39:
              *v44 = -4096;
              goto LABEL_40;
            }
            do
            {
              ++v42;
              v42[-1] = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
            }
            while ( &v37[v43 >> 1] != v42 );
            v44 = &v37->m128i_i64[v43 & 0xFFFFFFFFFFFFFFFELL];
            if ( (v43 & 0xFFFFFFFFFFFFFFFELL) != v43 )
              goto LABEL_39;
          }
LABEL_40:
          v45 = v23;
          LODWORD(v87) = v40 - 1;
          do
          {
            v46 = *v45;
            if ( *v45 != -8192 && v46 != -4096 )
            {
              if ( !v40 )
              {
                *(_QWORD *)&dword_0 = *v45;
                BUG();
              }
              v47 = (unsigned int)v87 & (((unsigned int)v46 >> 9) ^ ((unsigned int)v46 >> 4));
              v48 = &v37->m128i_i64[v47];
              v49 = *v48;
              if ( *v48 != v46 )
              {
                v53 = 1;
                v54 = nullptr;
                if ( v49 != -4096 )
                {
                  while ( 1 )
                  {
                    if ( !v54 && v49 == -8192 )
                      v54 = v48;
                    v47 = (unsigned int)v87 & (v53 + v47);
                    v91 = v53 + 1;
                    v48 = &v37->m128i_i64[v47];
                    v49 = *v48;
                    if ( v46 == *v48 )
                      goto LABEL_45;
                    if ( v49 == -4096 )
                      break;
                    v53 = v91;
                  }
                  if ( v54 )
                    v48 = v54;
                }
              }
LABEL_45:
              ++*(_DWORD *)(a1 + 240);
              *v48 = v46;
            }
            ++v45;
          }
          while ( v89 != v45 );
          operator delete(v23, v88, 8);
LABEL_48:
          v22 = *(unsigned int *)(a1 + 248);
          v32 = *(_DWORD *)(a1 + 240) + 1;
          if ( (_DWORD)v22 )
          {
            v23 = *(__int64 **)(a1 + 232);
            LODWORD(v50) = (v22 - 1) & i;
            v31 = &v23[(unsigned int)v50];
            v34 = *v31;
            if ( v21 != *v31 )
            {
              v51 = 1;
              v52 = nullptr;
              if ( v34 != -4096 )
              {
                while ( 1 )
                {
                  if ( v34 == -8192 && !v52 )
                    v52 = v31;
                  v50 = ((_DWORD)v22 - 1) & (unsigned int)(v50 + v51);
                  v31 = &v23[v50];
                  v34 = *v31;
                  if ( v21 == *v31 )
                    goto LABEL_27;
                  if ( v34 == -4096 )
                    goto LABEL_68;
                  ++v51;
                }
              }
LABEL_51:
              *(_DWORD *)(a1 + 240) = v32;
LABEL_29:
              *v31 = v21;
              sub_20365E0(&v94, v31, &v23[v22], v84, 1);
              v35 = *(unsigned int *)(a1 + 264);
              if ( v35 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 268) )
              {
                sub_2237220(a1 + 256, v7, v35 + 1, 8);
                v35 = *(unsigned int *)(a1 + 264);
              }
              *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8 * v35) = v21;
              ++*(_DWORD *)(a1 + 264);
              goto LABEL_13;
            }
LABEL_27:
            *(_DWORD *)(a1 + 240) = v32;
            if ( v34 != -4096 )
              --*(_DWORD *)(a1 + 244);
            goto LABEL_29;
          }
          goto LABEL_128;
        }
      }
      LODWORD(v87) = v22;
      v55 = (((((((unsigned int)(2 * v22 - 1) | ((unsigned __int64)(unsigned int)(2 * v22 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v22 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v22 - 1) >> 1)) >> 4)
            | (((unsigned int)(2 * v22 - 1) | ((unsigned __int64)(unsigned int)(2 * v22 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v22 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v22 - 1) >> 1)) >> 8)
          | (((((unsigned int)(2 * v22 - 1) | ((unsigned __int64)(unsigned int)(2 * v22 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v22 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v22 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v22 - 1) | ((unsigned __int64)(unsigned int)(2 * v22 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v22 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v22 - 1) >> 1);
      v56 = ((v55 >> 16) | v55) + 1;
      if ( (unsigned int)v56 < 0x40 )
        LODWORD(v56) = 64;
      *(_DWORD *)(a1 + 248) = v56;
      v57 = (__m128i *)sub_22300B0(8LL * (unsigned int)v56, 8, v22, 64, v19, v20);
      v58 = (unsigned int)v87;
      *(_QWORD *)(a1 + 232) = v57;
      if ( !v23 )
      {
        v75 = *(unsigned int *)(a1 + 248);
        *(_QWORD *)(a1 + 240) = 0;
        v76 = 8 * v75;
        if ( v57 != (__m128i *)&v57->m128i_i8[v76] )
        {
          v77 = v57;
          v78 = ((unsigned __int64)(v76 - 8) >> 3) + 1;
          if ( v76 == 8 )
            goto LABEL_108;
          do
          {
            ++v77;
            v77[-1] = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
          }
          while ( &v57[v78 >> 1] != v77 );
          v57 = (__m128i *)((char *)v57 + 8 * (v78 & 0xFFFFFFFFFFFFFFFELL));
          if ( (v78 & 0xFFFFFFFFFFFFFFFELL) != v78 )
LABEL_108:
            v57->m128i_i64[0] = -4096;
        }
        goto LABEL_95;
      }
      v59 = *(unsigned int *)(a1 + 248);
      *(_QWORD *)(a1 + 240) = 0;
      v88 = 8 * v58;
      v60 = v59;
      v61 = 8 * v59;
      v87 = &v23[v58];
      if ( v57 != (__m128i *)&v57->m128i_i8[v61] )
      {
        v62 = v57;
        v63 = ((unsigned __int64)(v61 - 8) >> 3) + 1;
        if ( v61 == 8 )
        {
          v64 = (__int64 *)v57;
        }
        else
        {
          do
          {
            ++v62;
            v62[-1] = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
          }
          while ( v62 != &v57[v63 >> 1] );
          v64 = &v57->m128i_i64[v63 & 0xFFFFFFFFFFFFFFFELL];
          if ( (v63 & 0xFFFFFFFFFFFFFFFELL) == v63 )
            goto LABEL_87;
        }
        *v64 = -4096;
      }
LABEL_87:
      v65 = v23;
      for ( i = v60 - 1; v87 != v65; ++v65 )
      {
        v66 = *v65;
        if ( *v65 != -8192 && v66 != -4096 )
        {
          if ( !v60 )
          {
            *(_QWORD *)&dword_0 = *v65;
            BUG();
          }
          v67 = i & (((unsigned int)v66 >> 9) ^ ((unsigned int)v66 >> 4));
          v68 = &v57->m128i_i64[v67];
          v69 = *v68;
          if ( v66 != *v68 )
          {
            v80 = 1;
            v81 = nullptr;
            if ( v69 != -4096 )
            {
              while ( 1 )
              {
                if ( !v81 && v69 == -8192 )
                  v81 = v68;
                v67 = i & (v80 + v67);
                LODWORD(v89) = v80 + 1;
                v68 = &v57->m128i_i64[v67];
                v69 = *v68;
                if ( v66 == *v68 )
                  goto LABEL_92;
                if ( v69 == -4096 )
                  break;
                v80 = (int)v89;
              }
              if ( v81 )
                v68 = v81;
            }
          }
LABEL_92:
          ++*(_DWORD *)(a1 + 240);
          *v68 = v66;
        }
      }
      operator delete(v23, v88, 8);
LABEL_95:
      v22 = *(unsigned int *)(a1 + 248);
      v32 = *(_DWORD *)(a1 + 240) + 1;
      if ( (_DWORD)v22 )
      {
        v23 = *(__int64 **)(a1 + 232);
        LODWORD(v70) = (v22 - 1) & (((unsigned int)v21 >> 9) ^ ((unsigned int)v21 >> 4));
        v31 = &v23[(unsigned int)v70];
        v34 = *v31;
        if ( *v31 == v21 )
        {
          v34 = v21;
        }
        else
        {
          v79 = 1;
          v52 = nullptr;
          if ( v34 == -4096 )
            goto LABEL_51;
          while ( 1 )
          {
            if ( !v52 && v34 == -8192 )
              v52 = v31;
            v70 = ((_DWORD)v22 - 1) & (unsigned int)(v70 + v79);
            v31 = &v23[v70];
            v34 = *v31;
            if ( v21 == *v31 )
              goto LABEL_27;
            if ( v34 == -4096 )
              break;
            ++v79;
          }
LABEL_68:
          if ( !v52 )
            goto LABEL_51;
          v34 = *v52;
          v31 = v52;
        }
        goto LABEL_27;
      }
LABEL_128:
      ++*(_DWORD *)(a1 + 240);
      BUG();
    }
  }
  return result;
}
