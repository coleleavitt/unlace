__int64 __fastcall sub_87B4D0(__int64 a1, char a2, __int64 a3, double *a4)
{
  unsigned int *v7; // r15
  double *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __m128 *v12; // rax
  __m128 *v13; // rax
  _BOOL4 v14; // esi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __m128 *v18; // rax
  __m128 *v19; // rax
  _QWORD *v21; // r13
  char *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __m128 *v26; // rax
  __m128 *v27; // rax
  _QWORD *v28; // r14
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  __m128 *v32; // rax
  __m128 *v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __m128 *v38; // rax
  __m128 *v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __m128 *v43; // rax
  __m128 *v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __m128 *v48; // rax
  __m128 *v49; // rdx
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rcx
  __m128 *v56; // rax
  __m128 *v57; // rax
  char *v58; // rax
  unsigned int *v59; // rdi
  char *v60; // rax
  __m128 v61; // xmm0
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rcx
  __m128 *v65; // rax
  __m128 *v66; // rax
  _QWORD *v67; // r13
  char *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rcx
  __m128 *v72; // rax
  __m128 *v73; // rax
  _QWORD *v74; // r14
  _QWORD *v75; // rax
  unsigned int *v76; // rdi
  __int64 v77; // r9
  _QWORD *v78; // rax
  __int64 v79; // r9
  _QWORD *v80; // r13
  char *v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rax
  __int64 v84; // rcx
  __m128 *v85; // rax
  __m128 *v86; // rax
  _QWORD *v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rcx
  __m128 *v91; // rax
  __m128 *v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rax
  __int64 v95; // rcx
  __m128 *v96; // rax
  __m128 *v97; // rax
  __int64 v98; // r9
  int v99; // edx
  __int64 v100; // rdx
  __int64 v101; // rax
  __int64 v102; // rcx
  __m128 *v103; // rax
  __m128 *v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rax
  __int64 v107; // rcx
  __m128 *v108; // rax
  __m128 *v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rax
  __int64 v112; // rcx
  __m128 *v113; // rax
  __m128 *v114; // rax
  __int64 v115; // r9
  __int64 v116; // rdx
  __int64 v117; // rax
  __int64 v118; // rcx
  __m128 *v119; // rax
  __m128 *v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rax
  __int64 v123; // rcx
  __m128 *v124; // rax
  __m128 *v125; // rax
  _QWORD *v126; // r13
  __int64 v127; // rdx
  __int64 v128; // rax
  __int64 v129; // rcx
  __m128 *v130; // rax
  __m128 *v131; // rax
  __int64 v132; // rdx
  __int64 v133; // rax
  __int64 v134; // rcx
  __m128 *v135; // rax
  __m128 *v136; // rax
  _QWORD *v137; // rax
  _QWORD *v138; // r14
  char *v139; // rax
  __int64 v140; // r8
  __int64 v141; // rdx
  __int64 v142; // rax
  __int64 v143; // rcx
  __m128 *v144; // rax
  __m128 *v145; // rax
  __int64 v146; // rdx
  __int64 v147; // rax
  __int64 v148; // rcx
  __m128 *v149; // rax
  __m128 *v150; // rax
  _QWORD *v151; // rax
  __int64 v152; // rdx
  __int64 v153; // rax
  __int64 v154; // rcx
  __m128 *v155; // rax
  __m128 *v156; // rax
  __int64 v157; // rdx
  __int64 v158; // rax
  __int64 v159; // rcx
  __m128 *v160; // rax
  __m128 *v161; // rax
  __int64 v162; // rdx
  __int64 v163; // rax
  __int64 v164; // rcx
  __m128 *v165; // rax
  __m128 *v166; // rax
  __int64 v167; // rdx
  __int64 v168; // rax
  __int64 v169; // rcx
  __m128 *v170; // rax
  __m128 *v171; // rax
  __int64 v172; // rdx
  __int64 v173; // rax
  __int64 v174; // rcx
  __m128 *v175; // rax
  __m128 *v176; // rax
  __int64 v177; // rdx
  __int64 v178; // rax
  __int64 v179; // rcx
  __m128 *v180; // rax
  __m128 *v181; // rax
  _QWORD *v182; // [rsp+8h] [rbp-50h]
  _QWORD *v183; // [rsp+10h] [rbp-48h]

  v7 = *(unsigned int **)a1;
  switch ( a2 )
  {
    case 0:
    case 3:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
      return a3;
    case 1:
      v79 = 16;
      goto LABEL_96;
    case 2:
      v79 = 8;
LABEL_96:
      sub_86B8E0(*(unsigned int **)a1, 32, 1, 0, 137, v79);
      sub_86E080(v7, 1, 2, 0, 1, 0);
      if ( *v7 )
        return a3;
      goto LABEL_10;
    case 4:
    case 5:
      v8 = (double *)(a1 + 408);
      sub_868C70(*(_QWORD *)a1, 37);
      goto LABEL_3;
    case 23:
      v21 = sub_86E080(*(unsigned int **)a1, 3, 2, 0, 13, 0);
      if ( *(_DWORD *)(a1 + 204) )
      {
        sub_86B8E0(v7, 33, 1, 0, 130, 0);
        v183 = sub_86E080(v7, 1, 1, 0, 127, 13);
        sub_86D900(v7, 0x40u, 4, 0, 2, 0, 0x7Fu, 2);
        if ( !*v7 )
        {
          v7[36] = 0;
          v22 = sub_867CC0((__int64)v7, 1u, 4, 0, 13, 0);
          if ( v22 )
            *v22 = 59;
        }
        v182 = sub_868C70((__int64)v7, 4);
        sub_868C70((__int64)v7, 1);
        if ( !*v7 )
        {
          v23 = *((_QWORD *)v7 + 10);
          v24 = *(_QWORD *)(v23 + 8);
          v25 = v24 + 16;
          if ( (unsigned __int64)(v24 + 16) <= 0xFF0 )
          {
            v27 = (__m128 *)(v23 + v24 + 16);
            *(_QWORD *)(v23 + 8) = v25;
            if ( v27 )
              goto LABEL_23;
          }
          else
          {
            v26 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v7 + 7))(
                              4096,
                              *(_QWORD *)(*((_QWORD *)v7 + 7) + 16LL));
            if ( v26 )
            {
              v26->m128_u64[0] = *((_QWORD *)v7 + 10);
              *((_QWORD *)v7 + 10) = v26;
              v27 = v26 + 1;
              v27[-1].m128_u64[1] = 16;
LABEL_23:
              *v27 = _mm_loadh_ps(a4);
              *(_QWORD *)a4 = v27;
              goto LABEL_24;
            }
            *v7 = 2;
          }
        }
LABEL_24:
        sub_86B8E0(v7, 33, 1, 0, 130, 1);
        v28 = sub_86E080(v7, 0, 1, 0, 127, 10);
        sub_868C70((__int64)v7, 36);
        if ( !*v7 )
        {
          v29 = *((_QWORD *)v7 + 10);
          v30 = *(_QWORD *)(v29 + 8);
          v31 = v30 + 16;
          if ( (unsigned __int64)(v30 + 16) <= 0xFF0 )
          {
            v33 = (__m128 *)(v29 + v30 + 16);
            *(_QWORD *)(v29 + 8) = v31;
            if ( !v33 )
              goto LABEL_29;
          }
          else
          {
            v32 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v7 + 7))(
                              4096,
                              *(_QWORD *)(*((_QWORD *)v7 + 7) + 16LL));
            if ( !v32 )
            {
              *v7 = 2;
              goto LABEL_29;
            }
            v32->m128_u64[0] = *((_QWORD *)v7 + 10);
            *((_QWORD *)v7 + 10) = v32;
            v33 = v32 + 1;
            v33[-1].m128_u64[1] = 16;
          }
          *v33 = _mm_loadh_ps(a4);
          *(_QWORD *)a4 = v33;
        }
LABEL_29:
        v34 = sub_868BC0((__int64)v7);
        if ( v34 && v183 )
        {
          v183[2] &= ~1uLL;
          v183[3] = v34;
        }
        if ( *(_DWORD *)(a1 + 204) != 2 )
        {
          sub_86B8E0(v7, 32, 3, 0, 2, 0);
          sub_876A60(*(unsigned int **)a1);
          sub_86E080(v7, 1, 2, 0, 13, 0);
          if ( *v7 )
            goto LABEL_38;
          v35 = *((_QWORD *)v7 + 10);
          v36 = *(_QWORD *)(v35 + 8);
          v37 = v36 + 16;
          if ( (unsigned __int64)(v36 + 16) <= 0xFF0 )
          {
            v39 = (__m128 *)(v35 + v36 + 16);
            *(_QWORD *)(v35 + 8) = v37;
            if ( v39 )
              goto LABEL_37;
          }
          else
          {
            v38 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v7 + 7))(
                              4096,
                              *(_QWORD *)(*((_QWORD *)v7 + 7) + 16LL));
            if ( v38 )
            {
              v38->m128_u64[0] = *((_QWORD *)v7 + 10);
              v39 = v38 + 1;
              *((_QWORD *)v7 + 10) = v38;
              v38->m128_u64[1] = 16;
LABEL_37:
              *v39 = _mm_loadh_ps(a4);
              *(_QWORD *)a4 = v39;
              goto LABEL_38;
            }
            *v7 = 2;
          }
LABEL_38:
          sub_868C70((__int64)v7, 37);
          if ( *v7 )
            goto LABEL_43;
          v40 = *((_QWORD *)v7 + 10);
          v41 = *(_QWORD *)(v40 + 8);
          v42 = v41 + 16;
          if ( (unsigned __int64)(v41 + 16) <= 0xFF0 )
          {
            v44 = (__m128 *)(v40 + v41 + 16);
            *(_QWORD *)(v40 + 8) = v42;
            if ( v44 )
              goto LABEL_42;
          }
          else
          {
            v43 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v7 + 7))(
                              4096,
                              *(_QWORD *)(*((_QWORD *)v7 + 7) + 16LL));
            if ( v43 )
            {
              v43->m128_u64[0] = *((_QWORD *)v7 + 10);
              v44 = v43 + 1;
              *((_QWORD *)v7 + 10) = v43;
              v43->m128_u64[1] = 16;
LABEL_42:
              *v44 = _mm_loadh_ps((const double *)(a1 + 424));
              *(_QWORD *)(a1 + 424) = v44;
              goto LABEL_43;
            }
            *v7 = 2;
          }
LABEL_43:
          sub_868C70((__int64)v7, 0);
          if ( !*v7 )
          {
            v45 = *((_QWORD *)v7 + 10);
            v46 = *(_QWORD *)(v45 + 8);
            v47 = v46 + 16;
            if ( (unsigned __int64)(v46 + 16) <= 0xFF0 )
            {
              v49 = (__m128 *)(v45 + v46 + 16);
              *(_QWORD *)(v45 + 8) = v47;
              if ( !v49 )
                goto LABEL_48;
            }
            else
            {
              v48 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v7 + 7))(
                                4096,
                                *(_QWORD *)(*((_QWORD *)v7 + 7) + 16LL));
              if ( !v48 )
              {
                *v7 = 2;
                goto LABEL_48;
              }
              v48->m128_u64[0] = *((_QWORD *)v7 + 10);
              v49 = v48 + 1;
              *((_QWORD *)v7 + 10) = v48;
              v48->m128_u64[1] = 16;
            }
            *v49 = _mm_loadh_ps(a4);
            *(_QWORD *)a4 = v49;
          }
LABEL_48:
          sub_86B8E0(v7, 32, 2, 0, 3, 0);
          goto LABEL_49;
        }
        sub_86D900(v7, 0x40u, 4, 0, 2, 0, 0x7Fu, 1);
        sub_86E080(v7, 2, 4, 0, 13, 0);
        if ( !*v7 )
        {
          v162 = *((_QWORD *)v7 + 10);
          v163 = *(_QWORD *)(v162 + 8);
          v164 = v163 + 16;
          if ( (unsigned __int64)(v163 + 16) <= 0xFF0 )
          {
            v166 = (__m128 *)(v162 + v163 + 16);
            *(_QWORD *)(v162 + 8) = v164;
            if ( v166 )
              goto LABEL_224;
          }
          else
          {
            v165 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v7 + 7))(
                               4096,
                               *(_QWORD *)(*((_QWORD *)v7 + 7) + 16LL));
            if ( v165 )
            {
              v165->m128_u64[0] = *((_QWORD *)v7 + 10);
              *((_QWORD *)v7 + 10) = v165;
              v166 = v165 + 1;
              v166[-1].m128_u64[1] = 16;
LABEL_224:
              *v166 = _mm_loadh_ps(a4);
              *(_QWORD *)a4 = v166;
              goto LABEL_225;
            }
            *v7 = 2;
          }
        }
LABEL_225:
        sub_86E080(v7, 1, 1, 0, 127, 10);
        if ( *v7 )
          goto LABEL_49;
        v167 = *((_QWORD *)v7 + 10);
        v168 = *(_QWORD *)(v167 + 8);
        v169 = v168 + 16;
        if ( (unsigned __int64)(v168 + 16) <= 0xFF0 )
        {
          v171 = (__m128 *)(v167 + v168 + 16);
          *(_QWORD *)(v167 + 8) = v169;
          if ( v171 )
            goto LABEL_229;
        }
        else
        {
          v170 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v7 + 7))(
                             4096,
                             *(_QWORD *)(*((_QWORD *)v7 + 7) + 16LL));
          if ( v170 )
          {
            v170->m128_u64[0] = *((_QWORD *)v7 + 10);
            *((_QWORD *)v7 + 10) = v170;
            v171 = v170 + 1;
            v171[-1].m128_u64[1] = 16;
LABEL_229:
            *v171 = _mm_loadh_ps(a4);
            *(_QWORD *)a4 = v171;
            goto LABEL_49;
          }
          *v7 = 2;
        }
LABEL_49:
        v50 = sub_868BC0((__int64)v7);
        if ( v182 && v50 )
        {
          v182[2] &= ~1uLL;
          v182[3] = v50;
        }
        v51 = sub_868BC0((__int64)v7);
        if ( v28 && v51 )
        {
          v28[2] &= ~1uLL;
          v28[3] = v51;
        }
        goto LABEL_55;
      }
      if ( *(int *)(a1 + 216) <= 255 )
      {
        sub_86D900(v7, 0x40u, 4, 0, 2, 0, 0x7Fu, 1);
        sub_86B8E0(v7, 33, 1, 0, 130, 0);
        sub_86E080(v7, 1, 4, 0, 13, 0);
        if ( !*v7 )
        {
          v93 = *((_QWORD *)v7 + 10);
          v94 = *(_QWORD *)(v93 + 8);
          v95 = v94 + 16;
          if ( (unsigned __int64)(v94 + 16) <= 0xFF0 )
          {
            v97 = (__m128 *)(v93 + v94 + 16);
            *(_QWORD *)(v93 + 8) = v95;
            if ( !v97 )
              goto LABEL_130;
          }
          else
          {
            v96 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v7 + 7))(
                              4096,
                              *(_QWORD *)(*((_QWORD *)v7 + 7) + 16LL));
            if ( !v96 )
            {
              *v7 = 2;
              goto LABEL_130;
            }
            v96->m128_u64[0] = *((_QWORD *)v7 + 10);
            *((_QWORD *)v7 + 10) = v96;
            v97 = v96 + 1;
            v97[-1].m128_u64[1] = 16;
          }
          *v97 = _mm_loadh_ps(a4);
          *(_QWORD *)a4 = v97;
        }
LABEL_130:
        v98 = *(int *)(a1 + 216);
        v99 = 1;
        goto LABEL_131;
      }
      sub_86D900(v7, 0x40u, 4, 0, 2, 0, 0x7Fu, 2);
      sub_86B8E0(v7, 33, 1, 0, 130, 0);
      if ( *(_DWORD *)(a1 + 168) == 1 )
      {
        sub_86E080(v7, 1, 4, 0, 13, 0);
        if ( *v7 )
          goto LABEL_192;
        v177 = *((_QWORD *)v7 + 10);
        v178 = *(_QWORD *)(v177 + 8);
        v179 = v178 + 16;
        if ( (unsigned __int64)(v178 + 16) <= 0xFF0 )
        {
          v181 = (__m128 *)(v177 + v178 + 16);
          *(_QWORD *)(v177 + 8) = v179;
          if ( !v181 )
            goto LABEL_192;
        }
        else
        {
          v180 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v7 + 7))(
                             4096,
                             *(_QWORD *)(*((_QWORD *)v7 + 7) + 16LL));
          if ( !v180 )
          {
            *v7 = 2;
            goto LABEL_192;
          }
          v180->m128_u64[0] = *((_QWORD *)v7 + 10);
          *((_QWORD *)v7 + 10) = v180;
          v181 = v180 + 1;
          v181[-1].m128_u64[1] = 16;
        }
        *v181 = _mm_loadh_ps(a4);
        *(_QWORD *)a4 = v181;
        goto LABEL_192;
      }
      v138 = sub_86E080(v7, 0, 4, 0, 13, 0);
      if ( !*v7 )
      {
        v7[36] = 0;
        v139 = sub_867CC0((__int64)v7, 1u, 4, 0, 13, 0);
        if ( v139 )
          *v139 = 59;
      }
      sub_870770((__int64)v7, 32, 4, 2);
      v140 = *(unsigned __int8 *)(a1 + 217);
      if ( !*v7 )
      {
        v7[36] = 0;
        sub_868840(v7, 1, 0, 127, v140);
      }
      sub_870770((__int64)v7, 582, 4, 1);
      sub_868C70((__int64)v7, 1);
      if ( *v7 )
        goto LABEL_184;
      v141 = *((_QWORD *)v7 + 10);
      v142 = *(_QWORD *)(v141 + 8);
      v143 = v142 + 16;
      if ( (unsigned __int64)(v142 + 16) <= 0xFF0 )
      {
        v145 = (__m128 *)(v141 + v142 + 16);
        *(_QWORD *)(v141 + 8) = v143;
        if ( v145 )
          goto LABEL_183;
      }
      else
      {
        v144 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v7 + 7))(
                           4096,
                           *(_QWORD *)(*((_QWORD *)v7 + 7) + 16LL));
        if ( v144 )
        {
          v144->m128_u64[0] = *((_QWORD *)v7 + 10);
          *((_QWORD *)v7 + 10) = v144;
          v145 = v144 + 1;
          v145[-1].m128_u64[1] = 16;
LABEL_183:
          *v145 = _mm_loadh_ps(a4);
          *(_QWORD *)a4 = v145;
          goto LABEL_184;
        }
        *v7 = 2;
      }
LABEL_184:
      sub_86E4B0(a1, 1);
      sub_868C70((__int64)v7, 36);
      if ( !*v7 )
      {
        v146 = *((_QWORD *)v7 + 10);
        v147 = *(_QWORD *)(v146 + 8);
        v148 = v147 + 16;
        if ( (unsigned __int64)(v147 + 16) <= 0xFF0 )
        {
          v150 = (__m128 *)(v146 + v147 + 16);
          *(_QWORD *)(v146 + 8) = v148;
          if ( !v150 )
            goto LABEL_189;
        }
        else
        {
          v149 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v7 + 7))(
                             4096,
                             *(_QWORD *)(*((_QWORD *)v7 + 7) + 16LL));
          if ( !v149 )
          {
            *v7 = 2;
            goto LABEL_189;
          }
          v149->m128_u64[0] = *((_QWORD *)v7 + 10);
          *((_QWORD *)v7 + 10) = v149;
          v150 = v149 + 1;
          v150[-1].m128_u64[1] = 16;
        }
        *v150 = _mm_loadh_ps(a4);
        *(_QWORD *)a4 = v150;
      }
LABEL_189:
      v151 = sub_868BC0((__int64)v7);
      if ( v151 && v138 )
      {
        v138[2] &= ~1uLL;
        v138[3] = v151;
      }
LABEL_192:
      sub_86B8E0(v7, 33, 4, 0, 130, 1);
      sub_86E080(v7, 1, 1, 0, 127, *(unsigned __int8 *)(a1 + 217));
      if ( !*v7 )
      {
        v152 = *((_QWORD *)v7 + 10);
        v153 = *(_QWORD *)(v152 + 8);
        v154 = v153 + 16;
        if ( (unsigned __int64)(v153 + 16) <= 0xFF0 )
        {
          v156 = (__m128 *)(v152 + v153 + 16);
          *(_QWORD *)(v152 + 8) = v154;
          if ( !v156 )
            goto LABEL_197;
        }
        else
        {
          v155 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v7 + 7))(
                             4096,
                             *(_QWORD *)(*((_QWORD *)v7 + 7) + 16LL));
          if ( !v155 )
          {
            *v7 = 2;
            goto LABEL_197;
          }
          v155->m128_u64[0] = *((_QWORD *)v7 + 10);
          *((_QWORD *)v7 + 10) = v155;
          v156 = v155 + 1;
          v156[-1].m128_u64[1] = 16;
        }
        *v156 = _mm_loadh_ps(a4);
        *(_QWORD *)a4 = v156;
      }
LABEL_197:
      v98 = *(unsigned __int8 *)(a1 + 216);
      v99 = 4;
LABEL_131:
      sub_86E080(v7, 1, v99, 0, 127, v98);
      if ( *v7 )
        goto LABEL_55;
      v100 = *((_QWORD *)v7 + 10);
      v101 = *(_QWORD *)(v100 + 8);
      v102 = v101 + 16;
      if ( (unsigned __int64)(v101 + 16) <= 0xFF0 )
      {
        v104 = (__m128 *)(v100 + v101 + 16);
        *(_QWORD *)(v100 + 8) = v102;
        if ( v104 )
          goto LABEL_135;
      }
      else
      {
        v103 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v7 + 7))(
                           4096,
                           *(_QWORD *)(*((_QWORD *)v7 + 7) + 16LL));
        if ( v103 )
        {
          v103->m128_u64[0] = *((_QWORD *)v7 + 10);
          *((_QWORD *)v7 + 10) = v103;
          v104 = v103 + 1;
          v104[-1].m128_u64[1] = 16;
LABEL_135:
          *v104 = _mm_loadh_ps(a4);
          *(_QWORD *)a4 = v104;
          goto LABEL_55;
        }
        *v7 = 2;
      }
LABEL_55:
      v52 = sub_868BC0((__int64)v7);
      if ( v52 && v21 )
      {
        v21[2] &= ~1uLL;
        v21[3] = v52;
      }
      goto LABEL_119;
    case 24:
      sub_86E080(*(unsigned int **)a1, 2, 2, 0, 13, 0);
      if ( *v7 )
        goto LABEL_119;
      v88 = *((_QWORD *)v7 + 10);
      v89 = *(_QWORD *)(v88 + 8);
      v90 = v89 + 16;
      if ( (unsigned __int64)(v89 + 16) <= 0xFF0 )
      {
        v92 = (__m128 *)(v88 + v89 + 16);
        *(_QWORD *)(v88 + 8) = v90;
        if ( v92 )
          goto LABEL_118;
      }
      else
      {
        v91 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v7 + 7))(
                          4096,
                          *(_QWORD *)(*((_QWORD *)v7 + 7) + 16LL));
        if ( v91 )
        {
          v91->m128_u64[0] = *((_QWORD *)v7 + 10);
          *((_QWORD *)v7 + 10) = v91;
          v92 = v91 + 1;
          v92[-1].m128_u64[1] = 16;
LABEL_118:
          *v92 = _mm_loadh_ps(a4);
          *(_QWORD *)a4 = v92;
          goto LABEL_119;
        }
        *v7 = 2;
      }
LABEL_119:
      if ( *(_DWORD *)(a1 + 168) != 1 )
        sub_86E4B0(a1, 1);
      return a3;
    case 25:
      if ( !*v7 )
      {
        v59 = *(unsigned int **)a1;
        v7[36] = 256;
        v60 = sub_867CC0((__int64)v59, 1u, 127, 2, 137, 88);
        if ( v60 )
          *v60 = -9;
      }
      v61.m128_u64[0] = (unsigned __int64)sub_868C70((__int64)v7, 1);
      if ( *v7 )
        goto LABEL_75;
      v62 = *((_QWORD *)v7 + 10);
      v63 = *(_QWORD *)(v62 + 8);
      v64 = v63 + 16;
      if ( (unsigned __int64)(v63 + 16) <= 0xFF0 )
      {
        v66 = (__m128 *)(v62 + v63 + 16);
        *(_QWORD *)(v62 + 8) = v64;
        if ( v66 )
          goto LABEL_74;
      }
      else
      {
        v65 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v7 + 7))(
                          4096,
                          *(_QWORD *)(*((_QWORD *)v7 + 7) + 16LL));
        if ( v65 )
        {
          v65->m128_u64[0] = *((_QWORD *)v7 + 10);
          *((_QWORD *)v7 + 10) = v65;
          v66 = v65 + 1;
          v66[-1].m128_u64[1] = 16;
LABEL_74:
          v61 = _mm_loadh_ps(a4);
          *v66 = v61;
          *(_QWORD *)a4 = v66;
          goto LABEL_75;
        }
        *v7 = 2;
      }
LABEL_75:
      if ( !*(_DWORD *)(a1 + 232) )
      {
        sub_87B4D0(a1, 23, a3, a4, *(double *)v61.m128_u64);
        return a3;
      }
      sub_86E080(v7, 2, 2, 0, 13, 0);
      if ( *v7 )
        goto LABEL_141;
      v105 = *((_QWORD *)v7 + 10);
      v106 = *(_QWORD *)(v105 + 8);
      v107 = v106 + 16;
      if ( (unsigned __int64)(v106 + 16) <= 0xFF0 )
      {
        v109 = (__m128 *)(v105 + v106 + 16);
        *(_QWORD *)(v105 + 8) = v107;
        if ( !v109 )
          goto LABEL_141;
      }
      else
      {
        v108 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v7 + 7))(
                           4096,
                           *(_QWORD *)(*((_QWORD *)v7 + 7) + 16LL));
        if ( !v108 )
        {
          *v7 = 2;
          goto LABEL_141;
        }
        v108->m128_u64[0] = *((_QWORD *)v7 + 10);
        *((_QWORD *)v7 + 10) = v108;
        v109 = v108 + 1;
        v109[-1].m128_u64[1] = 16;
      }
      *v109 = _mm_loadh_ps(a4);
      *(_QWORD *)a4 = v109;
LABEL_141:
      sub_86E4B0(a1, 0);
      return a3;
    case 26:
      v67 = sub_86E080(*(unsigned int **)a1, 2, 2, 0, 13, 0);
      if ( !*v7 )
      {
        v7[36] = 256;
        v68 = sub_867CC0((__int64)v7, 1u, 127, 2, 137, 88);
        if ( v68 )
          *v68 = -9;
      }
      sub_868C70((__int64)v7, 1);
      if ( *v7 )
        goto LABEL_85;
      v69 = *((_QWORD *)v7 + 10);
      v70 = *(_QWORD *)(v69 + 8);
      v71 = v70 + 16;
      if ( (unsigned __int64)(v70 + 16) <= 0xFF0 )
      {
        v73 = (__m128 *)(v69 + v70 + 16);
        *(_QWORD *)(v69 + 8) = v71;
        if ( v73 )
          goto LABEL_84;
      }
      else
      {
        v72 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v7 + 7))(
                          4096,
                          *(_QWORD *)(*((_QWORD *)v7 + 7) + 16LL));
        if ( v72 )
        {
          v72->m128_u64[0] = *((_QWORD *)v7 + 10);
          *((_QWORD *)v7 + 10) = v72;
          v73 = v72 + 1;
          v73[-1].m128_u64[1] = 16;
LABEL_84:
          *v73 = _mm_loadh_ps(a4);
          *(_QWORD *)a4 = v73;
          goto LABEL_85;
        }
        *v7 = 2;
      }
LABEL_85:
      sub_86E4B0(a1, 0);
      v74 = sub_868C70((__int64)v7, 36);
      v75 = sub_868BC0((__int64)v7);
      if ( v67 && v75 )
      {
        v67[2] &= ~1uLL;
        v67[3] = v75;
      }
      if ( *(_DWORD *)(a1 + 204) || *(int *)(a1 + 216) <= 255 )
      {
        v76 = *(unsigned int **)a1;
        v77 = 0;
        goto LABEL_91;
      }
      sub_86D900(v7, 0x40u, 4, 0, 2, 0, 0x7Fu, 2);
      sub_86B8E0(v7, 33, 1, 0, 130, 0);
      if ( *(_DWORD *)(a1 + 168) != 1 )
      {
        v126 = sub_86E080(v7, 5, 4, 0, 13, 0);
        sub_86E080(v7, 1, 1, 0, 127, *(unsigned __int8 *)(a1 + 217));
        if ( *v7 )
          goto LABEL_164;
        v127 = *((_QWORD *)v7 + 10);
        v128 = *(_QWORD *)(v127 + 8);
        v129 = v128 + 16;
        if ( (unsigned __int64)(v128 + 16) <= 0xFF0 )
        {
          v131 = (__m128 *)(v127 + v128 + 16);
          *(_QWORD *)(v127 + 8) = v129;
          if ( v131 )
            goto LABEL_163;
        }
        else
        {
          v130 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v7 + 7))(
                             4096,
                             *(_QWORD *)(*((_QWORD *)v7 + 7) + 16LL));
          if ( v130 )
          {
            v130->m128_u64[0] = *((_QWORD *)v7 + 10);
            *((_QWORD *)v7 + 10) = v130;
            v131 = v130 + 1;
            v131[-1].m128_u64[1] = 16;
LABEL_163:
            *v131 = _mm_loadh_ps(a4);
            *(_QWORD *)a4 = v131;
            goto LABEL_164;
          }
          *v7 = 2;
        }
LABEL_164:
        sub_86E4B0(a1, 1);
        sub_868C70((__int64)v7, 36);
        if ( !*v7 )
        {
          v132 = *((_QWORD *)v7 + 10);
          v133 = *(_QWORD *)(v132 + 8);
          v134 = v133 + 16;
          if ( (unsigned __int64)(v133 + 16) <= 0xFF0 )
          {
            v136 = (__m128 *)(v132 + v133 + 16);
            *(_QWORD *)(v132 + 8) = v134;
            if ( !v136 )
              goto LABEL_169;
          }
          else
          {
            v135 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v7 + 7))(
                               4096,
                               *(_QWORD *)(*((_QWORD *)v7 + 7) + 16LL));
            if ( !v135 )
            {
              *v7 = 2;
              goto LABEL_169;
            }
            v135->m128_u64[0] = *((_QWORD *)v7 + 10);
            *((_QWORD *)v7 + 10) = v135;
            v136 = v135 + 1;
            v136[-1].m128_u64[1] = 16;
          }
          *v136 = _mm_loadh_ps(a4);
          *(_QWORD *)a4 = v136;
        }
LABEL_169:
        v137 = sub_868BC0((__int64)v7);
        if ( v126 && v137 )
        {
          v126[2] &= ~1uLL;
          v126[3] = v137;
        }
        goto LABEL_172;
      }
      sub_86E080(v7, 4, 4, 0, 13, 0);
      if ( *v7 )
        goto LABEL_172;
      v172 = *((_QWORD *)v7 + 10);
      v173 = *(_QWORD *)(v172 + 8);
      v174 = v173 + 16;
      if ( (unsigned __int64)(v173 + 16) <= 0xFF0 )
      {
        v176 = (__m128 *)(v172 + v173 + 16);
        *(_QWORD *)(v172 + 8) = v174;
        if ( v176 )
          goto LABEL_252;
      }
      else
      {
        v175 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v7 + 7))(
                           4096,
                           *(_QWORD *)(*((_QWORD *)v7 + 7) + 16LL));
        if ( v175 )
        {
          v175->m128_u64[0] = *((_QWORD *)v7 + 10);
          *((_QWORD *)v7 + 10) = v175;
          v176 = v175 + 1;
          v176[-1].m128_u64[1] = 16;
LABEL_252:
          *v176 = _mm_loadh_ps(a4);
          *(_QWORD *)a4 = v176;
          goto LABEL_172;
        }
        *v7 = 2;
      }
LABEL_172:
      v115 = 1;
LABEL_148:
      sub_86B8E0(v7, 33, 4, 0, 130, v115);
      sub_86E080(v7, 1, 1, 0, 127, *(unsigned __int8 *)(a1 + 217));
      if ( *v7 )
        goto LABEL_153;
      v116 = *((_QWORD *)v7 + 10);
      v117 = *(_QWORD *)(v116 + 8);
      v118 = v117 + 16;
      if ( (unsigned __int64)(v117 + 16) <= 0xFF0 )
      {
        v120 = (__m128 *)(v116 + v117 + 16);
        *(_QWORD *)(v116 + 8) = v118;
        if ( v120 )
          goto LABEL_152;
      }
      else
      {
        v119 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v7 + 7))(
                           4096,
                           *(_QWORD *)(*((_QWORD *)v7 + 7) + 16LL));
        if ( v119 )
        {
          v119->m128_u64[0] = *((_QWORD *)v7 + 10);
          *((_QWORD *)v7 + 10) = v119;
          v120 = v119 + 1;
          v120[-1].m128_u64[1] = 16;
LABEL_152:
          *v120 = _mm_loadh_ps(a4);
          *(_QWORD *)a4 = v120;
          goto LABEL_153;
        }
        *v7 = 2;
      }
LABEL_153:
      sub_86E080(v7, 1, 4, 0, 127, *(unsigned __int8 *)(a1 + 216));
      if ( !*v7 )
      {
        v121 = *((_QWORD *)v7 + 10);
        v122 = *(_QWORD *)(v121 + 8);
        v123 = v122 + 16;
        if ( (unsigned __int64)(v122 + 16) <= 0xFF0 )
        {
          v125 = (__m128 *)(v121 + v122 + 16);
          *(_QWORD *)(v121 + 8) = v123;
          if ( !v125 )
            goto LABEL_92;
        }
        else
        {
          v124 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v7 + 7))(
                             4096,
                             *(_QWORD *)(*((_QWORD *)v7 + 7) + 16LL));
          if ( !v124 )
          {
            *v7 = 2;
            goto LABEL_92;
          }
          v124->m128_u64[0] = *((_QWORD *)v7 + 10);
          *((_QWORD *)v7 + 10) = v124;
          v125 = v124 + 1;
          v125[-1].m128_u64[1] = 16;
        }
        *v125 = _mm_loadh_ps(a4);
        *(_QWORD *)a4 = v125;
      }
LABEL_92:
      v78 = sub_868BC0((__int64)v7);
      if ( v78 && v74 )
      {
        v74[2] &= ~1uLL;
        v74[3] = v78;
      }
      return a3;
    case 27:
      sub_86B8E0(*(unsigned int **)a1, 32, 1, 0, 137, 16);
      sub_86E080(v7, 4, 2, 0, 1, 0);
      if ( *v7 )
        goto LABEL_66;
      v53 = *((_QWORD *)v7 + 10);
      v54 = *(_QWORD *)(v53 + 8);
      v55 = v54 + 16;
      if ( (unsigned __int64)(v54 + 16) > 0xFF0 )
      {
        v56 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v7 + 7))(
                          4096,
                          *(_QWORD *)(*((_QWORD *)v7 + 7) + 16LL));
        if ( !v56 )
        {
          *v7 = 2;
          goto LABEL_66;
        }
        v56->m128_u64[0] = *((_QWORD *)v7 + 10);
        *((_QWORD *)v7 + 10) = v56;
        v57 = v56 + 1;
        v57[-1].m128_u64[1] = 16;
        goto LABEL_62;
      }
      v57 = (__m128 *)(v53 + v54 + 16);
      *(_QWORD *)(v53 + 8) = v55;
      if ( v57 )
      {
LABEL_62:
        *v57 = _mm_loadh_ps(a4);
        *(_QWORD *)a4 = v57;
      }
      if ( !*v7 )
      {
        v7[36] = 256;
        v58 = sub_867CC0((__int64)v7, 1u, 127, 1, 137, 88);
        if ( v58 )
          *v58 = -9;
      }
LABEL_66:
      v14 = 1;
      goto LABEL_9;
    case 28:
      sub_86B8E0(*(unsigned int **)a1, 32, 4, 0, 137, 16);
      v80 = sub_86E080(v7, 4, 2, 0, 4, 0);
      if ( !*v7 )
      {
        v7[36] = 256;
        v81 = sub_867CC0((__int64)v7, 1u, 127, 1, 137, 88);
        if ( v81 )
          *v81 = -9;
      }
      sub_868C70((__int64)v7, 1);
      if ( *v7 )
        goto LABEL_107;
      v82 = *((_QWORD *)v7 + 10);
      v83 = *(_QWORD *)(v82 + 8);
      v84 = v83 + 16;
      if ( (unsigned __int64)(v83 + 16) <= 0xFF0 )
      {
        v86 = (__m128 *)(v82 + v83 + 16);
        *(_QWORD *)(v82 + 8) = v84;
        if ( v86 )
          goto LABEL_106;
      }
      else
      {
        v85 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v7 + 7))(
                          4096,
                          *(_QWORD *)(*((_QWORD *)v7 + 7) + 16LL));
        if ( v85 )
        {
          v85->m128_u64[0] = *((_QWORD *)v7 + 10);
          *((_QWORD *)v7 + 10) = v85;
          v86 = v85 + 1;
          v86[-1].m128_u64[1] = 16;
LABEL_106:
          *v86 = _mm_loadh_ps(a4);
          *(_QWORD *)a4 = v86;
          goto LABEL_107;
        }
        *v7 = 2;
      }
LABEL_107:
      v74 = sub_868C70((__int64)v7, 36);
      v87 = sub_868BC0((__int64)v7);
      if ( v87 && v80 )
      {
        v80[2] &= ~1uLL;
        v80[3] = v87;
      }
      if ( *(_DWORD *)(a1 + 484) )
        goto LABEL_111;
      sub_86E080(v7, 3, 2, 0, 13, 0);
      if ( *v7 )
        goto LABEL_111;
      v157 = *((_QWORD *)v7 + 10);
      v158 = *(_QWORD *)(v157 + 8);
      v159 = v158 + 16;
      if ( (unsigned __int64)(v158 + 16) <= 0xFF0 )
      {
        v161 = (__m128 *)(v157 + v158 + 16);
        *(_QWORD *)(v157 + 8) = v159;
        if ( !v161 )
          goto LABEL_111;
      }
      else
      {
        v160 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v7 + 7))(
                           4096,
                           *(_QWORD *)(*((_QWORD *)v7 + 7) + 16LL));
        if ( !v160 )
        {
          *v7 = 2;
          goto LABEL_111;
        }
        v160->m128_u64[0] = *((_QWORD *)v7 + 10);
        *((_QWORD *)v7 + 10) = v160;
        v161 = v160 + 1;
        v161[-1].m128_u64[1] = 16;
      }
      *v161 = _mm_loadh_ps(a4);
      *(_QWORD *)a4 = v161;
LABEL_111:
      if ( *(_DWORD *)(a1 + 204) || *(int *)(a1 + 216) <= 255 )
      {
        v76 = *(unsigned int **)a1;
        v77 = -1;
LABEL_91:
        sub_86B8E0(v76, 33, 1, 0, 130, v77);
        sub_86E120((const double *)a1, *(_DWORD *)(a1 + 204), a4, 0);
        goto LABEL_92;
      }
      sub_86D900(v7, 0x42u, 1, 0, 2, 0, 0x7Fu, 2);
      sub_86E080(v7, 2, 1, 0, 4, 0);
      if ( *v7 )
        goto LABEL_147;
      v110 = *((_QWORD *)v7 + 10);
      v111 = *(_QWORD *)(v110 + 8);
      v112 = v111 + 16;
      if ( (unsigned __int64)(v111 + 16) <= 0xFF0 )
      {
        v114 = (__m128 *)(v110 + v111 + 16);
        *(_QWORD *)(v110 + 8) = v112;
        if ( !v114 )
          goto LABEL_147;
      }
      else
      {
        v113 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v7 + 7))(
                           4096,
                           *(_QWORD *)(*((_QWORD *)v7 + 7) + 16LL));
        if ( !v113 )
        {
          *v7 = 2;
          goto LABEL_147;
        }
        v113->m128_u64[0] = *((_QWORD *)v7 + 10);
        *((_QWORD *)v7 + 10) = v113;
        v114 = v113 + 1;
        v114[-1].m128_u64[1] = 16;
      }
      *v114 = _mm_loadh_ps(a4);
      *(_QWORD *)a4 = v114;
LABEL_147:
      sub_86B8E0(v7, 33, 1, 0, 130, -2);
      v115 = -1;
      goto LABEL_148;
    default:
      v8 = (double *)(a1 + 416);
      sub_868C70(*(_QWORD *)a1, 37);
LABEL_3:
      if ( *v7 )
        goto LABEL_8;
      v9 = *((_QWORD *)v7 + 10);
      v10 = *(_QWORD *)(v9 + 8);
      v11 = v10 + 16;
      if ( (unsigned __int64)(v10 + 16) <= 0xFF0 )
      {
        v13 = (__m128 *)(v9 + v10 + 16);
        *(_QWORD *)(v9 + 8) = v11;
        if ( v13 )
          goto LABEL_7;
      }
      else
      {
        v12 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v7 + 7))(
                          4096,
                          *(_QWORD *)(*((_QWORD *)v7 + 7) + 16LL));
        if ( v12 )
        {
          v12->m128_u64[0] = *((_QWORD *)v7 + 10);
          *((_QWORD *)v7 + 10) = v12;
          v13 = v12 + 1;
          v13[-1].m128_u64[1] = 16;
LABEL_7:
          *v13 = _mm_loadh_ps(v8);
          *(_QWORD *)v8 = v13;
          goto LABEL_8;
        }
        *v7 = 2;
      }
LABEL_8:
      v14 = a2 == -85 || a2 == 4;
LABEL_9:
      sub_868C70((__int64)v7, v14);
      if ( !*v7 )
      {
LABEL_10:
        v15 = *((_QWORD *)v7 + 10);
        v16 = *(_QWORD *)(v15 + 8);
        v17 = v16 + 16;
        if ( (unsigned __int64)(v16 + 16) <= 0xFF0 )
        {
          v19 = (__m128 *)(v15 + v16 + 16);
          *(_QWORD *)(v15 + 8) = v17;
          if ( !v19 )
            return a3;
        }
        else
        {
          v18 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v7 + 7))(
                            4096,
                            *(_QWORD *)(*((_QWORD *)v7 + 7) + 16LL));
          if ( !v18 )
          {
            *v7 = 2;
            return a3;
          }
          v18->m128_u64[0] = *((_QWORD *)v7 + 10);
          *((_QWORD *)v7 + 10) = v18;
          v19 = v18 + 1;
          v19[-1].m128_u64[1] = 16;
        }
        *v19 = _mm_loadh_ps(a4);
        *(_QWORD *)a4 = v19;
      }
      return a3;
  }
}
