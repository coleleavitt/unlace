unsigned __int64 __fastcall sub_6D600(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rax
  int v7; // eax
  int v8; // ebp
  unsigned __int64 *v9; // rax
  unsigned __int64 v10; // r12
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // rbp
  __int64 v17; // rax
  int *v18; // rbp
  int v19; // r15d
  int v20; // r12d
  __int64 (__fastcall *v21)(__int64, int); // rax
  __int64 v22; // rsi
  int v23; // eax
  __int64 v24; // rdx
  __int64 (__fastcall *v25)(__int64, int, int); // rax
  unsigned int v26; // eax
  int v27; // edx
  int v28; // r12d
  char v29; // al
  int v30; // r8d
  __int64 v31; // rbp
  __int64 v32; // rdx
  int v33; // edx
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  unsigned __int64 v36; // rbx
  __int64 *v38; // r15
  __int64 v39; // rdx
  __int64 v40; // rbp
  __int64 v41; // rbp
  int v42; // r8d
  __int64 v43; // rax
  __int64 v44; // rbp
  int *v45; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rdx
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rsi
  __int64 *v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  bool v57; // cf
  unsigned __int64 v58; // r9
  __int64 v59; // rsi
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rdx
  unsigned __int64 v63; // r12
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rdi
  unsigned __int64 v68; // rax
  __int64 v69; // rsi
  unsigned __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // r15
  __int64 *v74; // rdi
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rax
  unsigned __int64 v78; // r12
  __int64 v79; // rsi
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 *v82; // rdi
  __int64 *v83; // rdi
  unsigned __int64 v84; // rsi
  unsigned __int64 v85; // rcx
  unsigned __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rax
  __int64 v92; // rax
  unsigned __int64 v93; // rdx
  unsigned __int64 v94; // rsi
  unsigned __int64 v95; // rcx
  unsigned __int64 v96; // rax
  __int64 v97; // rax
  unsigned __int64 v98; // rbp
  unsigned __int64 v99; // rsi
  unsigned __int64 v100; // rax
  unsigned __int64 v101; // rax
  __int64 i; // rax
  __int64 v103; // rdx
  int v104; // ecx
  __int64 v105; // rdx
  unsigned __int64 v106; // rdx
  __int64 v107; // rax
  unsigned __int64 v108; // rax
  unsigned __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  unsigned __int64 v119; // rax
  unsigned __int64 v120; // rdx
  int v121; // [rsp+8h] [rbp-F0h]
  int v122; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v123; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v124; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v125; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v126; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v127; // [rsp+8h] [rbp-F0h]
  int v128; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v129; // [rsp+8h] [rbp-F0h]
  int v130; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v131; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v132; // [rsp+8h] [rbp-F0h]
  int v133; // [rsp+10h] [rbp-E8h]
  __int64 v134; // [rsp+10h] [rbp-E8h]
  int v135; // [rsp+20h] [rbp-D8h]
  int v136; // [rsp+24h] [rbp-D4h]
  bool v137; // [rsp+28h] [rbp-D0h]
  int v138; // [rsp+2Ch] [rbp-CCh]
  int v139; // [rsp+2Ch] [rbp-CCh]
  int v140; // [rsp+2Ch] [rbp-CCh]
  int v141; // [rsp+2Ch] [rbp-CCh]
  int v142; // [rsp+34h] [rbp-C4h] BYREF
  int v143; // [rsp+38h] [rbp-C0h] BYREF
  int v144; // [rsp+3Ch] [rbp-BCh] BYREF
  int v145; // [rsp+40h] [rbp-B8h] BYREF
  int v146; // [rsp+44h] [rbp-B4h] BYREF
  int v147; // [rsp+48h] [rbp-B0h] BYREF
  int v148; // [rsp+4Ch] [rbp-ACh] BYREF
  __int64 v149[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 *v150; // [rsp+60h] [rbp-98h] BYREF
  __int128 v151; // [rsp+68h] [rbp-90h]
  _DWORD *v152; // [rsp+80h] [rbp-78h]
  __int128 v153; // [rsp+88h] [rbp-70h]
  unsigned __int64 v154; // [rsp+98h] [rbp-60h]
  __int128 v155; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v156; // [rsp+B8h] [rbp-40h]

  v5 = *(_QWORD *)a1;
  v156 = __readfsqword(0x28u);
  v7 = (*(__int64 (__fastcall **)(__int64))(v5 + 56))(a1);
  if ( !v7 )
    return v156 - __readfsqword(0x28u);
  if ( !a3 )
  {
    if ( !under_debugger )
      sub_37EA20(52015);
    BUG();
  }
  v8 = v7;
  v9 = *(unsigned __int64 **)(a3 + 8);
  if ( !v9 )
    goto LABEL_45;
  v10 = *v9;
  if ( !*(_QWORD *)(a3 + 16) )
  {
    *v9 = *v9 & 3 | (unsigned __int64)v9 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(*(_QWORD *)(a3 + 8) + 8LL) = _mm_unpacklo_epi64(
                                                (__m128i)*(unsigned __int64 *)(a3 + 8),
                                                (__m128i)*(unsigned __int64 *)(a3 + 8));
    **(_QWORD **)(a3 + 8) &= ~1uLL;
    **(_QWORD **)(a3 + 8) |= 2uLL;
    goto LABEL_6;
  }
  v38 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
  v39 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v39 & 2) == 0 )
  {
    v82 = (__int64 *)v38[1];
    if ( (*(_BYTE *)v82 & 2) != 0 )
    {
      v83 = (__int64 *)v38[2];
      if ( (*(_BYTE *)v83 & 2) != 0 )
        goto LABEL_224;
    }
    else
    {
      sub_6B610(v82);
      v83 = (__int64 *)v38[2];
      if ( (*(_BYTE *)v83 & 2) != 0 )
        goto LABEL_160;
    }
    sub_6B610(v83);
LABEL_160:
    v39 = *v38;
    if ( (*v38 & 2) != 0 )
    {
LABEL_161:
      if ( v10 > 3 )
        qfree();
      v9 = *(unsigned __int64 **)(a3 + 8);
      v10 = *v9;
      goto LABEL_44;
    }
LABEL_224:
    *v38 = v39 | 2;
    goto LABEL_161;
  }
LABEL_44:
  *v9 = v10 & 3 | (unsigned __int64)v9 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(*(_QWORD *)(a3 + 8) + 8LL) = _mm_unpacklo_epi64(
                                              (__m128i)*(unsigned __int64 *)(a3 + 8),
                                              (__m128i)*(unsigned __int64 *)(a3 + 8));
  **(_QWORD **)(a3 + 8) &= ~1uLL;
  **(_QWORD **)(a3 + 8) |= 2uLL;
LABEL_45:
  *(_QWORD *)(a3 + 16) = 0;
LABEL_6:
  v152 = 0;
  v154 = 0;
  v153 = 0;
  v155 = 0;
  if ( v8 < 0 )
  {
    if ( !*a2 )
    {
      if ( a2[3] )
      {
        a2[4] = 0;
        qfree();
        a2[3] = 0;
        a2[5] = 0;
      }
      goto LABEL_11;
    }
    goto LABEL_8;
  }
  v63 = v8;
  v64 = qvector_reserve();
  v65 = v153;
  v152 = (_DWORD *)v64;
  if ( (unsigned __int64)v153 < v8 )
  {
    *(_DWORD *)(v64 + 4 * v153) = -1;
    v66 = v65 + 1;
    if ( v65 + 1 < (unsigned __int64)v8 )
    {
      do
        v152[v66++] = -1;
      while ( v66 != v8 );
    }
  }
  v67 = *a2;
  *(_QWORD *)&v153 = v8;
  if ( v67 )
  {
LABEL_8:
    a2[1] = 0;
    qfree();
    v11 = a2[3];
    *a2 = 0;
    a2[2] = 0;
    if ( v11 )
    {
      a2[4] = 0;
      qfree();
      a2[3] = 0;
      a2[5] = 0;
    }
    if ( v8 < 0 )
      goto LABEL_11;
    v63 = v8;
    goto LABEL_133;
  }
  if ( a2[3] )
  {
    a2[4] = 0;
    qfree();
    a2[3] = 0;
    a2[5] = 0;
  }
LABEL_133:
  v68 = a2[1];
  LODWORD(v150) = -1;
  if ( v63 >= v68 )
  {
    if ( v68 >= v63 )
      goto LABEL_11;
    v69 = *a2;
    v70 = a2[2];
    if ( (unsigned __int64)&v150 < *a2 || (unsigned __int64)&v150 >= v69 + 4 * v70 )
    {
      if ( v70 >= v63 || (v107 = qvector_reserve(), *a2 = v107, v69 = v107, v68 = a2[1], v68 < v63) )
      {
        v92 = 4 * v68;
        while ( 1 )
        {
          *(_DWORD *)(v69 + v92) = -1;
          v92 += 4;
          if ( 4 * v63 == v92 )
            break;
          v69 = *a2;
        }
      }
    }
    else if ( v70 >= v63 || (v115 = qvector_reserve(), *a2 = v115, v69 = v115, v68 = a2[1], v68 < v63) )
    {
      v71 = 4 * v68;
      while ( 1 )
      {
        *(_DWORD *)(v69 + v71) = -1;
        v71 += 4;
        if ( 4 * v63 == v71 )
          break;
        v69 = *a2;
      }
    }
  }
  a2[1] = v63;
LABEL_11:
  v149[0] = 0;
  v12 = *(_QWORD *)a1;
  v149[1] = 0;
  v136 = (*(__int64 (__fastcall **)(__int64))(v12 + 80))(a1);
  v150 = 0;
  v151 = 0;
  sub_63890(v149, v136);
  v13 = v155;
  if ( (_QWORD)v155 )
  {
LABEL_12:
    v137 = v136 >= 0;
    if ( (_QWORD)v153 && v136 >= 0 && v136 < (unsigned __int64)v155 )
    {
      *v152 = v136;
      *(_DWORD *)(v154 + 4LL * v136) = 0;
    }
    goto LABEL_16;
  }
  v78 = v153;
  v142 = -1;
  if ( (_QWORD)v153 )
  {
    v79 = v154;
    if ( (unsigned __int64)&v142 < v154 || (unsigned __int64)&v142 >= v154 + 4LL * *((_QWORD *)&v155 + 1) )
    {
      v105 = 0;
      if ( *((_QWORD *)&v155 + 1) >= (unsigned __int64)v153
        || (v110 = qvector_reserve(), v105 = v155, v154 = v110, v79 = v110, (unsigned __int64)v155 < v78) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v79 + 4 * v105++) = -1;
          if ( v105 == v78 )
            break;
          v79 = v154;
        }
      }
    }
    else
    {
      v80 = 0;
      if ( *((_QWORD *)&v155 + 1) >= (unsigned __int64)v153
        || (v117 = qvector_reserve(), v154 = v117, v79 = v117, v80 = v155, (unsigned __int64)v155 < v78) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v79 + 4 * v80++) = -1;
          if ( v80 == v78 )
            break;
          v79 = v154;
        }
      }
    }
    *(_QWORD *)&v155 = v78;
    do
    {
      v81 = (int)v152[v13];
      if ( (_DWORD)v81 != -1 )
        *(_DWORD *)(v154 + 4 * v81) = v13;
      ++v13;
    }
    while ( v13 != v78 );
    goto LABEL_12;
  }
  v137 = v136 >= 0;
LABEL_16:
  v15 = *((_QWORD *)&v151 + 1);
  v14 = v151;
  if ( *((_QWORD *)&v151 + 1) < (unsigned __int64)(v151 + 1) )
  {
    v72 = qvector_reserve();
    v73 = *((_QWORD *)&v151 + 1);
    v16 = v72;
    *((_QWORD *)&v151 + 1) = v15;
    v74 = v150;
    v75 = v151 - 1;
    if ( (__int64)v151 - 1 >= 0 )
    {
      v76 = v72;
      do
      {
        v77 = *v74;
        v76 += 8;
        ++v74;
        *(_QWORD *)(v76 - 8) = v77;
        v57 = v75-- == 0;
      }
      while ( !v57 );
    }
    qfree();
    v150 = (__int64 *)v16;
    v14 = v151;
    *((_QWORD *)&v151 + 1) = v73;
  }
  else
  {
    v16 = (__int64)v150;
  }
  v135 = 0;
  *(_QWORD *)(v16 + 8 * v14) = (unsigned int)v136;
  v133 = 1;
  v17 = v151 + 1;
  *(_QWORD *)&v151 = v151 + 1;
  while ( 1 )
  {
    while ( 1 )
    {
      v18 = (int *)&v150[v17 - 1];
      v19 = *v18;
      v20 = v18[1];
      v21 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 96LL);
      v22 = (unsigned int)*v18;
      if ( v21 == sub_64790 )
      {
        v23 = sub_64790(a1, v22);
      }
      else
      {
        v23 = v21(a1, v22);
        v19 = *v18;
      }
      if ( v20 == v23 )
        break;
      v24 = (unsigned int)v18[1];
      v25 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)a1 + 112LL);
      if ( v25 == sub_647D0 )
      {
        v121 = v18[1];
        v26 = sub_647D0(a1, v19, v24);
        v27 = v121;
      }
      else
      {
        v26 = v25(a1, v19, v24);
        v27 = v18[1];
        v19 = *v18;
      }
      v28 = v26;
      v18[1] = v27 + 1;
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(
             a1,
             (unsigned int)v19,
             v26) )
      {
LABEL_34:
        v17 = v151;
      }
      else
      {
        v29 = sub_63890(v149, v28);
        v30 = *v18;
        if ( !v29 )
        {
          v31 = v155;
          if ( (_QWORD)v155 )
          {
            if ( v30 >= 0 )
            {
              v32 = v30;
              if ( v30 < (unsigned __int64)v155 )
              {
LABEL_29:
                v33 = *(_DWORD *)(v154 + 4 * v32);
                if ( v28 < 0 )
                {
                  if ( v33 < -1 )
                    goto LABEL_32;
                  if ( a2[4] )
                    goto LABEL_88;
                  v98 = a2[1];
                  v146 = -1;
                  if ( !v98 )
                    goto LABEL_88;
                  goto LABEL_212;
                }
                v34 = v28;
                if ( v28 < (unsigned __int64)v155 )
                {
                  if ( v33 < *(_DWORD *)(v154 + 4LL * v28) )
                  {
LABEL_32:
                    v35 = 2;
LABEL_33:
                    (**(void (__fastcall ***)(__int64, _QWORD, _QWORD, __int64))a3)(
                      a3,
                      (unsigned int)v30,
                      (unsigned int)v28,
                      v35);
                    goto LABEL_34;
                  }
LABEL_85:
                  v47 = a2[4];
                  if ( v47 )
                  {
LABEL_86:
                    if ( v34 < v47 )
                    {
                      v35 = 4;
                      if ( *(_DWORD *)(a2[3] + 4 * v34) != -1 )
                        goto LABEL_33;
                    }
                    goto LABEL_88;
                  }
                  v98 = a2[1];
                  if ( !v98 )
                    goto LABEL_222;
                  goto LABEL_211;
                }
                if ( v33 < -1 )
                  goto LABEL_32;
                goto LABEL_253;
              }
            }
          }
          else
          {
            v58 = v153;
            v144 = -1;
            if ( (_QWORD)v153 )
            {
              v59 = v154;
              if ( (unsigned __int64)&v144 < v154 || (unsigned __int64)&v144 >= v154 + 4LL * *((_QWORD *)&v155 + 1) )
              {
                v90 = 0;
                if ( *((_QWORD *)&v155 + 1) >= (unsigned __int64)v153 )
                  goto LABEL_281;
                v138 = v30;
                v124 = v153;
                v91 = qvector_reserve();
                v90 = v155;
                v58 = v124;
                v154 = v91;
                v59 = v91;
                v30 = v138;
                if ( (unsigned __int64)v155 < v124 )
                {
LABEL_281:
                  while ( 1 )
                  {
                    *(_DWORD *)(v59 + 4 * v90++) = -1;
                    if ( v90 == v58 )
                      break;
                    v59 = v154;
                  }
                }
              }
              else
              {
                v60 = 0;
                if ( *((_QWORD *)&v155 + 1) >= (unsigned __int64)v153 )
                  goto LABEL_282;
                v139 = v30;
                v127 = v153;
                v114 = qvector_reserve();
                v154 = v114;
                v58 = v127;
                v59 = v114;
                v60 = v155;
                v30 = v139;
                if ( (unsigned __int64)v155 < v127 )
                {
LABEL_282:
                  while ( 1 )
                  {
                    *(_DWORD *)(v59 + 4 * v60++) = -1;
                    if ( v60 == v58 )
                      break;
                    v59 = v154;
                  }
                }
              }
              *(_QWORD *)&v155 = v58;
              v61 = 0;
              do
              {
                v62 = (int)v152[v61];
                if ( (_DWORD)v62 != -1 )
                  *(_DWORD *)(v154 + 4 * v62) = v61;
                ++v61;
              }
              while ( v61 != v58 );
              v119 = v155;
              if ( v30 >= 0 )
              {
                v32 = v30;
                if ( v30 < (unsigned __int64)v155 )
                  goto LABEL_29;
              }
              if ( !(_QWORD)v155 )
              {
                v120 = v153;
                v145 = -1;
                if ( (_QWORD)v153 )
                {
                  if ( (unsigned __int64)&v145 < v154 || (unsigned __int64)&v145 >= v154 + 4LL * *((_QWORD *)&v155 + 1) )
                  {
                    if ( *((_QWORD *)&v155 + 1) < (unsigned __int64)v153 )
                    {
                      v140 = v30;
                      v131 = v153;
                      v154 = qvector_reserve();
                      v30 = v140;
                      v119 = v155;
                      v120 = v131;
                    }
                    if ( v119 < v120 )
                    {
                      do
                        *(_DWORD *)(v154 + 4 * v119++) = -1;
                      while ( v120 != v119 );
                    }
                  }
                  else
                  {
                    if ( *((_QWORD *)&v155 + 1) < (unsigned __int64)v153 )
                    {
                      v141 = v30;
                      v132 = v153;
                      v154 = qvector_reserve();
                      v30 = v141;
                      v119 = v155;
                      v120 = v132;
                    }
                    if ( v119 < v120 )
                    {
                      do
                        *(_DWORD *)(v154 + 4 * v119++) = -1;
                      while ( v120 != v119 );
                    }
                  }
                  *(_QWORD *)&v155 = v120;
                  do
                  {
                    v46 = (int)v152[v31];
                    if ( (_DWORD)v46 != -1 )
                      *(_DWORD *)(v154 + 4 * v46) = v31;
                    ++v31;
                  }
                  while ( v120 != v31 );
                }
              }
            }
          }
          if ( v28 < 0 )
          {
            if ( a2[4] )
              goto LABEL_88;
LABEL_254:
            v98 = a2[1];
            if ( !v98 )
              goto LABEL_88;
LABEL_211:
            v146 = -1;
LABEL_212:
            v99 = a2[3];
            v100 = a2[5];
            if ( (unsigned __int64)&v146 < v99 || (unsigned __int64)&v146 >= v99 + 4 * v100 )
            {
              if ( v100 < v98 )
              {
                v128 = v30;
                a2[3] = qvector_reserve();
                v30 = v128;
              }
              v109 = a2[4];
              if ( v109 < v98 )
              {
                do
                  *(_DWORD *)(a2[3] + 4 * v109++) = -1;
                while ( v98 != v109 );
              }
            }
            else
            {
              if ( v100 < v98 )
              {
                v130 = v30;
                a2[3] = qvector_reserve();
                v30 = v130;
              }
              v101 = a2[4];
              if ( v101 < v98 )
              {
                do
                  *(_DWORD *)(a2[3] + 4 * v101++) = -1;
                while ( v98 != v101 );
              }
            }
            a2[4] = v98;
            for ( i = 0; i != v98; ++i )
            {
              v103 = *(int *)(*a2 + 4 * i);
              if ( (_DWORD)v103 != -1 )
                *(_DWORD *)(a2[3] + 4 * v103) = i;
            }
LABEL_222:
            if ( v28 >= 0 )
            {
              v47 = a2[4];
              v34 = v28;
              goto LABEL_86;
            }
LABEL_88:
            v35 = 3;
            goto LABEL_33;
          }
          v34 = v28;
          if ( v28 < (unsigned __int64)v155 )
          {
            if ( *(int *)(v154 + 4LL * v28) > -1 )
              goto LABEL_32;
            goto LABEL_85;
          }
LABEL_253:
          v47 = a2[4];
          if ( v47 )
            goto LABEL_86;
          goto LABEL_254;
        }
        if ( v30 != -1 )
          (**(void (__fastcall ***)(__int64, _QWORD, _QWORD, __int64))a3)(a3, (unsigned int)v30, (unsigned int)v28, 1);
        v41 = v155;
        v42 = v133 + 1;
        if ( !(_QWORD)v155 )
        {
          v48 = v153;
          v147 = -1;
          if ( !(_QWORD)v153 )
            goto LABEL_64;
          v49 = v154;
          if ( (unsigned __int64)&v147 < v154 || (unsigned __int64)&v147 >= v154 + 4LL * *((_QWORD *)&v155 + 1) )
          {
            v88 = 0;
            if ( *((_QWORD *)&v155 + 1) >= (unsigned __int64)v153
              || (v123 = v153,
                  v89 = qvector_reserve(),
                  v88 = v155,
                  v48 = v123,
                  v154 = v89,
                  v49 = v89,
                  v42 = v133 + 1,
                  (unsigned __int64)v155 < v123) )
            {
              while ( 1 )
              {
                *(_DWORD *)(v49 + 4 * v88++) = -1;
                if ( v88 == v48 )
                  break;
                v49 = v154;
              }
            }
          }
          else
          {
            v50 = 0;
            if ( *((_QWORD *)&v155 + 1) >= (unsigned __int64)v153
              || (v126 = v153,
                  v113 = qvector_reserve(),
                  v154 = v113,
                  v48 = v126,
                  v49 = v113,
                  v50 = v155,
                  v42 = v133 + 1,
                  (unsigned __int64)v155 < v126) )
            {
              while ( 1 )
              {
                *(_DWORD *)(v49 + 4 * v50++) = -1;
                if ( v50 == v48 )
                  break;
                v49 = v154;
              }
            }
          }
          *(_QWORD *)&v155 = v48;
          do
          {
            v51 = (int)v152[v41];
            if ( (_DWORD)v51 != -1 )
              *(_DWORD *)(v154 + 4 * v51) = v41;
            ++v41;
          }
          while ( v41 != v48 );
        }
        if ( v133 >= 0 && v133 < (unsigned __int64)v153 && v28 >= 0 && v28 < (unsigned __int64)v155 )
        {
          v152[v133] = v28;
          *(_DWORD *)(v154 + 4LL * v28) = v133;
        }
LABEL_64:
        v43 = v151;
        if ( *((_QWORD *)&v151 + 1) < (unsigned __int64)(v151 + 1) )
        {
          v134 = *((_QWORD *)&v151 + 1);
          v122 = v42;
          v44 = qvector_reserve();
          v52 = *((_QWORD *)&v151 + 1);
          v53 = v150;
          v54 = v151 - 1;
          *((_QWORD *)&v151 + 1) = v134;
          if ( (__int64)v151 - 1 >= 0 )
          {
            v55 = v44;
            do
            {
              v56 = *v53;
              v55 += 8;
              ++v53;
              *(_QWORD *)(v55 - 8) = v56;
              v57 = v54-- == 0;
            }
            while ( !v57 );
          }
          qfree();
          v43 = v151;
          v150 = (__int64 *)v44;
          v42 = v122;
          *((_QWORD *)&v151 + 1) = v52;
        }
        else
        {
          v44 = (__int64)v150;
        }
        v45 = (int *)(v44 + 8 * v43);
        v133 = v42;
        *v45 = v28;
        v45[1] = 0;
        v17 = v151 + 1;
        *(_QWORD *)&v151 = v151 + 1;
      }
    }
    v40 = a2[4];
    if ( !(_QWORD)v151 )
      break;
    v17 = v151 - 1;
    *(_QWORD *)&v151 = v17;
    if ( !v17 )
      break;
    if ( v40 )
      goto LABEL_49;
    v93 = a2[1];
    v143 = -1;
    if ( v93 )
    {
      v94 = a2[3];
      v95 = a2[5];
      if ( (unsigned __int64)&v143 < v94 || (unsigned __int64)&v143 >= v94 + 4 * v95 )
      {
        v108 = 0;
        if ( v95 >= v93
          || (v125 = v93, v112 = qvector_reserve(), a2[3] = v112, v94 = v112, v93 = v125, v108 = a2[4], v108 < v125) )
        {
          while ( 1 )
          {
            *(_DWORD *)(v94 + 4 * v108++) = -1;
            if ( v93 == v108 )
              break;
            v94 = a2[3];
          }
        }
      }
      else
      {
        v96 = 0;
        if ( v95 >= v93
          || (v129 = v93, v118 = qvector_reserve(), a2[3] = v118, v94 = v118, v93 = v129, v96 = a2[4], v96 < v129) )
        {
          while ( 1 )
          {
            *(_DWORD *)(v94 + 4 * v96++) = -1;
            if ( v93 == v96 )
              break;
            v94 = a2[3];
          }
        }
      }
      a2[4] = v93;
      do
      {
        v97 = *(int *)(*a2 + 4 * v40);
        if ( (_DWORD)v97 != -1 )
          *(_DWORD *)(a2[3] + 4 * v97) = v40;
        ++v40;
      }
      while ( v93 != v40 );
LABEL_49:
      if ( v135 < 0 || v135 >= (unsigned __int64)a2[1] || v19 < 0 || v19 >= (unsigned __int64)a2[4] )
      {
        v17 = v151;
        goto LABEL_54;
      }
      *(_DWORD *)(*a2 + 4LL * v135) = v19;
      v104 = v135++;
      *(_DWORD *)(a2[3] + 4LL * v19) = v104;
      v17 = v151;
    }
    else
    {
LABEL_54:
      ++v135;
    }
  }
  if ( v40 )
    goto LABEL_69;
  v36 = a2[1];
  v148 = -1;
  if ( v36 )
  {
    v84 = a2[3];
    v85 = a2[5];
    if ( (unsigned __int64)&v148 < v84 || (unsigned __int64)&v148 >= v84 + 4 * v85 )
    {
      v106 = 0;
      if ( v85 >= v36 || (v111 = qvector_reserve(), v106 = a2[4], a2[3] = v111, v84 = v111, v106 < v36) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v84 + 4 * v106++) = -1;
          if ( v106 == v36 )
            break;
          v84 = a2[3];
        }
      }
    }
    else
    {
      v86 = 0;
      if ( v85 >= v36 || (v116 = qvector_reserve(), a2[3] = v116, v84 = v116, v86 = a2[4], v86 < v36) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v84 + 4 * v86++) = -1;
          if ( v86 == v36 )
            break;
          v84 = a2[3];
        }
      }
    }
    a2[4] = v36;
    do
    {
      v87 = *(int *)(*a2 + 4 * v40);
      if ( (_DWORD)v87 != -1 )
        *(_DWORD *)(a2[3] + 4 * v87) = v40;
      ++v40;
    }
    while ( v40 != v36 );
LABEL_69:
    if ( v135 >= 0 && v135 < (unsigned __int64)a2[1] && v137 && v136 < (unsigned __int64)a2[4] )
    {
      *(_DWORD *)(*a2 + 4LL * v135) = v136;
      *(_DWORD *)(a2[3] + 4LL * v136) = v135;
    }
  }
  if ( v150 )
  {
    *(_QWORD *)&v151 = 0;
    qfree();
  }
  qfree();
  if ( v154 )
  {
    *(_QWORD *)&v155 = 0;
    qfree();
  }
  if ( v152 )
  {
    *(_QWORD *)&v153 = 0;
    qfree();
  }
  return v156 - __readfsqword(0x28u);
}
