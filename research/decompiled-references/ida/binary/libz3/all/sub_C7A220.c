__int64 __fastcall sub_C7A220(__int64 *a1, char **a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 result; // rax
  unsigned int v6; // edx
  unsigned int v7; // ebx
  char *v8; // rbp
  __int64 *p_ptr; // rbp
  unsigned __int64 v10; // rax
  __int16 v11; // dx
  __int64 *v12; // rbx
  unsigned int v13; // r13d
  unsigned int v14; // esi
  __int64 v15; // rax
  __int64 v16; // r14
  char v17; // al
  unsigned int v18; // esi
  unsigned int v19; // ebp
  char *v20; // r10
  __int16 v21; // ax
  __int64 v22; // rsi
  _DWORD *v23; // rdx
  _DWORD *v24; // rax
  __int64 v25; // r13
  __int64 v26; // rbp
  __int64 v27; // rax
  int v28; // r10d
  _QWORD *v29; // rbx
  unsigned int v30; // r14d
  _QWORD *v31; // r15
  int v32; // edi
  __int64 v33; // rax
  _QWORD *v34; // r9
  _QWORD *v35; // rsi
  __int64 v36; // rdx
  unsigned int v37; // edx
  unsigned int v38; // eax
  unsigned int v39; // edi
  __int64 v40; // r13
  char v41; // si
  __int64 v42; // r9
  __int64 v43; // rcx
  int v44; // ebx
  __int64 *v45; // rcx
  __int64 v46; // rdx
  int v47; // eax
  __int64 v48; // rsi
  unsigned int v49; // ecx
  unsigned int v50; // ebx
  char *v51; // rbp
  __int64 v52; // rbx
  __int64 v53; // rax
  _DWORD *v54; // rax
  _DWORD *v55; // rax
  __int64 v56; // r14
  __int64 v57; // rcx
  __int64 v58; // rax
  int v59; // edx
  _QWORD *v60; // rbp
  __int64 v61; // r8
  unsigned int v62; // r9d
  _QWORD *v63; // r10
  int v64; // esi
  __int64 v65; // rax
  _QWORD *v66; // r11
  _QWORD *v67; // rax
  _QWORD *v68; // rdi
  __int64 v69; // r8
  __int64 v70; // rcx
  __int64 *v71; // rcx
  __int64 v72; // rbp
  __int64 v73; // rax
  char *v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rbx
  __int64 v77; // rax
  char *v78; // rdi
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rbx
  __int64 v84; // rax
  char *v85; // rdi
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 *v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  _QWORD *v91; // rax
  char *v92; // rax
  char *v93; // r11
  __int64 v94; // rdx
  _QWORD *v95; // rsi
  _QWORD *v96; // rdx
  __int64 v97; // rax
  __int64 v98; // rax
  _QWORD *v99; // rax
  char *v100; // rdi
  char *v101; // rax
  char *v102; // r9
  __int64 v103; // rdx
  _QWORD *v104; // rsi
  _QWORD *v105; // rdx
  size_t v107; // [rsp+18h] [rbp-180h]
  unsigned int v108; // [rsp+18h] [rbp-180h]
  char *v109; // [rsp+18h] [rbp-180h]
  unsigned int v110; // [rsp+20h] [rbp-178h]
  __int64 v111; // [rsp+20h] [rbp-178h]
  __int64 v112; // [rsp+30h] [rbp-168h]
  __int64 v113; // [rsp+30h] [rbp-168h]
  char *v114; // [rsp+38h] [rbp-160h]
  __int64 *v115; // [rsp+50h] [rbp-148h]
  __int64 v116; // [rsp+58h] [rbp-140h]
  __int64 ptr; // [rsp+60h] [rbp-138h] BYREF
  int v118; // [rsp+68h] [rbp-130h]

  v3 = a3;
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
      v83 = 2 * v7;
      v84 = sub_186B270(8 * v83);
      v6 = *((_DWORD *)a2 + 2);
      v85 = *a2;
      v8 = (char *)v84;
      if ( v6 )
      {
        if ( v6 - 1 <= 2 || (char *)v84 == v85 + 8 )
        {
          v98 = 0;
          do
          {
            *(_QWORD *)&v8[v98] = *(_QWORD *)&v85[v98];
            v98 += 8;
          }
          while ( v98 != 8LL * v6 );
        }
        else
        {
          v86 = 0;
          do
          {
            *(__m128i *)&v8[v86] = _mm_loadu_si128((const __m128i *)&v85[v86]);
            v86 += 16;
          }
          while ( 16LL * (v6 >> 1) != v86 );
          if ( (v6 & 1) != 0 )
            *(_QWORD *)&v8[8 * (v6 & 0xFFFFFFFE)] = *(_QWORD *)&v85[8 * (v6 & 0xFFFFFFFE)];
        }
      }
      if ( v85 != (char *)(a2 + 2) && v85 )
      {
        sub_186B220(v85);
        v6 = *((_DWORD *)a2 + 2);
      }
      *a2 = v8;
      *((_DWORD *)a2 + 3) = v83;
    }
    else
    {
      v8 = *a2;
    }
    *(_QWORD *)&v8[8 * v6] = v3;
    *((_DWORD *)a2 + 2) = v6 + 1;
  }
  p_ptr = &ptr;
  ptr = v3;
  v115 = &ptr;
  v118 = 0;
  v116 = 0x1000000001LL;
  LODWORD(v10) = 0;
LABEL_8:
  v11 = *(_WORD *)(v3 + 4);
  v12 = &p_ptr[2 * (unsigned int)v10];
  if ( v11 == 1 )
    goto LABEL_42;
  if ( v11 == 2 )
  {
    v37 = *(_DWORD *)(v3 + 72);
    v38 = *((_DWORD *)v12 + 2);
    v39 = v37 + *(_DWORD *)(v3 + 76) + 1;
    if ( v38 >= v39 )
    {
LABEL_41:
      LODWORD(v10) = v116 - 1;
LABEL_42:
      LODWORD(v116) = v10;
      goto LABEL_43;
    }
    if ( v38 )
      goto LABEL_51;
    v40 = *(_QWORD *)(v3 + 24);
    v38 = 1;
    *((_DWORD *)v12 + 2) = 1;
    if ( *(_DWORD *)(v40 + 8) <= 1u )
    {
LABEL_54:
      v43 = (unsigned int)v116;
      v44 = HIDWORD(v116);
      if ( (unsigned int)v116 >= HIDWORD(v116) )
      {
LABEL_68:
        v52 = (unsigned int)(2 * v44);
        p_ptr = (__int64 *)sub_186B270(16 * v52);
        v53 = 0;
        v43 = (unsigned int)v116;
        if ( (_DWORD)v116 )
        {
          do
          {
            *(__m128i *)&p_ptr[v53] = _mm_loadu_si128((const __m128i *)&v115[v53]);
            v53 += 2;
          }
          while ( v53 != 2LL * (unsigned int)v116 );
        }
        if ( v115 != &ptr && v115 )
        {
          sub_186B220(v115);
          v43 = (unsigned int)v116;
        }
        v115 = p_ptr;
        HIDWORD(v116) = v52;
        goto LABEL_56;
      }
LABEL_55:
      p_ptr = v115;
LABEL_56:
      v45 = &p_ptr[2 * v43];
      *((_DWORD *)v45 + 2) = 0;
      v46 = (unsigned int)v116;
      *v45 = v40;
      v47 = v116 + 1;
      goto LABEL_57;
    }
    while ( 1 )
    {
      v41 = *(_BYTE *)(v40 + 6);
      if ( (v41 & 1) == 0 )
        break;
      if ( v38 >= v39 )
        goto LABEL_41;
      v37 = *(_DWORD *)(v3 + 72);
LABEL_51:
      v42 = v38 - 1;
      if ( v37 < v38 )
        v42 = (unsigned int)v42 - v37;
      ++v38;
      v40 = *(_QWORD *)(16LL * *(unsigned int *)(v3 + 20) + v3 + 8 * v42 + 80);
      *((_DWORD *)v12 + 2) = v38;
      if ( *(_DWORD *)(v40 + 8) <= 1u )
        goto LABEL_54;
    }
    *(_BYTE *)(v40 + 6) = v41 | 1;
    v49 = *((_DWORD *)a2 + 2);
    v50 = *((_DWORD *)a2 + 3);
    if ( v49 < v50 )
    {
      v51 = *a2;
      goto LABEL_67;
    }
    v76 = 2 * v50;
    v77 = sub_186B270(8 * v76);
    v49 = *((_DWORD *)a2 + 2);
    v78 = *a2;
    v51 = (char *)v77;
    if ( v49 )
    {
      if ( v49 - 1 <= 2 || (char *)v77 == v78 + 8 )
      {
        v81 = 0;
        do
        {
          *(_QWORD *)&v51[v81] = *(_QWORD *)&v78[v81];
          v81 += 8;
        }
        while ( v81 != 8LL * v49 );
        if ( v78 != (char *)(a2 + 2) )
        {
LABEL_111:
          if ( v78 )
          {
            sub_186B220(v78);
            v49 = *((_DWORD *)a2 + 2);
          }
        }
LABEL_113:
        *a2 = v51;
        *((_DWORD *)a2 + 3) = v76;
LABEL_67:
        v44 = HIDWORD(v116);
        *(_QWORD *)&v51[8 * v49] = v40;
        *((_DWORD *)a2 + 2) = v49 + 1;
        v43 = (unsigned int)v116;
        if ( (unsigned int)v116 >= HIDWORD(v116) )
          goto LABEL_68;
        goto LABEL_55;
      }
      v79 = 0;
      do
      {
        *(__m128i *)&v51[v79] = _mm_loadu_si128((const __m128i *)&v78[v79]);
        v79 += 16;
      }
      while ( v79 != 16LL * (v49 >> 1) );
      if ( (v49 & 1) != 0 )
        *(_QWORD *)&v51[8 * (v49 & 0xFFFFFFFE)] = *(_QWORD *)&v78[8 * (v49 & 0xFFFFFFFE)];
    }
    if ( v78 != (char *)(a2 + 2) )
      goto LABEL_111;
    goto LABEL_113;
  }
  if ( v11 )
  {
    v48 = 100;
    sub_1872CE0("");
    goto LABEL_59;
  }
  v13 = *(_DWORD *)(v3 + 24);
  v14 = *((_DWORD *)v12 + 2);
  if ( v14 < v13 )
  {
    while ( 1 )
    {
      v15 = v14++;
      v16 = *(_QWORD *)(v3 + 8 * v15 + 32);
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
              v82 = 0;
              do
              {
                *(_QWORD *)&v20[v82] = *(_QWORD *)&v74[v82];
                v82 += 8;
              }
              while ( 8LL * v18 != v82 );
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
            v109 = v20;
            sub_186B220(v74);
            v18 = *((_DWORD *)a2 + 2);
            v20 = v109;
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
        v70 = (unsigned int)v116;
        if ( (unsigned int)v116 >= HIDWORD(v116) )
        {
          p_ptr = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v116)));
          v80 = 0;
          v70 = (unsigned int)v116;
          if ( (_DWORD)v116 )
          {
            do
            {
              *(__m128i *)&p_ptr[v80] = _mm_loadu_si128((const __m128i *)&v115[v80]);
              v80 += 2;
            }
            while ( 2LL * (unsigned int)v116 != v80 );
          }
          if ( v115 != &ptr && v115 )
          {
            sub_186B220(v115);
            v70 = (unsigned int)v116;
          }
          v115 = p_ptr;
          HIDWORD(v116) *= 2;
        }
        else
        {
          p_ptr = v115;
        }
        v71 = &p_ptr[2 * v70];
        *((_DWORD *)v71 + 2) = 0;
        v46 = (unsigned int)v116;
        *v71 = v16;
        v47 = v116 + 1;
LABEL_57:
        LODWORD(v116) = v47;
        LODWORD(v10) = v47 - 1;
        v3 = p_ptr[2 * v46];
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
        v87 = (unsigned int)v116;
        if ( (unsigned int)v116 >= HIDWORD(v116) )
        {
          p_ptr = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v116)));
          v90 = 0;
          v87 = (unsigned int)v116;
          if ( (_DWORD)v116 )
          {
            do
            {
              *(__m128i *)&p_ptr[v90] = _mm_loadu_si128((const __m128i *)&v115[v90]);
              v90 += 2;
            }
            while ( v90 != 2LL * (unsigned int)v116 );
          }
          if ( v115 != &ptr && v115 )
          {
            sub_186B220(v115);
            v87 = (unsigned int)v116;
          }
          v115 = p_ptr;
          HIDWORD(v116) *= 2;
        }
        else
        {
          p_ptr = v115;
        }
        v88 = &p_ptr[2 * v87];
        *((_DWORD *)v88 + 2) = 0;
        v46 = (unsigned int)v116;
        *v88 = v16;
        v47 = v116 + 1;
        goto LABEL_57;
      }
      v54 = *(_DWORD **)(*(_QWORD *)(v16 + 16) + 24LL);
      if ( v54 && *v54 != -1 )
        goto LABEL_22;
      v55 = *(_DWORD **)(sub_15D1F10(v16) + 24);
      if ( !v55 || *v55 != 5 )
        goto LABEL_22;
      v56 = *(_QWORD *)(v16 + 16);
      v57 = *a1;
      v58 = *(unsigned int *)(*a1 + 688);
      v59 = *(_DWORD *)(*a1 + 696);
      v108 = 2 * v58;
      if ( 3 * (int)v58 < (unsigned int)(4 * (v59 + *(_DWORD *)(*a1 + 692))) )
      {
        v112 = *a1;
        v91 = (_QWORD *)sub_186B270(8LL * v108);
        v61 = 8LL * v108;
        v60 = v91;
        v57 = v112;
        if ( v108 )
        {
          memset(v91, 0, 8LL * v108);
          v57 = v112;
          v61 = 8LL * v108;
        }
        v92 = *(char **)(v57 + 680);
        v63 = (_QWORD *)((char *)v60 + v61);
        v93 = &v92[8 * *(unsigned int *)(v57 + 688)];
        v62 = v108 - 1;
        if ( v92 != v93 )
        {
          do
          {
            if ( *(_QWORD *)v92 > 1u )
            {
              v94 = 8LL * (*(_DWORD *)(*(_QWORD *)v92 + 12LL) & v62);
              v95 = &v60[(unsigned __int64)v94 / 8];
              if ( v61 == v94 )
              {
LABEL_175:
                if ( v60 == v95 )
                {
LABEL_188:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v96 = v60;
                while ( *v96 )
                {
                  if ( v95 == ++v96 )
                    goto LABEL_188;
                }
              }
              else
              {
                v96 = &v60[(unsigned __int64)v94 / 8];
                while ( *v96 )
                {
                  if ( v63 == ++v96 )
                    goto LABEL_175;
                }
              }
              *v96 = *(_QWORD *)v92;
            }
            v92 += 8;
          }
          while ( v93 != v92 );
          v93 = *(char **)(v57 + 680);
        }
        if ( v93 )
        {
          v114 = (char *)v60 + v61;
          v113 = v61;
          v111 = v57;
          sub_186B220(v93);
          v63 = v114;
          v61 = v113;
          v62 = v108 - 1;
          v57 = v111;
        }
        *(_QWORD *)(v57 + 680) = v60;
        v59 = 0;
        *(_DWORD *)(v57 + 696) = 0;
        *(_DWORD *)(v57 + 688) = v108;
      }
      else
      {
        v60 = *(_QWORD **)(v57 + 680);
        v61 = 8 * v58;
        v62 = v58 - 1;
        v63 = &v60[v58];
      }
      v64 = *(_DWORD *)(v56 + 12);
      v65 = 8LL * (v64 & v62);
      v66 = &v60[(unsigned __int64)v65 / 8];
      if ( v65 == v61 )
      {
        v68 = nullptr;
LABEL_144:
        while ( v66 != v60 )
        {
          v89 = *v60;
          if ( *v60 > 1u )
          {
            if ( *(_DWORD *)(v89 + 12) == v64 && v56 == v89 )
            {
              *v60 = v56;
              v14 = *((_DWORD *)v12 + 2);
              goto LABEL_23;
            }
          }
          else
          {
            if ( !v89 )
            {
              if ( v68 )
                *(_DWORD *)(v57 + 696) = v59 - 1;
              else
                v68 = v60;
              goto LABEL_187;
            }
            v68 = v60;
          }
          ++v60;
        }
        v22 = 405;
        sub_1872CE0("");
LABEL_21:
        sub_1873130(114, v22);
      }
      v67 = &v60[(unsigned __int64)v65 / 8];
      v68 = nullptr;
      while ( 1 )
      {
        v69 = *v67;
        if ( *v67 <= 1u )
          break;
        if ( *(_DWORD *)(v69 + 12) == v64 && v56 == v69 )
        {
          *v67 = v56;
          v14 = *((_DWORD *)v12 + 2);
          goto LABEL_23;
        }
LABEL_85:
        if ( ++v67 == v63 )
          goto LABEL_144;
      }
      if ( v69 )
        break;
      if ( v68 )
        *(_DWORD *)(v57 + 696) = v59 - 1;
      else
        v68 = v67;
LABEL_187:
      *v68 = v56;
      v14 = *((_DWORD *)v12 + 2);
      ++*(_DWORD *)(v57 + 692);
LABEL_23:
      if ( v14 >= v13 )
      {
        LODWORD(v10) = v116 - 1;
        goto LABEL_25;
      }
    }
    v68 = v67;
    goto LABEL_85;
  }
LABEL_25:
  LODWORD(v116) = v10;
  if ( *(_WORD *)(v3 + 4) )
    goto LABEL_61;
  if ( *(_DWORD *)(v3 + 24) )
    goto LABEL_61;
  v23 = *(_DWORD **)(*(_QWORD *)(v3 + 16) + 24LL);
  if ( v23 )
  {
    if ( *v23 != -1 )
      goto LABEL_61;
  }
  v24 = *(_DWORD **)(sub_15D1F10(v3) + 24);
  if ( v24 && *v24 == 5 )
  {
    v25 = *(_QWORD *)(v3 + 16);
    v26 = *a1;
    v27 = *(unsigned int *)(*a1 + 688);
    v28 = *(_DWORD *)(*a1 + 696);
    v110 = 2 * v27;
    if ( 3 * (int)v27 < (unsigned int)(4 * (v28 + *(_DWORD *)(*a1 + 692))) )
    {
      v107 = 8LL * v110;
      v99 = (_QWORD *)sub_186B270(v107);
      v29 = v99;
      if ( v110 )
        memset(v99, 0, 8LL * v110);
      v100 = *(char **)(v26 + 680);
      v101 = v100;
      v30 = v110 - 1;
      v102 = &v100[8 * *(unsigned int *)(v26 + 688)];
      v31 = &v29[v107 / 8];
      if ( v100 != v102 )
      {
        do
        {
          if ( *(_QWORD *)v101 > 1u )
          {
            v103 = 8LL * (*(_DWORD *)(*(_QWORD *)v101 + 12LL) & v30);
            v104 = &v29[(unsigned __int64)v103 / 8];
            if ( v107 == v103 )
            {
LABEL_204:
              if ( v29 == v104 )
              {
LABEL_219:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v105 = v29;
              while ( *v105 )
              {
                if ( v104 == ++v105 )
                  goto LABEL_219;
              }
            }
            else
            {
              v105 = &v29[(unsigned __int64)v103 / 8];
              while ( *v105 )
              {
                if ( v31 == ++v105 )
                  goto LABEL_204;
              }
            }
            *v105 = *(_QWORD *)v101;
          }
          v101 += 8;
        }
        while ( v102 != v101 );
        v100 = *(char **)(v26 + 680);
      }
      if ( v100 )
        sub_186B220(v100);
      *(_QWORD *)(v26 + 680) = v29;
      v28 = 0;
      *(_DWORD *)(v26 + 696) = 0;
      *(_DWORD *)(v26 + 688) = v110;
    }
    else
    {
      v29 = *(_QWORD **)(v26 + 680);
      v107 = 8 * v27;
      v30 = v27 - 1;
      v31 = &v29[v27];
    }
    v32 = *(_DWORD *)(v25 + 12);
    v33 = 8LL * (v32 & v30);
    v34 = &v29[(unsigned __int64)v33 / 8];
    if ( v33 != v107 )
    {
      v10 = (unsigned __int64)&v29[(unsigned __int64)v33 / 8];
      v35 = nullptr;
      while ( 1 )
      {
        v36 = *(_QWORD *)v10;
        if ( *(_QWORD *)v10 > 1u )
        {
          if ( *(_DWORD *)(v36 + 12) == v32 && v25 == v36 )
          {
            *(_QWORD *)v10 = v25;
            p_ptr = v115;
            LODWORD(v10) = v116;
            goto LABEL_43;
          }
        }
        else
        {
          if ( !v36 )
          {
            if ( v35 )
              goto LABEL_215;
            v35 = (_QWORD *)v10;
            goto LABEL_216;
          }
          v35 = (_QWORD *)v10;
        }
        v10 += 8LL;
        if ( (_QWORD *)v10 == v31 )
          goto LABEL_168;
      }
    }
    v35 = nullptr;
LABEL_168:
    while ( v34 != v29 )
    {
      v97 = *v29;
      if ( *v29 > 1u )
      {
        if ( *(_DWORD *)(v97 + 12) == v32 && v25 == v97 )
        {
          LODWORD(v10) = v116;
          p_ptr = v115;
          *v29 = v25;
          goto LABEL_43;
        }
      }
      else
      {
        if ( !v97 )
        {
          if ( v35 )
LABEL_215:
            *(_DWORD *)(v26 + 696) = v28 - 1;
          else
            v35 = v29;
LABEL_216:
          *v35 = v25;
          LODWORD(v10) = v116;
          ++*(_DWORD *)(v26 + 692);
          p_ptr = v115;
LABEL_43:
          if ( !(_DWORD)v10 )
            goto LABEL_62;
LABEL_44:
          v10 = (unsigned int)(v10 - 1);
          v3 = p_ptr[2 * v10];
          goto LABEL_8;
        }
        v35 = v29;
      }
      ++v29;
    }
    v48 = 405;
    sub_1872CE0("");
LABEL_59:
    sub_1873130(114, v48);
  }
  LODWORD(v10) = v116;
LABEL_61:
  p_ptr = v115;
  if ( (_DWORD)v10 )
    goto LABEL_44;
LABEL_62:
  result = (__int64)&ptr;
  if ( p_ptr != &ptr )
  {
    if ( p_ptr )
      return sub_186B220(p_ptr);
  }
  return result;
}

