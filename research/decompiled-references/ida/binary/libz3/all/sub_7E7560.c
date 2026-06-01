__int64 __fastcall sub_7E7560(__int64 *a1, char **a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 result; // rax
  unsigned int v6; // edx
  unsigned int v7; // ebx
  char *v8; // r12
  __int64 *p_ptr; // r14
  unsigned __int64 v10; // rax
  __int16 v11; // dx
  __int64 *v12; // rbx
  unsigned int v13; // ecx
  unsigned int v14; // edx
  __int64 v15; // rax
  __int64 v16; // r12
  char v17; // al
  unsigned int v18; // edx
  unsigned int v19; // r14d
  char *v20; // r15
  __int16 v21; // ax
  __int64 v22; // rsi
  _DWORD *v23; // rdx
  __int64 v24; // r14
  __int64 v25; // rax
  int v26; // r8d
  unsigned int v27; // r9d
  _QWORD *v28; // rbx
  size_t v29; // r15
  unsigned int v30; // r10d
  __int64 v31; // r12
  int v32; // ecx
  __int64 v33; // r10
  _QWORD *v34; // rdi
  _QWORD *v35; // rsi
  __int64 v36; // rdx
  _DWORD *v37; // rax
  __int64 v38; // rsi
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
  unsigned int v49; // edx
  unsigned int v50; // ebx
  char *v51; // rbp
  __int64 v52; // rbx
  __int64 *v53; // rdi
  __int64 v54; // rax
  __int64 v55; // r9
  __int64 v56; // r8
  int v57; // esi
  _QWORD *v58; // r14
  unsigned int v59; // r10d
  __int64 v60; // r8
  _QWORD *v61; // r15
  int v62; // edi
  __int64 v63; // rax
  _QWORD *v64; // r10
  _QWORD *v65; // rax
  _QWORD *v66; // r8
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // r14
  __int64 v70; // rax
  char *v71; // rdi
  __int64 v72; // rax
  __int64 v73; // rbx
  __int64 v74; // rax
  char *v75; // rdi
  __int64 v76; // rax
  __int64 v77; // rax
  _QWORD *v78; // rax
  _QWORD *v79; // rax
  _QWORD *v80; // r11
  __int64 v81; // rdx
  _QWORD *v82; // rsi
  _QWORD *v83; // rdx
  __int64 v84; // rax
  _QWORD *v85; // rdx
  __int64 v86; // rax
  __int64 v87; // rbx
  __int64 v88; // rax
  char *v89; // rdi
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 *v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // r12
  _QWORD *v96; // rax
  int v97; // r9d
  _QWORD *v98; // rax
  _QWORD *v99; // rcx
  __int64 v100; // rdx
  _QWORD *v101; // rsi
  _QWORD *v102; // rdx
  __int64 v103; // rax
  unsigned int v104; // [rsp+0h] [rbp-198h]
  unsigned int v105; // [rsp+0h] [rbp-198h]
  int v106; // [rsp+0h] [rbp-198h]
  unsigned int v107; // [rsp+0h] [rbp-198h]
  unsigned int v109; // [rsp+20h] [rbp-178h]
  int v110; // [rsp+20h] [rbp-178h]
  unsigned int v111; // [rsp+28h] [rbp-170h]
  __int64 v112; // [rsp+28h] [rbp-170h]
  __int64 v113; // [rsp+30h] [rbp-168h]
  __int64 v114; // [rsp+38h] [rbp-160h]
  __int64 *v115; // [rsp+50h] [rbp-148h]
  __int64 v116; // [rsp+58h] [rbp-140h]
  __int64 ptr; // [rsp+60h] [rbp-138h] BYREF
  int v118; // [rsp+68h] [rbp-130h]

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
      v87 = 2 * v7;
      v88 = sub_186B270(8 * v87);
      v6 = *((_DWORD *)a2 + 2);
      v89 = *a2;
      v8 = (char *)v88;
      if ( v6 )
      {
        if ( v6 - 1 <= 2 || (char *)v88 == v89 + 8 )
        {
          v103 = 0;
          do
          {
            *(_QWORD *)&v8[v103] = *(_QWORD *)&v89[v103];
            v103 += 8;
          }
          while ( v103 != 8LL * v6 );
        }
        else
        {
          v90 = 0;
          do
          {
            *(__m128i *)&v8[v90] = _mm_loadu_si128((const __m128i *)&v89[v90]);
            v90 += 16;
          }
          while ( 16LL * (v6 >> 1) != v90 );
          if ( (v6 & 1) != 0 )
            *(_QWORD *)&v8[8 * (v6 & 0xFFFFFFFE)] = *(_QWORD *)&v89[8 * (v6 & 0xFFFFFFFE)];
        }
      }
      if ( v89 != (char *)(a2 + 2) && v89 )
      {
        sub_186B220(v89);
        v6 = *((_DWORD *)a2 + 2);
      }
      *a2 = v8;
      *((_DWORD *)a2 + 3) = v87;
    }
    else
    {
      v8 = *a2;
    }
    *(_QWORD *)&v8[8 * v6] = v4;
    *((_DWORD *)a2 + 2) = v6 + 1;
  }
  p_ptr = &ptr;
  ptr = v4;
  v115 = &ptr;
  v118 = 0;
  v116 = 0x1000000001LL;
  LODWORD(v10) = 0;
LABEL_8:
  v11 = *(_WORD *)(v4 + 4);
  v12 = &p_ptr[2 * (unsigned int)v10];
  if ( v11 == 1 )
    goto LABEL_39;
  if ( v11 == 2 )
  {
    v39 = *(_DWORD *)(v4 + 72);
    v40 = *((_DWORD *)v12 + 2);
    v41 = v39 + *(_DWORD *)(v4 + 76) + 1;
    if ( v40 >= v41 )
    {
LABEL_38:
      LODWORD(v10) = v116 - 1;
LABEL_39:
      LODWORD(v116) = v10;
      goto LABEL_40;
    }
    if ( v40 )
      goto LABEL_58;
    v16 = *(_QWORD *)(v4 + 24);
    v40 = 1;
    *((_DWORD *)v12 + 2) = 1;
    if ( *(_DWORD *)(v16 + 8) <= 1u )
    {
LABEL_61:
      v44 = (unsigned int)v116;
      v45 = HIDWORD(v116);
      if ( (unsigned int)v116 >= HIDWORD(v116) )
        goto LABEL_68;
      goto LABEL_62;
    }
    while ( 1 )
    {
      v42 = *(_BYTE *)(v16 + 6);
      if ( (v42 & 1) == 0 )
        break;
      if ( v40 >= v41 )
        goto LABEL_38;
      v39 = *(_DWORD *)(v4 + 72);
LABEL_58:
      v43 = v40 - 1;
      if ( v39 < v40 )
        v43 = (unsigned int)v43 - v39;
      ++v40;
      v16 = *(_QWORD *)(16LL * *(unsigned int *)(v4 + 20) + v4 + 8 * v43 + 80);
      *((_DWORD *)v12 + 2) = v40;
      if ( *(_DWORD *)(v16 + 8) <= 1u )
        goto LABEL_61;
    }
    *(_BYTE *)(v16 + 6) = v42 | 1;
    v49 = *((_DWORD *)a2 + 2);
    v50 = *((_DWORD *)a2 + 3);
    if ( v49 < v50 )
    {
      v51 = *a2;
      goto LABEL_67;
    }
    v73 = 2 * v50;
    v74 = sub_186B270(8 * v73);
    v49 = *((_DWORD *)a2 + 2);
    v75 = *a2;
    v51 = (char *)v74;
    if ( v49 )
    {
      if ( v49 - 1 <= 2 || (char *)v74 == v75 + 8 )
      {
        v84 = 0;
        do
        {
          *(_QWORD *)&v51[v84] = *(_QWORD *)&v75[v84];
          v84 += 8;
        }
        while ( v84 != 8LL * v49 );
        if ( v75 != (char *)(a2 + 2) )
        {
LABEL_107:
          if ( v75 )
          {
            sub_186B220(v75);
            v49 = *((_DWORD *)a2 + 2);
          }
        }
LABEL_109:
        *a2 = v51;
        *((_DWORD *)a2 + 3) = v73;
LABEL_67:
        v45 = HIDWORD(v116);
        *(_QWORD *)&v51[8 * v49] = v16;
        *((_DWORD *)a2 + 2) = v49 + 1;
        v44 = (unsigned int)v116;
        if ( (unsigned int)v116 >= HIDWORD(v116) )
        {
LABEL_68:
          v52 = (unsigned int)(2 * v45);
          p_ptr = (__int64 *)sub_186B270(16 * v52);
          v53 = v115;
          v54 = 0;
          v44 = (unsigned int)v116;
          if ( (_DWORD)v116 )
          {
            do
            {
              *(__m128i *)&p_ptr[v54] = _mm_loadu_si128((const __m128i *)&v115[v54]);
              v54 += 2;
            }
            while ( v54 != 2LL * (unsigned int)v116 );
          }
          goto LABEL_70;
        }
LABEL_62:
        p_ptr = v115;
        goto LABEL_63;
      }
      v76 = 0;
      do
      {
        *(__m128i *)&v51[v76] = _mm_loadu_si128((const __m128i *)&v75[v76]);
        v76 += 16;
      }
      while ( v76 != 16LL * (v49 >> 1) );
      if ( (v49 & 1) != 0 )
        *(_QWORD *)&v51[8 * (v49 & 0xFFFFFFFE)] = *(_QWORD *)&v75[8 * (v49 & 0xFFFFFFFE)];
    }
    if ( v75 != (char *)(a2 + 2) )
      goto LABEL_107;
    goto LABEL_109;
  }
  if ( v11 )
  {
    v38 = 100;
    sub_1872CE0("");
    goto LABEL_47;
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
          goto LABEL_22;
        *(_BYTE *)(v16 + 6) = v17 | 1;
        v18 = *((_DWORD *)a2 + 2);
        v19 = *((_DWORD *)a2 + 3);
        if ( v18 >= v19 )
        {
          v105 = v13;
          v69 = 2 * v19;
          v70 = sub_186B270(8 * v69);
          v18 = *((_DWORD *)a2 + 2);
          v71 = *a2;
          v20 = (char *)v70;
          v13 = v105;
          if ( v18 )
          {
            if ( v18 - 1 <= 2 || (char *)v70 == v71 + 8 )
            {
              v86 = 0;
              do
              {
                *(_QWORD *)&v20[v86] = *(_QWORD *)&v71[v86];
                v86 += 8;
              }
              while ( 8LL * v18 != v86 );
            }
            else
            {
              v72 = 0;
              do
              {
                *(__m128i *)&v20[v72] = _mm_loadu_si128((const __m128i *)&v71[v72]);
                v72 += 16;
              }
              while ( 16LL * (v18 >> 1) != v72 );
              if ( (v18 & 1) != 0 )
                *(_QWORD *)&v20[8 * (v18 & 0xFFFFFFFE)] = *(_QWORD *)&v71[8 * (v18 & 0xFFFFFFFE)];
            }
          }
          if ( v71 != (char *)(a2 + 2) && v71 )
          {
            sub_186B220(v71);
            v18 = *((_DWORD *)a2 + 2);
            v13 = v105;
          }
          *a2 = v20;
          *((_DWORD *)a2 + 3) = v69;
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
LABEL_45:
        v14 = *((_DWORD *)v12 + 2);
        goto LABEL_22;
      }
      if ( v21 == 2 )
      {
        v44 = (unsigned int)v116;
        if ( (unsigned int)v116 < HIDWORD(v116) )
          goto LABEL_62;
        v52 = (unsigned int)(2 * HIDWORD(v116));
        p_ptr = (__int64 *)sub_186B270(16 * v52);
        v53 = v115;
        v68 = 0;
        v44 = (unsigned int)v116;
        if ( (_DWORD)v116 )
        {
          do
          {
            *(__m128i *)&p_ptr[v68] = _mm_loadu_si128((const __m128i *)&v115[v68]);
            v68 += 2;
          }
          while ( 2LL * (unsigned int)v116 != v68 );
        }
LABEL_70:
        if ( v53 != &ptr && v53 )
        {
          sub_186B220(v53);
          v44 = (unsigned int)v116;
        }
        v115 = p_ptr;
        HIDWORD(v116) = v52;
LABEL_63:
        v46 = &p_ptr[2 * v44];
        *v46 = v16;
        *((_DWORD *)v46 + 2) = 0;
        v47 = (unsigned int)v116;
        v48 = v116 + 1;
LABEL_64:
        LODWORD(v116) = v48;
        LODWORD(v10) = v48 - 1;
        v4 = p_ptr[2 * v47];
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
        v91 = (unsigned int)v116;
        if ( (unsigned int)v116 >= HIDWORD(v116) )
        {
          p_ptr = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v116)));
          v94 = 0;
          v91 = (unsigned int)v116;
          if ( (_DWORD)v116 )
          {
            do
            {
              *(__m128i *)&p_ptr[v94] = _mm_loadu_si128((const __m128i *)&v115[v94]);
              v94 += 2;
            }
            while ( v94 != 2LL * (unsigned int)v116 );
          }
          if ( v115 != &ptr && v115 )
          {
            sub_186B220(v115);
            v91 = (unsigned int)v116;
          }
          v115 = p_ptr;
          HIDWORD(v116) *= 2;
        }
        else
        {
          p_ptr = v115;
        }
        v92 = &p_ptr[2 * v91];
        *((_DWORD *)v92 + 2) = 0;
        v47 = (unsigned int)v116;
        *v92 = v16;
        v48 = v116 + 1;
        goto LABEL_64;
      }
      v37 = *(_DWORD **)(*(_QWORD *)(v16 + 16) + 24LL);
      if ( v37 && *v37 != -1 )
        goto LABEL_45;
      v55 = *a1;
      v56 = *(unsigned int *)(*a1 + 8);
      v57 = *(_DWORD *)(*a1 + 16);
      v104 = 2 * v56;
      if ( 3 * (int)v56 < (unsigned int)(4 * (v57 + *(_DWORD *)(*a1 + 12))) )
      {
        v113 = *a1;
        v111 = v13;
        v78 = (_QWORD *)sub_186B270(8LL * v104);
        v60 = 8LL * v104;
        v58 = v78;
        v55 = v113;
        v13 = v111;
        if ( v104 )
        {
          memset(v78, 0, 8LL * v104);
          v13 = v111;
          v55 = v113;
          v60 = 8LL * v104;
        }
        v79 = *(_QWORD **)v55;
        v61 = (_QWORD *)((char *)v58 + v60);
        v80 = (_QWORD *)(*(_QWORD *)v55 + 8LL * *(unsigned int *)(v55 + 8));
        v59 = v104 - 1;
        if ( *(_QWORD **)v55 != v80 )
        {
          do
          {
            while ( *v79 <= 1u )
            {
              if ( v80 == ++v79 )
                goto LABEL_130;
            }
            v81 = 8LL * (*(_DWORD *)(*v79 + 12LL) & v59);
            v82 = &v58[(unsigned __int64)v81 / 8];
            if ( v60 == v81 )
            {
LABEL_138:
              if ( v58 == v82 )
              {
LABEL_160:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v85 = v58;
              while ( *v85 )
              {
                if ( v82 == ++v85 )
                  goto LABEL_160;
              }
              *v85 = *v79;
            }
            else
            {
              v83 = &v58[(unsigned __int64)v81 / 8];
              while ( *v83 )
              {
                if ( v61 == ++v83 )
                  goto LABEL_138;
              }
              *v83 = *v79;
            }
            ++v79;
          }
          while ( v80 != v79 );
LABEL_130:
          v80 = *(_QWORD **)v55;
        }
        if ( v80 )
        {
          v114 = v60;
          v112 = v55;
          v109 = v13;
          sub_186B220(v80);
          v60 = v114;
          v59 = v104 - 1;
          v55 = v112;
          v13 = v109;
        }
        *(_QWORD *)v55 = v58;
        v57 = 0;
        *(_DWORD *)(v55 + 16) = 0;
        *(_DWORD *)(v55 + 8) = v104;
      }
      else
      {
        v58 = *(_QWORD **)v55;
        v59 = v56 - 1;
        v60 = 8 * v56;
        v61 = (_QWORD *)(*(_QWORD *)v55 + v60);
      }
      v62 = *(_DWORD *)(v16 + 12);
      v63 = 8LL * (v62 & v59);
      v64 = &v58[(unsigned __int64)v63 / 8];
      if ( v63 != v60 )
      {
        v65 = &v58[(unsigned __int64)v63 / 8];
        v66 = nullptr;
        while ( 1 )
        {
          v67 = *v65;
          if ( *v65 > 1u )
          {
            if ( *(_DWORD *)(v67 + 12) == v62 && v16 == v67 )
            {
              *v65 = v16;
              goto LABEL_45;
            }
          }
          else
          {
            if ( !v67 )
            {
              if ( v66 )
                goto LABEL_147;
              v66 = v65;
              goto LABEL_148;
            }
            v66 = v65;
          }
          if ( ++v65 == v61 )
            goto LABEL_113;
        }
      }
      v66 = nullptr;
      while ( 1 )
      {
LABEL_113:
        if ( v64 == v58 )
        {
          v22 = 405;
          sub_1872CE0("");
LABEL_21:
          sub_1873130(114, v22);
        }
        v77 = *v58;
        if ( *v58 <= 1u )
          break;
        if ( *(_DWORD *)(v77 + 12) == v62 && v16 == v77 )
        {
          *v58 = v16;
          v14 = *((_DWORD *)v12 + 2);
          goto LABEL_22;
        }
LABEL_112:
        ++v58;
      }
      if ( v77 )
        break;
      if ( v66 )
LABEL_147:
        *(_DWORD *)(v55 + 16) = v57 - 1;
      else
        v66 = v58;
LABEL_148:
      *v66 = v16;
      v14 = *((_DWORD *)v12 + 2);
      ++*(_DWORD *)(v55 + 12);
LABEL_22:
      if ( v14 >= v13 )
      {
        LODWORD(v10) = v116 - 1;
        goto LABEL_24;
      }
    }
    v66 = v58;
    goto LABEL_112;
  }
LABEL_24:
  LODWORD(v116) = v10;
  if ( !*(_WORD *)(v4 + 4) && !*(_DWORD *)(v4 + 24) )
  {
    v23 = *(_DWORD **)(*(_QWORD *)(v4 + 16) + 24LL);
    if ( !v23 || *v23 == -1 )
    {
      v24 = *a1;
      v25 = *(unsigned int *)(*a1 + 8);
      v26 = *(_DWORD *)(*a1 + 16);
      v27 = 2 * v25;
      if ( 3 * (int)v25 < (unsigned int)(4 * (v26 + *(_DWORD *)(*a1 + 12))) )
      {
        v95 = v27;
        v106 = 2 * v25;
        v29 = 8LL * v27;
        v96 = (_QWORD *)sub_186B270(v29);
        v97 = v106;
        v28 = v96;
        if ( v106 )
        {
          memset(v96, 0, 8 * v95);
          v97 = v106;
        }
        v98 = *(_QWORD **)v24;
        v30 = v97 - 1;
        v31 = (__int64)&v28[v29 / 8];
        v99 = (_QWORD *)(*(_QWORD *)v24 + 8LL * *(unsigned int *)(v24 + 8));
        if ( *(_QWORD **)v24 != v99 )
        {
          do
          {
            if ( *v98 > 1u )
            {
              v100 = 8LL * (*(_DWORD *)(*v98 + 12LL) & v30);
              v101 = &v28[(unsigned __int64)v100 / 8];
              if ( v29 == v100 )
              {
LABEL_194:
                if ( v28 == v101 )
                {
LABEL_210:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v102 = v28;
                while ( *v102 )
                {
                  if ( v101 == ++v102 )
                    goto LABEL_210;
                }
              }
              else
              {
                v102 = &v28[(unsigned __int64)v100 / 8];
                while ( *v102 )
                {
                  if ( (_QWORD *)v31 == ++v102 )
                    goto LABEL_194;
                }
              }
              *v102 = *v98;
            }
            ++v98;
          }
          while ( v99 != v98 );
          v99 = *(_QWORD **)v24;
        }
        if ( v99 )
        {
          v110 = v97;
          v107 = v97 - 1;
          sub_186B220(v99);
          v97 = v110;
          v30 = v107;
        }
        *(_QWORD *)v24 = v28;
        v26 = 0;
        *(_DWORD *)(v24 + 8) = v97;
        *(_DWORD *)(v24 + 16) = 0;
      }
      else
      {
        v28 = *(_QWORD **)v24;
        v29 = 8 * v25;
        v30 = v25 - 1;
        v31 = *(_QWORD *)v24 + 8 * v25;
      }
      v32 = *(_DWORD *)(v4 + 12);
      v33 = v32 & v30;
      v34 = &v28[v33];
      if ( 8 * v33 != v29 )
      {
        v10 = (unsigned __int64)&v28[v33];
        v35 = nullptr;
        while ( 1 )
        {
          v36 = *(_QWORD *)v10;
          if ( *(_QWORD *)v10 > 1u )
          {
            if ( *(_DWORD *)(v36 + 12) == v32 && v36 == v4 )
            {
              *(_QWORD *)v10 = v4;
              p_ptr = v115;
              LODWORD(v10) = v116;
              goto LABEL_40;
            }
          }
          else
          {
            if ( !v36 )
            {
              if ( v35 )
                goto LABEL_208;
              v35 = (_QWORD *)v10;
              goto LABEL_209;
            }
            v35 = (_QWORD *)v10;
          }
          v10 += 8LL;
          if ( v10 == v31 )
            goto LABEL_170;
        }
      }
      v35 = nullptr;
LABEL_170:
      while ( v34 != v28 )
      {
        v93 = *v28;
        if ( *v28 > 1u )
        {
          if ( *(_DWORD *)(v93 + 12) == v32 && v93 == v4 )
          {
            LODWORD(v10) = v116;
            p_ptr = v115;
            *v28 = v4;
            goto LABEL_40;
          }
        }
        else
        {
          if ( !v93 )
          {
            if ( v35 )
LABEL_208:
              *(_DWORD *)(v24 + 16) = v26 - 1;
            else
              v35 = v28;
LABEL_209:
            *v35 = v4;
            LODWORD(v10) = v116;
            ++*(_DWORD *)(v24 + 12);
            p_ptr = v115;
LABEL_40:
            if ( !(_DWORD)v10 )
              goto LABEL_49;
LABEL_41:
            v10 = (unsigned int)(v10 - 1);
            v4 = p_ptr[2 * v10];
            goto LABEL_8;
          }
          v35 = v28;
        }
        ++v28;
      }
      v38 = 405;
      sub_1872CE0("");
LABEL_47:
      sub_1873130(114, v38);
    }
  }
  p_ptr = v115;
  if ( (_DWORD)v10 )
    goto LABEL_41;
LABEL_49:
  result = (__int64)&ptr;
  if ( p_ptr != &ptr )
  {
    if ( p_ptr )
      return sub_186B220(p_ptr);
  }
  return result;
}

