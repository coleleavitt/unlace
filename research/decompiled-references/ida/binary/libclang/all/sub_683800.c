__int64 __fastcall sub_683800(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // r14
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 *v7; // r15
  __m128i *v8; // r13
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // r14
  __int64 *v12; // rbx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rdi
  unsigned __int64 v16; // rdx
  const __m128i *v17; // rbp
  __m128i *v18; // rax
  __int64 v19; // rbp
  int v20; // edx
  __int64 v21; // rcx
  __m128i v22; // xmm0
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // rsi
  unsigned __int64 v26; // rbp
  __int64 v27; // rax
  __int64 v28; // r12
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // r15
  unsigned int v32; // eax
  bool v33; // zf
  unsigned int v34; // ebp
  __int64 v35; // rax
  __int64 v36; // rdi
  int v37; // edx
  __int64 v38; // rax
  unsigned __int64 v39; // rcx
  __int64 v40; // rsi
  __int8 *v41; // rbp
  __int64 result; // rax
  __int64 v43; // rdx
  __int64 v44; // rbx
  __int64 v45; // r12
  __int64 v46; // r13
  __int64 v47; // rax
  char *v48; // rdx
  char *v49; // rax
  char *v50; // r15
  __int64 v51; // rbx
  __int64 v52; // rsi
  __int64 v53; // rdi
  char *v54; // rsi
  char *v55; // rbx
  char *v56; // rbp
  __m128i **v57; // r13
  __m128i **v58; // rdi
  __m128i *v59; // r14
  __m128i *v60; // r15
  __m128i **v61; // rdi
  __m128i **v62; // rdi
  __m128i *v63; // r13
  __int64 v64; // r15
  __int64 v65; // rcx
  __int64 v66; // r14
  __int64 v67; // rcx
  _QWORD *v68; // rsi
  __int64 v69; // rcx
  _QWORD *v70; // r14
  _QWORD *v71; // r15
  int v72; // edx
  __int64 v73; // [rsp+8h] [rbp-1F0h]
  __int64 v74; // [rsp+8h] [rbp-1F0h]
  __int64 v75; // [rsp+8h] [rbp-1F0h]
  __int64 v76; // [rsp+8h] [rbp-1F0h]
  __int64 v77; // [rsp+8h] [rbp-1F0h]
  char *v78; // [rsp+8h] [rbp-1F0h]
  int v79; // [rsp+8h] [rbp-1F0h]
  __int64 v80; // [rsp+10h] [rbp-1E8h]
  __int64 v81; // [rsp+10h] [rbp-1E8h]
  __int64 v82; // [rsp+10h] [rbp-1E8h]
  __int64 *v83; // [rsp+10h] [rbp-1E8h]
  __int64 v84; // [rsp+10h] [rbp-1E8h]
  __int64 v85; // [rsp+18h] [rbp-1E0h]
  char v86; // [rsp+20h] [rbp-1D8h]
  __int64 v87; // [rsp+28h] [rbp-1D0h]
  __int64 *v88; // [rsp+28h] [rbp-1D0h]
  __int64 v89; // [rsp+28h] [rbp-1D0h]
  char v91; // [rsp+3Fh] [rbp-1B9h]
  unsigned __int64 v92; // [rsp+40h] [rbp-1B8h]
  __int64 v93; // [rsp+48h] [rbp-1B0h]
  __int64 v94; // [rsp+50h] [rbp-1A8h]
  __int64 v95; // [rsp+50h] [rbp-1A8h]
  __int64 v96; // [rsp+58h] [rbp-1A0h]
  __m128i *v97; // [rsp+60h] [rbp-198h]
  unsigned __int64 v98; // [rsp+68h] [rbp-190h]
  __m128i v99; // [rsp+70h] [rbp-188h] BYREF
  __m128i v100; // [rsp+80h] [rbp-178h] BYREF
  __int64 v101; // [rsp+98h] [rbp-160h] BYREF
  __int64 v102; // [rsp+A0h] [rbp-158h] BYREF
  __m128i v103; // [rsp+A8h] [rbp-150h] BYREF
  __int64 v104; // [rsp+B8h] [rbp-140h]
  __m128i v105; // [rsp+C0h] [rbp-138h] BYREF
  __m128i v106; // [rsp+D0h] [rbp-128h]
  __int64 v107; // [rsp+E0h] [rbp-118h]
  __int64 v108; // [rsp+E8h] [rbp-110h]
  __int64 v109; // [rsp+F0h] [rbp-108h]
  int v110; // [rsp+F8h] [rbp-100h]
  __int64 v111; // [rsp+100h] [rbp-F8h]
  __int128 v112; // [rsp+118h] [rbp-E0h]
  __int64 v113; // [rsp+148h] [rbp-B0h]
  int v114; // [rsp+150h] [rbp-A8h]
  __int64 v115; // [rsp+168h] [rbp-90h]
  __int64 v116; // [rsp+178h] [rbp-80h]

  v86 = *(_BYTE *)(a2 + 29) & 1;
  if ( v86 )
  {
    v4 = nullptr;
    v5 = sub_79A2B0(a2);
    v6 = *(_QWORD *)v5 + 8LL * *(unsigned int *)(v5 + 8);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v4 = *(__int64 **)sub_79A2B0(a2);
    if ( (__int64 *)v6 != v4 )
    {
      v7 = v4;
      v8 = &v105;
      v9 = a3;
      v10 = a1;
      v11 = a2;
      v12 = (__int64 *)v6;
      while ( 1 )
      {
        v19 = *v7;
        v80 = v10;
        v73 = v9;
        sub_638F70((__int64)&v102, *v7, v11, *(_QWORD *)(v9 + 40));
        v20 = *(_DWORD *)(v19 + 16);
        v9 = v73;
        v21 = 0;
        v10 = v80;
        v22 = _mm_loadu_si128(&v103);
        if ( v20 )
          v21 = v73;
        if ( (_DWORD)v102 == 402 )
          break;
        if ( (_DWORD)v102 == 403 )
        {
          v23 = *(unsigned int *)(v80 + 176);
          v108 = v21;
          v24 = *(unsigned int *)(v80 + 180);
          v110 = v20;
          v106 = v22;
          v107 = v104;
          v25 = (__int64)v8;
          v111 = v19;
          v26 = *(_QWORD *)(v80 + 168);
          v105.m128i_i32[0] = 3;
          v105.m128i_i64[1] = __PAIR64__(HIDWORD(v102), 403);
          v109 = 0;
          v115 = 0;
          v113 = 0;
          v114 = 0;
          v116 = 0;
          v112 = 0;
          if ( v24 < v23 + 1 )
          {
            if ( (unsigned __int64)v8 < v26 || (unsigned __int64)v8 >= v26 + 248 * v23 )
            {
              v98 = -1;
              v91 = 0;
            }
            else
            {
              v98 = 0xEF7BDEF7BDEF7BDFLL * ((__int64)((__int64)v8->m128i_i64 - v26) >> 3);
              v91 = v86;
            }
            v87 = v73;
            v78 = (char *)(v80 + 184);
            v47 = sub_25D5F70(v80 + 168, v80 + 184, v23 + 1, 248, &v101);
            v10 = v80;
            v9 = v87;
            v26 = v47;
            v48 = *(char **)(v80 + 168);
            v49 = &v48[248 * *(unsigned int *)(v80 + 176)];
            if ( v48 != v49 )
            {
              v92 = v26;
              v93 = v80;
              v94 = v87;
              v83 = v7;
              v50 = v49;
              v88 = v12;
              v51 = (__int64)v48;
              do
              {
                v52 = v51;
                v53 = v26;
                v51 += 248;
                v26 += 248LL;
                sub_67AFC0(v53, v52);
              }
              while ( v50 != (char *)v51 );
              v10 = v93;
              v7 = v83;
              v12 = v88;
              v26 = v92;
              v54 = *(char **)(v93 + 168);
              v9 = v94;
              v49 = &v54[248 * *(unsigned int *)(v93 + 176)];
              if ( v54 != v49 )
              {
                v95 = v11;
                v55 = *(char **)(v93 + 168);
                v56 = &v54[248 * *(unsigned int *)(v93 + 176)];
                v96 = v9;
                v97 = v8;
                do
                {
                  v57 = *((__m128i ***)v56 - 10);
                  v56 -= 248;
                  if ( v57 )
                  {
                    v33 = (*((_DWORD *)v57 + 178))-- == 1;
                    if ( v33 )
                    {
                      v58 = (__m128i **)v57[85];
                      if ( v58 != v57 + 87 )
                        free(v58);
                      v59 = v57[21];
                      v60 = (__m128i *)((char *)v59 + 248 * *((unsigned int *)v57 + 44));
                      if ( v59 != v60 )
                      {
                        do
                        {
                          v61 = (__m128i **)v60[-5].m128i_i64[0];
                          v60 = (__m128i *)((char *)v60 - 248);
                          sub_67AA40(v61);
                        }
                        while ( v59 != v60 );
                        v60 = v57[21];
                      }
                      if ( v60 != (__m128i *)(v57 + 23) )
                        free(v60);
                      v62 = (__m128i **)v57[1];
                      if ( v62 != v57 + 3 )
                        free(v62);
                      --(*v57)[15].m128i_i32[0];
                      v63 = *v57;
                      if ( !v63[15].m128i_i32[0] )
                      {
                        v64 = v63[13].m128i_i64[0];
                        v65 = 16LL * v63[13].m128i_u32[2];
                        v66 = v64 + v65;
                        while ( v66 != v64 )
                        {
                          v64 += 16;
                          operator delete();
                        }
                        v67 = v63[10].m128i_u32[2];
                        v63[13].m128i_i32[2] = 0;
                        if ( (_DWORD)v67 )
                        {
                          v68 = (_QWORD *)v63[10].m128i_i64[0];
                          v69 = v67;
                          v63[14].m128i_i64[0] = 0;
                          v70 = &v68[v69];
                          v71 = v68 + 1;
                          v63[9] = _mm_unpacklo_epi64(
                                     (__m128i)(unsigned __int64)*v68,
                                     (__m128i)(unsigned __int64)(*v68 + 4096LL));
                          if ( v69 != 1 )
                          {
                            do
                            {
                              ++v71;
                              operator delete();
                            }
                            while ( v70 != v71 );
                          }
                          v63[10].m128i_i32[2] = 1;
                        }
                      }
                    }
                  }
                }
                while ( v55 != v56 );
                v10 = v93;
                v7 = v83;
                v12 = v88;
                v26 = v92;
                v11 = v95;
                v9 = v96;
                v8 = v97;
                v49 = *(char **)(v93 + 168);
              }
            }
            v72 = v101;
            if ( v78 != v49 )
            {
              v89 = v9;
              v84 = v10;
              v79 = v101;
              free(v49);
              v9 = v89;
              v10 = v84;
              v72 = v79;
            }
            *(_QWORD *)(v10 + 168) = v26;
            v25 = (__int64)v8;
            *(_DWORD *)(v10 + 180) = v72;
            v23 = *(unsigned int *)(v10 + 176);
            if ( v91 )
              v25 = v26 + 248 * v98;
          }
          v81 = v9;
          ++v7;
          v74 = v10;
          sub_67AFC0(v26 + 248 * v23, v25);
          v10 = v74;
          v9 = v81;
          ++*(_DWORD *)(v74 + 176);
          if ( v12 == v7 )
          {
LABEL_15:
            a3 = v9;
            goto LABEL_16;
          }
        }
        else
        {
          if ( (_DWORD)v102 != 401 )
          {
            v105.m128i_i64[1] = v102;
            v13 = *(unsigned int *)(v80 + 16);
            v108 = v21;
            v14 = *(unsigned int *)(v80 + 20);
            v15 = v13 + 1;
            v110 = v20;
            v16 = *(_QWORD *)(v80 + 8);
            v111 = v19;
            v17 = v8;
            v105.m128i_i32[0] = 0;
            v107 = v104;
            v109 = 0;
            v106 = v22;
            if ( v14 < v13 + 1 )
            {
              v40 = v80 + 24;
              if ( (unsigned __int64)v8 < v16 )
              {
LABEL_48:
                v82 = v73;
LABEL_49:
                v77 = v10;
                sub_25D6060(v10 + 8, v40, v15, 72);
                v10 = v77;
                v9 = v82;
                v16 = *(_QWORD *)(v77 + 8);
                v13 = *(unsigned int *)(v77 + 16);
                goto LABEL_8;
              }
              v82 = v73;
              if ( (unsigned __int64)v8 >= v16 + 72 * v13 )
                goto LABEL_49;
              goto LABEL_35;
            }
            goto LABEL_8;
          }
          v105.m128i_i32[0] = 1;
          v105.m128i_i32[2] = 401;
LABEL_32:
          v105.m128i_i32[3] = HIDWORD(v102);
          v111 = v19;
          v17 = v8;
          v107 = v104;
          v106 = v22;
          v13 = *(unsigned int *)(v80 + 16);
          v108 = v21;
          v39 = *(unsigned int *)(v80 + 20);
          v15 = v13 + 1;
          v110 = v20;
          v16 = *(_QWORD *)(v80 + 8);
          v109 = 0;
          if ( v39 < v13 + 1 )
          {
            v40 = v80 + 24;
            if ( (unsigned __int64)v8 < v16 )
              goto LABEL_48;
            v82 = v73;
            if ( (unsigned __int64)v8 >= v16 + 72 * v13 )
              goto LABEL_49;
LABEL_35:
            v41 = &v17->m128i_i8[-v16];
            v76 = v10;
            sub_25D6060(v10 + 8, v40, v15, 72);
            v10 = v76;
            v9 = v82;
            v16 = *(_QWORD *)(v76 + 8);
            v13 = *(unsigned int *)(v76 + 16);
            v17 = (const __m128i *)&v41[v16];
          }
LABEL_8:
          ++v7;
          v18 = (__m128i *)(v16 + 72 * v13);
          *v18 = _mm_loadu_si128(v17);
          v18[1] = _mm_loadu_si128(v17 + 1);
          v18[2] = _mm_loadu_si128(v17 + 2);
          v18[3] = _mm_loadu_si128(v17 + 3);
          v18[4].m128i_i64[0] = v17[4].m128i_i64[0];
          ++*(_DWORD *)(v10 + 16);
          if ( v12 == v7 )
            goto LABEL_15;
        }
      }
      v105.m128i_i32[0] = 2;
      v105.m128i_i32[2] = 402;
      goto LABEL_32;
    }
  }
LABEL_16:
  v27 = *(unsigned int *)(a1 + 176);
  if ( (_DWORD)v27 )
  {
    v28 = 0;
    v85 = 248 * v27;
    do
    {
      v30 = *(unsigned int *)(a1 + 688);
      v31 = v28 + *(_QWORD *)(a1 + 168);
      if ( *(unsigned int *)(a1 + 692) < (unsigned __int64)(v30 + 1) )
      {
        sub_25D6060(a1 + 680, a1 + 696, v30 + 1, 8);
        v30 = *(unsigned int *)(a1 + 688);
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 680) + 8 * v30) = v31;
      ++*(_DWORD *)(a1 + 688);
      v75 = *(_QWORD *)(v31 + 64);
      v105 = _mm_unpacklo_epi64(
               _mm_loadl_epi64((const __m128i *)*(_QWORD *)(v75 + 40)),
               (__m128i)(unsigned __int64)(*(_QWORD *)(v75 + 40) + 8LL));
      v32 = sub_B1E2D0(&v105);
      *(_QWORD *)(v31 + 176) = v31;
      *(_QWORD *)(v31 + 232) = 0;
      v33 = v32 == 0;
      v34 = v32;
      v35 = 0;
      if ( !v33 )
        v35 = a3;
      *(_DWORD *)(v31 + 240) = v34;
      *(_QWORD *)(v31 + 184) = 0;
      *(_QWORD *)(v31 + 224) = v35;
      clang_getNullCursor(&v99);
      *(__m128i *)(v31 + 192) = _mm_loadu_si128(&v99);
      *(__m128i *)(v31 + 208) = _mm_loadu_si128(&v100);
      v36 = *(_QWORD *)(**(_QWORD **)(v75 + 40) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v36 + 16) - 34 <= 1
        || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v36 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 34 <= 1
        && (v36 = sub_B0D320(v36)) != 0 )
      {
        do
        {
          v36 = *(_QWORD *)(*(_QWORD *)(v36 + 24) & 0xFFFFFFFFFFFFFFF0LL);
          v37 = *(unsigned __int8 *)(v36 + 16);
          if ( (unsigned int)(v37 - 34) > 1 )
          {
            if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v36 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
               - 34 > 1 )
              goto LABEL_21;
            v38 = sub_B0D320(v36);
            v36 = v38;
            if ( !v38 )
              goto LABEL_21;
            LOBYTE(v37) = *(_BYTE *)(v38 + 16);
          }
        }
        while ( (_BYTE)v37 != 35 );
        v29 = sub_B07AF0(v36);
        if ( v29 )
        {
          sub_67F660(a3, v29, (__m128i *)(v31 + 72), a1);
          *(_QWORD *)(v31 + 184) = v31 + 72;
          sub_639C80((__int64)&v99, v29, v34, *(_QWORD *)(a3 + 40));
          *(__m128i *)(v31 + 192) = _mm_loadu_si128(&v99);
          *(__m128i *)(v31 + 208) = _mm_loadu_si128(&v100);
        }
      }
LABEL_21:
      v28 += 248;
    }
    while ( v28 != v85 );
  }
  result = a1;
  v43 = *(unsigned int *)(a1 + 16);
  if ( (_DWORD)v43 )
  {
    result = *(unsigned int *)(a1 + 688);
    v44 = 0;
    v45 = 72 * v43;
    do
    {
      v46 = v44 + *(_QWORD *)(a1 + 8);
      if ( *(unsigned int *)(a1 + 692) < (unsigned __int64)(result + 1) )
      {
        sub_25D6060(a1 + 680, a1 + 696, result + 1, 8);
        *(_QWORD *)(*(_QWORD *)(a1 + 680) + 8LL * *(unsigned int *)(a1 + 688)) = v46;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 680) + 8 * result) = v46;
      }
      v44 += 72;
      result = (unsigned int)(*(_DWORD *)(a1 + 688) + 1);
      *(_DWORD *)(a1 + 688) = result;
    }
    while ( v44 != v45 );
  }
  return result;
}

