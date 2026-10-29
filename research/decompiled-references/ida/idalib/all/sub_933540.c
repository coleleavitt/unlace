unsigned __int64 __fastcall sub_933540(__int64 a1, _DWORD *a2, unsigned __int64 a3, unsigned int *a4, int a5, int a6)
{
  __int64 v7; // r15
  __int64 v8; // rdx
  int v9; // esi
  unsigned __int64 v10; // rax
  unsigned int *v11; // rax
  int v12; // ecx
  unsigned int v13; // r9d
  unsigned int v14; // ebx
  char *v15; // rdi
  unsigned int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // esi
  unsigned int v19; // eax
  unsigned int *v20; // rsi
  unsigned int *v21; // rdx
  unsigned int v22; // eax
  unsigned int v23; // r14d
  unsigned int v24; // ecx
  unsigned int v25; // edi
  unsigned int v26; // r8d
  __int64 v27; // r13
  __int64 v28; // rbx
  __int64 v29; // rax
  unsigned __int64 v30; // r14
  unsigned int *v31; // r12
  unsigned int v32; // esi
  unsigned int v33; // eax
  unsigned int v34; // edx
  unsigned __int64 v35; // rbp
  __int64 v36; // r13
  unsigned __int64 v37; // r15
  unsigned int *v38; // r8
  __int64 v39; // rcx
  unsigned __int64 v40; // rdi
  _QWORD *v41; // rdx
  __int64 v42; // rcx
  _QWORD *v43; // rax
  signed __int64 v46; // rbx
  unsigned __int64 v47; // rdi
  unsigned __int64 v48; // rcx
  unsigned int *v49; // r8
  unsigned int v50; // r10d
  unsigned __int64 v51; // r13
  unsigned __int64 v52; // r12
  int v53; // r9d
  bool v54; // zf
  unsigned __int64 v55; // r11
  __int64 v56; // rbp
  unsigned int *v57; // r14
  _QWORD *v58; // rdi
  __int64 v59; // rbx
  _QWORD *v60; // rax
  signed __int64 v63; // r8
  unsigned __int64 v64; // r11
  _BYTE *v65; // rcx
  unsigned int v66; // eax
  unsigned int v67; // edx
  unsigned int v68; // eax
  _QWORD *v69; // rbx
  _QWORD *v70; // r9
  __int64 v71; // rax
  __int64 v72; // r10
  unsigned __int64 v75; // rax
  _QWORD *v76; // r8
  _QWORD *v77; // r11
  char *v78; // r10
  unsigned __int64 v79; // r10
  signed __int64 v82; // rbx
  _QWORD *v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rax
  _QWORD *v88; // rbx
  _QWORD *v89; // r11
  _QWORD *v90; // rax
  __int64 *v91; // r10
  __int64 v92; // rdx
  signed __int64 v95; // rax
  _QWORD *v96; // rcx
  char *v97; // rdx
  unsigned __int64 v98; // r8
  signed __int64 v101; // r8
  unsigned __int64 v102; // rax
  __int64 v103; // rbp
  __int64 v104; // rax
  char *v107; // rsi
  signed __int64 v108; // rax
  __int64 v109; // rax
  unsigned __int64 v114; // rax
  _QWORD *v115; // r10
  __int64 v116; // rsi
  int v117; // edi
  unsigned __int64 v118; // rax
  unsigned __int64 v119; // rax
  unsigned int v120; // r9d
  unsigned int v121; // ebx
  __int64 v122; // rdi
  int v123; // eax
  unsigned int v124; // r14d
  unsigned int v125; // ecx
  char *v126; // rbx
  unsigned __int64 v127; // r14
  unsigned __int64 v128; // r13
  signed __int64 v131; // r10
  unsigned __int64 v132; // r10
  __int64 v133; // rsi
  char *v134; // rcx
  unsigned int v135; // edx
  unsigned int v136; // eax
  unsigned __int64 v137; // r11
  unsigned int *v138; // r15
  _QWORD *v139; // r8
  char *v140; // rdi
  char *v141; // rdx
  unsigned __int64 v142; // rbp
  _QWORD *v143; // r12
  char *v144; // r10
  char *v145; // rdi
  signed __int64 v148; // rax
  _QWORD *v150; // rdx
  __int64 v151; // rax
  __int64 *v154; // r8
  char *v155; // rax
  __int64 v156; // rbp
  __int64 v157; // rdx
  unsigned __int64 v160; // rax
  unsigned __int64 v161; // [rsp+0h] [rbp-158h]
  unsigned __int64 v162; // [rsp+0h] [rbp-158h]
  unsigned int *v163; // [rsp+8h] [rbp-150h]
  unsigned __int64 v164; // [rsp+8h] [rbp-150h]
  _QWORD *v165; // [rsp+8h] [rbp-150h]
  __int64 v166; // [rsp+10h] [rbp-148h]
  unsigned int v167; // [rsp+10h] [rbp-148h]
  unsigned __int64 v168; // [rsp+18h] [rbp-140h]
  unsigned int *v169; // [rsp+18h] [rbp-140h]
  __int64 v170; // [rsp+18h] [rbp-140h]
  __int64 v171; // [rsp+20h] [rbp-138h]
  unsigned int *v172; // [rsp+20h] [rbp-138h]
  __int64 v173; // [rsp+20h] [rbp-138h]
  unsigned int v174; // [rsp+28h] [rbp-130h]
  unsigned __int64 v175; // [rsp+28h] [rbp-130h]
  __int64 v176; // [rsp+28h] [rbp-130h]
  __int64 v177; // [rsp+30h] [rbp-128h]
  unsigned __int64 v178; // [rsp+30h] [rbp-128h]
  int v179; // [rsp+38h] [rbp-120h]
  __int64 v180; // [rsp+38h] [rbp-120h]
  __int64 v181; // [rsp+40h] [rbp-118h]
  unsigned int v182; // [rsp+40h] [rbp-118h]
  unsigned int v184; // [rsp+48h] [rbp-110h]
  unsigned int v185; // [rsp+4Ch] [rbp-10Ch]
  unsigned int v186; // [rsp+4Ch] [rbp-10Ch]
  unsigned __int64 v187; // [rsp+50h] [rbp-108h]
  _QWORD *v188; // [rsp+50h] [rbp-108h]
  __int64 v189; // [rsp+50h] [rbp-108h]
  unsigned __int64 v190; // [rsp+58h] [rbp-100h]
  _DWORD *v191; // [rsp+58h] [rbp-100h]
  signed __int64 v192; // [rsp+58h] [rbp-100h]
  int v193; // [rsp+58h] [rbp-100h]
  _QWORD *v194; // [rsp+60h] [rbp-F8h]
  __int64 v195; // [rsp+60h] [rbp-F8h]
  __int64 *v196; // [rsp+60h] [rbp-F8h]
  unsigned int v197; // [rsp+68h] [rbp-F0h]
  bool v198; // [rsp+68h] [rbp-F0h]
  unsigned __int64 v199; // [rsp+68h] [rbp-F0h]
  unsigned int v200; // [rsp+70h] [rbp-E8h]
  unsigned __int64 v201; // [rsp+70h] [rbp-E8h]
  unsigned __int64 v203; // [rsp+78h] [rbp-E0h]
  unsigned int v204; // [rsp+80h] [rbp-D8h]
  _QWORD *v205; // [rsp+80h] [rbp-D8h]
  __int64 v206; // [rsp+80h] [rbp-D8h]
  unsigned int v207; // [rsp+88h] [rbp-D0h]
  int v208; // [rsp+88h] [rbp-D0h]
  __int64 v209; // [rsp+88h] [rbp-D0h]
  unsigned int v210; // [rsp+90h] [rbp-C8h]
  char *v211; // [rsp+90h] [rbp-C8h]
  __int64 v212; // [rsp+98h] [rbp-C0h]
  unsigned int v213; // [rsp+A0h] [rbp-B8h]
  unsigned int v214; // [rsp+A4h] [rbp-B4h]
  __int64 v215; // [rsp+A8h] [rbp-B0h]
  unsigned __int64 v216; // [rsp+B0h] [rbp-A8h]
  __int64 v217; // [rsp+B0h] [rbp-A8h]
  __int64 *v220; // [rsp+C8h] [rbp-90h]
  _DWORD *v221; // [rsp+D0h] [rbp-88h]
  unsigned int v222; // [rsp+D8h] [rbp-80h]
  int v223; // [rsp+DCh] [rbp-7Ch]
  __int64 v224; // [rsp+E0h] [rbp-78h]
  unsigned int *v225; // [rsp+F0h] [rbp-68h]
  unsigned int v226; // [rsp+F8h] [rbp-60h]
  int v227; // [rsp+100h] [rbp-58h]
  _BYTE v229[4]; // [rsp+114h] [rbp-44h] BYREF
  unsigned __int64 v230; // [rsp+118h] [rbp-40h]

  v7 = a1;
  v8 = *(_QWORD *)(a1 + 112);
  v230 = __readfsqword(0x28u);
  v9 = *(_DWORD *)(a1 + 264);
  if ( a5 == 5 )
  {
    v160 = 0xCF1BBCDCBB000000LL;
  }
  else
  {
    if ( a5 != 6 )
    {
      v10 = (unsigned int)(-1640531535 * *a2) >> (32 - v9);
      goto LABEL_4;
    }
    v160 = 0xCF1BBCDCBF9B0000LL;
  }
  v10 = (*(_QWORD *)a2 * v160) >> (64 - (unsigned __int8)v9);
LABEL_4:
  v11 = (unsigned int *)(v8 + 4 * v10);
  v12 = *(_DWORD *)(a1 + 256);
  v13 = *v11;
  v14 = *(_DWORD *)(a1 + 28);
  v225 = v11;
  v15 = (char *)a2 - *(_QWORD *)(a1 + 8);
  v212 = *(_QWORD *)(v7 + 8);
  v226 = (unsigned int)v15;
  v223 = (int)v15;
  v16 = 1 << v12;
  v17 = (_DWORD)v15 - v16;
  if ( v16 >= (unsigned int)v15 - v14 )
    v17 = v14;
  v18 = v17;
  v181 = *(_QWORD *)(v7 + 128);
  if ( *(_DWORD *)(v7 + 40) )
    v18 = v14;
  v213 = v18;
  v19 = (1 << (*(_DWORD *)(v7 + 260) - 1)) - 1;
  v185 = v19;
  if ( (unsigned int)v15 <= v19 )
  {
    v222 = 0;
    v174 = v18;
  }
  else
  {
    v222 = (_DWORD)v15 - v19;
    if ( (unsigned int)v15 - v19 >= v18 )
      v18 = (_DWORD)v15 - v19;
    v174 = v18;
  }
  v20 = (unsigned int *)(v181 + 8LL * (v13 & v19));
  v21 = v20 + 1;
  v227 = 1 << *(_DWORD *)(v7 + 268);
  if ( v13 <= v174 )
    goto LABEL_46;
  v22 = *v21;
  if ( (unsigned int)(1 << *(_DWORD *)(v7 + 268)) > 1 && v22 == 1 )
  {
    v23 = 1 << *(_DWORD *)(v7 + 268);
    v24 = 0;
    while ( 1 )
    {
      *v21 = v24;
      v26 = *v20;
      --v23;
      v20 = (unsigned int *)(v181 + 8LL * (*v20 & v185));
      v21 = v20 + 1;
      if ( v26 <= v174 )
        break;
      v25 = *v21;
      v24 = v13;
      if ( v23 <= 1 || v25 != 1 )
      {
        if ( v25 == 1 )
        {
          *v21 = 0;
          *v20 = 0;
        }
        break;
      }
      v13 = v26;
    }
    if ( v13 )
    {
      v210 = v23;
      while ( 1 )
      {
        v27 = *(unsigned int *)(v7 + 24);
        v28 = *(_QWORD *)(v7 + 8);
        v171 = *(_QWORD *)(v7 + 16);
        v197 = *(_DWORD *)(v7 + 24);
        v214 = *(_DWORD *)(v181 + 8LL * (v13 & v185) + 4);
        v177 = *(_QWORD *)(v7 + 128);
        v194 = (_QWORD *)(v171 + v27);
        v179 = (1 << (*(_DWORD *)(v7 + 260) - 1)) - 1;
        if ( (unsigned int)v27 > v13 )
        {
          v29 = v171 + v13;
          v30 = v171 + v27;
        }
        else
        {
          v29 = v28 + v13;
          v30 = a3;
        }
        v166 = v29;
        v220 = (__int64 *)(v28 + v27);
        v31 = (unsigned int *)(v177 + 8LL * (v13 & v179));
        v32 = *v31;
        v163 = v31 + 1;
        v33 = 1 << *(_DWORD *)(v7 + 256);
        v34 = v13 - v33;
        if ( v33 >= v13 - *(_DWORD *)(v7 + 28) )
          v34 = *(_DWORD *)(v7 + 28);
        v200 = v34;
        if ( v210 )
        {
          if ( v32 > v34 )
            break;
        }
LABEL_44:
        v13 = v214;
        ++v210;
        *v163 = 0;
        *v31 = 0;
        if ( !v214 )
          goto LABEL_45;
      }
      v204 = v210;
      v35 = *(unsigned int *)(v7 + 24);
      v161 = v30 - 7;
      v36 = *(_QWORD *)(v7 + 8);
      v187 = v30 - 3;
      v215 = v7;
      v37 = 0;
      v168 = 0;
      v190 = v30 - 1;
      v207 = v13;
      while ( 1 )
      {
        v38 = (unsigned int *)(v177 + 8LL * (v32 & v179));
        v39 = v36;
        v40 = v168;
        if ( v37 <= v168 )
          v40 = v37;
        v41 = (_QWORD *)(v166 + v40);
        if ( a6 != 1 )
          goto LABEL_35;
        v75 = v40 + v32;
        if ( v197 > v207 || v75 >= v35 )
        {
          v39 = v171;
          if ( v75 >= v35 )
            v39 = v36;
LABEL_35:
          v42 = v32 + v39;
          v43 = (_QWORD *)(v42 + v40);
          if ( v161 <= (unsigned __int64)v41 )
          {
            v69 = (_QWORD *)(v166 + v40);
          }
          else
          {
            if ( *v43 != *v41 )
            {
              _RBX = *v41 ^ *v43;
              __asm { tzcnt   rbx, rbx }
              v46 = (unsigned int)_RBX >> 3;
LABEL_38:
              v47 = v46 + v40;
              goto LABEL_39;
            }
            v69 = v41 + 1;
            v70 = v43 + 1;
            if ( v161 > (unsigned __int64)(v41 + 1) )
            {
              v71 = v43[1];
              v72 = v41[1];
              if ( v71 != v72 )
              {
LABEL_71:
                _RAX = v72 ^ v71;
                __asm { tzcnt   rax, rax }
                v46 = (char *)v69 + ((unsigned int)_RAX >> 3) - (char *)v41;
                goto LABEL_38;
              }
              v69 = v41 + 2;
              ++v70;
              if ( v161 > (unsigned __int64)(v41 + 2) )
              {
                do
                {
                  v71 = *v70;
                  v72 = *v69;
                  if ( *v70 != *v69 )
                    goto LABEL_71;
                  ++v69;
                  ++v70;
                }
                while ( v161 > (unsigned __int64)v69 );
              }
            }
            v43 = v70;
          }
          if ( (unsigned __int64)v69 < v187 && *(_DWORD *)v43 == *(_DWORD *)v69 )
          {
            v69 = (_QWORD *)((char *)v69 + 4);
            v43 = (_QWORD *)((char *)v43 + 4);
          }
          if ( (unsigned __int64)v69 < v190 && *(_WORD *)v43 == *(_WORD *)v69 )
          {
            v69 = (_QWORD *)((char *)v69 + 2);
            v43 = (_QWORD *)((char *)v43 + 2);
          }
          if ( v30 > (unsigned __int64)v69 )
            v69 = (_QWORD *)((char *)v69 + (*(_BYTE *)v43 == *(_BYTE *)v69));
          v46 = (char *)v69 - (char *)v41;
          goto LABEL_38;
        }
        v42 = v171 + v32;
        v77 = (_QWORD *)(v42 + v40);
        v78 = (char *)v194 + v166 - v42;
        if ( v30 < (unsigned __int64)v78 )
          v78 = (char *)v30;
        v216 = (unsigned __int64)v78;
        v79 = (unsigned __int64)(v78 - 7);
        if ( v79 <= (unsigned __int64)v41 )
          break;
        if ( *v77 == *v41 )
        {
          v88 = v41 + 1;
          v221 = v77 + 1;
          if ( v79 <= (unsigned __int64)(v41 + 1) )
            goto LABEL_118;
          v224 = v77[1];
          v104 = v41[1];
          if ( v104 == v224 )
          {
            v114 = v79;
            v115 = v77 + 1;
            while ( 1 )
            {
              ++v88;
              ++v115;
              if ( v114 <= (unsigned __int64)v88 )
                break;
              v224 = *v88;
              if ( *v115 != *v88 )
              {
                v104 = *v115;
                goto LABEL_143;
              }
            }
            v221 = v115;
LABEL_118:
            if ( (unsigned __int64)v88 < v216 - 3 && *v221 == *(_DWORD *)v88 )
            {
              ++v221;
              v88 = (_QWORD *)((char *)v88 + 4);
            }
            if ( (unsigned __int64)v88 < v216 - 1 && *(_WORD *)v221 == *(_WORD *)v88 )
            {
              v221 = (_DWORD *)((char *)v221 + 2);
              v88 = (_QWORD *)((char *)v88 + 2);
            }
            if ( v216 > (unsigned __int64)v88 )
              v88 = (_QWORD *)((char *)v88 + (*(_BYTE *)v221 == *(_BYTE *)v88));
            v82 = (char *)v88 - (char *)v41;
            if ( v194 != (_QWORD *)((char *)v77 + v82) )
              goto LABEL_107;
            goto LABEL_127;
          }
LABEL_143:
          _RAX = v224 ^ v104;
          __asm { tzcnt   rax, rax }
          v82 = (char *)v88 + ((unsigned int)_RAX >> 3) - (char *)v41;
        }
        else
        {
          _RBX = *v77 ^ *v41;
          __asm { tzcnt   rbx, rbx }
          v82 = (unsigned int)_RBX >> 3;
        }
        if ( v194 != (_QWORD *)((char *)v77 + v82) )
          goto LABEL_107;
LABEL_127:
        v89 = (_QWORD *)((char *)v41 + v82);
        if ( (unsigned __int64)v41 + v82 >= v161 )
        {
          v91 = v220;
          v90 = (_QWORD *)((char *)v41 + v82);
          goto LABEL_158;
        }
        if ( *v220 != *v89 )
        {
          _RAX = *v89 ^ *v220;
          __asm { tzcnt   rax, rax }
          v95 = (unsigned int)_RAX >> 3;
          goto LABEL_164;
        }
        v90 = v89 + 1;
        v91 = v220 + 1;
        if ( v161 <= (unsigned __int64)(v89 + 1) )
          goto LABEL_158;
        v217 = v220[1];
        v92 = v89[1];
        if ( v92 == v217 )
        {
          while ( 1 )
          {
            ++v90;
            ++v91;
            if ( v161 <= (unsigned __int64)v90 )
              break;
            v217 = *v91;
            v92 = *v90;
            if ( *v91 != *v90 )
              goto LABEL_131;
          }
LABEL_158:
          if ( (unsigned __int64)v90 < v187 && *(_DWORD *)v91 == *(_DWORD *)v90 )
          {
            v90 = (_QWORD *)((char *)v90 + 4);
            v91 = (__int64 *)((char *)v91 + 4);
            if ( (unsigned __int64)v90 >= v190 )
              goto LABEL_162;
LABEL_161:
            if ( *(_WORD *)v91 != *(_WORD *)v90 )
              goto LABEL_162;
            v90 = (_QWORD *)((char *)v90 + 2);
            v91 = (__int64 *)((char *)v91 + 2);
            if ( v30 <= (unsigned __int64)v90 )
            {
LABEL_163:
              v95 = (char *)v90 - (char *)v89;
              goto LABEL_164;
            }
          }
          else
          {
            if ( (unsigned __int64)v90 < v190 )
              goto LABEL_161;
LABEL_162:
            if ( v30 <= (unsigned __int64)v90 )
              goto LABEL_163;
          }
          v90 = (_QWORD *)((char *)v90 + (*(_BYTE *)v91 == *(_BYTE *)v90));
          goto LABEL_163;
        }
LABEL_131:
        _RDX = v217 ^ v92;
        __asm { tzcnt   rdx, rdx }
        v95 = (char *)v90 + ((unsigned int)_RDX >> 3) - (char *)v89;
LABEL_164:
        v82 += v95;
LABEL_107:
        v47 = v82 + v40;
        if ( v47 + v32 >= v35 )
          v42 = v36 + v32;
LABEL_39:
        if ( v30 == v47 + v166 )
          goto LABEL_43;
        if ( *(_BYTE *)(v42 + v47) < *(_BYTE *)(v47 + v166) )
        {
          *v31 = v32;
          if ( v32 <= v174 )
          {
            v7 = v215;
            v31 = (unsigned int *)v229;
            goto LABEL_44;
          }
          v54 = v204-- == 1;
          v31 = v38 + 1;
          v32 = v38[1];
          v168 = v47;
          if ( v54 )
            goto LABEL_43;
        }
        else
        {
          *v163 = v32;
          if ( v32 <= v174 )
          {
            v7 = v215;
            v163 = (unsigned int *)v229;
            goto LABEL_44;
          }
          v54 = v204-- == 1;
          v32 = *v38;
          v37 = v47;
          v163 = v38;
          if ( v54 )
          {
LABEL_43:
            v7 = v215;
            goto LABEL_44;
          }
        }
        if ( v200 >= v32 )
          goto LABEL_43;
      }
      v221 = (_DWORD *)(v171 + v32 + v40);
      v88 = (_QWORD *)(v166 + v40);
      goto LABEL_118;
    }
  }
  else
  {
    if ( v22 != 1 )
      goto LABEL_46;
    *v21 = 0;
    *v20 = 0;
  }
LABEL_45:
  v13 = *v225;
LABEL_46:
  v48 = *(unsigned int *)(v7 + 24);
  v195 = *(_QWORD *)(v7 + 16);
  v188 = (_QWORD *)(v48 + v195);
  v175 = v48;
  v205 = (_QWORD *)(v48 + v212);
  v49 = (unsigned int *)(v181 + 8LL * (v226 & v185));
  v169 = v49 + 1;
  v167 = v226 + 9;
  *v225 = v226;
  v198 = v227 != 0 && v213 < v13;
  if ( !v198 )
  {
    v198 = v227 != 0;
    v162 = 0;
    goto LABEL_179;
  }
  v50 = v13;
  v51 = 0;
  v162 = 0;
  v52 = 0;
  v53 = v227;
  v172 = (unsigned int *)(v181 + 8LL * (v226 & v185));
  v164 = a3 - 7;
  while ( 1 )
  {
    v55 = v52;
    v56 = v50;
    if ( v51 <= v52 )
      v55 = v51;
    v57 = (unsigned int *)(v181 + 8LL * (v50 & v185));
    v58 = (_QWORD *)((char *)a2 + v55);
    if ( a6 != 1 || v175 <= v55 + v50 )
    {
      v59 = v212 + v50;
      v60 = (_QWORD *)(v59 + v55);
      if ( v164 <= (unsigned __int64)v58 )
      {
        v76 = (_QWORD *)((char *)a2 + v55);
      }
      else
      {
        if ( *v60 != *v58 )
        {
          _R8 = *v58 ^ *v60;
          __asm { tzcnt   r8, r8 }
          v63 = (unsigned int)_R8 >> 3;
LABEL_59:
          v64 = v63 + v55;
          goto LABEL_60;
        }
        v76 = v58 + 1;
        v83 = v60 + 1;
        if ( v164 > (unsigned __int64)(v58 + 1) )
        {
          v84 = v60[1];
          v85 = v58[1];
          if ( v85 != v84 )
          {
LABEL_113:
            _RAX = v84 ^ v85;
            __asm { tzcnt   rax, rax }
            v63 = (char *)v76 + ((unsigned int)_RAX >> 3) - (char *)v58;
            goto LABEL_59;
          }
          while ( 1 )
          {
            ++v76;
            ++v83;
            if ( v164 <= (unsigned __int64)v76 )
              break;
            v85 = *v83;
            v84 = *v76;
            if ( *v83 != *v76 )
              goto LABEL_113;
          }
        }
        v60 = v83;
      }
      if ( (unsigned __int64)v76 < a3 - 3 && *(_DWORD *)v60 == *(_DWORD *)v76 )
      {
        v76 = (_QWORD *)((char *)v76 + 4);
        v60 = (_QWORD *)((char *)v60 + 4);
      }
      if ( (unsigned __int64)v76 < a3 - 1 && *(_WORD *)v60 == *(_WORD *)v76 )
      {
        v76 = (_QWORD *)((char *)v76 + 2);
        v60 = (_QWORD *)((char *)v60 + 2);
      }
      if ( a3 > (unsigned __int64)v76 )
        v76 = (_QWORD *)((char *)v76 + (*(_BYTE *)v60 == *(_BYTE *)v76));
      v63 = (char *)v76 - (char *)v58;
      goto LABEL_59;
    }
    v59 = v195 + v50;
    v96 = (_QWORD *)(v59 + v55);
    v97 = (char *)v188 + (_QWORD)a2 - v59;
    if ( a3 < (unsigned __int64)v97 )
      v97 = (char *)a3;
    v98 = (unsigned __int64)(v97 - 7);
    if ( v97 - 7 <= (char *)v58 )
    {
      v191 = (_DWORD *)(v195 + v50 + v55);
      v107 = (char *)a2 + v55;
    }
    else
    {
      if ( *v96 != *v58 )
      {
        _RSI = *v96 ^ *v58;
        __asm { tzcnt   rsi, rsi }
        v101 = (unsigned int)_RSI >> 3;
        goto LABEL_137;
      }
      v107 = (char *)(v58 + 1);
      v191 = v96 + 1;
      if ( v98 > (unsigned __int64)(v58 + 1) )
      {
        v209 = v96[1];
        v109 = v58[1];
        if ( v209 != v109 )
        {
          _RAX = v209 ^ v109;
LABEL_168:
          __asm { tzcnt   rax, rax }
          v101 = &v107[(unsigned int)_RAX >> 3] - (char *)v58;
LABEL_137:
          if ( v188 != (_QWORD *)((char *)v96 + v101) )
            goto LABEL_138;
          goto LABEL_156;
        }
        v211 = v97;
        v150 = v96 + 1;
        while ( 1 )
        {
          v107 += 8;
          ++v150;
          if ( v98 <= (unsigned __int64)v107 )
            break;
          if ( *v150 != *(_QWORD *)v107 )
          {
            v96 = (_QWORD *)(v195 + v50 + v55);
            _RAX = *(_QWORD *)v107 ^ *v150;
            goto LABEL_168;
          }
        }
        v191 = v150;
        v96 = (_QWORD *)(v195 + v50 + v55);
        v97 = v211;
      }
    }
    if ( v107 < v97 - 3 && *v191 == *(_DWORD *)v107 )
    {
      v107 += 4;
      ++v191;
    }
    if ( v107 < v97 - 1 && *(_WORD *)v191 == *(_WORD *)v107 )
    {
      v107 += 2;
      v191 = (_DWORD *)((char *)v191 + 2);
    }
    if ( v97 > v107 )
      v107 += *(_BYTE *)v191 == (unsigned __int8)*v107;
    v101 = v107 - (char *)v58;
    if ( v188 != (_QWORD *)((char *)v96 + v107 - (char *)v58) )
      goto LABEL_138;
LABEL_156:
    v208 = v53;
    v192 = v101;
    v108 = sub_92B7A0((_QWORD *)((char *)v58 + v101), v205, a3);
    v53 = v208;
    v101 = v108 + v192;
LABEL_138:
    v64 = v101 + v55;
    v102 = v64 + v56;
    v103 = v212 + v56;
    if ( v175 <= v102 )
      v59 = v103;
LABEL_60:
    v65 = (char *)a2 + v64;
    if ( v64 > v162 )
    {
      v66 = v50 + v64;
      if ( v167 - v50 >= v64 )
        v66 = v167;
      v167 = v66;
      _BitScanReverse(&v67, v223 - v50 + 1);
      _BitScanReverse(&v68, *a4);
      if ( 4 * ((int)v64 - (int)v162) > (int)((v68 ^ 0x1F) - (v67 ^ 0x1F)) )
      {
        v162 = v64;
        *(_QWORD *)a4 = v223 - v50 + 3;
      }
      if ( (_BYTE *)a3 == v65 )
      {
        *v169 = 0;
        *v172 = 0;
        goto LABEL_223;
      }
    }
    if ( *(_BYTE *)(v59 + v64) >= *v65 )
      break;
    *v172 = v50;
    if ( v222 >= v50 )
    {
      v227 = v53;
      v49 = (unsigned int *)v229;
      goto LABEL_179;
    }
    v50 = v57[1];
    v52 = v64;
    v172 = v57 + 1;
LABEL_50:
    v54 = v53-- == 1;
    if ( v50 <= v213 || v54 )
    {
      v49 = v172;
      v198 = !v54;
      v227 = v53;
      goto LABEL_179;
    }
  }
  *v169 = v50;
  if ( v222 < v50 )
  {
    v50 = *v57;
    v169 = v57;
    v51 = v64;
    goto LABEL_50;
  }
  v49 = v172;
  v227 = v53;
  v169 = (unsigned int *)v229;
LABEL_179:
  *v169 = 0;
  *v49 = 0;
  if ( a6 == 2 && v198 )
  {
    v116 = *(_QWORD *)(v7 + 248);
    v117 = *(_DWORD *)(v116 + 264);
    if ( a5 == 5 )
    {
      v118 = 0xCF1BBCDCBB000000LL;
LABEL_184:
      v119 = (*(_QWORD *)a2 * v118) >> (64 - (unsigned __int8)v117);
    }
    else
    {
      if ( a5 == 6 )
      {
        v118 = 0xCF1BBCDCBF9B0000LL;
        goto LABEL_184;
      }
      v119 = (unsigned int)(-1640531535 * *a2) >> (32 - v117);
    }
    v120 = *(_DWORD *)(*(_QWORD *)(v116 + 112) + 4 * v119);
    v121 = *(_DWORD *)(v116 + 28);
    v170 = *(_QWORD *)(v7 + 8);
    v196 = (__int64 *)(v170 + *(unsigned int *)(v7 + 24));
    v176 = *(_QWORD *)(v116 + 128);
    v173 = *(_QWORD *)(v116 + 8);
    v165 = *(_QWORD **)v116;
    v122 = *(_QWORD *)v116 - v173;
    v123 = *(_DWORD *)(v7 + 28);
    v186 = v121;
    v124 = (1 << (*(_DWORD *)(v116 + 260) - 1)) - 1;
    v125 = v122 - v124;
    v184 = v124;
    if ( v124 >= (unsigned int)v122 - v121 )
      v125 = *(_DWORD *)(v116 + 28);
    v182 = v125;
    if ( v120 > v121 )
    {
      v126 = (char *)a3;
      v127 = 0;
      v178 = (unsigned int)v122;
      v128 = 0;
      v206 = v7;
      v199 = a3 - 7;
      v201 = a3 - 3;
      v203 = a3 - 1;
      v180 = (unsigned int)(v123 - v122);
      v193 = v122 + (_DWORD)a2 - v170 - v123;
      while ( 1 )
      {
        v137 = v127;
        v138 = (unsigned int *)(v176 + 8LL * (v120 & v184));
        if ( v128 <= v127 )
          v137 = v128;
        v133 = v173 + v120;
        v139 = (_QWORD *)(v133 + v137);
        v140 = (char *)a2 + v137;
        v141 = (char *)v165 + (_QWORD)a2 - v133;
        if ( v126 < v141 )
          v141 = v126;
        v142 = (unsigned __int64)(v141 - 7);
        if ( v140 < v141 - 7 )
        {
          if ( *v139 != *(_QWORD *)v140 )
          {
            _R10 = *(_QWORD *)v140 ^ *v139;
            __asm { tzcnt   r10, r10 }
            v131 = (unsigned int)_R10 >> 3;
            goto LABEL_191;
          }
          v144 = v140 + 8;
          v143 = v139 + 1;
          if ( v142 > (unsigned __int64)(v140 + 8) )
          {
            v189 = v139[1];
            v151 = *((_QWORD *)v140 + 1);
            if ( v151 != v189 )
            {
              _RAX = v189 ^ v151;
LABEL_242:
              __asm { tzcnt   rax, rax }
              v131 = &v144[(unsigned int)_RAX >> 3] - v140;
LABEL_191:
              if ( v165 != (_QWORD *)((char *)v139 + v131) )
                goto LABEL_192;
LABEL_218:
              v145 = &v140[v131];
              if ( (unsigned __int64)v145 >= v199 )
              {
                v154 = v196;
                v155 = v145;
              }
              else
              {
                if ( *v196 != *(_QWORD *)v145 )
                {
                  _RAX = *(_QWORD *)v145 ^ *v196;
                  __asm { tzcnt   rax, rax }
                  v148 = (unsigned int)_RAX >> 3;
LABEL_221:
                  v131 += v148;
                  goto LABEL_192;
                }
                v155 = v145 + 8;
                v154 = v196 + 1;
                if ( v199 > (unsigned __int64)(v145 + 8) )
                {
                  v156 = *((_QWORD *)v145 + 1);
                  v157 = v196[1];
                  if ( v157 != v156 )
                  {
LABEL_258:
                    _RDX = v156 ^ v157;
                    __asm { tzcnt   rdx, rdx }
                    v148 = &v155[(unsigned int)_RDX >> 3] - v145;
                    goto LABEL_221;
                  }
                  while ( 1 )
                  {
                    v155 += 8;
                    ++v154;
                    if ( v199 <= (unsigned __int64)v155 )
                      break;
                    v157 = *v154;
                    v156 = *(_QWORD *)v155;
                    if ( *v154 != *(_QWORD *)v155 )
                      goto LABEL_258;
                  }
                }
              }
              if ( (unsigned __int64)v155 < v201 && *(_DWORD *)v154 == *(_DWORD *)v155 )
              {
                v155 += 4;
                v154 = (__int64 *)((char *)v154 + 4);
              }
              if ( (unsigned __int64)v155 < v203 && *(_WORD *)v154 == *(_WORD *)v155 )
              {
                v155 += 2;
                v154 = (__int64 *)((char *)v154 + 2);
              }
              if ( v126 > v155 )
                v155 += *(_BYTE *)v154 == (unsigned __int8)*v155;
              v148 = v155 - v145;
              goto LABEL_221;
            }
            while ( 1 )
            {
              v144 += 8;
              ++v143;
              if ( v142 <= (unsigned __int64)v144 )
                break;
              if ( *v143 != *(_QWORD *)v144 )
              {
                _RAX = *(_QWORD *)v144 ^ *v143;
                goto LABEL_242;
              }
            }
          }
        }
        else
        {
          v143 = (_QWORD *)(v133 + v137);
          v144 = (char *)a2 + v137;
        }
        if ( v144 < v141 - 3 && *(_DWORD *)v143 == *(_DWORD *)v144 )
        {
          v144 += 4;
          v143 = (_QWORD *)((char *)v143 + 4);
        }
        if ( v144 < v141 - 1 && *(_WORD *)v143 == *(_WORD *)v144 )
        {
          v144 += 2;
          v143 = (_QWORD *)((char *)v143 + 2);
        }
        if ( v141 > v144 )
          v144 += *(_BYTE *)v143 == (unsigned __int8)*v144;
        v131 = v144 - v140;
        if ( v165 == (_QWORD *)((char *)v139 + v131) )
          goto LABEL_218;
LABEL_192:
        v132 = v137 + v131;
        if ( v120 + v132 >= v178 )
          v133 = v170 + v180 + v120;
        v134 = (char *)a2 + v132;
        if ( v132 <= v162 )
          goto LABEL_202;
        _BitScanReverse(&v135, v193 - v120 + 1);
        _BitScanReverse(&v136, *(_QWORD *)a4 + 1);
        if ( 4 * ((int)v132 - (int)v162) > (int)((v136 ^ 0x1F) - (v135 ^ 0x1F)) )
        {
          v162 = v132;
          *(_QWORD *)a4 = v193 - v120 + 3;
        }
        if ( v126 != v134 )
        {
LABEL_202:
          if ( *(_BYTE *)(v133 + v132) >= (unsigned __int8)*v134 )
          {
            if ( v182 >= v120 )
              goto LABEL_262;
            v120 = *v138;
            v127 = v132;
          }
          else
          {
            if ( v182 >= v120 )
              goto LABEL_262;
            v120 = v138[1];
            v128 = v132;
          }
          if ( --v227 )
          {
            if ( v186 < v120 )
              continue;
          }
        }
LABEL_262:
        v7 = v206;
        break;
      }
    }
  }
LABEL_223:
  *(_DWORD *)(v7 + 44) = v167 - 8;
  return v162;
}
