__int64 __fastcall sub_430240(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v5; // rbx
  __int64 result; // rax
  unsigned int v7; // edx
  unsigned int v8; // ebp
  _QWORD *v9; // r12
  __int64 *p_ptr; // r12
  __int64 v11; // rax
  __int16 v12; // dx
  __int64 *v13; // r15
  unsigned int v14; // ebp
  unsigned int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rsi
  char v18; // al
  unsigned int v19; // edx
  unsigned int v20; // r12d
  __int64 v21; // rcx
  __int16 v22; // ax
  __int64 *v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rax
  _QWORD *v26; // rbp
  void *v27; // rdi
  int v28; // edx
  unsigned int v29; // edi
  unsigned int v30; // eax
  unsigned int v31; // esi
  __int64 v32; // rcx
  char v33; // dl
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 *v36; // rdx
  __int64 v37; // rdx
  int v38; // eax
  unsigned int v39; // edx
  unsigned int v40; // ebp
  _QWORD *v41; // r12
  __int64 v42; // rdx
  __int64 *v43; // rdx
  __int64 v44; // r12
  __int64 v45; // rax
  _QWORD *v46; // rdi
  __int64 v47; // rax
  __int64 *v48; // rcx
  __int64 v49; // rsi
  __int64 v50; // rax
  _QWORD *v51; // rsi
  void *v52; // rdi
  int v53; // edx
  __int64 v54; // rbp
  unsigned __int64 v55; // rax
  char *v56; // rdi
  __int64 v57; // rsi
  __int64 v58; // rbp
  __int64 v59; // rax
  _QWORD *v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rbp
  unsigned __int64 v63; // rax
  char *v64; // rdi
  __int64 v65; // rcx
  size_t v66; // rdi
  __int64 v67; // rax
  _DWORD *v68; // r11
  __int64 v69; // r8
  int *v70; // r12
  __int64 v71; // rax
  __int64 v72; // rdx
  int *v73; // rdi
  int *m; // rax
  int v75; // esi
  char v76; // r9
  __int64 v77; // rsi
  char v78; // r9
  __int64 v79; // rsi
  __int64 v80; // rax
  int *v81; // rbp
  int *v82; // rbx
  void *v83; // r13
  int *v84; // rsi
  void *v85; // rbp
  __int64 j; // rax
  __int64 k; // rax
  __int64 v88; // rbp
  __int64 v89; // rax
  _QWORD *v90; // rdi
  __int64 v91; // rax
  unsigned int v92; // edx
  __int64 v93; // rax
  int *v94; // r12
  _DWORD *v95; // rsi
  __int64 v96; // r10
  __int64 v97; // rax
  __int64 v98; // rdx
  int *v99; // rdi
  int *n; // rax
  int v101; // ecx
  char v102; // r8
  __int64 v103; // rcx
  char v104; // r8
  __int64 v105; // rcx
  __int64 v106; // rax
  int *v107; // rbp
  int *v108; // rbx
  void *v109; // r12
  int *v110; // rsi
  _QWORD *v111; // rax
  __int64 v112; // rdx
  __int64 *v113; // rax
  __int64 v114; // rbp
  unsigned __int64 v115; // rax
  char *v116; // rdi
  __int64 v117; // rcx
  __int64 i; // rax
  _QWORD *v119; // rax
  char **v120; // r12
  char **exception; // rbp
  void *v122; // [rsp+8h] [rbp-1E0h]
  __int64 v123; // [rsp+8h] [rbp-1E0h]
  __int64 v124; // [rsp+8h] [rbp-1E0h]
  unsigned int v125; // [rsp+8h] [rbp-1E0h]
  __int64 *v126; // [rsp+8h] [rbp-1E0h]
  unsigned int v127; // [rsp+8h] [rbp-1E0h]
  __int64 *v128; // [rsp+8h] [rbp-1E0h]
  __int64 v129; // [rsp+20h] [rbp-1C8h]
  __int64 *v130; // [rsp+20h] [rbp-1C8h]
  unsigned int v131; // [rsp+20h] [rbp-1C8h]
  __int64 *v132; // [rsp+20h] [rbp-1C8h]
  __int64 *v133; // [rsp+28h] [rbp-1C0h]
  _DWORD *v134; // [rsp+28h] [rbp-1C0h]
  __int64 *v135; // [rsp+28h] [rbp-1C0h]
  _DWORD *v136; // [rsp+28h] [rbp-1C0h]
  __int64 v137; // [rsp+28h] [rbp-1C0h]
  _DWORD *v138; // [rsp+30h] [rbp-1B8h]
  __int64 v139; // [rsp+30h] [rbp-1B8h]
  __int64 v140; // [rsp+30h] [rbp-1B8h]
  __int64 v141; // [rsp+38h] [rbp-1B0h]
  __int64 v142; // [rsp+38h] [rbp-1B0h]
  __int64 v143; // [rsp+40h] [rbp-1A8h]
  __int64 v144; // [rsp+48h] [rbp-1A0h]
  __int64 v145; // [rsp+60h] [rbp-188h] BYREF
  __int64 v146; // [rsp+68h] [rbp-180h]
  __int64 v147; // [rsp+70h] [rbp-178h] BYREF
  __int64 v148; // [rsp+78h] [rbp-170h]
  __int64 v149[4]; // [rsp+80h] [rbp-168h] BYREF
  void *v150; // [rsp+A0h] [rbp-148h]
  __int64 v151; // [rsp+A8h] [rbp-140h]
  __int64 ptr; // [rsp+B0h] [rbp-138h] BYREF
  int v153; // [rsp+B8h] [rbp-130h]

  v3 = a3;
  v5 = a2;
  if ( *(_DWORD *)(a3 + 8) > 1u )
  {
    result = *(unsigned __int8 *)(a3 + 6);
    if ( (result & 1) != 0 )
      return result;
    *(_BYTE *)(a3 + 6) = result | 1;
    v7 = *(_DWORD *)(a2 + 8);
    v8 = *(_DWORD *)(a2 + 12);
    if ( v7 >= v8 )
    {
      v88 = 2 * v8;
      v89 = sub_186B270(8 * v88);
      v7 = *(_DWORD *)(a2 + 8);
      v90 = *(_QWORD **)a2;
      v9 = (_QWORD *)v89;
      if ( v7 )
      {
        if ( v7 - 1 <= 2 || (_QWORD *)v89 == v90 + 1 )
        {
          for ( i = 0; i != v7; ++i )
            v9[i] = v90[i];
        }
        else
        {
          v91 = 0;
          do
          {
            *(__m128i *)&v9[v91] = _mm_loadu_si128((const __m128i *)&v90[v91]);
            v91 += 2;
          }
          while ( v91 != 2LL * (v7 >> 1) );
          if ( (v7 & 1) != 0 )
            v9[v7 & 0xFFFFFFFE] = v90[v7 & 0xFFFFFFFE];
        }
      }
      if ( v90 != (_QWORD *)(a2 + 16) && v90 )
      {
        sub_186B220(v90);
        v7 = *(_DWORD *)(a2 + 8);
      }
      *(_QWORD *)a2 = v9;
      *(_DWORD *)(a2 + 12) = v88;
    }
    else
    {
      v9 = *(_QWORD **)a2;
    }
    v9[v7] = v3;
    *(_DWORD *)(a2 + 8) = v7 + 1;
  }
  p_ptr = &ptr;
  ptr = v3;
  v150 = &ptr;
  v153 = 0;
  v151 = 0x1000000001LL;
  LODWORD(v11) = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = *(_WORD *)(v3 + 4);
      v13 = &p_ptr[2 * (unsigned int)v11];
      if ( v12 == 1 )
        goto LABEL_34;
      if ( v12 != 2 )
        break;
      v29 = *(_DWORD *)(v3 + 72);
      v30 = *((_DWORD *)v13 + 2);
      v31 = v29 + *(_DWORD *)(v3 + 76) + 1;
      if ( v30 >= v31 )
        goto LABEL_33;
      if ( v30 )
      {
        while ( 2 )
        {
          v34 = v30 - 1;
          if ( v29 < v30 )
            v34 = (unsigned int)v34 - v29;
          ++v30;
          v32 = *(_QWORD *)(16LL * *(unsigned int *)(v3 + 20) + v3 + 8 * v34 + 80);
          *((_DWORD *)v13 + 2) = v30;
          if ( *(_DWORD *)(v32 + 8) <= 1u )
            goto LABEL_46;
LABEL_40:
          v33 = *(_BYTE *)(v32 + 6);
          if ( (v33 & 1) != 0 )
          {
            if ( v30 >= v31 )
            {
LABEL_33:
              LODWORD(v11) = v151 - 1;
LABEL_34:
              LODWORD(v151) = v11;
              goto LABEL_35;
            }
            v29 = *(_DWORD *)(v3 + 72);
            continue;
          }
          break;
        }
        *(_BYTE *)(v32 + 6) = v33 | 1;
        v39 = *(_DWORD *)(v5 + 8);
        v40 = *(_DWORD *)(v5 + 12);
        if ( v39 < v40 )
        {
          v41 = *(_QWORD **)v5;
LABEL_56:
          v41[v39] = v32;
          *(_DWORD *)(v5 + 8) = v39 + 1;
          goto LABEL_46;
        }
        v124 = v32;
        v58 = 2 * v40;
        v59 = sub_186B270(8 * v58);
        v39 = *(_DWORD *)(v5 + 8);
        v60 = *(_QWORD **)v5;
        v41 = (_QWORD *)v59;
        v32 = v124;
        if ( v39 )
        {
          if ( v39 - 1 > 2 && (_QWORD *)v59 != v60 + 1 )
          {
            v61 = 0;
            do
            {
              *(__m128i *)&v41[v61] = _mm_loadu_si128((const __m128i *)&v60[v61]);
              v61 += 2;
            }
            while ( 2LL * (v39 >> 1) != v61 );
            if ( (v39 & 1) != 0 )
              v41[v39 & 0xFFFFFFFE] = v60[v39 & 0xFFFFFFFE];
            goto LABEL_95;
          }
          for ( j = 0; j != v39; ++j )
            v41[j] = v60[j];
          if ( v60 == (_QWORD *)(v5 + 16) )
          {
LABEL_98:
            *(_QWORD *)v5 = v41;
            *(_DWORD *)(v5 + 12) = v58;
            goto LABEL_56;
          }
        }
        else
        {
LABEL_95:
          if ( v60 == (_QWORD *)(v5 + 16) )
            goto LABEL_98;
        }
        if ( v60 )
        {
          sub_186B220(v60);
          v39 = *(_DWORD *)(v5 + 8);
          v32 = v124;
        }
        goto LABEL_98;
      }
      v32 = *(_QWORD *)(v3 + 24);
      v30 = 1;
      *((_DWORD *)v13 + 2) = 1;
      if ( *(_DWORD *)(v32 + 8) > 1u )
        goto LABEL_40;
LABEL_46:
      v35 = (unsigned int)v151;
      if ( (unsigned int)v151 >= HIDWORD(v151) )
      {
        v123 = v32;
        v54 = (unsigned int)(2 * HIDWORD(v151));
        p_ptr = (__int64 *)sub_186B270(16 * v54);
        v55 = 0;
        v56 = (char *)v150;
        v32 = v123;
        v35 = (unsigned int)v151;
        v57 = 16LL * (unsigned int)v151;
        if ( (_DWORD)v151 )
        {
          do
          {
            *(__m128i *)&p_ptr[v55 / 8] = _mm_loadu_si128((const __m128i *)&v56[v55]);
            v55 += 16LL;
          }
          while ( v57 != v55 );
        }
        if ( v56 != (char *)&ptr && v56 )
        {
          sub_186B220(v56);
          v35 = (unsigned int)v151;
          v32 = v123;
        }
        v150 = p_ptr;
        HIDWORD(v151) = v54;
      }
      else
      {
        p_ptr = (__int64 *)v150;
      }
      v36 = &p_ptr[2 * v35];
      *v36 = v32;
      *((_DWORD *)v36 + 2) = 0;
      v37 = (unsigned int)v151;
      v38 = v151 + 1;
LABEL_49:
      LODWORD(v151) = v38;
      LODWORD(v11) = v38 - 1;
      v3 = p_ptr[2 * v37];
    }
    if ( v12 )
    {
      sub_1872CE0("");
      sub_1873130(114, 100);
    }
    v14 = *(_DWORD *)(v3 + 24);
    v15 = *((_DWORD *)v13 + 2);
    if ( v15 < v14 )
    {
      while ( 1 )
      {
        v16 = v15++;
        v17 = *(_QWORD *)(v3 + 8 * v16 + 32);
        *((_DWORD *)v13 + 2) = v15;
        if ( *(_DWORD *)(v17 + 8) > 1u )
        {
          v18 = *(_BYTE *)(v17 + 6);
          if ( (v18 & 1) != 0 )
            goto LABEL_22;
          *(_BYTE *)(v17 + 6) = v18 | 1;
          v19 = *(_DWORD *)(v5 + 8);
          v20 = *(_DWORD *)(v5 + 12);
          if ( v19 >= v20 )
          {
            v44 = 2 * v20;
            v45 = sub_186B270(8 * v44);
            v19 = *(_DWORD *)(v5 + 8);
            v46 = *(_QWORD **)v5;
            v21 = v45;
            if ( v19 )
            {
              if ( v19 - 1 <= 2 || (_QWORD *)v45 == v46 + 1 )
              {
                for ( k = 0; k != v19; ++k )
                  *(_QWORD *)(v21 + k * 8) = v46[k];
              }
              else
              {
                v47 = 0;
                do
                {
                  *(__m128i *)(v21 + v47 * 8) = _mm_loadu_si128((const __m128i *)&v46[v47]);
                  v47 += 2;
                }
                while ( v47 != 2LL * (v19 >> 1) );
                if ( (v19 & 1) != 0 )
                  *(_QWORD *)(v21 + 8LL * (v19 & 0xFFFFFFFE)) = v46[v19 & 0xFFFFFFFE];
              }
            }
            if ( v46 != (_QWORD *)(v5 + 16) && v46 )
            {
              v129 = v21;
              sub_186B220(v46);
              v19 = *(_DWORD *)(v5 + 8);
              v21 = v129;
            }
            *(_QWORD *)v5 = v21;
            *(_DWORD *)(v5 + 12) = v44;
          }
          else
          {
            v21 = *(_QWORD *)v5;
          }
          *(_QWORD *)(v21 + 8LL * v19) = v17;
          *(_DWORD *)(v5 + 8) = v19 + 1;
        }
        v22 = *(_WORD *)(v17 + 4);
        if ( v22 == 1 )
        {
          v15 = *((_DWORD *)v13 + 2);
        }
        else
        {
          if ( v22 == 2 )
          {
            v42 = (unsigned int)v151;
            if ( (unsigned int)v151 >= HIDWORD(v151) )
            {
              v62 = (unsigned int)(2 * HIDWORD(v151));
              p_ptr = (__int64 *)sub_186B270(16 * v62);
              v63 = 0;
              v64 = (char *)v150;
              v42 = (unsigned int)v151;
              v65 = 16LL * (unsigned int)v151;
              if ( (_DWORD)v151 )
              {
                do
                {
                  *(__m128i *)&p_ptr[v63 / 8] = _mm_loadu_si128((const __m128i *)&v64[v63]);
                  v63 += 16LL;
                }
                while ( v65 != v63 );
              }
              if ( v64 != (char *)&ptr && v64 )
              {
                sub_186B220(v64);
                v42 = (unsigned int)v151;
              }
              v150 = p_ptr;
              HIDWORD(v151) = v62;
            }
            else
            {
              p_ptr = (__int64 *)v150;
            }
            v43 = &p_ptr[2 * v42];
            *v43 = v17;
            *((_DWORD *)v43 + 2) = 0;
            v37 = (unsigned int)v151;
            v38 = v151 + 1;
            goto LABEL_49;
          }
          if ( v22 )
          {
            sub_1872CE0("");
            sub_1873130(114, 73);
          }
          if ( *(_DWORD *)(v17 + 24) )
          {
            v112 = (unsigned int)v151;
            if ( (unsigned int)v151 >= HIDWORD(v151) )
            {
              v114 = (unsigned int)(2 * HIDWORD(v151));
              p_ptr = (__int64 *)sub_186B270(16 * v114);
              v115 = 0;
              v116 = (char *)v150;
              v112 = (unsigned int)v151;
              v117 = 16LL * (unsigned int)v151;
              if ( (_DWORD)v151 )
              {
                do
                {
                  *(__m128i *)&p_ptr[v115 / 8] = _mm_loadu_si128((const __m128i *)&v116[v115]);
                  v115 += 16LL;
                }
                while ( v115 != v117 );
              }
              if ( v116 != (char *)&ptr && v116 )
              {
                sub_186B220(v116);
                v112 = (unsigned int)v151;
              }
              v150 = p_ptr;
              HIDWORD(v151) = v114;
            }
            else
            {
              p_ptr = (__int64 *)v150;
            }
            v113 = &p_ptr[2 * v112];
            *((_DWORD *)v113 + 2) = 0;
            v37 = (unsigned int)v151;
            *v113 = v17;
            v38 = v37 + 1;
            goto LABEL_49;
          }
          v145 = 0;
          v146 = 0;
          v147 = 1;
          v148 = 0;
          if ( (unsigned __int8)sub_1666AE0(a1 + 8, v17, &v145, v149) )
          {
            v48 = *(__int64 **)(a1 + 24);
            v49 = *v48;
            if ( *v48 )
            {
              v50 = *(unsigned int *)(v49 - 4);
              if ( (_DWORD)v50 == *(_DWORD *)(v49 - 8) )
              {
                v125 = (unsigned int)(3 * v50 + 1) >> 1;
                v66 = 32 * v125 + 8;
                if ( 32 * (int)v50 + 8 >= (unsigned int)v66 || (unsigned int)v50 >= (unsigned int)(3 * v50 + 1) >> 1 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v149, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v149);
                  sub_233E40((__int64)v149);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v130 = *(__int64 **)(a1 + 24);
                v67 = sub_186B270(v66);
                v48 = v130;
                v68 = (_DWORD *)v67;
                v69 = v67 + 8;
                v70 = (int *)*v130;
                if ( *v130 )
                {
                  v71 = (unsigned int)*(v70 - 1);
                  v72 = v69;
                  v68[1] = v71;
                  v73 = &v70[8 * v71];
                  for ( m = v70; m != v73; *(_QWORD *)(v72 - 8) = v79 )
                  {
                    v75 = *m;
                    v76 = *((_BYTE *)m + 4);
                    m += 8;
                    v72 += 32;
                    *(_DWORD *)(v72 - 32) = v75;
                    *(_BYTE *)(v72 - 28) = v76 & 3 | *(_BYTE *)(v72 - 28) & 0xFC;
                    v77 = *((_QWORD *)m - 3);
                    *((_QWORD *)m - 3) = 0;
                    *(_QWORD *)(v72 - 24) = v77;
                    v78 = *((_BYTE *)m - 12);
                    *(_DWORD *)(v72 - 16) = *(m - 4);
                    *(_BYTE *)(v72 - 12) = v78 & 3 | *(_BYTE *)(v72 - 12) & 0xFC;
                    v79 = *((_QWORD *)m - 1);
                    *((_QWORD *)m - 1) = 0;
                  }
                  v80 = (unsigned int)*(v70 - 1);
                  if ( (_DWORD)v80 )
                  {
                    v133 = v130;
                    v131 = v14;
                    v138 = v68;
                    v81 = &v70[8 * v80];
                    v141 = v69;
                    v143 = a1;
                    v144 = v5;
                    v82 = v70;
                    do
                    {
                      v83 = qword_1C7F2C0;
                      sub_182CBA0(qword_1C7F2C0, v82);
                      v84 = v82 + 4;
                      v82 += 8;
                      sub_182CBA0(v83, v84);
                    }
                    while ( v82 != v81 );
                    v48 = v133;
                    v14 = v131;
                    v68 = v138;
                    v69 = v141;
                    a1 = v143;
                    v5 = v144;
                    v70 = (int *)*v133;
                  }
                  v139 = v69;
                  v134 = v68;
                  v132 = v48;
                  sub_186B220(v70 - 2);
                  v68 = v134;
                  v69 = v139;
                  v48 = v132;
                  v51 = (_QWORD *)(v139 + 32LL * (unsigned int)v134[1]);
                }
                else
                {
                  *(_DWORD *)(v67 + 4) = 0;
                  v51 = (_QWORD *)(v67 + 8);
                }
                *v48 = v69;
                *v68 = v125;
              }
              else
              {
                v51 = (_QWORD *)(32 * v50 + v49);
              }
            }
            else
            {
              v128 = *(__int64 **)(a1 + 24);
              v111 = (_QWORD *)sub_186B270(0x48u);
              v48 = v128;
              v51 = v111 + 1;
              *v111 = 2;
              *v128 = (__int64)(v111 + 1);
            }
            *v51 = 0;
            v51[1] = 0;
            v51[2] = 1;
            v52 = qword_1C7F2C0;
            v51[3] = 0;
            if ( (v145 & 0x100000000LL) != 0 )
            {
              v135 = v48;
              sub_182C690(v52, v51, &v145);
              v48 = v135;
            }
            else
            {
              *(_DWORD *)v51 = v145;
            }
            if ( (v147 & 0x100000000LL) != 0 )
            {
              v126 = v48;
              sub_182C690(v52, v51 + 2, &v147);
              v48 = v126;
            }
            else
            {
              v53 = v147;
              *((_BYTE *)v51 + 20) &= ~1u;
              *((_DWORD *)v51 + 4) = v53;
            }
            ++*(_DWORD *)(*v48 - 4);
          }
          v122 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v145);
          sub_182CBA0(v122, &v147);
          v15 = *((_DWORD *)v13 + 2);
        }
LABEL_22:
        if ( v15 >= v14 )
        {
          LODWORD(v11) = v151 - 1;
          break;
        }
      }
    }
    LODWORD(v151) = v11;
    v145 = 0;
    v146 = 0;
    v147 = 1;
    v148 = 0;
    if ( (unsigned __int8)sub_1666AE0(a1 + 8, v3, &v145, v149) )
    {
      v23 = *(__int64 **)(a1 + 24);
      v24 = *v23;
      if ( *v23 )
      {
        v25 = *(unsigned int *)(v24 - 4);
        if ( (_DWORD)v25 == *(_DWORD *)(v24 - 8) )
        {
          v127 = (unsigned int)(3 * v25 + 1) >> 1;
          v92 = 32 * v127 + 8;
          if ( 32 * (int)v25 + 8 >= v92 || (unsigned int)v25 >= (unsigned int)(3 * v25 + 1) >> 1 )
          {
            v120 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v149, "Overflow encountered when expanding vector");
            *v120 = (char *)off_1C63128;
            sub_2333C0(v120 + 1, v149);
            sub_233E40((__int64)v149);
            __cxa_throw(v120, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v93 = sub_186B270(v92);
          v94 = (int *)*v23;
          v95 = (_DWORD *)v93;
          v96 = v93 + 8;
          if ( *v23 )
          {
            v97 = (unsigned int)*(v94 - 1);
            v98 = v96;
            v95[1] = v97;
            v99 = &v94[8 * v97];
            for ( n = v94; v99 != n; *(_QWORD *)(v98 - 8) = v105 )
            {
              v101 = *n;
              v102 = *((_BYTE *)n + 4);
              n += 8;
              v98 += 32;
              *(_DWORD *)(v98 - 32) = v101;
              *(_BYTE *)(v98 - 28) = v102 & 3 | *(_BYTE *)(v98 - 28) & 0xFC;
              v103 = *((_QWORD *)n - 3);
              *((_QWORD *)n - 3) = 0;
              *(_QWORD *)(v98 - 24) = v103;
              v104 = *((_BYTE *)n - 12);
              *(_DWORD *)(v98 - 16) = *(n - 4);
              *(_BYTE *)(v98 - 12) = v104 & 3 | *(_BYTE *)(v98 - 12) & 0xFC;
              v105 = *((_QWORD *)n - 1);
              *((_QWORD *)n - 1) = 0;
            }
            v106 = (unsigned int)*(v94 - 1);
            if ( (_DWORD)v106 )
            {
              v136 = v95;
              v107 = &v94[8 * v106];
              v140 = v96;
              v142 = v5;
              v108 = v94;
              do
              {
                v109 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v108);
                v110 = v108 + 4;
                v108 += 8;
                sub_182CBA0(v109, v110);
              }
              while ( v107 != v108 );
              v95 = v136;
              v96 = v140;
              v5 = v142;
              v94 = (int *)*v23;
            }
            v137 = v96;
            sub_186B220(v94 - 2);
            v96 = v137;
            v26 = (_QWORD *)(v137 + 32LL * (unsigned int)v95[1]);
          }
          else
          {
            *(_DWORD *)(v93 + 4) = 0;
            v26 = (_QWORD *)(v93 + 8);
          }
          *v23 = v96;
          *v95 = v127;
        }
        else
        {
          v26 = (_QWORD *)(v24 + 32 * v25);
        }
      }
      else
      {
        v119 = (_QWORD *)sub_186B270(0x48u);
        *v119 = 2;
        v26 = v119 + 1;
        *v23 = (__int64)(v119 + 1);
      }
      *v26 = 0;
      v26[1] = 0;
      v26[2] = 1;
      v27 = qword_1C7F2C0;
      v26[3] = 0;
      if ( (v145 & 0x100000000LL) != 0 )
        sub_182C690(v27, v26, &v145);
      else
        *(_DWORD *)v26 = v145;
      if ( (v147 & 0x100000000LL) != 0 )
      {
        sub_182C690(v27, v26 + 2, &v147);
      }
      else
      {
        v28 = v147;
        *((_BYTE *)v26 + 20) &= ~1u;
        *((_DWORD *)v26 + 4) = v28;
      }
      ++*(_DWORD *)(*v23 - 4);
    }
    v85 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v145);
    sub_182CBA0(v85, &v147);
    LODWORD(v11) = v151;
    p_ptr = (__int64 *)v150;
LABEL_35:
    if ( !(_DWORD)v11 )
      break;
    v11 = (unsigned int)(v11 - 1);
    v3 = p_ptr[2 * v11];
  }
  result = (__int64)&ptr;
  if ( p_ptr != &ptr )
  {
    if ( p_ptr )
      return sub_186B220(p_ptr);
  }
  return result;
}

