__int64 __fastcall sub_AFDA10(__int64 a1, char **a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 result; // rax
  unsigned int v6; // edx
  unsigned int v7; // ebx
  char *v8; // r13
  __int64 *v9; // r13
  __int64 v10; // rax
  __int16 v11; // dx
  __int64 *v12; // rbx
  unsigned int v13; // r15d
  unsigned int v14; // edx
  __int64 v15; // rax
  __int64 v16; // r14
  char v17; // al
  unsigned int v18; // edx
  unsigned int v19; // r13d
  char *v20; // rcx
  __int16 v21; // ax
  __int64 v22; // rsi
  __int64 v23; // r13
  _DWORD *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // edi
  unsigned int v28; // r8d
  _QWORD *v29; // rbx
  size_t v30; // r15
  unsigned int v31; // r9d
  __int64 v32; // rbp
  int v33; // esi
  __int64 v34; // r9
  _QWORD *v35; // r8
  _QWORD *v36; // rax
  _QWORD *v37; // r9
  __int64 v38; // rdx
  unsigned int v39; // edx
  unsigned int v40; // eax
  unsigned int v41; // ecx
  char v42; // dl
  __int64 v43; // rdi
  __int64 v44; // rdx
  int v45; // ebx
  __int64 *v46; // rdx
  __int64 v47; // rdx
  int v48; // eax
  __int64 v49; // rsi
  unsigned int v50; // edx
  unsigned int v51; // ebx
  char *v52; // rbp
  __int64 v53; // rbx
  __int64 *v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rcx
  _DWORD *v57; // rax
  __int64 v58; // r9
  __int64 v59; // r8
  int v60; // esi
  __int64 *v61; // r13
  unsigned int v62; // r10d
  __int64 v63; // r8
  __int64 *v64; // r14
  int v65; // edi
  __int64 v66; // rax
  __int64 *v67; // r10
  __int64 *v68; // rax
  __int64 *v69; // r8
  __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // r13
  __int64 v73; // rax
  char *v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rbx
  __int64 v77; // rax
  char *v78; // rdi
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 *v81; // rax
  __int64 *v82; // r11
  __int64 v83; // rdx
  __int64 *v84; // rsi
  __int64 *v85; // rdx
  __int64 v86; // rsi
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rbx
  __int64 v91; // rax
  char *v92; // rdi
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 *v95; // rax
  __int64 v96; // rax
  __int64 v97; // rbp
  _QWORD *v98; // rax
  int v99; // r8d
  _QWORD *v100; // r14
  _QWORD *v101; // rax
  __int64 v102; // rdx
  _QWORD *v103; // rsi
  _QWORD *v104; // rdx
  __int64 v105; // rax
  unsigned int v107; // [rsp+18h] [rbp-180h]
  char *v108; // [rsp+18h] [rbp-180h]
  int v109; // [rsp+18h] [rbp-180h]
  __int64 v110; // [rsp+18h] [rbp-180h]
  __int64 v111; // [rsp+18h] [rbp-180h]
  __int64 v112; // [rsp+20h] [rbp-178h]
  __int64 v113; // [rsp+20h] [rbp-178h]
  int v114; // [rsp+20h] [rbp-178h]
  unsigned int v115; // [rsp+20h] [rbp-178h]
  __int64 v116; // [rsp+28h] [rbp-170h]
  __int64 v117; // [rsp+28h] [rbp-170h]
  int v118; // [rsp+28h] [rbp-170h]
  __int64 v119; // [rsp+30h] [rbp-168h]
  __int64 v120; // [rsp+38h] [rbp-160h]
  __int64 *v121; // [rsp+50h] [rbp-148h]
  __int64 v122; // [rsp+58h] [rbp-140h]
  __int64 v123; // [rsp+60h] [rbp-138h] BYREF
  int v124; // [rsp+68h] [rbp-130h]

  v4 = a3;
  if ( *(_DWORD *)(a3 + 8) > 1u )
  {
    result = *(unsigned __int8 *)(a3 + 6);
    if ( (result & 1) != 0 )
      return result;
    *(_BYTE *)(a3 + 6) = result | 1;
    v6 = *((_DWORD *)a2 + 2);
    v7 = *((_DWORD *)a2 + 3);
    if ( v6 >= v7 )
    {
      v90 = 2 * v7;
      v91 = sub_186B270(8 * v90);
      v6 = *((_DWORD *)a2 + 2);
      v92 = *a2;
      v8 = (char *)v91;
      if ( v6 )
      {
        if ( v6 - 1 <= 2 || (char *)v91 == v92 + 8 )
        {
          v105 = 0;
          do
          {
            *(_QWORD *)&v8[v105] = *(_QWORD *)&v92[v105];
            v105 += 8;
          }
          while ( v105 != 8LL * v6 );
        }
        else
        {
          v93 = 0;
          do
          {
            *(__m128i *)&v8[v93] = _mm_loadu_si128((const __m128i *)&v92[v93]);
            v93 += 16;
          }
          while ( 16LL * (v6 >> 1) != v93 );
          if ( (v6 & 1) != 0 )
            *(_QWORD *)&v8[8 * (v6 & 0xFFFFFFFE)] = *(_QWORD *)&v92[8 * (v6 & 0xFFFFFFFE)];
        }
      }
      if ( v92 != (char *)(a2 + 2) && v92 )
      {
        sub_186B220(v92);
        v6 = *((_DWORD *)a2 + 2);
      }
      *a2 = v8;
      *((_DWORD *)a2 + 3) = v90;
    }
    else
    {
      v8 = *a2;
    }
    *(_QWORD *)&v8[8 * v6] = v4;
    *((_DWORD *)a2 + 2) = v6 + 1;
  }
  v9 = &v123;
  v123 = v4;
  v121 = &v123;
  v124 = 0;
  v122 = 0x1000000001LL;
  LODWORD(v10) = 0;
LABEL_8:
  v11 = *(_WORD *)(v4 + 4);
  v12 = &v9[2 * (unsigned int)v10];
  if ( v11 == 1 )
    goto LABEL_38;
  if ( v11 == 2 )
  {
    v39 = *(_DWORD *)(v4 + 72);
    v40 = *((_DWORD *)v12 + 2);
    v41 = v39 + *(_DWORD *)(v4 + 76) + 1;
    if ( v40 >= v41 )
    {
LABEL_37:
      LODWORD(v10) = v122 - 1;
LABEL_38:
      LODWORD(v122) = v10;
      goto LABEL_39;
    }
    if ( v40 )
      goto LABEL_47;
    v16 = *(_QWORD *)(v4 + 24);
    v40 = 1;
    *((_DWORD *)v12 + 2) = 1;
    if ( *(_DWORD *)(v16 + 8) <= 1u )
    {
LABEL_50:
      v44 = (unsigned int)v122;
      v45 = HIDWORD(v122);
      if ( (unsigned int)v122 >= HIDWORD(v122) )
        goto LABEL_64;
      goto LABEL_51;
    }
    while ( 1 )
    {
      v42 = *(_BYTE *)(v16 + 6);
      if ( (v42 & 1) == 0 )
        break;
      if ( v40 >= v41 )
        goto LABEL_37;
      v39 = *(_DWORD *)(v4 + 72);
LABEL_47:
      v43 = v40 - 1;
      if ( v39 < v40 )
        v43 = (unsigned int)v43 - v39;
      ++v40;
      v16 = *(_QWORD *)(16LL * *(unsigned int *)(v4 + 20) + v4 + 8 * v43 + 80);
      *((_DWORD *)v12 + 2) = v40;
      if ( *(_DWORD *)(v16 + 8) <= 1u )
        goto LABEL_50;
    }
    *(_BYTE *)(v16 + 6) = v42 | 1;
    v50 = *((_DWORD *)a2 + 2);
    v51 = *((_DWORD *)a2 + 3);
    if ( v50 < v51 )
    {
      v52 = *a2;
      goto LABEL_63;
    }
    v76 = 2 * v51;
    v77 = sub_186B270(8 * v76);
    v50 = *((_DWORD *)a2 + 2);
    v78 = *a2;
    v52 = (char *)v77;
    if ( v50 )
    {
      if ( v50 - 1 <= 2 || (char *)v77 == v78 + 8 )
      {
        v88 = 0;
        do
        {
          *(_QWORD *)&v52[v88] = *(_QWORD *)&v78[v88];
          v88 += 8;
        }
        while ( v88 != 8LL * v50 );
        if ( v78 != (char *)(a2 + 2) )
        {
LABEL_106:
          if ( v78 )
          {
            sub_186B220(v78);
            v50 = *((_DWORD *)a2 + 2);
          }
        }
LABEL_108:
        *a2 = v52;
        *((_DWORD *)a2 + 3) = v76;
LABEL_63:
        v45 = HIDWORD(v122);
        *(_QWORD *)&v52[8 * v50] = v16;
        *((_DWORD *)a2 + 2) = v50 + 1;
        v44 = (unsigned int)v122;
        if ( (unsigned int)v122 >= HIDWORD(v122) )
        {
LABEL_64:
          v53 = (unsigned int)(2 * v45);
          v9 = (__int64 *)sub_186B270(16 * v53);
          v54 = v121;
          v55 = 0;
          v44 = (unsigned int)v122;
          if ( (_DWORD)v122 )
          {
            do
            {
              *(__m128i *)&v9[v55] = _mm_loadu_si128((const __m128i *)&v121[v55]);
              v55 += 2;
            }
            while ( v55 != 2LL * (unsigned int)v122 );
          }
          goto LABEL_66;
        }
LABEL_51:
        v9 = v121;
        goto LABEL_52;
      }
      v79 = 0;
      do
      {
        *(__m128i *)&v52[v79] = _mm_loadu_si128((const __m128i *)&v78[v79]);
        v79 += 16;
      }
      while ( v79 != 16LL * (v50 >> 1) );
      if ( (v50 & 1) != 0 )
        *(_QWORD *)&v52[8 * (v50 & 0xFFFFFFFE)] = *(_QWORD *)&v78[8 * (v50 & 0xFFFFFFFE)];
    }
    if ( v78 != (char *)(a2 + 2) )
      goto LABEL_106;
    goto LABEL_108;
  }
  if ( v11 )
  {
    v49 = 100;
    sub_1872CE0("");
    goto LABEL_55;
  }
  v13 = *(_DWORD *)(v4 + 24);
  v14 = *((_DWORD *)v12 + 2);
  if ( v14 < v13 )
  {
    while ( 1 )
    {
      v15 = v14++;
      v16 = *(_QWORD *)(v4 + 8 * v15 + 32);
      *((_DWORD *)v12 + 2) = v14;
      if ( *(_DWORD *)(v16 + 8) > 1u )
      {
        v17 = *(_BYTE *)(v16 + 6);
        if ( (v17 & 1) != 0 )
          goto LABEL_23;
        *(_BYTE *)(v16 + 6) = v17 | 1;
        v18 = *((_DWORD *)a2 + 2);
        v19 = *((_DWORD *)a2 + 3);
        if ( v18 >= v19 )
        {
          v72 = 2 * v19;
          v73 = sub_186B270(8 * v72);
          v18 = *((_DWORD *)a2 + 2);
          v74 = *a2;
          v20 = (char *)v73;
          if ( v18 )
          {
            if ( v18 - 1 <= 2 || (char *)v73 == v74 + 8 )
            {
              v89 = 0;
              do
              {
                *(_QWORD *)&v20[v89] = *(_QWORD *)&v74[v89];
                v89 += 8;
              }
              while ( 8LL * v18 != v89 );
            }
            else
            {
              v75 = 0;
              do
              {
                *(__m128i *)&v20[v75] = _mm_loadu_si128((const __m128i *)&v74[v75]);
                v75 += 16;
              }
              while ( 16LL * (v18 >> 1) != v75 );
              if ( (v18 & 1) != 0 )
                *(_QWORD *)&v20[8 * (v18 & 0xFFFFFFFE)] = *(_QWORD *)&v74[8 * (v18 & 0xFFFFFFFE)];
            }
          }
          if ( v74 != (char *)(a2 + 2) && v74 )
          {
            v108 = v20;
            sub_186B220(v74);
            v18 = *((_DWORD *)a2 + 2);
            v20 = v108;
          }
          *a2 = v20;
          *((_DWORD *)a2 + 3) = v72;
        }
        else
        {
          v20 = *a2;
        }
        *(_QWORD *)&v20[8 * v18] = v16;
        *((_DWORD *)a2 + 2) = v18 + 1;
      }
      v21 = *(_WORD *)(v16 + 4);
      if ( v21 == 1 )
      {
LABEL_22:
        v14 = *((_DWORD *)v12 + 2);
        goto LABEL_23;
      }
      if ( v21 == 2 )
      {
        v44 = (unsigned int)v122;
        if ( (unsigned int)v122 < HIDWORD(v122) )
          goto LABEL_51;
        v53 = (unsigned int)(2 * HIDWORD(v122));
        v9 = (__int64 *)sub_186B270(16 * v53);
        v54 = v121;
        v71 = 0;
        v44 = (unsigned int)v122;
        if ( (_DWORD)v122 )
        {
          do
          {
            *(__m128i *)&v9[v71] = _mm_loadu_si128((const __m128i *)&v121[v71]);
            v71 += 2;
          }
          while ( 2LL * (unsigned int)v122 != v71 );
        }
LABEL_66:
        if ( v54 != &v123 && v54 )
        {
          sub_186B220(v54);
          v44 = (unsigned int)v122;
        }
        v121 = v9;
        HIDWORD(v122) = v53;
LABEL_52:
        v46 = &v9[2 * v44];
        *v46 = v16;
        *((_DWORD *)v46 + 2) = 0;
        v47 = (unsigned int)v122;
        v48 = v122 + 1;
LABEL_53:
        LODWORD(v122) = v48;
        LODWORD(v10) = v48 - 1;
        v4 = v9[2 * v47];
        goto LABEL_8;
      }
      if ( v21 )
      {
        v22 = 73;
        sub_1872CE0("");
        goto LABEL_21;
      }
      if ( *(_DWORD *)(v16 + 24) )
      {
        v94 = (unsigned int)v122;
        if ( (unsigned int)v122 >= HIDWORD(v122) )
        {
          v9 = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v122)));
          v96 = 0;
          v94 = (unsigned int)v122;
          if ( (_DWORD)v122 )
          {
            do
            {
              *(__m128i *)&v9[v96] = _mm_loadu_si128((const __m128i *)&v121[v96]);
              v96 += 2;
            }
            while ( v96 != 2LL * (unsigned int)v122 );
          }
          if ( v121 != &v123 && v121 )
          {
            sub_186B220(v121);
            v94 = (unsigned int)v122;
          }
          v121 = v9;
          HIDWORD(v122) *= 2;
        }
        else
        {
          v9 = v121;
        }
        v95 = &v9[2 * v94];
        *((_DWORD *)v95 + 2) = 0;
        v47 = (unsigned int)v122;
        *v95 = v16;
        v48 = v122 + 1;
        goto LABEL_53;
      }
      v56 = *(_QWORD *)(v16 + 16);
      v57 = *(_DWORD **)(v56 + 24);
      if ( v57 && *v57 != -1 )
        goto LABEL_22;
      v58 = *(_QWORD *)(a1 + 8);
      v59 = *(unsigned int *)(v58 + 8);
      v60 = *(_DWORD *)(v58 + 16);
      v107 = 2 * v59;
      if ( 3 * (int)v59 < (unsigned int)(4 * (v60 + *(_DWORD *)(v58 + 12))) )
      {
        v119 = *(_QWORD *)(a1 + 8);
        v116 = *(_QWORD *)(v16 + 16);
        v61 = (__int64 *)sub_186B270(8LL * v107);
        v63 = 8LL * v107;
        v56 = v116;
        v58 = v119;
        if ( v107 )
        {
          memset(v61, 0, 8LL * v107);
          v56 = v116;
          v58 = v119;
          v63 = 8LL * v107;
        }
        v81 = *(__int64 **)v58;
        v64 = (__int64 *)((char *)v61 + v63);
        v82 = (__int64 *)(*(_QWORD *)v58 + 8LL * *(unsigned int *)(v58 + 8));
        v62 = v107 - 1;
        if ( *(__int64 **)v58 != v82 )
        {
          do
          {
            while ( (unsigned __int64)*v81 <= 1 )
            {
              if ( v82 == ++v81 )
                goto LABEL_128;
            }
            v83 = 8LL * (*(_DWORD *)(*v81 + 12) & v62);
            v84 = &v61[(unsigned __int64)v83 / 8];
            if ( v63 == v83 )
            {
LABEL_143:
              if ( v61 == v84 )
              {
LABEL_165:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v85 = v61;
              while ( *v85 )
              {
                if ( v84 == ++v85 )
                  goto LABEL_165;
              }
            }
            else
            {
              v85 = &v61[(unsigned __int64)v83 / 8];
              while ( *v85 )
              {
                if ( v64 == ++v85 )
                  goto LABEL_143;
              }
            }
            v86 = *v81++;
            *v85 = v86;
          }
          while ( v82 != v81 );
LABEL_128:
          v82 = *(__int64 **)v58;
        }
        if ( v82 )
        {
          v120 = v63;
          v117 = v58;
          v112 = v56;
          sub_186B220(v82);
          v63 = v120;
          v62 = v107 - 1;
          v58 = v117;
          v56 = v112;
        }
        *(_QWORD *)v58 = v61;
        v60 = 0;
        *(_DWORD *)(v58 + 16) = 0;
        *(_DWORD *)(v58 + 8) = v107;
      }
      else
      {
        v61 = *(__int64 **)v58;
        v62 = v59 - 1;
        v63 = 8 * v59;
        v64 = (__int64 *)(*(_QWORD *)v58 + v63);
      }
      v65 = *(_DWORD *)(v56 + 12);
      v66 = 8LL * (v65 & v62);
      v67 = &v61[(unsigned __int64)v66 / 8];
      if ( v66 != v63 )
      {
        v68 = &v61[(unsigned __int64)v66 / 8];
        v69 = nullptr;
        while ( 1 )
        {
          v70 = *v68;
          if ( (unsigned __int64)*v68 > 1 )
          {
            if ( *(_DWORD *)(v70 + 12) == v65 && v56 == v70 )
              goto LABEL_22;
          }
          else
          {
            if ( !v70 )
            {
              if ( v69 )
                goto LABEL_152;
              v69 = v68;
              goto LABEL_153;
            }
            v69 = v68;
          }
          if ( ++v68 == v64 )
            goto LABEL_112;
        }
      }
      v69 = nullptr;
      while ( 1 )
      {
LABEL_112:
        if ( v67 == v61 )
        {
          v22 = 461;
          sub_1872CE0("");
LABEL_21:
          sub_1873130(114, v22);
        }
        v80 = *v61;
        if ( (unsigned __int64)*v61 <= 1 )
          break;
        if ( *(_DWORD *)(v80 + 12) == v65 && v56 == v80 )
          goto LABEL_22;
LABEL_111:
        ++v61;
      }
      if ( v80 )
        break;
      if ( v69 )
LABEL_152:
        *(_DWORD *)(v58 + 16) = v60 - 1;
      else
        v69 = v61;
LABEL_153:
      *v69 = v56;
      v14 = *((_DWORD *)v12 + 2);
      ++*(_DWORD *)(v58 + 12);
LABEL_23:
      if ( v14 >= v13 )
      {
        LODWORD(v10) = v122 - 1;
        goto LABEL_25;
      }
    }
    v69 = v61;
    goto LABEL_111;
  }
LABEL_25:
  v23 = *(_QWORD *)(v4 + 16);
  LODWORD(v122) = v10;
  v24 = *(_DWORD **)(v23 + 24);
  if ( !v24 || *v24 == -1 )
  {
    v25 = *(_QWORD *)(a1 + 8);
    v26 = *(unsigned int *)(v25 + 8);
    v27 = *(_DWORD *)(v25 + 16);
    v28 = 2 * v26;
    if ( 3 * (int)v26 < (unsigned int)(4 * (v27 + *(_DWORD *)(v25 + 12))) )
    {
      v97 = v28;
      v113 = *(_QWORD *)(a1 + 8);
      v30 = 8LL * v28;
      v109 = 2 * v26;
      v98 = (_QWORD *)sub_186B270(v30);
      v99 = v109;
      v25 = v113;
      v29 = v98;
      if ( v109 )
      {
        v114 = v109;
        v110 = v25;
        memset(v98, 0, 8 * v97);
        v25 = v110;
        v99 = v114;
      }
      v100 = *(_QWORD **)v25;
      v31 = v99 - 1;
      v32 = (__int64)&v29[v30 / 8];
      v101 = (_QWORD *)(*(_QWORD *)v25 + 8LL * *(unsigned int *)(v25 + 8));
      if ( *(_QWORD **)v25 != v101 )
      {
        do
        {
          if ( *v100 > 1u )
          {
            v102 = 8LL * (*(_DWORD *)(*v100 + 12LL) & v31);
            v103 = &v29[(unsigned __int64)v102 / 8];
            if ( v30 == v102 )
            {
LABEL_190:
              if ( v29 == v103 )
              {
LABEL_202:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v104 = v29;
              while ( *v104 )
              {
                if ( v103 == ++v104 )
                  goto LABEL_202;
              }
            }
            else
            {
              v104 = &v29[(unsigned __int64)v102 / 8];
              while ( *v104 )
              {
                if ( (_QWORD *)v32 == ++v104 )
                  goto LABEL_190;
              }
            }
            *v104 = *v100;
          }
          ++v100;
        }
        while ( v101 != v100 );
        v101 = *(_QWORD **)v25;
      }
      if ( v101 )
      {
        v118 = v99;
        v115 = v99 - 1;
        v111 = v25;
        sub_186B220(v101);
        v99 = v118;
        v31 = v115;
        v25 = v111;
      }
      *(_QWORD *)v25 = v29;
      v27 = 0;
      *(_DWORD *)(v25 + 8) = v99;
      *(_DWORD *)(v25 + 16) = 0;
    }
    else
    {
      v29 = *(_QWORD **)v25;
      v30 = 8 * v26;
      v31 = v26 - 1;
      v32 = *(_QWORD *)v25 + 8 * v26;
    }
    v33 = *(_DWORD *)(v23 + 12);
    v34 = v33 & v31;
    v35 = &v29[v34];
    if ( 8 * v34 != v30 )
    {
      v36 = &v29[v34];
      v37 = nullptr;
      while ( 1 )
      {
        v38 = *v36;
        if ( *v36 > 1u )
        {
          if ( *(_DWORD *)(v38 + 12) == v33 && v23 == v38 )
            goto LABEL_56;
        }
        else
        {
          if ( !v38 )
          {
            if ( v37 )
              goto LABEL_200;
            v37 = v36;
            goto LABEL_201;
          }
          v37 = v36;
        }
        if ( ++v36 == (_QWORD *)v32 )
          goto LABEL_135;
      }
    }
    v37 = nullptr;
LABEL_135:
    while ( v35 != v29 )
    {
      v87 = *v29;
      if ( *v29 > 1u )
      {
        if ( *(_DWORD *)(v87 + 12) == v33 && v23 == v87 )
        {
LABEL_56:
          LODWORD(v10) = v122;
          goto LABEL_57;
        }
      }
      else
      {
        if ( !v87 )
        {
          if ( v37 )
LABEL_200:
            *(_DWORD *)(v25 + 16) = v27 - 1;
          else
            v37 = v29;
LABEL_201:
          *v37 = v23;
          LODWORD(v10) = v122;
          ++*(_DWORD *)(v25 + 12);
          v9 = v121;
LABEL_39:
          if ( !(_DWORD)v10 )
            goto LABEL_58;
LABEL_40:
          v10 = (unsigned int)(v10 - 1);
          v4 = v9[2 * v10];
          goto LABEL_8;
        }
        v37 = v29;
      }
      ++v29;
    }
    v49 = 461;
    sub_1872CE0("");
LABEL_55:
    sub_1873130(114, v49);
  }
LABEL_57:
  v9 = v121;
  if ( (_DWORD)v10 )
    goto LABEL_40;
LABEL_58:
  result = (__int64)&v123;
  if ( v9 != &v123 )
  {
    if ( v9 )
      return sub_186B220(v9);
  }
  return result;
}

