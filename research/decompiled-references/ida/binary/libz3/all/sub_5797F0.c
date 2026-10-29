__int64 *__fastcall sub_5797F0(__int64 **a1, __int64 *a2)
{
  char **exception; // r13
  char **v3; // r12
  __int64 *v4; // r13
  __int64 v5; // rbx
  _QWORD *v6; // r14
  unsigned int v7; // eax
  _QWORD *v8; // r14
  unsigned __int64 v9; // rbp
  __int64 v10; // rdx
  unsigned int v11; // r15d
  __int64 v12; // rax
  _DWORD *v13; // rsi
  size_t v14; // rdx
  __int64 v15; // rax
  __m128i *v16; // rbx
  __int64 v17; // rsi
  __m128i *v18; // r14
  __m128i *v19; // r12
  unsigned __int64 v20; // rdx
  int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rbp
  char *v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rax
  __m128i v27; // xmm0
  int *v28; // r8
  int v29; // edi
  __int32 v30; // eax
  int v31; // esi
  unsigned __int64 v32; // xmm1_8
  int v33; // edx
  int v34; // edi
  __m128i *k; // rax
  __m128i *v36; // r15
  __int64 v37; // r15
  __int32 *v38; // r11
  __int64 v39; // r10
  __int64 v40; // rdi
  __int32 v41; // r8d
  __int32 *v42; // rcx
  bool v43; // r9
  __int64 i; // rsi
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rsi
  __int32 *v48; // rcx
  __int32 *v49; // rsi
  __m128i *v50; // rcx
  __int32 v51; // esi
  __int32 v52; // edx
  __int32 *v53; // rax
  __int32 *v54; // rdi
  __int64 v55; // rdx
  unsigned int v56; // ecx
  unsigned int v57; // edi
  unsigned int v58; // edx
  __int64 v59; // rax
  __int64 v60; // rdi
  _DWORD *v61; // r14
  __int64 *v62; // r8
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rcx
  __int64 v65; // rax
  __m128i v66; // xmm0
  unsigned __int64 v67; // rax
  __int64 v68; // r8
  __int64 *v69; // r15
  __int64 *v70; // r12
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 *result; // rax
  _QWORD *v74; // rcx
  int v75; // ebx
  __int64 v76; // rdx
  int v77; // esi
  int v78; // edx
  __int64 v79; // rax
  int *v80; // rax
  __int64 v81; // rsi
  int m; // edx
  __int64 v83; // rax
  __int64 *v84; // rbx
  __int64 *v85; // r12
  __int64 v86; // rax
  unsigned int v87; // r12d
  unsigned int v88; // edx
  unsigned int *v89; // rax
  __int64 v90; // rax
  char *v91; // r9
  __int32 v92; // edi
  __int64 v93; // r11
  __int64 v94; // r10
  __int64 v95; // r8
  __int64 j; // rsi
  __int64 v97; // rax
  __m128i *v98; // rcx
  __int64 v99; // rsi
  __int64 v100; // r8
  __int32 *v101; // rcx
  __m128i *v102; // rax
  __int32 v103; // r15d
  __int32 v104; // edx
  __int32 *v105; // rax
  __int32 *v106; // rsi
  __m128i *v107; // rdi
  __int32 v108; // r15d
  __int32 v109; // edx
  __int32 *v110; // rax
  __int32 *v111; // rcx
  __int64 v112; // rax
  __int32 v113; // edx
  __int64 v114; // rsi
  _QWORD *v115; // rax
  unsigned __int64 v116; // rcx
  __int64 *v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rax
  unsigned int v120; // [rsp+0h] [rbp-88h]
  unsigned __int64 v121; // [rsp+0h] [rbp-88h]
  unsigned __int64 v122; // [rsp+0h] [rbp-88h]
  __int64 *v123; // [rsp+8h] [rbp-80h]
  char *v125; // [rsp+18h] [rbp-70h]
  unsigned int v126; // [rsp+18h] [rbp-70h]
  __int64 v127[11]; // [rsp+30h] [rbp-58h] BYREF

  v4 = *a1;
  if ( *a1 )
  {
    v123 = &v4[*((unsigned int *)v4 - 1)];
    if ( v4 != v123 )
    {
      v5 = *v4;
      v6 = (_QWORD *)sub_186B270(0x18u);
      *v6 = 2;
      v7 = 0;
      v8 = v6 + 1;
      v9 = (unsigned __int64)v8;
      while ( 1 )
      {
        v10 = *(_QWORD *)(v5 + 40);
        *v8 = 0;
        if ( v10 )
          break;
        while ( 1 )
        {
          ++v4;
          *(_DWORD *)(v9 - 4) = v7 + 1;
          if ( v123 == v4 )
            goto LABEL_68;
LABEL_52:
          v55 = *(unsigned int *)(v9 - 4);
          v5 = *v4;
          v7 = *(_DWORD *)(v9 - 4);
          v8 = (_QWORD *)(v9 + 8 * v55);
          if ( (_DWORD)v55 != *(_DWORD *)(v9 - 8) )
            break;
          v56 = 8 * v55 + 8;
          v57 = (unsigned int)(3 * v55 + 1) >> 1;
          v58 = 8 * v57 + 8;
          v126 = v57;
          if ( v56 >= v58 || v7 >= v57 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v127, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v127);
            sub_233E40((__int64)v127);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v59 = sub_186B270(v58);
          v60 = *(unsigned int *)(v9 - 4);
          v61 = (_DWORD *)v59;
          v59 += 8;
          *(_DWORD *)(v59 - 4) = v60;
          v122 = v59;
          v62 = (__int64 *)(v9 + 8 * v60);
          if ( (__int64 *)v9 != v62 )
          {
            v63 = 8 * v60 - 8;
            if ( v63 <= 8 || v9 < (unsigned __int64)(v61 + 6) && v122 < v9 + 16 )
            {
              v116 = v122;
              v117 = (__int64 *)v9;
              do
              {
                v118 = *v117;
                *v117++ = 0;
                v116 += 8LL;
                *(_QWORD *)(v116 - 8) = v118;
              }
              while ( v117 != v62 );
            }
            else
            {
              v64 = (v63 >> 3) + 1;
              v65 = 0;
              do
              {
                v66 = _mm_loadu_si128((const __m128i *)(v9 + v65 * 4));
                *(_OWORD *)(v9 + v65 * 4) = 0;
                *(__m128i *)&v61[v65 + 2] = v66;
                v65 += 4;
              }
              while ( 4 * (v64 >> 1) != v65 );
              if ( (v64 & 1) != 0 )
              {
                v67 = 8 * (v64 & 0xFFFFFFFFFFFFFFFELL);
                v68 = *(_QWORD *)(v9 + v67);
                *(_QWORD *)(v9 + v67) = 0;
                *(_QWORD *)&v61[v67 / 4 + 2] = v68;
              }
            }
          }
          v69 = (__int64 *)(v9 + 8 * v60);
          v70 = (__int64 *)v9;
          if ( (_DWORD)v60 )
          {
            do
            {
              while ( 1 )
              {
                v71 = *v70;
                if ( !*v70 )
                  break;
                ++v70;
                sub_186B220((void *)(v71 - 8));
                if ( v70 == v69 )
                  goto LABEL_66;
              }
              ++v70;
            }
            while ( v70 != v69 );
          }
LABEL_66:
          sub_186B220((void *)(v9 - 8));
          v72 = (unsigned int)v61[1];
          v9 = v122;
          *v61 = v126;
          v7 = v72;
          v8 = (_QWORD *)(v122 + 8 * v72);
          v10 = *(_QWORD *)(v5 + 40);
          *v8 = 0;
          if ( v10 )
            goto LABEL_5;
        }
      }
LABEL_5:
      v11 = *(_DWORD *)(v10 - 4);
      v120 = *(_DWORD *)(v10 - 8);
      v12 = sub_186B270(4LL * v120 + 8);
      *(_QWORD *)v12 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v120), _mm_cvtsi32_si128(v11)).m128i_u64[0];
      *v8 = v12 + 8;
      v13 = *(_DWORD **)(v5 + 40);
      if ( v13 )
      {
        v14 = 4LL * (unsigned int)*(v13 - 1);
        if ( v14 <= 4 )
        {
          if ( v14 == 4 )
          {
            *(_DWORD *)(v12 + 8) = *v13;
            v119 = *(unsigned int *)(v9 - 4);
            v16 = *(__m128i **)(v9 + 8 * v119);
            *(_DWORD *)(v9 - 4) = v119 + 1;
            if ( !v16 )
              goto LABEL_51;
LABEL_9:
            v17 = 4LL * v16[-1].m128i_u32[3];
            v18 = (__m128i *)((char *)v16 + v17);
            if ( &v16->m128i_i8[v17] == (__int8 *)v16 )
              goto LABEL_51;
            v19 = (__m128i *)((char *)v16->m128i_i64 + 4);
            _BitScanReverse64(&v20, v17 >> 2);
            v21 = v20 ^ 0x3F;
            v22 = 2LL * (63 - v21);
            if ( (unsigned __int64)v17 <= 0x40 )
            {
              if ( v17 != 4 )
              {
                do
                {
                  v108 = v19->m128i_i32[0];
                  if ( v19->m128i_i32[0] < v16->m128i_i32[0] )
                  {
                    if ( (char *)v19 - (char *)v16 <= 4 )
                    {
                      if ( (char *)v19 - (char *)v16 == 4 )
                        v19->m128i_i32[0] = v16->m128i_i32[0];
                    }
                    else
                    {
                      memmove((char *)v16->m128i_i64 + 4, v16, (char *)v19 - (char *)v16);
                    }
                    v16->m128i_i32[0] = v108;
                  }
                  else
                  {
                    v109 = v19[-1].m128i_i32[3];
                    v110 = &v19[-1].m128i_i32[3];
                    if ( v108 >= v109 )
                    {
                      v19->m128i_i32[0] = v108;
                    }
                    else
                    {
                      do
                      {
                        v110[1] = v109;
                        v111 = v110;
                        v109 = *--v110;
                      }
                      while ( v108 < v109 );
                      *v111 = v108;
                    }
                  }
                  v19 = (__m128i *)((char *)v19 + 4);
                }
                while ( v18 != v19 );
              }
              goto LABEL_51;
            }
            v121 = v9;
            v23 = 2LL * (63 - v21);
            v24 = &v16->m128i_i8[v17];
            v25 = v17 >> 2;
            v26 = v17 >> 3;
            if ( !v22 )
            {
LABEL_25:
              v37 = v26 - 1;
              v125 = v24;
              v38 = &v16->m128i_i32[v26 - 1];
              v39 = (v25 - 1) >> 1;
              v40 = v26 - 1;
              v9 = v121;
              v41 = *v38;
              v42 = v38;
              v43 = (v25 & 1) == 0;
              if ( v26 - 1 >= v39 )
                goto LABEL_40;
LABEL_26:
              for ( i = v40; ; i = v45 )
              {
                v45 = 2 * (i + 1);
                v42 = &v16->m128i_i32[2 * i + 2];
                if ( *v42 < *(v42 - 1) )
                {
                  v42 = &v16->m128i_i32[--v45];
                  v16->m128i_i32[i] = *v42;
                  if ( v45 >= v39 )
                    goto LABEL_31;
                }
                else
                {
                  v16->m128i_i32[i] = *v42;
                  if ( v45 >= v39 )
                  {
LABEL_31:
                    if ( v37 == v45 && v43 )
                      goto LABEL_140;
                    while ( 1 )
                    {
                      v46 = (v45 - 1) >> 1;
                      if ( v40 < v45 )
                        break;
                      do
                      {
                        *v42 = v41;
LABEL_39:
                        --v38;
                        --v40;
                        v41 = *v38;
                        v42 = v38;
                        if ( v40 < v39 )
                          goto LABEL_26;
LABEL_40:
                        ;
                      }
                      while ( v37 != v40 || !v43 );
                      v45 = v40;
LABEL_140:
                      v112 = 2 * v45 + 2;
                      v113 = v16->m128i_i32[v112 - 1];
                      v45 = v112 - 1;
                      *v42 = v113;
                      v42 = &v16->m128i_i32[v45];
                    }
                    v47 = v45;
                    while ( 1 )
                    {
                      v48 = &v16->m128i_i32[v46];
                      v49 = &v16->m128i_i32[v47];
                      if ( v41 <= *v48 )
                      {
                        *v49 = v41;
                        if ( v40 )
                          goto LABEL_39;
                        goto LABEL_101;
                      }
                      *v49 = *v48;
                      v47 = v46;
                      if ( v40 >= v46 )
                        break;
                      v46 = (v46 - 1) / 2;
                    }
                    *v48 = v41;
                    if ( v40 )
                      goto LABEL_39;
LABEL_101:
                    v91 = v125;
                    if ( v125 - (char *)v16 > 4 )
                    {
LABEL_102:
                      while ( 1 )
                      {
                        v91 -= 4;
                        v92 = *(_DWORD *)v91;
                        v93 = v91 - (char *)v16;
                        *(_DWORD *)v91 = v16->m128i_i32[0];
                        v94 = (v91 - (char *)v16) >> 2;
                        v95 = (v94 - 1) / 2;
                        if ( v91 - (char *)v16 > 8 )
                          break;
                        v102 = v16;
                        if ( (v94 & 1) == 0 && (unsigned __int64)(v94 - 1) <= 2 )
                        {
                          v98 = v16;
                          v97 = 0;
                          goto LABEL_148;
                        }
LABEL_115:
                        v102->m128i_i32[0] = v92;
                        if ( v93 <= 4 )
                          goto LABEL_123;
                      }
                      for ( j = 0; ; j = v97 )
                      {
                        v97 = 2 * (j + 1);
                        v98 = (__m128i *)&v16->m128i_u64[j + 1];
                        if ( v98->m128i_i32[0] < v98[-1].m128i_i32[3] )
                        {
                          --v97;
                          v98 = (__m128i *)((char *)v16 + 4 * v97);
                          v16->m128i_i32[j] = v98->m128i_i32[0];
                          if ( v97 >= v95 )
                            goto LABEL_108;
                        }
                        else
                        {
                          v16->m128i_i32[j] = v98->m128i_i32[0];
                          if ( v97 >= v95 )
                          {
LABEL_108:
                            if ( (v94 & 1) != 0 || v97 != (v94 - 2) >> 1 )
                            {
                              v99 = (v97 - 1) / 2;
                              if ( v97 )
                              {
                                v100 = v97;
                                goto LABEL_114;
                              }
                              v98->m128i_i32[0] = v92;
                              goto LABEL_102;
                            }
LABEL_148:
                            v114 = 2 * v97 + 2;
                            v98->m128i_i32[0] = v16->m128i_i32[v114 - 1];
                            v99 = (v114 >> 1) - 1;
                            v100 = 2 * v97 + 1;
                            while ( 1 )
                            {
LABEL_114:
                              v101 = &v16->m128i_i32[v99];
                              v102 = (__m128i *)((char *)v16 + 4 * v100);
                              if ( v92 <= *v101 )
                                goto LABEL_115;
                              v102->m128i_i32[0] = *v101;
                              v100 = v99;
                              if ( !v99 )
                                break;
                              v99 = (v99 - 1) / 2;
                            }
                            *v101 = v92;
                            if ( v93 <= 4 )
                              goto LABEL_123;
                            goto LABEL_102;
                          }
                        }
                      }
                    }
                    do
                    {
LABEL_123:
                      v103 = v19->m128i_i32[0];
                      if ( v19->m128i_i32[0] < v16->m128i_i32[0] )
                      {
                        if ( (char *)v19 - (char *)v16 <= 4 )
                        {
                          if ( (char *)v19 - (char *)v16 == 4 )
                            v19->m128i_i32[0] = v16->m128i_i32[0];
                        }
                        else
                        {
                          memmove((char *)v16->m128i_i64 + 4, v16, (char *)v19 - (char *)v16);
                        }
                        v16->m128i_i32[0] = v103;
                      }
                      else
                      {
                        v104 = v19[-1].m128i_i32[3];
                        v105 = &v19[-1].m128i_i32[3];
                        if ( v104 <= v103 )
                        {
                          v19->m128i_i32[0] = v103;
                        }
                        else
                        {
                          do
                          {
                            v105[1] = v104;
                            v106 = v105;
                            v104 = *--v105;
                          }
                          while ( v103 < v104 );
                          *v106 = v103;
                        }
                      }
                      v19 = (__m128i *)((char *)v19 + 4);
                    }
                    while ( &v16[4] != v19 );
                    v50 = v16 + 4;
                    do
                    {
                      while ( 1 )
                      {
                        v51 = v50->m128i_i32[0];
                        v52 = v50[-1].m128i_i32[3];
                        v53 = &v50[-1].m128i_i32[3];
                        if ( v52 > v50->m128i_i32[0] )
                          break;
                        v107 = v50;
                        v50 = (__m128i *)((char *)v50 + 4);
                        v107->m128i_i32[0] = v51;
                        if ( v18 == v50 )
                          goto LABEL_51;
                      }
                      do
                      {
                        v53[1] = v52;
                        v54 = v53;
                        v52 = *--v53;
                      }
                      while ( v51 < v52 );
                      v50 = (__m128i *)((char *)v50 + 4);
                      *v54 = v51;
                    }
                    while ( v18 != v50 );
LABEL_51:
                    if ( ++v4 == v123 )
                      goto LABEL_68;
                    goto LABEL_52;
                  }
                }
              }
            }
            while ( 1 )
            {
              v27 = _mm_loadl_epi64(v16);
              v28 = &v16->m128i_i32[v26];
              v29 = *((_DWORD *)v24 - 1);
              --v23;
              v30 = *v28;
              v31 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v27, 229));
              v32 = _mm_shuffle_epi32(v27, 225).m128i_u64[0];
              v33 = _mm_cvtsi128_si32(v27);
              if ( *v28 <= v31 )
              {
                if ( v31 >= v29 )
                {
                  if ( v30 < v29 )
                  {
LABEL_15:
                    v16->m128i_i32[0] = v29;
                    v34 = v33;
                    *((_DWORD *)v24 - 1) = v33;
                    v31 = v16->m128i_i32[0];
                    v33 = v16->m128i_i32[1];
                    goto LABEL_16;
                  }
LABEL_45:
                  v16->m128i_i32[0] = v30;
                  *v28 = v33;
                  v33 = v16->m128i_i32[1];
                  v31 = v16->m128i_i32[0];
                  v34 = *((_DWORD *)v24 - 1);
                  goto LABEL_16;
                }
              }
              else
              {
                if ( v30 < v29 )
                  goto LABEL_45;
                if ( v31 < v29 )
                  goto LABEL_15;
              }
              v16->m128i_i64[0] = v32;
              v34 = *((_DWORD *)v24 - 1);
LABEL_16:
              k = (__m128i *)v24;
              v36 = (__m128i *)((char *)v16->m128i_i64 + 4);
              while ( 1 )
              {
                for ( ; v33 < v31; v36 = (__m128i *)((char *)v36 + 4) )
                  v33 = v36->m128i_i32[1];
                for ( k = (__m128i *)((char *)k - 4); v34 > v31; k = (__m128i *)((char *)k - 4) )
                  v34 = k[-1].m128i_i32[3];
                if ( v36 >= k )
                  break;
                v36->m128i_i32[0] = v34;
                v36 = (__m128i *)((char *)v36 + 4);
                v34 = k[-1].m128i_i32[3];
                k->m128i_i32[0] = v33;
                v33 = v36->m128i_i32[0];
                v31 = v16->m128i_i32[0];
              }
              sub_5787E0(v36, v24, v23);
              if ( (char *)v36 - (char *)v16 <= 64 )
              {
                v9 = v121;
                goto LABEL_123;
              }
              v24 = (char *)v36;
              v26 = ((char *)v36 - (char *)v16) >> 3;
              v25 = ((char *)v36 - (char *)v16) >> 2;
              if ( !v23 )
                goto LABEL_25;
            }
          }
        }
        else
        {
          memmove((void *)(v12 + 8), v13, v14);
        }
      }
      v15 = *(unsigned int *)(v9 - 4);
      v16 = *(__m128i **)(v9 + 8 * v15);
      *(_DWORD *)(v9 - 4) = v15 + 1;
      if ( !v16 )
      {
        if ( v123 == ++v4 )
        {
LABEL_68:
          v4 = (__int64 *)(v9 + 8LL * *(unsigned int *)(v9 - 4));
          goto LABEL_69;
        }
        goto LABEL_52;
      }
      goto LABEL_9;
    }
    v4 = nullptr;
  }
  v9 = 0;
LABEL_69:
  result = a2;
  v74 = (_QWORD *)*a2;
  if ( *a2 )
    *((_DWORD *)v74 - 1) = 0;
  while ( (__int64 *)v9 != v4 )
  {
    result = (__int64 *)v9;
    v75 = -1;
    do
    {
      v76 = *result;
      if ( *result )
      {
        v77 = *(_DWORD *)(v76 - 4);
        if ( v77 )
        {
          v78 = *(_DWORD *)(v76 + 4LL * (unsigned int)(v77 - 1));
          if ( v75 < v78 )
            v75 = v78;
        }
      }
      ++result;
    }
    while ( result != v4 );
    if ( v75 == -1 )
      break;
    if ( v74 )
    {
      v79 = *((unsigned int *)v74 - 1);
      if ( (_DWORD)v79 == *((_DWORD *)v74 - 2) )
      {
        v87 = (unsigned int)(3 * v79 + 1) >> 1;
        v88 = 4 * v87 + 8;
        if ( 4 * (int)v79 + 8 >= v88 || (unsigned int)v79 >= v87 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v127, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v127);
          sub_233E40((__int64)v127);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v89 = (unsigned int *)sub_186B300(v74 - 1, v88);
        v74 = v89 + 2;
        *v89 = v87;
        v90 = v89[1];
        *a2 = (__int64)v74;
        v80 = (int *)v74 + v90;
      }
      else
      {
        v80 = (int *)v74 + v79;
      }
    }
    else
    {
      v115 = (_QWORD *)sub_186B270(0x10u);
      *v115 = 2;
      v74 = v115 + 1;
      *a2 = (__int64)(v115 + 1);
      v80 = (int *)(v115 + 1);
    }
    *v80 = v75;
    result = (__int64 *)v9;
    ++*((_DWORD *)v74 - 1);
    do
    {
      v81 = *result;
      if ( *result )
      {
        for ( m = *(_DWORD *)(v81 - 4); m; *(_DWORD *)(v81 - 4) = m )
        {
          if ( *(_DWORD *)(v81 + 4LL * (unsigned int)--m) != v75 )
            break;
        }
      }
      ++result;
    }
    while ( result != v4 );
  }
  if ( v9 )
  {
    v83 = *(unsigned int *)(v9 - 4);
    v84 = (__int64 *)v9;
    v85 = (__int64 *)(v9 + 8 * v83);
    if ( (_DWORD)v83 )
    {
      do
      {
        while ( 1 )
        {
          v86 = *v84;
          if ( !*v84 )
            break;
          ++v84;
          sub_186B220((void *)(v86 - 8));
          if ( v85 == v84 )
            return (__int64 *)sub_186B220((void *)(v9 - 8));
        }
        ++v84;
      }
      while ( v84 != v85 );
    }
    return (__int64 *)sub_186B220((void *)(v9 - 8));
  }
  return result;
}

