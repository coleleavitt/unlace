unsigned __int64 __fastcall sub_948F40(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int16 *a3,
        unsigned __int64 a4,
        int *a5)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // r13
  unsigned __int64 result; // rax
  unsigned __int8 v15; // cl
  __int64 v16; // r13
  unsigned __int8 *v17; // rdi
  unsigned int v18; // edx
  unsigned __int8 *v19; // rdi
  unsigned int v20; // edx
  unsigned __int8 *v21; // rdi
  unsigned int v22; // edx
  _DWORD *v23; // r8
  int v24; // edi
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // r11
  int v28; // eax
  __int64 v29; // rcx
  int v30; // edx
  int v31; // edi
  unsigned __int8 *v32; // rcx
  __int64 v33; // rsi
  int v34; // ecx
  bool v35; // si
  unsigned int v36; // ecx
  unsigned int v37; // esi
  __int64 v38; // rdi
  unsigned __int8 *v39; // r12
  int v40; // r13d
  int v41; // r13d
  unsigned int v42; // ebp
  __int64 v43; // rsi
  unsigned __int8 *v44; // r12
  unsigned __int8 v45; // r14
  unsigned int v46; // ebp
  unsigned __int8 *v47; // r15
  unsigned __int8 v48; // r14
  unsigned __int8 *v49; // r14
  unsigned int v50; // ebp
  int v51; // edx
  unsigned __int8 *v52; // r15
  int v53; // r13d
  unsigned __int8 *v54; // r15
  unsigned __int8 *v55; // r15
  unsigned __int8 *v56; // r14
  unsigned int v57; // ebp
  unsigned __int8 *v58; // r15
  int v59; // r13d
  unsigned __int8 *v60; // r15
  unsigned __int8 *v61; // rdi
  unsigned __int8 *v62; // r15
  unsigned __int8 *v63; // rsi
  unsigned __int8 *v64; // rdx
  unsigned int v65; // ebp
  unsigned int v66; // r13d
  unsigned int v67; // r12d
  unsigned __int8 *v68; // rsi
  unsigned int v69; // ebp
  unsigned __int8 *v70; // rsi
  unsigned __int8 v71; // cl
  unsigned int v72; // edx
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rcx
  unsigned __int64 v76; // r12
  unsigned __int64 v77; // r13
  unsigned int v78; // eax
  unsigned __int64 v79; // r11
  int v80; // r10d
  bool v81; // dl
  __int64 v82; // rax
  unsigned __int8 *v83; // rdx
  unsigned int v84; // ebx
  unsigned __int8 *v85; // rdx
  unsigned int v86; // ebx
  unsigned __int8 *v87; // rdx
  unsigned int v88; // ebx
  unsigned __int8 *v89; // rax
  __int64 v90; // rbp
  __int64 *v91; // r14
  __int64 v92; // rdi
  __int64 v93; // r10
  unsigned int v94; // eax
  unsigned __int8 *v95; // rdx
  unsigned __int8 v96; // cl
  unsigned int v97; // eax
  unsigned __int64 v98; // r9
  unsigned __int64 v99; // r11
  unsigned __int8 *v100; // rdi
  unsigned __int64 v101; // rbx
  int v102; // ecx
  bool v103; // dl
  __int64 v104; // rax
  unsigned __int8 *v105; // rdx
  unsigned int v106; // r10d
  unsigned __int8 *v107; // rdx
  unsigned int v108; // r10d
  unsigned __int8 *v109; // rdx
  unsigned __int8 v110; // bp
  unsigned __int8 *v111; // rax
  unsigned __int8 *v112; // rdx
  __int64 v113; // rbp
  unsigned __int8 *v114; // r15
  unsigned int v115; // ecx
  __int64 v116; // rdi
  __int64 v117; // rdi
  unsigned __int64 v118; // rax
  unsigned int v119; // edx
  unsigned __int8 *v120; // r9
  unsigned __int8 v121; // r10
  unsigned int v122; // eax
  unsigned __int64 v123; // r11
  unsigned __int64 v124; // r9
  unsigned __int8 *v125; // rdi
  unsigned __int64 v126; // r10
  int v127; // ecx
  bool v128; // dl
  __int64 v129; // rax
  unsigned __int8 *v130; // rdx
  unsigned int v131; // ebx
  unsigned __int8 *v132; // rdx
  unsigned int v133; // ebx
  unsigned __int8 *v134; // rdx
  unsigned __int8 v135; // bp
  unsigned __int8 *v136; // rax
  unsigned __int8 *v137; // rdx
  __int64 v138; // rbp
  unsigned __int8 *v139; // r15
  unsigned int v140; // ecx
  __int64 v141; // rdi
  __int64 v142; // r9
  unsigned __int64 v143; // rax
  unsigned int v144; // edx
  unsigned __int8 *v145; // rcx
  unsigned __int8 v146; // r10
  unsigned int v147; // eax
  unsigned __int8 *v148; // r9
  unsigned __int64 v149; // r10
  unsigned __int8 *v150; // rdi
  unsigned __int64 v151; // r11
  int v152; // ecx
  bool v153; // dl
  __int64 v154; // rax
  unsigned __int8 *v155; // rdx
  unsigned int v156; // ebp
  unsigned __int8 *v157; // rdx
  unsigned int v158; // ebp
  unsigned __int8 *v159; // rdx
  unsigned int v160; // ebp
  unsigned __int8 *v161; // rax
  __int64 v162; // r12
  unsigned __int8 *v163; // r15
  __int64 v164; // rdi
  __int64 v165; // r11
  unsigned int v166; // edx
  unsigned __int64 v167; // rax
  unsigned __int8 *v168; // r10
  unsigned __int8 v169; // bl
  _BOOL4 v170; // eax
  unsigned int v171; // edx
  __int64 v172; // rdi
  unsigned int v173; // r10d
  __int64 v174; // rcx
  unsigned __int64 v175; // [rsp+8h] [rbp-160h]
  unsigned __int64 v176; // [rsp+10h] [rbp-158h]
  unsigned __int64 v177; // [rsp+18h] [rbp-150h]
  unsigned __int64 v178; // [rsp+20h] [rbp-148h]
  unsigned __int8 *v179; // [rsp+20h] [rbp-148h]
  unsigned __int64 v180; // [rsp+20h] [rbp-148h]
  unsigned __int16 *v181; // [rsp+28h] [rbp-140h]
  unsigned __int16 *v182; // [rsp+30h] [rbp-138h]
  int v183; // [rsp+3Ch] [rbp-12Ch]
  int v184; // [rsp+3Ch] [rbp-12Ch]
  unsigned __int8 *v185; // [rsp+40h] [rbp-128h]
  unsigned __int8 *v186; // [rsp+48h] [rbp-120h]
  unsigned __int8 *v187; // [rsp+50h] [rbp-118h]
  unsigned __int64 v188; // [rsp+58h] [rbp-110h]
  unsigned __int64 v189; // [rsp+60h] [rbp-108h]
  unsigned __int64 v190; // [rsp+68h] [rbp-100h]
  __int64 v191; // [rsp+70h] [rbp-F8h] BYREF
  unsigned int v192; // [rsp+78h] [rbp-F0h]
  unsigned __int16 *v193; // [rsp+80h] [rbp-E8h]
  unsigned __int16 *v194; // [rsp+88h] [rbp-E0h]
  unsigned __int16 *v195; // [rsp+90h] [rbp-D8h]
  __int64 v196; // [rsp+A0h] [rbp-C8h] BYREF
  unsigned int v197; // [rsp+A8h] [rbp-C0h]
  unsigned __int8 *v198; // [rsp+B0h] [rbp-B8h]
  unsigned __int8 *v199; // [rsp+B8h] [rbp-B0h]
  unsigned __int8 *v200; // [rsp+C0h] [rbp-A8h]
  __int64 v201; // [rsp+D0h] [rbp-98h] BYREF
  unsigned int v202; // [rsp+D8h] [rbp-90h]
  unsigned __int8 *v203; // [rsp+E0h] [rbp-88h]
  unsigned __int8 *v204; // [rsp+E8h] [rbp-80h]
  unsigned __int8 *v205; // [rsp+F0h] [rbp-78h]
  __int64 v206; // [rsp+100h] [rbp-68h] BYREF
  unsigned int v207; // [rsp+108h] [rbp-60h]
  unsigned __int8 *v208; // [rsp+110h] [rbp-58h]
  unsigned __int8 *v209; // [rsp+118h] [rbp-50h]
  unsigned __int8 *v210; // [rsp+120h] [rbp-48h]
  unsigned __int64 v211; // [rsp+128h] [rbp-40h]

  v211 = __readfsqword(0x28u);
  if ( a4 <= 9 )
    return -20;
  if ( a2 <= 5 )
    return -20;
  v5 = a1 + a2;
  v6 = a1;
  v7 = a3[1];
  v8 = *a3;
  v175 = v5;
  v9 = a3[2];
  v10 = (a2 + 3) >> 2;
  v11 = v6 + v10;
  v12 = v6 + v10 + v10;
  v178 = a4 - (v8 + v7) - v9;
  v13 = v12 + v10;
  result = v178 - 6;
  v177 = v12;
  v176 = v13;
  if ( a4 < v178 - 6 || v175 < v13 )
    return -20;
  if ( !*a3 )
    return -72;
  v181 = a3 + 3;
  v183 = *a5;
  v194 = a3 + 3;
  v182 = a3 + 7;
  v195 = a3 + 7;
  v15 = *((_BYTE *)a3 + v8 + 5);
  if ( v8 <= 7 )
  {
    v16 = *((unsigned __int8 *)a3 + 6);
    v193 = a3 + 3;
    v191 = v16;
    __asm { jmp     r14 }
  }
  v193 = (unsigned __int16 *)((char *)a3 + v8 - 2);
  v191 = *(_QWORD *)v193;
  if ( !v15 )
    return -1;
  v192 = __lzcnt(v15) - 23;
  if ( !v7 )
    return -72;
  v17 = (unsigned __int8 *)v181 + v8;
  v199 = v17;
  v18 = v17[v7 - 1];
  v185 = v17 + 8;
  v200 = v17 + 8;
  if ( v7 <= 7 )
  {
    v73 = *v17;
    v198 = v17;
    v196 = v73;
    switch ( v7 )
    {
      case 2uLL:
        goto LABEL_43;
      case 3uLL:
        goto LABEL_42;
      case 4uLL:
        goto LABEL_41;
      case 5uLL:
        goto LABEL_40;
      case 6uLL:
        goto LABEL_39;
      case 7uLL:
        v73 += (unsigned __int64)v17[6] << 48;
LABEL_39:
        v73 += (unsigned __int64)v17[5] << 40;
LABEL_40:
        v73 += (unsigned __int64)v17[4] << 32;
LABEL_41:
        v73 += (unsigned __int64)v17[3] << 24;
LABEL_42:
        v73 += (unsigned __int64)v17[2] << 16;
LABEL_43:
        v196 = ((unsigned __int64)v17[1] << 8) + v73;
        break;
      default:
        break;
    }
    if ( !(_BYTE)v18 )
      return -20;
    v197 = __lzcnt(v18) - 8 * v7 + 41;
  }
  else
  {
    v198 = &v17[v7 - 8];
    v196 = *(_QWORD *)v198;
    if ( !(_BYTE)v18 )
      return -1;
    v197 = __lzcnt(v18) - 23;
  }
  if ( !v9 )
    return -72;
  v19 = &v17[v7];
  v204 = v19;
  v20 = v19[v9 - 1];
  v186 = v19 + 8;
  v205 = v19 + 8;
  if ( v9 > 7 )
  {
    v203 = &v19[v9 - 8];
    v201 = *(_QWORD *)v203;
    if ( (_BYTE)v20 )
    {
      v202 = __lzcnt(v20) - 23;
      goto LABEL_21;
    }
    return -1;
  }
  v74 = *v19;
  v203 = v19;
  v201 = v74;
  switch ( v9 )
  {
    case 2uLL:
      goto LABEL_53;
    case 3uLL:
      goto LABEL_52;
    case 4uLL:
      goto LABEL_51;
    case 5uLL:
      goto LABEL_50;
    case 6uLL:
      goto LABEL_49;
    case 7uLL:
      v74 += (unsigned __int64)v19[6] << 48;
LABEL_49:
      v74 += (unsigned __int64)v19[5] << 40;
LABEL_50:
      v74 += (unsigned __int64)v19[4] << 32;
LABEL_51:
      v74 += (unsigned __int64)v19[3] << 24;
LABEL_52:
      v74 += (unsigned __int64)v19[2] << 16;
LABEL_53:
      v201 = ((unsigned __int64)v19[1] << 8) + v74;
      break;
    default:
      break;
  }
  if ( !(_BYTE)v20 )
    return -20;
  v202 = __lzcnt(v20) - 8 * v9 + 41;
LABEL_21:
  if ( v178 == 6 )
    return -72;
  v21 = &v19[v9];
  v209 = v21;
  v187 = v21 + 8;
  v210 = v21 + 8;
  v22 = v21[v178 - 7];
  v75 = *v21;
  v208 = v21;
  v206 = v75;
  switch ( v178 )
  {
    case 7uLL:
      goto LABEL_63;
    case 8uLL:
      goto LABEL_62;
    case 9uLL:
      goto LABEL_61;
    case 0xAuLL:
      goto LABEL_60;
    case 0xBuLL:
      goto LABEL_59;
    case 0xCuLL:
      goto LABEL_58;
    case 0xDuLL:
      v75 += (unsigned __int64)v21[6] << 48;
LABEL_58:
      v75 += (unsigned __int64)v21[5] << 40;
LABEL_59:
      v75 += (unsigned __int64)v21[4] << 32;
LABEL_60:
      v75 += (unsigned __int64)v21[3] << 24;
LABEL_61:
      v75 += (unsigned __int64)v21[2] << 16;
LABEL_62:
      v206 = ((unsigned __int64)v21[1] << 8) + v75;
LABEL_63:
      if ( !(_BYTE)v22 )
        return -20;
      v207 = __lzcnt(v22) - 8 * result + 41;
LABEL_25:
      v23 = a5 + 1;
      v188 = v6 + a2 - 3;
      v24 = BYTE2(v183);
      v184 = BYTE2(v183);
      if ( v6 + a2 - v13 <= 7 || v6 + a2 - 3 <= v13 )
      {
        v76 = v11;
        v180 = v13;
        v77 = v12;
      }
      else
      {
        v25 = v13;
        v26 = v11;
        v27 = v12;
        v189 = v11;
        v28 = -v24 & 0x3F;
        v29 = v206;
        v179 = v208;
        v30 = v207;
        v190 = a2;
        do
        {
          v37 = v192;
          v6 += 4LL;
          v26 += 4LL;
          v27 += 4LL;
          v38 = v191;
          v25 += 4LL;
          v39 = (unsigned __int8 *)v23 + 2 * ((unsigned __int64)(v191 << v192) >> v28);
          v40 = *v39;
          *(_BYTE *)(v6 - 4) = v39[1];
          v41 = v37 + v40;
          v42 = v197;
          v43 = v196;
          v44 = (unsigned __int8 *)v23 + 2 * ((unsigned __int64)(v196 << v197) >> v28);
          v45 = v44[1];
          LODWORD(v44) = *v44;
          *(_BYTE *)(v26 - 4) = v45;
          LODWORD(v44) = v42 + (_DWORD)v44;
          v46 = v202;
          v47 = (unsigned __int8 *)v23 + 2 * ((unsigned __int64)(v201 << v202) >> v28);
          v48 = v47[1];
          LODWORD(v47) = *v47;
          *(_BYTE *)(v27 - 4) = v48;
          v49 = (unsigned __int8 *)v23 + 2 * ((unsigned __int64)(v29 << v30) >> v28);
          v50 = (_DWORD)v47 + v46;
          LOBYTE(v47) = v49[1];
          LODWORD(v49) = *v49;
          *(_BYTE *)(v25 - 4) = (_BYTE)v47;
          v51 = (_DWORD)v49 + v30;
          v52 = (unsigned __int8 *)v23 + 2 * ((unsigned __int64)(v38 << v41) >> v28);
          LOBYTE(v49) = v52[1];
          LODWORD(v52) = *v52;
          *(_BYTE *)(v6 - 3) = (_BYTE)v49;
          v53 = (_DWORD)v52 + v41;
          v54 = (unsigned __int8 *)v23 + 2 * ((unsigned __int64)(v43 << (char)v44) >> v28);
          LOBYTE(v49) = v54[1];
          LODWORD(v54) = *v54;
          *(_BYTE *)(v26 - 3) = (_BYTE)v49;
          LODWORD(v44) = (_DWORD)v54 + (_DWORD)v44;
          v55 = (unsigned __int8 *)v23 + 2 * ((unsigned __int64)(v201 << v50) >> v28);
          LOBYTE(v49) = v55[1];
          LODWORD(v55) = *v55;
          *(_BYTE *)(v27 - 3) = (_BYTE)v49;
          v56 = (unsigned __int8 *)v23 + 2 * ((unsigned __int64)(v29 << v51) >> v28);
          v57 = (_DWORD)v55 + v50;
          LOBYTE(v55) = v56[1];
          LODWORD(v56) = *v56;
          *(_BYTE *)(v25 - 3) = (_BYTE)v55;
          LODWORD(v56) = v51 + (_DWORD)v56;
          v58 = (unsigned __int8 *)v23 + 2 * ((unsigned __int64)(v38 << v53) >> v28);
          LOBYTE(v51) = v58[1];
          LODWORD(v58) = *v58;
          *(_BYTE *)(v6 - 2) = v51;
          v59 = (_DWORD)v58 + v53;
          v60 = (unsigned __int8 *)v23 + 2 * ((unsigned __int64)(v43 << (char)v44) >> v28);
          v61 = (unsigned __int8 *)v23 + 2 * ((unsigned __int64)(v38 << v59) >> v28);
          LOBYTE(v51) = v60[1];
          LODWORD(v60) = *v60;
          *(_BYTE *)(v26 - 2) = v51;
          LODWORD(v44) = (_DWORD)v60 + (_DWORD)v44;
          v62 = (unsigned __int8 *)v23 + 2 * ((unsigned __int64)(v201 << v57) >> v28);
          v63 = (unsigned __int8 *)v23 + 2 * ((unsigned __int64)(v43 << (char)v44) >> v28);
          LOBYTE(v51) = v62[1];
          LODWORD(v62) = *v62;
          *(_BYTE *)(v27 - 2) = v51;
          v64 = (unsigned __int8 *)v23 + 2 * ((unsigned __int64)(v29 << (char)v56) >> v28);
          v65 = (_DWORD)v62 + v57;
          LOBYTE(v62) = v64[1];
          LODWORD(v64) = *v64;
          *(_BYTE *)(v25 - 2) = (_BYTE)v62;
          LODWORD(v64) = (_DWORD)v56 + (_DWORD)v64;
          LOBYTE(v56) = v61[1];
          LODWORD(v61) = *v61;
          *(_BYTE *)(v6 - 1) = (_BYTE)v56;
          v66 = (_DWORD)v61 + v59;
          LOBYTE(v61) = v63[1];
          LODWORD(v63) = *v63;
          v192 = v66;
          v67 = (_DWORD)v63 + (_DWORD)v44;
          v68 = (unsigned __int8 *)v23 + 2 * ((unsigned __int64)(v201 << v65) >> v28);
          *(_BYTE *)(v26 - 1) = (_BYTE)v61;
          LOBYTE(v61) = v68[1];
          LODWORD(v68) = *v68;
          v197 = v67;
          *(_BYTE *)(v27 - 1) = (_BYTE)v61;
          v69 = (_DWORD)v68 + v65;
          v70 = (unsigned __int8 *)v23 + 2 * ((unsigned __int64)(v29 << (char)v64) >> v28);
          LODWORD(v56) = *v70;
          v71 = v70[1];
          v202 = v69;
          v72 = (_DWORD)v56 + (_DWORD)v64;
          *(_BYTE *)(v25 - 1) = v71;
          v207 = v72;
          if ( v182 <= v193 )
          {
            v31 = 0;
            v192 = v66 & 7;
            v193 = (unsigned __int16 *)((char *)v193 - (v66 >> 3));
            v191 = *(_QWORD *)v193;
          }
          else
          {
            v31 = 3;
          }
          if ( v185 > v198 )
          {
            v31 = 3;
          }
          else
          {
            v197 = v67 & 7;
            v198 -= v67 >> 3;
            v196 = *(_QWORD *)v198;
          }
          v32 = v203;
          if ( v186 > v203 )
          {
            v34 = 3;
          }
          else
          {
            v33 = v69 >> 3;
            v202 = v69 & 7;
            v203 -= v33;
            v201 = *(_QWORD *)&v32[-v33];
            v34 = 0;
          }
          v35 = (v31 | v34) == 0;
          if ( v187 > v179 )
            break;
          v36 = v72;
          v30 = v72 & 7;
          v207 = v30;
          v208 = &v179[-(v36 >> 3)];
          v29 = *(_QWORD *)v208;
          v179 = v208;
          v206 = *(_QWORD *)v208;
        }
        while ( v35 && v188 > v25 );
        v11 = v189;
        v180 = v25;
        v77 = v27;
        v76 = v26;
        a2 = v190;
      }
      if ( v177 < v76 || v11 < v6 || v176 < v77 )
        return -20;
      v78 = v192;
      if ( (__int64)(v11 - v6) > 3 )
      {
        if ( v192 <= 0x40 )
        {
          v79 = v11 - 3;
          v80 = -v184 & 0x3F;
          do
          {
            if ( v193 >= v182 )
            {
              v192 = v78 & 7;
              v193 = (unsigned __int16 *)((char *)v193 - (v78 >> 3));
              v81 = v6 < v79;
              v191 = *(_QWORD *)v193;
            }
            else
            {
              if ( v181 == v193 )
                goto LABEL_78;
              v90 = v78 >> 3;
              v91 = (__int64 *)((char *)v193 - v90);
              if ( v181 > (unsigned __int16 *)((char *)v193 - v90) )
              {
                v92 = (unsigned int)((_DWORD)v193 - (_DWORD)v181);
                v193 = (unsigned __int16 *)((char *)v193 - v92);
                v192 = v78 - 8 * v92;
                v191 = *(_QWORD *)v193;
                goto LABEL_78;
              }
              v193 = (unsigned __int16 *)((char *)v193 - v90);
              v81 = v6 < v79;
              v192 = v78 - 8 * (v78 >> 3);
              v191 = *v91;
            }
            if ( !v81 )
              goto LABEL_78;
            v82 = v191;
            v6 += 4LL;
            v83 = (unsigned __int8 *)v23 + 2 * ((unsigned __int64)(v191 << v192) >> v80);
            v84 = *v83 + v192;
            *(_BYTE *)(v6 - 4) = v83[1];
            v85 = (unsigned __int8 *)v23 + 2 * ((unsigned __int64)(v82 << v84) >> v80);
            v86 = *v85 + v84;
            *(_BYTE *)(v6 - 3) = v85[1];
            v87 = (unsigned __int8 *)v23 + 2 * ((unsigned __int64)(v82 << v86) >> v80);
            v88 = *v87 + v86;
            *(_BYTE *)(v6 - 2) = v87[1];
            v89 = (unsigned __int8 *)v23 + 2 * ((unsigned __int64)(v82 << v88) >> v80);
            LOBYTE(v87) = v89[1];
            v78 = v88 + *v89;
            *(_BYTE *)(v6 - 1) = (_BYTE)v87;
            v192 = v78;
          }
          while ( v78 <= 0x40 );
        }
        goto LABEL_164;
      }
      if ( v192 > 0x40 )
      {
LABEL_164:
        v193 = (unsigned __int16 *)&unk_23B4648;
        goto LABEL_78;
      }
      if ( v193 >= v182 )
      {
        sub_945FD0((__int64)&v191);
      }
      else if ( v181 != v193 )
      {
        v173 = v192 >> 3;
        v174 = v192 >> 3;
        if ( v181 > (unsigned __int16 *)((char *)v193 - v174) )
        {
          v173 = (_DWORD)v193 - (_DWORD)v181;
          v174 = (unsigned int)((_DWORD)v193 - (_DWORD)v181);
        }
        v193 = (unsigned __int16 *)((char *)v193 - v174);
        v192 -= 8 * v173;
        v191 = *(_QWORD *)v193;
      }
LABEL_78:
      if ( v11 > v6 )
      {
        v93 = v191;
        v94 = v192;
        do
        {
          v95 = (unsigned __int8 *)v23 + 2 * ((unsigned __int64)(v93 << v94) >> (-(char)v184 & 0x3F));
          ++v6;
          v96 = v95[1];
          LODWORD(v95) = *v95;
          *(_BYTE *)(v6 - 1) = v96;
          v94 += (unsigned int)v95;
        }
        while ( v11 != v6 );
        v192 = v94;
      }
      v97 = v197;
      if ( (__int64)(v177 - v76) > 3 )
      {
        if ( v197 <= 0x40 )
        {
          v98 = v76;
          v99 = (unsigned __int64)v200;
          v100 = v199;
          v101 = v177 - 3;
          v102 = -v184 & 0x3F;
          do
          {
            v112 = v198;
            if ( (unsigned __int64)v198 >= v99 )
            {
              v197 = v97 & 7;
              v198 -= v97 >> 3;
              v103 = v98 < v101;
              v196 = *(_QWORD *)v198;
            }
            else
            {
              if ( v198 == v100 )
              {
LABEL_144:
                v76 = v98;
                goto LABEL_94;
              }
              v113 = v97 >> 3;
              v114 = &v198[-v113];
              if ( v100 > &v198[-v113] )
              {
                v76 = v98;
                v115 = (_DWORD)v198 - (_DWORD)v100;
                goto LABEL_92;
              }
              v198 -= v113;
              v103 = v98 < v101;
              v197 = v97 - 8 * (v97 >> 3);
              v196 = *(_QWORD *)v114;
            }
            if ( !v103 )
              goto LABEL_144;
            v104 = v196;
            v98 += 4LL;
            v105 = (unsigned __int8 *)v23 + 2 * ((unsigned __int64)(v196 << v197) >> v102);
            v106 = v197 + *v105;
            *(_BYTE *)(v98 - 4) = v105[1];
            v107 = (unsigned __int8 *)v23 + 2 * ((unsigned __int64)(v104 << v106) >> v102);
            v108 = *v107 + v106;
            *(_BYTE *)(v98 - 3) = v107[1];
            v109 = (unsigned __int8 *)v23 + 2 * ((unsigned __int64)(v104 << v108) >> v102);
            v110 = v109[1];
            LODWORD(v109) = v108 + *v109;
            *(_BYTE *)(v98 - 2) = v110;
            v111 = (unsigned __int8 *)v23 + 2 * ((unsigned __int64)(v104 << (char)v109) >> v102);
            LOBYTE(v108) = v111[1];
            v97 = (_DWORD)v109 + *v111;
            *(_BYTE *)(v98 - 1) = v108;
            v197 = v97;
          }
          while ( v97 <= 0x40 );
          v76 = v98;
        }
        goto LABEL_163;
      }
      if ( v197 > 0x40 )
      {
LABEL_163:
        v198 = (unsigned __int8 *)&unk_23B4648;
        goto LABEL_94;
      }
      v112 = v198;
      if ( v198 >= v200 )
      {
        sub_945FD0((__int64)&v196);
      }
      else if ( v198 != v199 )
      {
        v115 = v197 >> 3;
        v116 = v197 >> 3;
        if ( v199 > &v198[-v116] )
        {
          v115 = (_DWORD)v198 - (_DWORD)v199;
LABEL_92:
          v116 = v115;
        }
        v198 = &v112[-v116];
        v197 = v97 - 8 * v115;
        v196 = *(_QWORD *)&v112[-v116];
      }
LABEL_94:
      if ( v177 > v76 )
      {
        v117 = v196;
        v118 = v76;
        v119 = v197;
        do
        {
          v120 = (unsigned __int8 *)v23 + 2 * ((unsigned __int64)(v117 << v119) >> (-(char)v184 & 0x3F));
          ++v118;
          v121 = v120[1];
          LODWORD(v120) = *v120;
          *(_BYTE *)(v118 - 1) = v121;
          v119 += (unsigned int)v120;
        }
        while ( v177 != v118 );
        v197 = v119;
      }
      v122 = v202;
      if ( (__int64)(v176 - v77) > 3 )
      {
        if ( v202 <= 0x40 )
        {
          v123 = v77;
          v124 = (unsigned __int64)v205;
          v125 = v204;
          v126 = v176 - 3;
          v127 = -v184 & 0x3F;
          do
          {
            v137 = v203;
            if ( (unsigned __int64)v203 >= v124 )
            {
              v202 = v122 & 7;
              v203 -= v122 >> 3;
              v128 = v123 < v126;
              v201 = *(_QWORD *)v203;
            }
            else
            {
              if ( v203 == v125 )
              {
LABEL_142:
                v77 = v123;
                goto LABEL_110;
              }
              v138 = v122 >> 3;
              v139 = &v203[-v138];
              if ( v125 > &v203[-v138] )
              {
                v77 = v123;
                v140 = (_DWORD)v203 - (_DWORD)v125;
                goto LABEL_108;
              }
              v203 -= v138;
              v128 = v123 < v126;
              v202 = v122 - 8 * (v122 >> 3);
              v201 = *(_QWORD *)v139;
            }
            if ( !v128 )
              goto LABEL_142;
            v129 = v201;
            v123 += 4LL;
            v130 = (unsigned __int8 *)v23 + 2 * ((unsigned __int64)(v201 << v202) >> v127);
            v131 = v202 + *v130;
            *(_BYTE *)(v123 - 4) = v130[1];
            v132 = (unsigned __int8 *)v23 + 2 * ((unsigned __int64)(v129 << v131) >> v127);
            v133 = *v132 + v131;
            *(_BYTE *)(v123 - 3) = v132[1];
            v134 = (unsigned __int8 *)v23 + 2 * ((unsigned __int64)(v129 << v133) >> v127);
            v135 = v134[1];
            LODWORD(v134) = v133 + *v134;
            *(_BYTE *)(v123 - 2) = v135;
            v136 = (unsigned __int8 *)v23 + 2 * ((unsigned __int64)(v129 << (char)v134) >> v127);
            LOBYTE(v133) = v136[1];
            v122 = (_DWORD)v134 + *v136;
            *(_BYTE *)(v123 - 1) = v133;
            v202 = v122;
          }
          while ( v122 <= 0x40 );
          v77 = v123;
        }
        goto LABEL_156;
      }
      if ( v202 > 0x40 )
      {
LABEL_156:
        v203 = (unsigned __int8 *)&unk_23B4648;
        goto LABEL_110;
      }
      v137 = v203;
      if ( v203 >= v205 )
      {
        sub_945FD0((__int64)&v201);
      }
      else if ( v203 != v204 )
      {
        v140 = v202 >> 3;
        v141 = v202 >> 3;
        if ( v204 > &v203[-v141] )
        {
          v140 = (_DWORD)v203 - (_DWORD)v204;
LABEL_108:
          v141 = v140;
        }
        v203 = &v137[-v141];
        v202 = v122 - 8 * v140;
        v201 = *(_QWORD *)&v137[-v141];
      }
LABEL_110:
      if ( v176 > v77 )
      {
        v142 = v201;
        v143 = v77;
        v144 = v202;
        do
        {
          v145 = (unsigned __int8 *)v23 + 2 * ((unsigned __int64)(v142 << v144) >> (-(char)v184 & 0x3F));
          ++v143;
          v146 = v145[1];
          LODWORD(v145) = *v145;
          *(_BYTE *)(v143 - 1) = v146;
          v144 += (unsigned int)v145;
        }
        while ( v176 != v143 );
        v202 = v144;
      }
      v147 = v207;
      if ( (__int64)(v175 - v180) <= 3 )
      {
        if ( v207 > 0x40 )
        {
          v150 = (unsigned __int8 *)&unk_23B4648;
          v148 = v209;
          v208 = (unsigned __int8 *)&unk_23B4648;
        }
        else if ( v208 >= v210 )
        {
          sub_945FD0((__int64)&v206);
          v150 = v208;
          v148 = v209;
        }
        else
        {
          v148 = v209;
          v150 = v209;
          if ( v208 != v209 )
          {
            v171 = v207 >> 3;
            v172 = v207 >> 3;
            if ( v209 > &v208[-v172] )
            {
              v171 = (_DWORD)v208 - (_DWORD)v209;
              v172 = (unsigned int)((_DWORD)v208 - (_DWORD)v209);
            }
            v208 -= v172;
            v150 = v208;
            v207 -= 8 * v171;
            v206 = *(_QWORD *)v208;
          }
        }
      }
      else
      {
        v148 = v209;
        if ( v207 <= 0x40 )
        {
          v148 = v209;
          v149 = (unsigned __int64)v210;
          v150 = v209;
          v151 = v180;
          v152 = -v184 & 0x3F;
          do
          {
            if ( (unsigned __int64)v208 >= v149 )
            {
              v207 = v147 & 7;
              v208 -= v147 >> 3;
              v153 = v188 > v151;
              v206 = *(_QWORD *)v208;
            }
            else
            {
              if ( v208 == v148 )
              {
                v180 = v151;
                goto LABEL_125;
              }
              v162 = v147 >> 3;
              v163 = &v208[-v162];
              if ( v148 > &v208[-v162] )
              {
                v180 = v151;
                v164 = (unsigned int)((_DWORD)v208 - (_DWORD)v148);
                v208 -= v164;
                v207 = v147 - 8 * v164;
                v206 = *(_QWORD *)v208;
LABEL_124:
                v150 = v208;
                goto LABEL_125;
              }
              v208 -= v162;
              v153 = v188 > v151;
              v207 = v147 - 8 * (v147 >> 3);
              v206 = *(_QWORD *)v163;
            }
            if ( !v153 )
            {
              v180 = v151;
              goto LABEL_124;
            }
            v154 = v206;
            v151 += 4LL;
            v155 = (unsigned __int8 *)v23 + 2 * ((unsigned __int64)(v206 << v207) >> v152);
            v156 = *v155 + v207;
            *(_BYTE *)(v151 - 4) = v155[1];
            v157 = (unsigned __int8 *)v23 + 2 * ((unsigned __int64)(v154 << v156) >> v152);
            v158 = *v157 + v156;
            *(_BYTE *)(v151 - 3) = v157[1];
            v159 = (unsigned __int8 *)v23 + 2 * ((unsigned __int64)(v154 << v158) >> v152);
            v160 = *v159 + v158;
            *(_BYTE *)(v151 - 2) = v159[1];
            v161 = (unsigned __int8 *)v23 + 2 * ((unsigned __int64)(v154 << v160) >> v152);
            LOBYTE(v159) = v161[1];
            v147 = v160 + *v161;
            *(_BYTE *)(v151 - 1) = (_BYTE)v159;
            v207 = v147;
          }
          while ( v147 <= 0x40 );
          v180 = v151;
        }
        v150 = (unsigned __int8 *)&unk_23B4648;
        v208 = (unsigned __int8 *)&unk_23B4648;
      }
LABEL_125:
      if ( v175 > v180 )
      {
        v165 = v206;
        v166 = v207;
        v167 = v180;
        do
        {
          v168 = (unsigned __int8 *)v23 + 2 * ((unsigned __int64)(v165 << v166) >> (-(char)v184 & 0x3F));
          ++v167;
          v169 = v168[1];
          LODWORD(v168) = *v168;
          *(_BYTE *)(v167 - 1) = v169;
          v166 += (unsigned int)v168;
        }
        while ( v175 != v167 );
        v207 = v166;
      }
      v170 = v193 == v194 && v192 == 64;
      if ( v198 == v199 )
      {
        if ( v197 != 64 )
          v170 = 0;
      }
      else
      {
        v170 = 0;
      }
      if ( v203 == v204 && v202 == 64 && v150 == v148 && v207 == 64 && v170 )
        return a2;
      return -20;
    default:
      v208 = &v21[v178 - 14];
      v206 = *(_QWORD *)v208;
      if ( !(_BYTE)v22 )
        return -1;
      v207 = __lzcnt(v22) - 23;
      if ( result <= 0xFFFFFFFFFFFFFF88LL )
        goto LABEL_25;
      return result;
  }
}

