__int64 __fastcall sub_2A2B00(char *a1, unsigned int *a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  int *v11; // rdx
  __int64 v12; // rax
  char *v13; // rbp
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 (__fastcall *v16)(__int64, int); // rcx
  __int64 v17; // rsi
  int v18; // r14d
  int v19; // ecx
  __int64 v20; // rsi
  __int64 (__fastcall *v21)(__int64, int); // rax
  __int64 v22; // rax
  int v23; // r14d
  int v24; // eax
  __int64 v25; // r9
  int v26; // r14d
  __int64 (__fastcall *v27)(__int64, int); // rax
  __int64 v28; // rax
  int v29; // r11d
  int v30; // r10d
  __int64 (__fastcall *v31)(__int64, int); // rax
  __int64 v32; // rax
  int v33; // r8d
  int v34; // eax
  __int64 v35; // r9
  unsigned int *v36; // r14
  __int64 v37; // rsi
  __int64 (__fastcall *v38)(__int64, int); // rax
  __int64 v39; // rax
  int v40; // r11d
  int v41; // eax
  __int64 (__fastcall *v42)(__int64, int); // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  int v45; // r11d
  int v46; // edx
  __int64 (__fastcall *v47)(__int64, int); // rax
  __int64 v48; // rax
  int v49; // r11d
  int v50; // eax
  __int64 (__fastcall *v51)(__int64, int); // rax
  __int64 v52; // rcx
  __int64 v53; // r9
  __int64 v54; // rax
  int v55; // r11d
  int v56; // edx
  unsigned int v57; // eax
  int v58; // eax
  __int64 (__fastcall *v59)(__int64, int); // rax
  __int64 v60; // rsi
  int v61; // eax
  int v62; // eax
  __int64 (__fastcall *v63)(__int64, int); // rax
  __int64 v64; // rsi
  int v65; // eax
  int v66; // eax
  __int64 (__fastcall *v67)(__int64, int); // rax
  __int64 v68; // rsi
  int v69; // eax
  __int64 (__fastcall *v70)(__int64, int); // rax
  __int64 v71; // rcx
  __int64 v72; // r9
  int v73; // r14d
  int v74; // r10d
  __int64 (__fastcall *v75)(__int64, int); // rax
  __int64 v76; // rax
  int v77; // r14d
  int v78; // eax
  int v79; // eax
  __int64 i; // rbp
  unsigned int v81; // ecx
  __int64 (__fastcall *v82)(__int64, int); // rax
  int v83; // eax
  __int64 (__fastcall *v84)(__int64, int); // rcx
  __int64 v85; // rsi
  int v86; // eax
  __int64 v87; // rdx
  int v88; // r14d
  __int64 (__fastcall *v89)(__int64, int); // rax
  __int64 v90; // rax
  int v91; // ecx
  int v92; // r8d
  __int64 (__fastcall *v93)(__int64, int); // rax
  __int64 v94; // rax
  int v95; // ecx
  int v96; // eax
  unsigned int v97; // eax
  __int64 v98; // r9
  int v99; // r14d
  __int64 (__fastcall *v100)(__int64, int); // rax
  __int64 v101; // rax
  int v102; // r10d
  int v103; // ecx
  __int64 (__fastcall *v104)(__int64, int); // rax
  __int64 v105; // rax
  int v106; // r8d
  int v107; // eax
  int v108; // eax
  __int64 (__fastcall *v109)(__int64, int); // rax
  __int64 v110; // rsi
  int v111; // eax
  int v112; // eax
  __int64 (__fastcall *v113)(__int64, int); // rax
  int v114; // eax
  int v115; // eax
  __int64 (__fastcall *v116)(__int64, int); // rax
  int v117; // eax
  __int64 (__fastcall *v118)(__int64, int); // rax
  int v119; // eax
  __int64 (__fastcall *v120)(__int64, int); // rax
  int v121; // eax
  __int64 (__fastcall *v122)(__int64, int); // rax
  int v123; // eax
  int v124; // eax
  __int64 (__fastcall *v125)(__int64, int); // rax
  int v126; // eax
  int v127; // eax
  __int64 (__fastcall *v128)(__int64, int); // rax
  int v129; // eax
  __int64 (__fastcall *v130)(__int64, int); // rax
  int v131; // [rsp+8h] [rbp-60h]
  int v132; // [rsp+8h] [rbp-60h]
  int v133; // [rsp+8h] [rbp-60h]
  int v134; // [rsp+8h] [rbp-60h]
  unsigned int v135; // [rsp+8h] [rbp-60h]
  int v136; // [rsp+8h] [rbp-60h]
  int v137; // [rsp+8h] [rbp-60h]
  int v138; // [rsp+8h] [rbp-60h]
  __int64 v139; // [rsp+8h] [rbp-60h]
  int v140; // [rsp+8h] [rbp-60h]
  int *v141; // [rsp+8h] [rbp-60h]
  int v142; // [rsp+8h] [rbp-60h]
  int v143; // [rsp+8h] [rbp-60h]
  int v144; // [rsp+8h] [rbp-60h]
  int v145; // [rsp+8h] [rbp-60h]
  int v146; // [rsp+8h] [rbp-60h]
  int v147; // [rsp+8h] [rbp-60h]
  int v148; // [rsp+8h] [rbp-60h]
  int v149; // [rsp+8h] [rbp-60h]
  int v150; // [rsp+8h] [rbp-60h]
  int v151; // [rsp+8h] [rbp-60h]
  int v152; // [rsp+8h] [rbp-60h]
  int v153; // [rsp+8h] [rbp-60h]
  int v154; // [rsp+8h] [rbp-60h]
  int v155; // [rsp+8h] [rbp-60h]
  int v156; // [rsp+8h] [rbp-60h]
  int v157; // [rsp+8h] [rbp-60h]
  int v158; // [rsp+10h] [rbp-58h]
  int v159; // [rsp+10h] [rbp-58h]
  unsigned int v160; // [rsp+10h] [rbp-58h]
  int v161; // [rsp+10h] [rbp-58h]
  int v162; // [rsp+10h] [rbp-58h]
  int v163; // [rsp+10h] [rbp-58h]
  int *v164; // [rsp+10h] [rbp-58h]
  int v165; // [rsp+10h] [rbp-58h]
  unsigned int v166; // [rsp+10h] [rbp-58h]
  int v167; // [rsp+10h] [rbp-58h]
  int *v168; // [rsp+10h] [rbp-58h]
  int *v169; // [rsp+10h] [rbp-58h]
  int *v170; // [rsp+10h] [rbp-58h]
  int *v171; // [rsp+10h] [rbp-58h]
  int v172; // [rsp+10h] [rbp-58h]
  int *v173; // [rsp+10h] [rbp-58h]
  int v174; // [rsp+10h] [rbp-58h]
  int *v175; // [rsp+10h] [rbp-58h]
  int v176; // [rsp+18h] [rbp-50h]
  int v177; // [rsp+18h] [rbp-50h]
  int v178; // [rsp+18h] [rbp-50h]
  int v179; // [rsp+18h] [rbp-50h]
  int v180; // [rsp+18h] [rbp-50h]
  int v181; // [rsp+18h] [rbp-50h]
  int *v182; // [rsp+18h] [rbp-50h]
  int v183; // [rsp+18h] [rbp-50h]
  int v184; // [rsp+18h] [rbp-50h]
  int v185; // [rsp+18h] [rbp-50h]
  int v186; // [rsp+18h] [rbp-50h]
  int v187; // [rsp+18h] [rbp-50h]
  int v188; // [rsp+18h] [rbp-50h]
  unsigned int *v189; // [rsp+20h] [rbp-48h]

  result = (char *)a2 - a1;
  v189 = a2;
  if ( (char *)a2 - a1 <= 64 )
    return result;
  while ( 2 )
  {
    v8 = result;
    v9 = result >> 3;
    v10 = v8 >> 2;
    if ( !a3 )
    {
      for ( i = v9 - 1; ; --i )
      {
        v139 = v10;
        sub_2A2660((__int64)a1, i, v10, *(_DWORD *)&a1[4 * i], a4, a6);
        if ( !i )
          break;
        v10 = v139;
      }
      for ( result = (char *)v189 - a1;
            (char *)v189 - a1 > 4;
            result = sub_2A2660((__int64)a1, 0, ((char *)v189 - a1) >> 2, v81, a4, a6) )
      {
        v81 = *--v189;
        *v189 = *(_DWORD *)a1;
      }
      return result;
    }
    v11 = (int *)&a1[4 * v9];
    v12 = *a4;
    --a3;
    v13 = a1 + 4;
    v14 = *v11;
    v15 = *((int *)a1 + 1);
    v16 = *(__int64 (__fastcall **)(__int64, int))(*a4 + 96LL);
    if ( v16 == interactive_graph_t__::vfunc_12 )
    {
      v17 = a4[22];
      v18 = *(_DWORD *)(v17 + 24LL * (int)v15 + 8);
      goto LABEL_5;
    }
    v180 = *v11;
    v164 = v11;
    v140 = *((_DWORD *)a1 + 1);
    v83 = v16((__int64)a4, v15);
    v15 = v140;
    v11 = v164;
    v18 = v83;
    v12 = *a4;
    v14 = v180;
    v84 = *(__int64 (__fastcall **)(__int64, int))(*a4 + 96LL);
    if ( v84 == interactive_graph_t__::vfunc_12 )
    {
      v17 = a4[22];
LABEL_5:
      v19 = *(_QWORD *)(v17 + 24LL * (int)v14 + 8);
      if ( v18 < v19 )
      {
        v71 = *v11;
        v72 = (int)*(v189 - 1);
        goto LABEL_57;
      }
      goto LABEL_6;
    }
    v141 = v164;
    v85 = (unsigned int)v180;
    v181 = v15;
    v165 = v14;
    v86 = v84((__int64)a4, v85);
    v11 = v141;
    v19 = v86;
    if ( v18 < v86 )
    {
      v20 = *a4;
      goto LABEL_73;
    }
    v12 = *a4;
    v14 = v165;
    v15 = v181;
LABEL_6:
    v20 = v12;
    if ( v18 > v19 )
      goto LABEL_11;
    v21 = *(__int64 (__fastcall **)(__int64, int))(v12 + 104);
    if ( v21 == interactive_graph_t__::vfunc_13 )
    {
      v22 = a4[25];
      v23 = *(_DWORD *)(v22 + 24 * v15 + 8) + v18;
LABEL_9:
      v24 = *(_DWORD *)(v22 + 24 * v14 + 8);
      goto LABEL_10;
    }
    v184 = v14;
    v169 = v11;
    v146 = v19;
    v115 = v21((__int64)a4, v15);
    v20 = *a4;
    v19 = v146;
    v23 = v115 + v18;
    v11 = v169;
    v14 = v184;
    v116 = *(__int64 (__fastcall **)(__int64, int))(*a4 + 104LL);
    if ( v116 == interactive_graph_t__::vfunc_13 )
    {
      v22 = a4[25];
      goto LABEL_9;
    }
    v24 = v116((__int64)a4, v184);
    v20 = *a4;
    v11 = v169;
    v19 = v146;
LABEL_10:
    if ( v24 + v19 > v23 )
    {
LABEL_73:
      v71 = *v11;
      v72 = (int)*(v189 - 1);
      v82 = *(__int64 (__fastcall **)(__int64, int))(v20 + 96);
      if ( v82 != interactive_graph_t__::vfunc_12 )
      {
        v182 = v11;
        v166 = *(v189 - 1);
        v142 = *v11;
        v108 = v82((__int64)a4, v71);
        v71 = v142;
        v72 = (int)v166;
        v73 = v108;
        v11 = v182;
        v109 = *(__int64 (__fastcall **)(__int64, int))(*a4 + 96LL);
        if ( v109 != interactive_graph_t__::vfunc_12 )
        {
          v110 = v166;
          v167 = v142;
          v143 = v72;
          v111 = v109((__int64)a4, v110);
          v11 = v182;
          v71 = v167;
          v72 = v143;
          v74 = v111;
LABEL_59:
          if ( v73 < v74 )
            goto LABEL_65;
          if ( v73 > v74 )
          {
LABEL_78:
            v87 = *((int *)a1 + 1);
            v88 = *(v189 - 1);
            v89 = *(__int64 (__fastcall **)(__int64, int))(*a4 + 96LL);
            if ( v89 == interactive_graph_t__::vfunc_12 )
            {
              v90 = a4[22];
              v91 = *(_DWORD *)(v90 + 24LL * (int)v87 + 8);
            }
            else
            {
              v150 = *((_DWORD *)a1 + 1);
              v121 = v89((__int64)a4, v87);
              v87 = v150;
              v91 = v121;
              v122 = *(__int64 (__fastcall **)(__int64, int))(*a4 + 96LL);
              if ( v122 != interactive_graph_t__::vfunc_12 )
              {
                v172 = v150;
                v151 = v91;
                v123 = v122((__int64)a4, v88);
                v87 = v172;
                v91 = v151;
                v92 = v123;
LABEL_81:
                if ( v92 > v91 )
                  goto LABEL_87;
                if ( v92 < v91 )
                  goto LABEL_20;
                v93 = *(__int64 (__fastcall **)(__int64, int))(*a4 + 104LL);
                if ( v93 == interactive_graph_t__::vfunc_13 )
                {
                  v94 = a4[25];
                  v95 = *(_DWORD *)(v94 + 24 * v87 + 8) + v91;
                }
                else
                {
                  v174 = v92;
                  v154 = v91;
                  v127 = v93((__int64)a4, v87);
                  v92 = v174;
                  v95 = v127 + v154;
                  v128 = *(__int64 (__fastcall **)(__int64, int))(*a4 + 104LL);
                  if ( v128 != interactive_graph_t__::vfunc_13 )
                  {
                    v155 = v95;
                    v96 = v128((__int64)a4, v88);
                    v92 = v174;
                    v95 = v155;
LABEL_86:
                    if ( v95 >= v92 + v96 )
                      goto LABEL_20;
                    goto LABEL_87;
                  }
                  v94 = a4[25];
                }
                v96 = *(_DWORD *)(v94 + 24LL * v88 + 8);
                goto LABEL_86;
              }
              v90 = a4[22];
            }
            v92 = *(_DWORD *)(v90 + 24LL * v88 + 8);
            goto LABEL_81;
          }
          v75 = *(__int64 (__fastcall **)(__int64, int))(*a4 + 104LL);
          if ( v75 == interactive_graph_t__::vfunc_13 )
          {
            v76 = a4[25];
            v77 = *(_DWORD *)(v76 + 24 * v71 + 8) + v73;
          }
          else
          {
            v186 = v74;
            v171 = v11;
            v149 = v72;
            v119 = v75((__int64)a4, v71);
            v72 = v149;
            v11 = v171;
            v77 = v119 + v73;
            v74 = v186;
            v120 = *(__int64 (__fastcall **)(__int64, int))(*a4 + 104LL);
            if ( v120 != interactive_graph_t__::vfunc_13 )
            {
              v78 = v120((__int64)a4, v149);
              v74 = v186;
              v11 = v171;
LABEL_64:
              if ( v77 < v78 + v74 )
                goto LABEL_65;
              goto LABEL_78;
            }
            v76 = a4[25];
          }
          v78 = *(_DWORD *)(v76 + 24 * v72 + 8);
          goto LABEL_64;
        }
        v17 = a4[22];
LABEL_58:
        v74 = *(_DWORD *)(v17 + 24LL * (int)v72 + 8);
        goto LABEL_59;
      }
      v17 = a4[22];
LABEL_57:
      v73 = *(_DWORD *)(v17 + 24LL * (int)v71 + 8);
      goto LABEL_58;
    }
LABEL_11:
    v25 = *((int *)a1 + 1);
    v26 = *(v189 - 1);
    v27 = *(__int64 (__fastcall **)(__int64, int))(v20 + 96);
    if ( v27 == interactive_graph_t__::vfunc_12 )
    {
      v28 = a4[22];
      v29 = *(_DWORD *)(v28 + 24LL * (int)v25 + 8);
LABEL_13:
      v30 = *(_DWORD *)(v28 + 24LL * v26 + 8);
      goto LABEL_14;
    }
    v168 = v11;
    v144 = *((_DWORD *)a1 + 1);
    v112 = v27((__int64)a4, v25);
    v25 = v144;
    v11 = v168;
    v29 = v112;
    v113 = *(__int64 (__fastcall **)(__int64, int))(*a4 + 96LL);
    if ( v113 == interactive_graph_t__::vfunc_12 )
    {
      v28 = a4[22];
      goto LABEL_13;
    }
    v183 = v144;
    v145 = v29;
    v114 = v113((__int64)a4, v26);
    v25 = v183;
    v11 = v168;
    v29 = v145;
    v30 = v114;
LABEL_14:
    if ( v29 < v30 )
    {
LABEL_20:
      v35 = *((int *)a1 + 1);
      *(_QWORD *)a1 = __ROL8__(*(_QWORD *)a1, 32);
      goto LABEL_21;
    }
    if ( v29 <= v30 )
    {
      v31 = *(__int64 (__fastcall **)(__int64, int))(*a4 + 104LL);
      if ( v31 == interactive_graph_t__::vfunc_13 )
      {
        v32 = a4[25];
        v33 = v29 + *(_DWORD *)(v32 + 24 * v25 + 8);
      }
      else
      {
        v185 = v30;
        v170 = v11;
        v147 = v29;
        v117 = v31((__int64)a4, v25);
        v11 = v170;
        v30 = v185;
        v33 = v147 + v117;
        v118 = *(__int64 (__fastcall **)(__int64, int))(*a4 + 104LL);
        if ( v118 != interactive_graph_t__::vfunc_13 )
        {
          v148 = v33;
          v34 = v118((__int64)a4, v26);
          v30 = v185;
          v11 = v170;
          v33 = v148;
LABEL_19:
          if ( v33 < v34 + v30 )
            goto LABEL_20;
          goto LABEL_88;
        }
        v32 = a4[25];
      }
      v34 = *(_DWORD *)(v32 + 24LL * v26 + 8);
      goto LABEL_19;
    }
LABEL_88:
    v98 = *v11;
    v99 = *(v189 - 1);
    v100 = *(__int64 (__fastcall **)(__int64, int))(*a4 + 96LL);
    if ( v100 == interactive_graph_t__::vfunc_12 )
    {
      v101 = a4[22];
      v102 = *(_DWORD *)(v101 + 24LL * (int)v98 + 8);
LABEL_90:
      v103 = *(_DWORD *)(v101 + 24LL * v99 + 8);
      goto LABEL_91;
    }
    v173 = v11;
    v152 = *v11;
    v124 = v100((__int64)a4, v98);
    v98 = v152;
    v11 = v173;
    v102 = v124;
    v125 = *(__int64 (__fastcall **)(__int64, int))(*a4 + 96LL);
    if ( v125 == interactive_graph_t__::vfunc_12 )
    {
      v101 = a4[22];
      goto LABEL_90;
    }
    v187 = v152;
    v153 = v102;
    v126 = v125((__int64)a4, v99);
    v98 = v187;
    v11 = v173;
    v102 = v153;
    v103 = v126;
LABEL_91:
    if ( v103 <= v102 )
    {
      if ( v103 < v102 )
        goto LABEL_65;
      v104 = *(__int64 (__fastcall **)(__int64, int))(*a4 + 104LL);
      if ( v104 == interactive_graph_t__::vfunc_13 )
      {
        v105 = a4[25];
        v106 = v102 + *(_DWORD *)(v105 + 24 * v98 + 8);
      }
      else
      {
        v188 = v103;
        v175 = v11;
        v156 = v102;
        v129 = v104((__int64)a4, v98);
        v11 = v175;
        v103 = v188;
        v106 = v129 + v156;
        v130 = *(__int64 (__fastcall **)(__int64, int))(*a4 + 104LL);
        if ( v130 != interactive_graph_t__::vfunc_13 )
        {
          v157 = v106;
          v107 = v130((__int64)a4, v99);
          v103 = v188;
          v11 = v175;
          v106 = v157;
LABEL_96:
          if ( v106 < v107 + v103 )
            goto LABEL_87;
LABEL_65:
          v79 = *(_DWORD *)a1;
          *(_DWORD *)a1 = *v11;
          *v11 = v79;
          v35 = *(int *)a1;
          goto LABEL_21;
        }
        v105 = a4[25];
      }
      v107 = *(_DWORD *)(v105 + 24LL * v99 + 8);
      goto LABEL_96;
    }
LABEL_87:
    v97 = *(_DWORD *)a1;
    *(_DWORD *)a1 = *(v189 - 1);
    *(v189 - 1) = v97;
    v35 = *(int *)a1;
LABEL_21:
    v36 = v189;
    while ( 2 )
    {
      v37 = *a4;
      while ( 1 )
      {
        v42 = *(__int64 (__fastcall **)(__int64, int))(v37 + 96);
        v43 = *(int *)v13;
        if ( v42 == interactive_graph_t__::vfunc_12 )
        {
          v44 = a4[22];
          v45 = *(_DWORD *)(v44 + 24LL * (int)v43 + 8);
LABEL_30:
          v46 = *(_DWORD *)(v44 + 24LL * (int)v35 + 8);
          goto LABEL_31;
        }
        v160 = v35;
        v133 = *(_DWORD *)v13;
        v62 = v42((__int64)a4, v43);
        v37 = *a4;
        v43 = v133;
        v45 = v62;
        v35 = (int)v160;
        v63 = *(__int64 (__fastcall **)(__int64, int))(*a4 + 96LL);
        if ( v63 == interactive_graph_t__::vfunc_12 )
        {
          v44 = a4[22];
          goto LABEL_30;
        }
        v64 = v160;
        v177 = v45;
        v161 = v133;
        v134 = v35;
        v65 = v63((__int64)a4, v64);
        v37 = *a4;
        v45 = v177;
        v43 = v161;
        v35 = v134;
        v46 = v65;
LABEL_31:
        if ( v45 < v46 )
          goto LABEL_27;
        if ( v45 > v46 )
          break;
        v38 = *(__int64 (__fastcall **)(__int64, int))(v37 + 104);
        if ( v38 == interactive_graph_t__::vfunc_13 )
        {
          v39 = a4[25];
          v40 = *(_DWORD *)(v39 + 24 * v43 + 8) + v45;
LABEL_25:
          v41 = *(_DWORD *)(v39 + 24 * v35 + 8);
          goto LABEL_26;
        }
        v178 = v45;
        v162 = v46;
        v135 = v35;
        v66 = v38((__int64)a4, v43);
        v37 = *a4;
        v35 = (int)v135;
        v46 = v162;
        v40 = v66 + v178;
        v67 = *(__int64 (__fastcall **)(__int64, int))(*a4 + 104LL);
        if ( v67 == interactive_graph_t__::vfunc_13 )
        {
          v39 = a4[25];
          goto LABEL_25;
        }
        v68 = v135;
        v136 = v40;
        v41 = v67((__int64)a4, v68);
        v37 = *a4;
        v46 = v162;
        v40 = v136;
LABEL_26:
        if ( v40 >= v41 + v46 )
          break;
LABEL_27:
        v35 = *(int *)a1;
        v13 += 4;
      }
      for ( --v36; ; --v36 )
      {
        v51 = *(__int64 (__fastcall **)(__int64, int))(v37 + 96);
        v52 = (int)*v36;
        v53 = *(int *)a1;
        if ( v51 == interactive_graph_t__::vfunc_12 )
        {
          v54 = a4[22];
          v55 = *(_DWORD *)(v54 + 24LL * (int)v53 + 8);
LABEL_41:
          v56 = *(_DWORD *)(v54 + 24LL * (int)v52 + 8);
          goto LABEL_42;
        }
        v158 = *v36;
        v131 = *(_DWORD *)a1;
        v58 = v51((__int64)a4, v53);
        v53 = v131;
        v52 = v158;
        v55 = v58;
        v59 = *(__int64 (__fastcall **)(__int64, int))(*a4 + 96LL);
        if ( v59 == interactive_graph_t__::vfunc_12 )
        {
          v54 = a4[22];
          goto LABEL_41;
        }
        v176 = v131;
        v60 = (unsigned int)v158;
        v159 = v55;
        v132 = v52;
        v61 = v59((__int64)a4, v60);
        v53 = v176;
        v55 = v159;
        v52 = v132;
        v56 = v61;
LABEL_42:
        if ( v55 < v56 )
          goto LABEL_38;
        if ( v55 > v56 )
          break;
        v47 = *(__int64 (__fastcall **)(__int64, int))(*a4 + 104LL);
        if ( v47 == interactive_graph_t__::vfunc_13 )
        {
          v48 = a4[25];
          v49 = *(_DWORD *)(v48 + 24 * v53 + 8) + v55;
LABEL_36:
          v50 = *(_DWORD *)(v48 + 24 * v52 + 8);
          goto LABEL_37;
        }
        v179 = v56;
        v163 = v52;
        v137 = v55;
        v69 = v47((__int64)a4, v53);
        v52 = v163;
        v56 = v179;
        v49 = v69 + v137;
        v70 = *(__int64 (__fastcall **)(__int64, int))(*a4 + 104LL);
        if ( v70 == interactive_graph_t__::vfunc_13 )
        {
          v48 = a4[25];
          goto LABEL_36;
        }
        v138 = v49;
        v50 = v70((__int64)a4, v163);
        v56 = v179;
        v49 = v138;
LABEL_37:
        if ( v50 + v56 <= v49 )
          break;
LABEL_38:
        v37 = *a4;
      }
      if ( v13 < (char *)v36 )
      {
        v57 = *(_DWORD *)v13;
        v13 += 4;
        *((_DWORD *)v13 - 1) = *v36;
        *v36 = v57;
        v35 = *(int *)a1;
        continue;
      }
      break;
    }
    sub_2A2B00(v13, v189, a3, a4);
    result = v13 - a1;
    if ( v13 - a1 > 64 )
    {
      v189 = (unsigned int *)v13;
      continue;
    }
    return result;
  }
}
