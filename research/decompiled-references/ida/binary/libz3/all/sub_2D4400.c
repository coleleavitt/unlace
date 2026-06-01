__int64 __fastcall sub_2D4400(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, int a5, int a6)
{
  __int64 v7; // rax
  int v8; // r9d
  __int64 v9; // r13
  __int64 v10; // rbx
  int v11; // r15d
  __int64 v12; // r14
  void *v13; // rdx
  bool v14; // zf
  _QWORD *v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 result; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r14
  int v24; // r15d
  _DWORD *v25; // rax
  __int64 v26; // rax
  unsigned int v27; // r15d
  _QWORD *v28; // rdx
  __int64 v29; // rax
  unsigned int *v30; // rax
  __int64 v31; // rax
  int v32; // esi
  _QWORD *v33; // r15
  __int64 v34; // rax
  _QWORD *v35; // r13
  __int64 v36; // rdx
  _QWORD *v37; // rdi
  _QWORD *v38; // rdx
  unsigned int i; // r15d
  _QWORD *v40; // rax
  __int64 v41; // r14
  unsigned int v42; // eax
  _BYTE *v43; // rdx
  unsigned int v44; // eax
  __int64 v45; // rcx
  int v46; // eax
  _BYTE *v47; // rcx
  unsigned int v48; // edi
  size_t v49; // rsi
  unsigned int *v50; // rax
  unsigned int v51; // edi
  unsigned int v52; // ecx
  unsigned int *v53; // rax
  _QWORD *v54; // rcx
  int v55; // eax
  _QWORD *v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // r14
  __int64 v59; // r13
  __int64 v60; // rsi
  __int64 v61; // rax
  __int64 v62; // rbx
  __int64 v63; // rax
  __int64 v64; // r14
  _QWORD *v65; // rdx
  unsigned int v66; // eax
  __int64 v67; // rcx
  int v68; // eax
  __int64 v69; // rbx
  _QWORD *v70; // rdx
  __int64 *v71; // r13
  __int64 *v72; // r15
  int *v73; // rax
  int v74; // r14d
  __int64 v75; // rax
  int *v76; // rax
  int v77; // r14d
  unsigned int v78; // ecx
  size_t v79; // rsi
  unsigned int *v80; // rax
  __int64 v81; // rdx
  __int64 v82; // r13
  __int64 v83; // r15
  __int64 v84; // rsi
  __int64 v85; // rax
  __int64 v86; // rbx
  _QWORD *v87; // rax
  unsigned int v88; // r15d
  unsigned int v89; // edx
  __int64 *v90; // r14
  __int64 v91; // r13
  __int64 v92; // rsi
  __int64 *v93; // rax
  __int64 *v94; // r8
  __int64 v95; // rdi
  __int64 v96; // rdi
  __int64 *v97; // rcx
  unsigned __int64 v98; // r13
  __int64 v99; // rsi
  __int64 v100; // rdi
  unsigned int v101; // edi
  unsigned int *v102; // rax
  __int64 v103; // rcx
  _QWORD *v104; // rbx
  unsigned int v105; // r15d
  unsigned int v106; // ecx
  unsigned int *v107; // rax
  __int64 v108; // rcx
  unsigned __int8 v109; // cl
  _DWORD *v110; // rsi
  _QWORD *v111; // rax
  __int64 v112; // rbx
  __int64 v113; // rax
  __int64 v114; // rsi
  int v115; // ecx
  int v116; // r8d
  int v117; // r9d
  _QWORD *v118; // r15
  void *v119; // rdi
  void *v120; // rdi
  __int64 v121; // rax
  __int64 v122; // rax
  void (__fastcall ***v123)(_QWORD); // r13
  void *v124; // rdi
  void (__fastcall ****v125)(_QWORD); // r13
  void (__fastcall ****v126)(_QWORD); // rax
  void (__fastcall ***v127)(_QWORD); // r14
  _QWORD *v128; // rax
  __int64 v129; // rax
  __int64 v130; // r15
  __int64 v131; // r13
  __int64 v132; // r14
  __int64 v133; // r13
  __int64 v134; // rax
  _QWORD *v135; // r15
  unsigned int v136; // eax
  __int64 *v137; // rcx
  unsigned __int64 v138; // r14
  __int64 v139; // rsi
  __int64 v140; // rdi
  void *v141; // rdi
  _QWORD *v142; // rcx
  _QWORD *v143; // r15
  void (__fastcall ***v144)(_QWORD); // r14
  __int64 v145; // rax
  __int64 v146; // rax
  char *v147; // r15
  int v148; // eax
  char *v149; // r14
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rdi
  __int64 v153; // rcx
  unsigned int v154; // eax
  __int64 v155; // r14
  __int64 v156; // rax
  __int64 v157; // r15
  __int64 v158; // rcx
  unsigned int v159; // eax
  __int64 v160; // r14
  __int64 v161; // rax
  __int64 v162; // r15
  __int64 v163; // rax
  __int64 v164; // rax
  __int64 v165; // rax
  __int64 v166; // rax
  __int64 v167; // rax
  __int64 v168; // rax
  _QWORD *v169; // rax
  _QWORD *v170; // rcx
  _QWORD *v171; // r15
  __int64 v172; // rax
  _QWORD *v173; // rdi
  __int64 v174; // rax
  _QWORD *v175; // rax
  _QWORD *v176; // rax
  char **v177; // r12
  char **v178; // rbx
  char **exception; // r12
  struct _Unwind_Exception *v180; // [rsp+0h] [rbp-90h]
  unsigned int v181; // [rsp+4h] [rbp-8Ch]
  _DWORD *v182; // [rsp+8h] [rbp-88h]
  int v183; // [rsp+8h] [rbp-88h]
  int v184; // [rsp+8h] [rbp-88h]
  char v185[8]; // [rsp+10h] [rbp-80h]
  unsigned int v186; // [rsp+10h] [rbp-80h]
  char v187[8]; // [rsp+10h] [rbp-80h]
  char v188[8]; // [rsp+10h] [rbp-80h]
  char v189[8]; // [rsp+10h] [rbp-80h]
  char v190[8]; // [rsp+10h] [rbp-80h]
  _QWORD *v191; // [rsp+18h] [rbp-78h]
  _DWORD *v192; // [rsp+18h] [rbp-78h]
  _QWORD *v193; // [rsp+18h] [rbp-78h]
  __int64 *v194; // [rsp+18h] [rbp-78h]
  __int64 *v195; // [rsp+18h] [rbp-78h]
  _QWORD *v196; // [rsp+18h] [rbp-78h]
  char *v197; // [rsp+18h] [rbp-78h]
  int v198; // [rsp+20h] [rbp-70h] BYREF
  int v199; // [rsp+24h] [rbp-6Ch] BYREF
  void *v200; // [rsp+28h] [rbp-68h] BYREF
  __int64 v201; // [rsp+30h] [rbp-60h] BYREF
  __int64 v202; // [rsp+38h] [rbp-58h] BYREF
  int v203[2]; // [rsp+40h] [rbp-50h] BYREF
  __int64 v204; // [rsp+48h] [rbp-48h]

  if ( *(_BYTE *)(a1 + 80) )
  {
    v69 = *(_QWORD *)(a1 + 88);
    *(_QWORD *)v203 = 0;
    if ( !v69 )
    {
      v69 = sub_186B270(0x13D8u);
      sub_7FA590(v69, *(_QWORD *)(a1 + 16), (int)v203, v115, v116, v117, v180);
      v118 = *(_QWORD **)(a1 + 88);
      if ( (_QWORD *)v69 != v118 )
      {
        if ( v118 )
        {
          v119 = (void *)v118[631];
          if ( v119 )
            sub_186B220(v119);
          v120 = (void *)v118[628];
          if ( v120 )
            sub_186B220(v120);
          v121 = v118[626];
          if ( v121 )
            sub_186B220((void *)(v121 - 8));
          v122 = v118[625];
          if ( v122 )
            sub_186B220((void *)(v122 - 8));
          sub_11ECBE0(v118 + 542);
          sub_11C05E0(v118 + 9);
          v123 = (void (__fastcall ***)(_QWORD))v118[7];
          if ( v123 )
          {
            (**v123)(v118[7]);
            sub_186B220(v123);
          }
          v124 = (void *)v118[4];
          if ( v124 )
            sub_186B220(v124);
          v125 = (void (__fastcall ****)(_QWORD))v118[3];
          if ( v125 )
          {
            v126 = &v125[*((unsigned int *)v125 - 1)];
            if ( v125 == v126 )
              goto LABEL_174;
            do
            {
              v127 = *v125;
              if ( *v125 )
              {
                *(_QWORD *)v189 = v126;
                (**v127)(v127);
                sub_186B220(v127);
                v126 = *(void (__fastcall *****)(_QWORD))v189;
              }
              ++v125;
            }
            while ( v126 != v125 );
            v126 = (void (__fastcall ****)(_QWORD))v118[3];
            if ( v126 )
            {
LABEL_174:
              *((_DWORD *)v126 - 1) = 0;
              sub_186B220(v126 - 1);
            }
          }
          sub_18572D0(v118 + 1);
          sub_186B220(v118);
        }
        *(_QWORD *)(a1 + 88) = v69;
      }
    }
    sub_18572D0(v203);
    if ( *(_BYTE *)(v69 + 5016) )
    {
      v70 = *(_QWORD **)(v69 + 5008);
      if ( v70 )
        *((_DWORD *)v70 - 1) = 0;
      v71 = *(__int64 **)(a1 + 48);
      if ( v71 )
      {
        v72 = &v71[*((unsigned int *)v71 - 1)];
        if ( v71 != v72 )
        {
          v73 = (int *)*v71;
          if ( !*(_WORD *)(*v71 + 4) )
            goto LABEL_137;
          v74 = 2 * *v73;
          if ( v70 )
            goto LABEL_94;
LABEL_141:
          v111 = (_QWORD *)sub_186B270(0x10u);
          *v111 = 2;
          v70 = v111 + 1;
          *(_QWORD *)(v69 + 5008) = v111 + 1;
          v76 = (int *)(v111 + 1);
LABEL_96:
          ++v71;
          *v76 = v74;
          ++*((_DWORD *)v70 - 1);
          for ( ; v72 != v71; v80[v80[1]++ + 2] = v74 )
          {
            v73 = (int *)*v71;
            if ( *(_WORD *)(*v71 + 4) )
            {
              v77 = *v73;
              v75 = *((unsigned int *)v70 - 1);
              v74 = 2 * v77;
              if ( (_DWORD)v75 != *((_DWORD *)v70 - 2) )
              {
LABEL_95:
                v76 = (int *)v70 + v75;
                goto LABEL_96;
              }
            }
            else
            {
LABEL_137:
              v109 = 0;
              do
              {
                v110 = *(_DWORD **)(*((_QWORD *)v73 + 2) + 24LL);
                if ( !v110 )
                  break;
                if ( *v110 )
                  break;
                if ( v110[1] != 8 )
                  break;
                if ( v73[6] != 1 )
                  break;
                v73 = *((int **)v73 + 4);
                v109 ^= 1u;
              }
              while ( !*((_WORD *)v73 + 2) );
              v74 = v109 + 2 * *v73;
              if ( !v70 )
                goto LABEL_141;
LABEL_94:
              v75 = *((unsigned int *)v70 - 1);
              if ( (_DWORD)v75 != *((_DWORD *)v70 - 2) )
                goto LABEL_95;
            }
            v78 = (unsigned int)(3 * v75 + 1) >> 1;
            v79 = 4 * v78 + 8;
            if ( 4 * (int)v75 + 8 >= (unsigned int)v79 || (unsigned int)v75 >= v78 )
              goto LABEL_276;
            v186 = (unsigned int)(3 * v75 + 1) >> 1;
            ++v71;
            v80 = (unsigned int *)sub_186B300(v70 - 1, v79);
            v70 = v80 + 2;
            *(_QWORD *)(v69 + 5008) = v80 + 2;
            *v80 = v186;
          }
        }
      }
      v204 = 0;
      *(_QWORD *)v203 = 0xFFFFFFFF00000000LL;
      sub_11F1890(v69 + 4336, v69 + 5008, v203);
      if ( *(_BYTE *)(v69 + 5016) )
      {
        sub_7F5740(v69);
        v81 = *(_QWORD *)(a1 + 48);
        v82 = *(_QWORD *)(v69 + 56);
        v83 = *(_QWORD *)(a1 + 40);
        if ( v81 )
          v84 = *(unsigned int *)(v81 - 4);
        else
          v84 = 0;
        v85 = sub_15EC240(*(_QWORD *)(a1 + 40), v84);
        v86 = v85;
        if ( v85 )
        {
          ++*(_DWORD *)(v85 + 8);
          sub_E5EBF0(v82, v85);
          v14 = (*(_DWORD *)(v86 + 8))-- == 1;
          if ( v14 )
            sub_15D7BC0(v83, v86);
        }
        else
        {
          sub_E5EBF0(v82, 0);
        }
      }
    }
  }
  if ( *(_BYTE *)(a1 + 81) )
  {
    v56 = *(_QWORD **)(a1 + 96);
    if ( v56 )
    {
LABEL_74:
      v57 = *(_QWORD *)(a1 + 48);
      v58 = v56[1];
      v59 = *(_QWORD *)(a1 + 40);
      v193 = *(_QWORD **)(*v56 + 864LL);
      if ( v57 )
        v60 = *(unsigned int *)(v57 - 4);
      else
        v60 = 0;
      v61 = sub_15EC240(v59, v60);
      v62 = v61;
      if ( v61 )
        ++*(_DWORD *)(v61 + 8);
      v63 = sub_15E0870(v58, 0, v61);
      v64 = v63;
      if ( v63 )
        ++*(_DWORD *)(v63 + 8);
      v65 = (_QWORD *)v193[3];
      if ( v65 )
      {
        v66 = *((_DWORD *)v65 - 1);
        if ( v66 == *((_DWORD *)v65 - 2) )
        {
          v105 = (3 * v66 + 1) >> 1;
          v106 = 8 * v105 + 8;
          if ( 8 * v66 + 8 >= v106 || v66 >= v105 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v203, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v203);
            sub_233E40((__int64)v203);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v107 = (unsigned int *)sub_186B300(v65 - 1, v106);
          v65 = v107 + 2;
          v193[3] = v107 + 2;
          v108 = v107[1];
          *v107 = v105;
          LODWORD(v107) = v108;
          a4 = &v65[v108];
          v68 = (_DWORD)v107 + 1;
        }
        else
        {
          v67 = v66;
          v68 = v66 + 1;
          a4 = &v65[v67];
        }
      }
      else
      {
        v175 = (_QWORD *)sub_186B270(0x18u);
        *v175 = 2;
        v65 = v175 + 1;
        v193[3] = v175 + 1;
        a4 = v175 + 1;
        v68 = 1;
      }
      *a4 = v64;
      *((_DWORD *)v65 - 1) = v68;
      if ( v62 )
      {
        v14 = (*(_DWORD *)(v62 + 8))-- == 1;
        if ( v14 )
          sub_15D7BC0(v59, v62);
      }
      goto LABEL_3;
    }
    v169 = (_QWORD *)sub_186B270(0x10u);
    v170 = *(_QWORD **)(a1 + 8);
    v56 = v169;
    *v169 = v170;
    v171 = v170;
    sub_DFBCB0(v170);
    v56[1] = v171[37];
    v172 = v171[108];
    if ( v172 )
    {
      if ( v171[109] )
        goto LABEL_250;
    }
    else
    {
      v174 = sub_3743C0(&qword_18D6CD0);
      sub_DFF0A0(v171, v174);
      if ( v171[109] )
        goto LABEL_250;
      v172 = v171[108];
      if ( !v172 )
      {
LABEL_256:
        v171[109] = v172;
LABEL_250:
        v173 = *(_QWORD **)(a1 + 96);
        if ( v56 != v173 )
        {
          if ( v173 )
            sub_186B220(v173);
          *(_QWORD *)(a1 + 96) = v56;
        }
        goto LABEL_74;
      }
    }
    ++*(_DWORD *)(v172 + 48);
    goto LABEL_256;
  }
LABEL_3:
  if ( !*(_BYTE *)(a1 + 82) )
  {
    v191 = *(_QWORD **)(a1 + 48);
    goto LABEL_5;
  }
  v21 = *(_QWORD *)(a1 + 104);
  if ( !v21 )
  {
    v129 = sub_186B270(0x1168u);
    v130 = *(_QWORD *)(a1 + 8);
    v21 = v129;
    v131 = v129 + 8;
    sub_DFBCB0(v130);
    v132 = *(_QWORD *)(v130 + 296);
    *(_QWORD *)v21 = v132;
    sub_17F9A60(v203, "sat");
    sub_118B450(v131, v203, v132);
    sub_18572D0(v203);
    sub_7F80F0(v21 + 4384, *(_QWORD *)v21);
    *(_BYTE *)(v21 + 4448) = 0;
    *(_QWORD *)(v21 + 4440) = 0;
    *(_OWORD *)(v21 + 4424) = 0;
    sub_180C5A0(v203, "rup");
    v133 = *(_QWORD *)(a1 + 104);
    *(_QWORD *)(v21 + 4440) = *(_QWORD *)v203;
    if ( v21 != v133 )
    {
      if ( v133 )
      {
        v134 = *(_QWORD *)(v133 + 4432);
        if ( v134 )
          sub_186B220((void *)(v134 - 8));
        v135 = *(_QWORD **)(v133 + 4424);
        if ( v135 )
        {
          v136 = *((_DWORD *)v135 - 1);
          if ( v136 )
          {
            *(_QWORD *)v190 = &v135[2 * v136];
            do
            {
              v137 = (__int64 *)v135[1];
              v195 = v137;
              if ( v137 )
              {
                v138 = (unsigned __int64)&v137[*((unsigned int *)v137 - 1)];
                if ( (unsigned __int64)v137 >= v138 )
                  goto LABEL_195;
                do
                {
                  while ( 1 )
                  {
                    v139 = *v195;
                    if ( *v195 )
                    {
                      v140 = *v135;
                      v14 = (*(_DWORD *)(v139 + 8))-- == 1;
                      if ( v14 )
                        break;
                    }
                    if ( (unsigned __int64)++v195 >= v138 )
                      goto LABEL_194;
                  }
                  sub_15D7BC0(v140, v139);
                  ++v195;
                }
                while ( (unsigned __int64)v195 < v138 );
LABEL_194:
                v195 = (__int64 *)v135[1];
                if ( v195 )
LABEL_195:
                  sub_186B220(v195 - 1);
              }
              v135 += 2;
            }
            while ( v135 != *(_QWORD **)v190 );
            v135 = *(_QWORD **)(v133 + 4424);
          }
          sub_186B220(v135 - 1);
        }
        v141 = *(void **)(v133 + 4400);
        if ( v141 )
          sub_186B220(v141);
        v142 = *(_QWORD **)(v133 + 4392);
        v196 = v142;
        if ( v142 )
        {
          v143 = &v142[*((unsigned int *)v142 - 1)];
          if ( v142 == v143 )
            goto LABEL_207;
          do
          {
            v144 = (void (__fastcall ***)(_QWORD))*v196;
            if ( *v196 )
            {
              (**v144)(*v196);
              sub_186B220(v144);
            }
            ++v196;
          }
          while ( v143 != v196 );
          v143 = *(_QWORD **)(v133 + 4392);
          if ( v143 )
          {
LABEL_207:
            *((_DWORD *)v143 - 1) = 0;
            sub_186B220(v143 - 1);
          }
        }
        v145 = *(_QWORD *)(v133 + 4376);
        if ( v145 )
          sub_186B220((void *)(v145 - 8));
        v146 = *(_QWORD *)(v133 + 4368);
        if ( v146 )
          sub_186B220((void *)(v146 - 8));
        v147 = *(char **)(v133 + 4344);
        if ( v147 )
        {
          v148 = *(_DWORD *)(v133 + 4352);
          if ( v148 )
          {
            v197 = *(char **)(v133 + 4344);
            v149 = &v147[32 * v148];
            do
            {
              while ( 1 )
              {
                v150 = *((_QWORD *)v197 + 2);
                if ( v150 )
                  sub_186B220((void *)(v150 - 8));
                v151 = *((_QWORD *)v197 + 1);
                if ( !v151 )
                  break;
                sub_186B220((void *)(v151 - 8));
                v197 += 32;
                if ( v197 == v149 )
                  goto LABEL_219;
              }
              v197 += 32;
            }
            while ( v197 != v149 );
          }
LABEL_219:
          sub_186B220(v147);
        }
        v152 = *(_QWORD *)(v133 + 4336);
        v153 = v152;
        if ( v152 )
        {
          v154 = *(_DWORD *)(v152 - 4);
          if ( v154 )
          {
            v155 = v152 + 16LL * v154;
            do
            {
              while ( 1 )
              {
                v156 = *(_QWORD *)(v153 + 8);
                if ( !v156 )
                  break;
                v157 = v153 + 16;
                sub_186B220((void *)(v156 - 8));
                v153 = v157;
                if ( v155 == v157 )
                  goto LABEL_225;
              }
              v153 += 16;
            }
            while ( v155 != v153 );
LABEL_225:
            v153 = *(_QWORD *)(v133 + 4336);
          }
          sub_186B220((void *)(v153 - 8));
        }
        v158 = *(_QWORD *)(v133 + 4328);
        if ( v158 )
        {
          v159 = *(_DWORD *)(v158 - 4);
          if ( v159 )
          {
            v160 = v158 + 32LL * v159;
            do
            {
              while ( 1 )
              {
                v161 = *(_QWORD *)(v158 + 16);
                if ( !v161 )
                  break;
                v162 = v158 + 32;
                sub_186B220((void *)(v161 - 8));
                v158 = v162;
                if ( v160 == v162 )
                  goto LABEL_232;
              }
              v158 += 32;
            }
            while ( v160 != v158 );
LABEL_232:
            v158 = *(_QWORD *)(v133 + 4328);
          }
          sub_186B220((void *)(v158 - 8));
        }
        v163 = *(_QWORD *)(v133 + 4312);
        if ( v163 )
          sub_186B220((void *)(v163 - 8));
        v164 = *(_QWORD *)(v133 + 4304);
        if ( v164 )
          sub_186B220((void *)(v164 - 8));
        v165 = *(_QWORD *)(v133 + 4296);
        if ( v165 )
          sub_186B220((void *)(v165 - 8));
        v166 = *(_QWORD *)(v133 + 4288);
        if ( v166 )
          sub_186B220((void *)(v166 - 8));
        v167 = *(_QWORD *)(v133 + 4280);
        if ( v167 )
          sub_186B220((void *)(v167 - 8));
        v168 = *(_QWORD *)(v133 + 4272);
        if ( v168 )
          sub_186B220((void *)(v168 - 8));
        sub_11C05E0(v133 + 8);
        sub_186B220((void *)v133);
      }
      *(_QWORD *)(a1 + 104) = v21;
    }
  }
  v22 = *(_QWORD *)(v21 + 4272);
  if ( v22 )
    *(_DWORD *)(v22 - 4) = 0;
  v23 = *(_QWORD *)(a1 + 48);
  if ( v23 )
  {
    for ( *(_QWORD *)v185 = v23 + 8LL * *(unsigned int *)(v23 - 4); *(_QWORD *)v185 != v23; ++*((_DWORD *)v28 - 1) )
    {
      v24 = 0;
      v192 = *(_DWORD **)v23;
      if ( !*(_WORD *)(*(_QWORD *)v23 + 4LL) )
      {
        v25 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)v23 + 16LL) + 24LL);
        if ( v25 )
        {
          if ( !*v25 && v25[1] == 8 )
          {
            v24 = v192[6];
            if ( v24 == 1 )
              v192 = *((_DWORD **)v192 + 4);
            else
              v24 = 0;
          }
        }
      }
      while ( 1 )
      {
        v26 = *(_QWORD *)(v21 + 3304);
        if ( v26 )
        {
          LODWORD(a4) = (_DWORD)v192;
          if ( *v192 < *(_DWORD *)(v26 - 4) )
            break;
        }
        sub_11CA540(v21 + 8, 1, 1);
      }
      v27 = v24 + 2 * *v192;
      v28 = *(_QWORD **)(v21 + 4272);
      if ( v28 )
      {
        v29 = *((unsigned int *)v28 - 1);
        if ( (_DWORD)v29 == *((_DWORD *)v28 - 2) )
        {
          v48 = (unsigned int)(3 * v29 + 1) >> 1;
          v49 = 4 * v48 + 8;
          if ( 4 * (int)v29 + 8 >= (unsigned int)v49 || (unsigned int)v29 >= v48 )
            goto LABEL_276;
          v50 = (unsigned int *)sub_186B300(v28 - 1, v49);
          LODWORD(a4) = v48;
          v28 = v50 + 2;
          *(_QWORD *)(v21 + 4272) = v50 + 2;
          *v50 = v48;
          v30 = &v50[v50[1] + 2];
        }
        else
        {
          v30 = (unsigned int *)v28 + v29;
        }
      }
      else
      {
        v87 = (_QWORD *)sub_186B270(0x10u);
        v28 = v87 + 1;
        *v87 = 2;
        *(_QWORD *)(v21 + 4272) = v87 + 1;
        v30 = (unsigned int *)(v87 + 1);
      }
      *v30 = v27;
      v23 += 8;
    }
  }
  v31 = *(_QWORD *)(v21 + 4424);
  if ( v31 )
    v32 = *(_DWORD *)(v31 - 4);
  else
    v32 = 0;
  sub_1189DB0(v21 + 8, v32, 1, (_DWORD)a4, a5, a6, (_DWORD)v180);
  v33 = *(_QWORD **)(v21 + 4424);
  if ( v33 )
  {
    LODWORD(v34) = *((_DWORD *)v33 - 1);
    v35 = &v33[2 * (unsigned int)v34];
    if ( (_DWORD)v34 == *((_DWORD *)v33 - 2) )
    {
      v88 = (unsigned int)(3 * v34 + 1) >> 1;
      v181 = v88;
      v89 = 16 * v88 + 8;
      if ( 16 * (int)v34 + 8 >= v89 || (unsigned int)v34 >= v88 )
        goto LABEL_276;
      v34 = sub_186B270(v89);
      v90 = *(__int64 **)(v21 + 4424);
      v182 = (_DWORD *)v34;
      v33 = (_QWORD *)(v34 + 8);
      if ( v90 )
      {
        v91 = *((unsigned int *)v90 - 1);
        v92 = v34 + 8;
        *(_DWORD *)(v34 + 4) = v91;
        v93 = v90;
        v94 = &v90[2 * v91];
        if ( v90 != v94 )
        {
          do
          {
            v95 = *v93;
            v93 += 2;
            v92 += 16;
            *(_QWORD *)(v92 - 16) = v95;
            v96 = *(v93 - 1);
            *(v93 - 1) = 0;
            *(_QWORD *)(v92 - 8) = v96;
          }
          while ( v93 != v94 );
        }
        *(_QWORD *)v187 = &v90[2 * v91];
        if ( (_DWORD)v91 )
        {
          do
          {
            v97 = (__int64 *)v90[1];
            v194 = v97;
            if ( v97 )
            {
              v98 = (unsigned __int64)&v97[*((unsigned int *)v97 - 1)];
              if ( (unsigned __int64)v97 >= v98 )
                goto LABEL_126;
              do
              {
                while ( 1 )
                {
                  v99 = *v194;
                  if ( *v194 )
                  {
                    v100 = *v90;
                    v14 = (*(_DWORD *)(v99 + 8))-- == 1;
                    if ( v14 )
                      break;
                  }
                  if ( (unsigned __int64)++v194 >= v98 )
                    goto LABEL_125;
                }
                sub_15D7BC0(v100, v99);
                ++v194;
              }
              while ( (unsigned __int64)v194 < v98 );
LABEL_125:
              v194 = (__int64 *)v90[1];
              if ( v194 )
LABEL_126:
                sub_186B220(v194 - 1);
            }
            v90 += 2;
          }
          while ( v90 != *(__int64 **)v187 );
          v90 = *(__int64 **)(v21 + 4424);
        }
        sub_186B220(v90 - 1);
        v34 = (unsigned int)v182[1];
        v35 = &v33[2 * v34];
      }
      else
      {
        *(_DWORD *)(v34 + 4) = 0;
        v35 = (_QWORD *)(v34 + 8);
        LODWORD(v34) = 0;
      }
      *(_QWORD *)(v21 + 4424) = v33;
      *v182 = v181;
    }
  }
  else
  {
    v34 = sub_186B270(0x28u);
    v33 = (_QWORD *)(v34 + 8);
    *(_QWORD *)v34 = 2;
    LODWORD(v34) = 0;
    *(_QWORD *)(v21 + 4424) = v33;
    v35 = v33;
  }
  v36 = *(_QWORD *)(a1 + 40);
  v35[1] = 0;
  v37 = *(_QWORD **)(a1 + 48);
  *v35 = v36;
  v191 = v37;
  if ( v37 )
  {
    v38 = nullptr;
    for ( i = 0; ; ++i )
    {
      v40 = v191;
      if ( i >= *((_DWORD *)v191 - 1) )
        break;
      while ( 1 )
      {
        v41 = v40[i];
        if ( v41 )
          ++*(_DWORD *)(v41 + 8);
        if ( !v38 )
        {
          v128 = (_QWORD *)sub_186B270(0x18u);
          *v128 = 2;
          v38 = v128 + 1;
          v35[1] = v128 + 1;
          v54 = v128 + 1;
          v191 = *(_QWORD **)(a1 + 48);
          v55 = 1;
          goto LABEL_71;
        }
        v42 = *((_DWORD *)v38 - 1);
        if ( v42 == *((_DWORD *)v38 - 2) )
          break;
        ++i;
        v38[v42] = v41;
        *((_DWORD *)v38 - 1) = v42 + 1;
        v40 = v191;
        if ( i >= *((_DWORD *)v191 - 1) )
          goto LABEL_60;
      }
      v51 = (3 * v42 + 1) >> 1;
      v52 = 8 * v51 + 8;
      if ( 8 * v42 + 8 >= v52 || v42 >= v51 )
      {
        v177 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v203, "Overflow encountered when expanding vector");
        *v177 = (char *)off_1C63128;
        sub_2333C0(v177 + 1, v203);
        sub_233E40((__int64)v203);
        __cxa_throw(v177, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v53 = (unsigned int *)sub_186B300(v38 - 1, v52);
      v38 = v53 + 2;
      v35[1] = v53 + 2;
      *v53 = v51;
      v191 = *(_QWORD **)(a1 + 48);
      LODWORD(v53) = v53[1];
      v54 = &v38[(unsigned int)v53];
      v55 = (_DWORD)v53 + 1;
LABEL_71:
      *v54 = v41;
      *((_DWORD *)v38 - 1) = v55;
      if ( !v191 )
        break;
    }
LABEL_60:
    v33 = *(_QWORD **)(v21 + 4424);
    LODWORD(v34) = *((_DWORD *)v33 - 1);
  }
  v43 = *(_BYTE **)(v21 + 4432);
  *((_DWORD *)v33 - 1) = v34 + 1;
  if ( !v43 )
  {
    v176 = (_QWORD *)sub_186B270(0xAu);
    *v176 = 2;
    v43 = v176 + 1;
    v191 = *(_QWORD **)(a1 + 48);
    v47 = v43;
    v46 = 1;
    *(_QWORD *)(v21 + 4432) = v43;
    goto LABEL_64;
  }
  v44 = *((_DWORD *)v43 - 1);
  if ( v44 == *((_DWORD *)v43 - 2) )
  {
    v101 = (3 * v44 + 1) >> 1;
    if ( v44 + 8 < v101 + 8 && v44 < v101 )
    {
      v102 = (unsigned int *)sub_186B300(v43 - 8, v101 + 8);
      v43 = v102 + 2;
      v103 = v102[1];
      *(_QWORD *)(v21 + 4432) = v102 + 2;
      v104 = *(_QWORD **)(a1 + 48);
      *v102 = v101;
      LODWORD(v102) = v103;
      v47 = &v43[v103];
      v191 = v104;
      v46 = (_DWORD)v102 + 1;
      goto LABEL_64;
    }
LABEL_276:
    v178 = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0((__int64 *)v203, "Overflow encountered when expanding vector");
    *v178 = (char *)off_1C63128;
    sub_2333C0(v178 + 1, v203);
    sub_233E40((__int64)v203);
    __cxa_throw(v178, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v45 = v44;
  v46 = v44 + 1;
  v47 = &v43[v45];
LABEL_64:
  *v47 = 0;
  *((_DWORD *)v43 - 1) = v46;
LABEL_5:
  v7 = *(_QWORD *)(a1 + 128);
  if ( v7 )
  {
    if ( v191 )
      v8 = *((_DWORD *)v191 - 1);
    else
      v8 = 0;
    v9 = *(_QWORD *)(a1 + 72);
    if ( v9 )
    {
      v10 = *(_QWORD *)(a1 + 152);
      v11 = *(_DWORD *)(v9 - 4);
      if ( v10 )
      {
LABEL_10:
        v12 = *(_QWORD *)(a1 + 160);
LABEL_11:
        ++*(_DWORD *)(v10 + 8);
LABEL_12:
        v13 = *(void **)(a1 + 144);
        v201 = v10;
        v198 = v11;
        v200 = v13;
        v202 = v9;
        v199 = v8;
        *(_QWORD *)v203 = v191;
        if ( !v7 )
          std::__throw_bad_function_call();
        (*(void (__fastcall **)(__int64, void **, __int64 *, int *, __int64 *, int *, int *))(a1 + 136))(
          a1 + 112,
          &v200,
          &v201,
          &v198,
          &v202,
          &v199,
          v203);
        if ( v10 )
        {
          v14 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v14 )
            sub_15D7BC0(v12, v10);
        }
        v191 = *(_QWORD **)(a1 + 48);
        goto LABEL_17;
      }
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 152);
      v11 = 0;
      if ( v10 )
        goto LABEL_10;
    }
    v112 = *(_QWORD *)(a1 + 16);
    v183 = v8;
    *(_QWORD *)v188 = *(_QWORD *)(v112 + 848);
    sub_180C5A0(v203, "assumption");
    v113 = sub_15E3760(v112, (int)v203, 0, 0, v188[0], (int)v180, v183, *(int *)v188, (int)v191, v198, v200);
    v8 = v184;
    v10 = v113;
    if ( v113 )
    {
      v114 = *(_QWORD *)(a1 + 152);
      ++*(_DWORD *)(v113 + 8);
      v12 = *(_QWORD *)(a1 + 160);
      if ( !v114 || (v14 = *(_DWORD *)(v114 + 8) == 1, --*(_DWORD *)(v114 + 8), !v14) )
      {
        *(_QWORD *)(a1 + 152) = v113;
        v7 = *(_QWORD *)(a1 + 128);
        goto LABEL_11;
      }
    }
    else
    {
      v114 = *(_QWORD *)(a1 + 152);
      v12 = *(_QWORD *)(a1 + 160);
      if ( !v114 || (v14 = *(_DWORD *)(v114 + 8) == 1, --*(_DWORD *)(v114 + 8), !v14) )
      {
        *(_QWORD *)(a1 + 152) = 0;
        v7 = *(_QWORD *)(a1 + 128);
        goto LABEL_12;
      }
    }
    sub_15D7BC0(v12, v114);
    *(_QWORD *)(a1 + 152) = v10;
    v12 = *(_QWORD *)(a1 + 160);
    v7 = *(_QWORD *)(a1 + 128);
    v8 = v184;
    if ( !v10 )
      goto LABEL_12;
    goto LABEL_11;
  }
LABEL_17:
  if ( v191 )
  {
    v15 = &v191[*((unsigned int *)v191 - 1)];
    if ( v191 >= v15 )
      goto LABEL_25;
    do
    {
      while ( 1 )
      {
        v16 = *v191;
        if ( *v191 )
        {
          v17 = *(_QWORD *)(a1 + 40);
          v14 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v14 )
            break;
        }
        if ( ++v191 >= v15 )
          goto LABEL_24;
      }
      sub_15D7BC0(v17, v16);
      ++v191;
    }
    while ( v191 < v15 );
LABEL_24:
    v191 = *(_QWORD **)(a1 + 48);
    if ( v191 )
LABEL_25:
      *((_DWORD *)v191 - 1) = 0;
  }
  v18 = *(_QWORD *)(a1 + 56);
  if ( v18 )
  {
    v19 = *(_QWORD *)(a1 + 64);
    v14 = (*(_DWORD *)(v18 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v19, v18);
  }
  *(_QWORD *)(a1 + 56) = 0;
  result = *(_QWORD *)(a1 + 72);
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  return result;
}

