void __fastcall sub_17941C0(__int64 *a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbp
  bool v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  bool v15; // al
  __int64 *v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  bool v25; // r13
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  bool v30; // al
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r14
  __int64 v35; // rbp
  __int64 v36; // rcx
  __int64 *v37; // r12
  unsigned __int64 v38; // rdi
  int v39; // edx
  __int64 *v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  int v44; // eax
  int v45; // edx
  unsigned int v46; // eax
  __int64 v47; // rsi
  int j; // esi
  __int64 v49; // rdi
  __int64 *v50; // r8
  int v51; // eax
  __int64 v52; // r8
  __int64 v53; // rdx
  unsigned __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rsi
  __int64 v58; // r15
  __int64 *v59; // r8
  int v60; // r10d
  __int64 v61; // rsi
  __m128i *v62; // rdx
  unsigned __int64 v63; // rdi
  __m128i v64; // xmm0
  __int64 *v65; // rdx
  int i; // r14d
  __int64 v67; // rsi
  unsigned int v68; // edi
  _QWORD *v69; // r9
  __int64 v70; // r11
  int v71; // edi
  __int64 v72; // r8
  int v73; // edx
  __int64 *v74; // r10
  unsigned __int64 v75; // rdi
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rsi
  __int64 v79; // r15
  __int64 *v80; // r8
  int v81; // r14d
  __int64 v82; // rsi
  __m128i *v83; // rdx
  unsigned __int64 v84; // rdi
  __m128i si128; // xmm0
  __int64 *v86; // rdx
  int v87; // r11d
  __int64 v88; // r10
  __int64 v89; // rsi
  unsigned int v90; // ecx
  _QWORD *v91; // rdi
  __int64 v92; // r9
  int v93; // r13d
  __int64 v94; // rdi
  int v95; // edx
  __int64 *v96; // r9
  __int64 v97; // rsi
  __int64 v98; // rsi
  __m128i *v99; // rdx
  unsigned __int64 v100; // rdi
  __m128i v101; // xmm0
  __int64 v102; // rsi
  __int64 v103; // rsi
  __m128i *v104; // rdx
  unsigned __int64 v105; // rdi
  __m128i v106; // xmm0
  _QWORD *v107; // r13
  __int64 v108; // [rsp+8h] [rbp-60h]
  __int64 v109; // [rsp+8h] [rbp-60h]
  __int64 v110; // [rsp+8h] [rbp-60h]
  __int64 v111; // [rsp+8h] [rbp-60h]
  int v112; // [rsp+8h] [rbp-60h]
  _QWORD *v113; // [rsp+8h] [rbp-60h]
  int v114; // [rsp+10h] [rbp-58h]
  __m128 v115[4]; // [rsp+20h] [rbp-48h] BYREF

  v4 = sub_15F1640(*a1, 1);
  if ( v4 )
  {
    v9 = v4;
    v10 = sub_178DB80(a2, 1, v5, v6, v7, v8);
    v15 = sub_178DC50(a2, 1, v11, v12, v13, v14);
    if ( v10 && v15 )
    {
      v20 = sub_178DFB0((__int64)a1, v9, v16, v17, v18, v19);
      if ( v20 <= 1 )
        goto LABEL_9;
      if ( v20 != 3 )
        return;
      v25 = sub_178DB80(v9, v9, v21, v22, v23, v24);
      v30 = sub_178DC50(v9, v9, v26, v27, v28, v29);
      if ( !v25 || !v30 )
        goto LABEL_9;
      v42 = sub_168B6C0((__int64)a1);
      v43 = *(_QWORD *)(v42 + 22816);
      v44 = *(_DWORD *)(v42 + 22832);
      if ( v44 )
      {
        v45 = v44 - 1;
        v46 = (v44 - 1) & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
        v47 = *(_QWORD *)(v43 + 8LL * v46);
        if ( v9 == v47 )
        {
LABEL_9:
          v31 = sub_168B6C0((__int64)a1);
          v34 = *(unsigned int *)(v31 + 22832);
          v35 = v31;
          v36 = v31 + 22816;
          v37 = *(__int64 **)(v31 + 22816);
          if ( !(_DWORD)v34 )
            goto LABEL_26;
          v38 = (unsigned int)(v34 - 1);
          v39 = v38 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
          v40 = &v37[v39];
          v41 = *v40;
          if ( *v40 == a2 )
          {
LABEL_11:
            sub_A8BC20(v115, v40, &v37[v34], v36, 1);
            return;
          }
          v33 = 1;
          v50 = nullptr;
          if ( v41 != -4096 )
          {
            while ( 1 )
            {
              if ( v41 == -8192 && !v50 )
                v50 = v40;
              v39 = v38 & (v33 + v39);
              v40 = &v37[v39];
              v41 = *v40;
              if ( *v40 == a2 )
                goto LABEL_11;
              if ( v41 == -4096 )
                break;
              v33 = (unsigned int)(v33 + 1);
            }
            if ( v50 )
              v40 = v50;
          }
          v51 = *(_DWORD *)(v35 + 22824) + 1;
          v32 = (unsigned int)(4 * v51);
          if ( (unsigned int)v32 < 3 * (int)v34 )
          {
            v52 = (unsigned int)v34 >> 3;
            if ( (int)v34 - *(_DWORD *)(v35 + 22828) - v51 > (unsigned int)v52 )
            {
              v53 = *v40;
              goto LABEL_23;
            }
            v110 = v36;
            v75 = (v38 >> 1) | v38;
            v76 = (((((((v75 | (v75 >> 2)) >> 4) | v75 | (v75 >> 2)) >> 8) | ((v75 | (v75 >> 2)) >> 4)
                                                                           | v75
                                                                           | (v75 >> 2)) >> 16)
                 | ((((v75 | (v75 >> 2)) >> 4) | v75 | (v75 >> 2)) >> 8)
                 | ((v75 | (v75 >> 2)) >> 4)
                 | v75
                 | (v75 >> 2))
                + 1;
            if ( (unsigned int)v76 < 0x40 )
              LODWORD(v76) = 64;
            *(_DWORD *)(v35 + 22832) = v76;
            v77 = sub_22300B0(8LL * (unsigned int)v76, 8, 64, v36, v52, v33);
            v36 = v110;
            *(_QWORD *)(v35 + 22816) = v77;
            if ( v37 )
            {
              v78 = *(unsigned int *)(v35 + 22832);
              v79 = 8 * v34;
              *(_QWORD *)(v35 + 22824) = 0;
              v80 = &v37[v34];
              v81 = v78;
              v82 = 8 * v78;
              if ( v77 != v77 + v82 )
              {
                v83 = (__m128i *)v77;
                v84 = ((unsigned __int64)(v82 - 8) >> 3) + 1;
                if ( v82 == 8 )
                  goto LABEL_55;
                si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
                do
                  *v83++ = si128;
                while ( v83 != (__m128i *)(v77 + 16 * (v84 >> 1)) );
                v83 = (__m128i *)(v77 + 8 * (v84 & 0xFFFFFFFFFFFFFFFELL));
                if ( (v84 & 0xFFFFFFFFFFFFFFFELL) != v84 )
LABEL_55:
                  v83->m128i_i64[0] = -4096;
              }
              v86 = v37;
              v87 = v81 - 1;
              v88 = v110;
              do
              {
                v89 = *v86;
                if ( *v86 != -4096 && v89 != -8192 )
                {
                  if ( !v81 )
                  {
                    *(_QWORD *)&dword_0 = *v86;
                    BUG();
                  }
                  v90 = v87 & (((unsigned int)v89 >> 9) ^ ((unsigned int)v89 >> 4));
                  v91 = (_QWORD *)(v77 + 8LL * v90);
                  v92 = *v91;
                  if ( v89 != *v91 && v92 != -4096 )
                  {
                    v114 = 1;
                    v113 = nullptr;
                    while ( 1 )
                    {
                      if ( !v113 )
                      {
                        if ( v92 != -8192 )
                          v91 = nullptr;
                        v113 = v91;
                      }
                      v90 = v87 & (v114 + v90);
                      v91 = (_QWORD *)(v77 + 8LL * v90);
                      v92 = *v91;
                      if ( v89 == *v91 )
                        break;
                      if ( v92 == -4096 )
                      {
                        if ( v113 )
                          v91 = v113;
                        break;
                      }
                      ++v114;
                    }
                  }
                  *v91 = v89;
                  ++*(_DWORD *)(v35 + 22824);
                }
                ++v86;
              }
              while ( v80 != v86 );
              v111 = v88;
              operator delete(v37, v79, 8);
              v36 = v111;
              v37 = *(__int64 **)(v35 + 22816);
              v34 = *(unsigned int *)(v35 + 22832);
              v51 = *(_DWORD *)(v35 + 22824) + 1;
            }
            else
            {
              v102 = *(unsigned int *)(v35 + 22832);
              *(_QWORD *)(v35 + 22824) = 0;
              v34 = v102;
              v103 = 8 * v102;
              v37 = (__int64 *)(v77 + v103);
              if ( v77 == v77 + v103 )
              {
                v51 = 1;
              }
              else
              {
                v104 = (__m128i *)v77;
                v105 = ((unsigned __int64)(v103 - 8) >> 3) + 1;
                if ( v103 == 8 )
                  goto LABEL_84;
                v106 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
                do
                  *v104++ = v106;
                while ( (__m128i *)(v77 + 16 * (v105 >> 1)) != v104 );
                v104 = (__m128i *)(v77 + 8 * (v105 & 0xFFFFFFFFFFFFFFFELL));
                if ( (v105 & 0xFFFFFFFFFFFFFFFELL) != v105 )
LABEL_84:
                  v104->m128i_i64[0] = -4096;
                v37 = (__int64 *)v77;
                v51 = 1;
              }
            }
            if ( (_DWORD)v34 )
            {
              v93 = (v34 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
              v40 = &v37[v93];
              v53 = a2;
              v94 = *v40;
              if ( *v40 == a2 )
                goto LABEL_23;
              v95 = 1;
              v96 = nullptr;
              if ( v94 != -4096 )
              {
                while ( 1 )
                {
                  if ( v94 == -8192 && !v96 )
                    v96 = v40;
                  v93 = (v34 - 1) & (v95 + v93);
                  v40 = &v37[v93];
                  v94 = *v40;
                  if ( *v40 == a2 )
                    break;
                  if ( v94 == -4096 )
                  {
                    if ( !v96 )
                      goto LABEL_46;
                    v53 = *v96;
                    v40 = v96;
                    goto LABEL_23;
                  }
                  ++v95;
                }
LABEL_71:
                v53 = a2;
LABEL_23:
                *(_DWORD *)(v35 + 22824) = v51;
                if ( v53 != -4096 )
                  --*(_DWORD *)(v35 + 22828);
                goto LABEL_25;
              }
              goto LABEL_46;
            }
          }
          else
          {
LABEL_26:
            v108 = v36;
            v54 = (((((((unsigned int)(2 * v34 - 1) | ((unsigned __int64)(unsigned int)(2 * v34 - 1) >> 1)) >> 2)
                    | (unsigned int)(2 * v34 - 1)
                    | ((unsigned __int64)(unsigned int)(2 * v34 - 1) >> 1)) >> 4)
                  | (((unsigned int)(2 * v34 - 1) | ((unsigned __int64)(unsigned int)(2 * v34 - 1) >> 1)) >> 2)
                  | (unsigned int)(2 * v34 - 1)
                  | ((unsigned __int64)(unsigned int)(2 * v34 - 1) >> 1)) >> 8)
                | (((((unsigned int)(2 * v34 - 1) | ((unsigned __int64)(unsigned int)(2 * v34 - 1) >> 1)) >> 2)
                  | (unsigned int)(2 * v34 - 1)
                  | ((unsigned __int64)(unsigned int)(2 * v34 - 1) >> 1)) >> 4)
                | (((unsigned int)(2 * v34 - 1) | ((unsigned __int64)(unsigned int)(2 * v34 - 1) >> 1)) >> 2)
                | (unsigned int)(2 * v34 - 1)
                | ((unsigned __int64)(unsigned int)(2 * v34 - 1) >> 1);
            v55 = ((v54 >> 16) | v54) + 1;
            if ( (unsigned int)v55 < 0x40 )
              LODWORD(v55) = 64;
            *(_DWORD *)(v35 + 22832) = v55;
            v56 = sub_22300B0(8LL * (unsigned int)v55, 8, 64, v36, v32, v33);
            v36 = v108;
            *(_QWORD *)(v35 + 22816) = v56;
            if ( v37 )
            {
              v57 = *(unsigned int *)(v35 + 22832);
              v58 = 8 * v34;
              *(_QWORD *)(v35 + 22824) = 0;
              v59 = &v37[v34];
              v60 = v57;
              v61 = 8 * v57;
              if ( v56 != v56 + v61 )
              {
                v62 = (__m128i *)v56;
                v63 = ((unsigned __int64)(v61 - 8) >> 3) + 1;
                if ( v61 == 8 )
                  goto LABEL_34;
                v64 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
                do
                  *v62++ = v64;
                while ( v62 != (__m128i *)(v56 + 16 * (v63 >> 1)) );
                v62 = (__m128i *)(v56 + 8 * (v63 & 0xFFFFFFFFFFFFFFFELL));
                if ( (v63 & 0xFFFFFFFFFFFFFFFELL) != v63 )
LABEL_34:
                  v62->m128i_i64[0] = -4096;
              }
              v65 = v37;
              for ( i = v60 - 1; v59 != v65; ++v65 )
              {
                v67 = *v65;
                if ( *v65 != -4096 && v67 != -8192 )
                {
                  if ( !v60 )
                  {
                    *(_QWORD *)&dword_0 = *v65;
                    BUG();
                  }
                  v68 = i & (((unsigned int)v67 >> 9) ^ ((unsigned int)v67 >> 4));
                  v69 = (_QWORD *)(v56 + 8LL * v68);
                  v70 = *v69;
                  if ( *v69 != v67 && v70 != -4096 )
                  {
                    v112 = 1;
                    v107 = nullptr;
                    while ( 1 )
                    {
                      if ( !v107 && v70 == -8192 )
                        v107 = v69;
                      v68 = i & (v112 + v68);
                      v69 = (_QWORD *)(v56 + 8LL * v68);
                      v70 = *v69;
                      if ( v67 == *v69 )
                        break;
                      if ( v70 == -4096 )
                      {
                        if ( v107 )
                          v69 = v107;
                        break;
                      }
                      ++v112;
                    }
                  }
                  *v69 = v67;
                  ++*(_DWORD *)(v35 + 22824);
                }
              }
              v109 = v36;
              operator delete(v37, v58, 8);
              v36 = v109;
              v37 = *(__int64 **)(v35 + 22816);
              v34 = *(unsigned int *)(v35 + 22832);
              v51 = *(_DWORD *)(v35 + 22824) + 1;
            }
            else
            {
              v97 = *(unsigned int *)(v35 + 22832);
              *(_QWORD *)(v35 + 22824) = 0;
              v34 = v97;
              v98 = 8 * v97;
              v37 = (__int64 *)(v56 + v98);
              if ( v56 == v56 + v98 )
              {
                v51 = 1;
              }
              else
              {
                v99 = (__m128i *)v56;
                v100 = ((unsigned __int64)(v98 - 8) >> 3) + 1;
                if ( v98 == 8 )
                  goto LABEL_77;
                v101 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
                do
                  *v99++ = v101;
                while ( v99 != (__m128i *)(v56 + 16 * (v100 >> 1)) );
                v99 = (__m128i *)(v56 + 8 * (v100 & 0xFFFFFFFFFFFFFFFELL));
                if ( (v100 & 0xFFFFFFFFFFFFFFFELL) != v100 )
LABEL_77:
                  v99->m128i_i64[0] = -4096;
                v37 = (__int64 *)v56;
                v51 = 1;
              }
            }
            if ( (_DWORD)v34 )
            {
              v71 = (v34 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
              v40 = &v37[v71];
              v53 = a2;
              v72 = *v40;
              if ( *v40 == a2 )
                goto LABEL_23;
              v73 = 1;
              v74 = nullptr;
              if ( v72 != -4096 )
              {
                while ( 1 )
                {
                  if ( v72 == -8192 && !v74 )
                    v74 = v40;
                  v71 = (v34 - 1) & (v73 + v71);
                  v40 = &v37[v71];
                  v72 = *v40;
                  if ( *v40 == a2 )
                    goto LABEL_71;
                  if ( v72 == -4096 )
                  {
                    if ( !v74 )
                      break;
                    v53 = *v74;
                    v40 = v74;
                    goto LABEL_23;
                  }
                  ++v73;
                }
              }
LABEL_46:
              *(_DWORD *)(v35 + 22824) = v51;
LABEL_25:
              *v40 = a2;
              goto LABEL_11;
            }
          }
          ++*(_DWORD *)(v35 + 22824);
          BUG();
        }
        if ( v47 != -4096 )
        {
          for ( j = 1; ; ++j )
          {
            v46 = v45 & (j + v46);
            v49 = *(_QWORD *)(v43 + 8LL * v46);
            if ( v9 == v49 )
              break;
            if ( v49 == -4096 )
              return;
          }
          goto LABEL_9;
        }
      }
    }
  }
}
