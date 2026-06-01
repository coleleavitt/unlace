unsigned __int64 __fastcall sub_1B35BA0(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __m128 a7)
{
  unsigned __int64 *v7; // rbx
  __int64 *v8; // r14
  __m128 *v9; // r13
  unsigned __int64 v10; // r12
  __int64 v11; // rdi
  __int64 v12; // rax
  char v13; // dl
  __int64 v14; // r15
  __int64 v15; // rbp
  char v16; // al
  __int64 v17; // rax
  __int16 v18; // dx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rbp
  __int64 v28; // rcx
  char v29; // r10
  __int64 v30; // r11
  int v31; // r9d
  __int64 v32; // rdx
  unsigned int v33; // edi
  _QWORD *v34; // rsi
  __int64 v35; // r8
  __int64 v36; // r11
  unsigned __int64 v37; // rbp
  void **v38; // r12
  unsigned __int64 v39; // rsi
  _BYTE *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  unsigned int v45; // eax
  _BYTE *v46; // rax
  __int64 v47; // rdx
  void **v48; // rbx
  unsigned __int64 v49; // rbp
  __int64 v50; // rbp
  _QWORD *v51; // rax
  unsigned __int64 v52; // rax
  __int64 v54; // rcx
  unsigned __int64 v55; // rdx
  __int64 v56; // rdx
  int v57; // edi
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // r8
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rax
  unsigned __int64 v64; // rdx
  __int64 v65; // r15
  __int64 v66; // rcx
  __int64 v67; // rax
  unsigned __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // r15
  __int64 v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // r15
  __int64 v82; // rax
  _QWORD *v83; // rax
  __int64 v84; // rcx
  unsigned __int64 v85; // rdi
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rbp
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rax
  _QWORD *v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // r15
  void *v98; // rax
  _QWORD *v99; // rax
  __int64 v100; // r8
  int v101; // edi
  unsigned int v102; // edx
  __int64 v103; // r9
  __int64 v104; // rdx
  int v105; // eax
  __int64 v106; // rax
  __int64 v107; // r8
  int v108; // edi
  unsigned int v109; // edx
  __int64 v110; // r9
  int v111; // r11d
  _QWORD *v112; // r15
  int v113; // edi
  __int64 v114; // rdx
  int v115; // eax
  __int64 v116; // rax
  int v117; // edi
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rsi
  __int64 v121; // rax
  __int64 v122; // r13
  unsigned __int64 *v123; // r14
  __int64 v124; // rbx
  void *v125; // rdi
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rdx
  __int64 v129; // rax
  __int64 v130; // rbx
  unsigned __int64 v131; // r12
  __int64 v132; // rbp
  __int64 v133; // r13
  void *v134; // rdi
  _QWORD *v135; // r11
  _QWORD *v136; // r15
  int v137; // r11d
  __int64 v138; // [rsp+0h] [rbp-1D8h]
  __int64 v139; // [rsp+0h] [rbp-1D8h]
  __int64 v140; // [rsp+0h] [rbp-1D8h]
  __int64 v141; // [rsp+0h] [rbp-1D8h]
  unsigned __int64 *v142; // [rsp+0h] [rbp-1D8h]
  int v143; // [rsp+0h] [rbp-1D8h]
  unsigned __int64 *v144; // [rsp+8h] [rbp-1D0h]
  void **v145; // [rsp+28h] [rbp-1B0h] BYREF
  unsigned __int8 **v146; // [rsp+30h] [rbp-1A8h]
  void **p_ptr; // [rsp+38h] [rbp-1A0h]
  __int64 v148; // [rsp+40h] [rbp-198h]
  int v149; // [rsp+4Ch] [rbp-18Ch]
  int v150; // [rsp+50h] [rbp-188h]
  int v151; // [rsp+54h] [rbp-184h]
  __int64 v152; // [rsp+58h] [rbp-180h]
  __m128 *v153; // [rsp+60h] [rbp-178h]
  __int64 *v154; // [rsp+68h] [rbp-170h]
  unsigned int v155; // [rsp+74h] [rbp-164h] BYREF
  void **v156; // [rsp+78h] [rbp-160h] BYREF
  __int64 v157; // [rsp+80h] [rbp-158h] BYREF
  void **v158; // [rsp+88h] [rbp-150h] BYREF
  unsigned __int64 v159; // [rsp+90h] [rbp-148h] BYREF
  int v160; // [rsp+98h] [rbp-140h]
  void *v161; // [rsp+A0h] [rbp-138h] BYREF
  signed __int64 v162; // [rsp+A8h] [rbp-130h]
  _BYTE v163[16]; // [rsp+B0h] [rbp-128h] BYREF
  void *ptr; // [rsp+C0h] [rbp-118h] BYREF
  __int64 v165; // [rsp+C8h] [rbp-110h]
  char v166; // [rsp+D0h] [rbp-108h] BYREF
  __int64 v167; // [rsp+110h] [rbp-C8h] BYREF
  void *v168; // [rsp+120h] [rbp-B8h]
  __int64 v169; // [rsp+130h] [rbp-A8h] BYREF
  __int64 v170; // [rsp+138h] [rbp-A0h]
  char v171; // [rsp+188h] [rbp-50h]
  unsigned int v172; // [rsp+190h] [rbp-48h]
  char v173; // [rsp+194h] [rbp-44h]

  v144 = &a2[a3];
  p_ptr = &ptr;
  ptr = &v166;
  v165 = 0x800000000LL;
  if ( v144 == a2 )
    return 0;
  v149 = a4;
  v7 = a2;
  v8 = (__int64 *)a1;
  v9 = (__m128 *)&v167;
  v151 = a6;
  v150 = a5;
  v148 = a1;
  v146 = (unsigned __int8 **)&v169;
  v152 = 0x800000000LL;
  do
  {
LABEL_3:
    v10 = *v7;
    v11 = *v8;
    v155 = 0;
    v156 = (void **)v10;
    v158 = nullptr;
    v12 = sub_1B31D70(
            v11,
            (unsigned __int64 *)&v156,
            &v155,
            (__int64 *)&v158,
            (__int64)&byte_22F0C30,
            0,
            *(double *)a7.m128_u64);
    if ( v13 )
    {
      v54 = (unsigned int)v165;
      v55 = (unsigned int)v165 + 1LL;
      if ( v55 > HIDWORD(v165) )
      {
        v139 = v12;
        sub_2237220(p_ptr, p_ptr + 2, v55, 8);
        v54 = (unsigned int)v165;
        v12 = v139;
      }
      *((_QWORD *)ptr + v54) = v10;
      LODWORD(v165) = v165 + 1;
    }
    v14 = v12;
    if ( !v12 )
      goto LABEL_40;
    v15 = v8[1];
    v138 = v12;
    v16 = *(_BYTE *)(v12 + 28);
    v145 = v156;
    if ( (v16 & 0x7F) != 0x2C )
      goto LABEL_18;
    v17 = sub_B73640(v14);
    v18 = *(_WORD *)v17 & 0x1FF;
    if ( ((v18 + 452) & 0x1FFu) <= 1 )
    {
      v17 = *(_QWORD *)(v17 + 16);
      v18 = *(_WORD *)v17 & 0x1FF;
    }
    if ( v18 == 48 )
    {
      v19 = *(_QWORD *)(v17 + 16);
      v17 = v19 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v19 & 4) == 0 )
        goto LABEL_13;
      v17 = *(_QWORD *)(v17 + 40);
      v18 = *(_WORD *)v17 & 0x1FF;
    }
    for ( ; v18 == 116; v18 = *(_WORD *)v17 & 0x1FF )
    {
      v17 = *(_QWORD *)(v17 + 24);
LABEL_13:
      ;
    }
    if ( v18 == 79 )
      v17 = sub_BFA3B0(v17);
    v20 = sub_BFB9F0(v17);
    if ( (*(_WORD *)v20 & 0x1FF) == 0x2E )
    {
      v14 = *(_QWORD *)(v20 + 24);
      v138 = v14;
    }
LABEL_18:
    v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 32LL))(v138);
    v22 = *(unsigned int *)(v15 + 344);
    if ( !(_DWORD)v22
      || (v23 = *(_QWORD *)(v15 + 336) + 6776 * v22 - 6776, *(_QWORD *)(v23 + 6768) != *(_QWORD *)(v15 + 328))
      || (v24 = *(unsigned int *)(v23 + 8), v25 = *(unsigned int *)(v15 + 27504), (unsigned int)v24 <= (unsigned int)v25)
      || (v26 = v24 - v25) == 0 )
    {
      BUG();
    }
    v27 = *(_QWORD *)v23 + 1688 * (v26 - 1);
    v28 = v27 + 568;
    v29 = *(_BYTE *)(v27 + 568) & 1;
    if ( v29 )
    {
      v32 = v27 + 576;
      v33 = ((unsigned __int8)((unsigned int)v21 >> 4) ^ (unsigned __int8)((unsigned int)v21 >> 9)) & 7;
      v34 = (_QWORD *)(v27
                     + 576
                     + 16LL
                     * (((unsigned __int8)((unsigned int)v21 >> 4) ^ (unsigned __int8)((unsigned int)v21 >> 9)) & 7));
      v35 = *v34;
      if ( v21 == *v34 )
        goto LABEL_50;
      v31 = 7;
    }
    else
    {
      v30 = *(unsigned int *)(v27 + 584);
      if ( !(_DWORD)v30 )
      {
        v56 = *(unsigned int *)(v27 + 568);
        v34 = nullptr;
        v57 = (*(_DWORD *)(v27 + 568) >> 1) + 1;
        goto LABEL_52;
      }
      v31 = v30 - 1;
      v32 = *(_QWORD *)(v27 + 576);
      v33 = (v30 - 1) & (((unsigned int)v21 >> 9) ^ ((unsigned int)v21 >> 4));
      v34 = (_QWORD *)(v32 + 16LL * v33);
      v35 = *v34;
      if ( *v34 == v21 )
        goto LABEL_25;
    }
    if ( v35 == -4096 )
      goto LABEL_91;
    v143 = 1;
    v135 = nullptr;
    while ( 1 )
    {
      if ( v135 || v35 != -8192 )
        v34 = v135;
      v33 = v31 & (v143 + v33);
      v136 = (_QWORD *)(v32 + 16LL * v33);
      v35 = *v136;
      if ( v21 == *v136 )
      {
        if ( !v29 )
        {
          v32 = *(_QWORD *)(v27 + 576);
          v30 = *(unsigned int *)(v27 + 584);
          v34 = v136;
LABEL_25:
          v36 = 16 * v30;
          goto LABEL_26;
        }
        v32 = v27 + 576;
        v34 = v136;
LABEL_50:
        v36 = 128;
LABEL_26:
        sub_1AF9570(v9, v34, (_QWORD *)(v36 + v32), v28, 1);
        v37 = *(_QWORD *)(v167 + 8);
        if ( !v37 )
          goto LABEL_59;
        sub_168B9F0((__int64)v9, v8, v155, 0x121Eu, 0);
        if ( v171 )
        {
          v38 = &v161;
          sub_AE9DF0(v146, 0, 2u);
        }
        else
        {
          v38 = &v161;
          if ( v173 )
          {
            v97 = sub_168B9E0(v9);
            v98 = v168;
            if ( v168 )
              v98 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v168 + 32LL))(v168);
            v38 = &v161;
            v161 = v98;
            v99 = sub_1587BC0(v97, (__int64 *)&v161, v93, v94, v95, v96);
            sub_AE9DF0((unsigned __int8 **)(*v99 + 32LL * v172 + 8), 0, 2u);
          }
        }
        v39 = 0;
        v40 = (_BYTE *)sub_20EB760(67, 0);
        if ( v40 )
        {
          v39 = (unsigned __int64)v40;
          v161 = v163;
          sub_1AEB960(&v161, v40, (__int64)&v40[v41]);
          if ( v171 )
            goto LABEL_64;
        }
        else
        {
          v162 = 0;
          v161 = v163;
          v163[0] = 0;
          if ( v171 )
          {
LABEL_64:
            v39 = (unsigned __int64)v161;
            sub_AEC220(v146, v161, v162);
            if ( v171 )
              goto LABEL_65;
            goto LABEL_76;
          }
        }
        if ( !v173 )
          goto LABEL_32;
        v74 = sub_168B9E0(v9);
        v75 = (__int64)v168;
        if ( v168 )
          v75 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v168 + 32LL))(v168);
        v159 = v75;
        v76 = sub_1587BC0(v74, (__int64 *)&v159, v70, v71, v72, v73);
        v39 = (unsigned __int64)v161;
        sub_AEC220((unsigned __int8 **)(*v76 + 32LL * v172 + 8), v161, v162);
        if ( v171 )
        {
LABEL_65:
          v65 = v169;
          v66 = (__int64)v158;
          if ( v169 )
          {
            v67 = *(unsigned int *)(v169 + 424);
            v39 = *(unsigned int *)(v169 + 428);
            v68 = v67 + 1;
          }
          else
          {
            v104 = v170;
            v105 = *(_DWORD *)(v170 + 14976);
            if ( v105 )
            {
              v118 = (unsigned int)(v105 - 1);
              *(_DWORD *)(v170 + 14976) = v118;
              v65 = *(_QWORD *)(v104 + 8 * v118 + 14848);
              v119 = *(unsigned int *)(v65 + 536);
              *(_BYTE *)v65 = 0;
              v120 = *(_QWORD *)(v65 + 528);
              *(_DWORD *)(v65 + 424) = 0;
              v121 = v120 + (v119 << 6);
              if ( v120 == v121 )
              {
                v68 = 1;
                v67 = 0;
              }
              else
              {
                v145 = (void **)v9;
                v122 = v66;
                v153 = (__m128 *)v8;
                v123 = v7;
                v124 = v121;
                do
                {
                  while ( 1 )
                  {
                    v124 -= 64;
                    v125 = *(void **)(v124 + 24);
                    if ( v125 == (void *)(v124 + 40) )
                      break;
                    operator delete(v125);
                    if ( v120 == v124 )
                      goto LABEL_124;
                  }
                }
                while ( v120 != v124 );
LABEL_124:
                v67 = *(unsigned int *)(v65 + 424);
                v66 = v122;
                v7 = v123;
                v38 = &v161;
                v9 = (__m128 *)v145;
                v8 = (__int64 *)v153;
                v68 = v67 + 1;
              }
              *(_DWORD *)(v65 + 536) = 0;
              v39 = *(unsigned int *)(v65 + 428);
            }
            else
            {
              v140 = (__int64)v158;
              v106 = operator new(0x3A0u);
              v39 = 8;
              v68 = 1;
              v65 = v106;
              *(_BYTE *)v106 = 0;
              *(_QWORD *)(v106 + 96) = v106 + 112;
              *(_QWORD *)(v106 + 128) = v106 + 144;
              *(_QWORD *)(v106 + 160) = v106 + 176;
              *(_QWORD *)(v106 + 192) = v106 + 208;
              *(_QWORD *)(v106 + 224) = v106 + 240;
              *(_QWORD *)(v106 + 256) = v106 + 272;
              *(_QWORD *)(v106 + 288) = v106 + 304;
              *(_QWORD *)(v106 + 320) = v106 + 336;
              *(_QWORD *)(v106 + 352) = v106 + 368;
              *(_QWORD *)(v106 + 384) = v106 + 400;
              *(_QWORD *)(v106 + 104) = 0;
              *(_BYTE *)(v106 + 112) = 0;
              *(_QWORD *)(v106 + 136) = 0;
              *(_BYTE *)(v106 + 144) = 0;
              *(_QWORD *)(v106 + 168) = 0;
              *(_BYTE *)(v106 + 176) = 0;
              *(_QWORD *)(v106 + 200) = 0;
              *(_BYTE *)(v106 + 208) = 0;
              *(_QWORD *)(v106 + 232) = 0;
              *(_BYTE *)(v106 + 240) = 0;
              *(_QWORD *)(v106 + 264) = 0;
              *(_BYTE *)(v106 + 272) = 0;
              *(_QWORD *)(v106 + 296) = 0;
              *(_BYTE *)(v106 + 304) = 0;
              *(_QWORD *)(v106 + 328) = 0;
              *(_BYTE *)(v106 + 336) = 0;
              *(_QWORD *)(v106 + 360) = 0;
              *(_BYTE *)(v106 + 368) = 0;
              *(_QWORD *)(v106 + 392) = 0;
              *(_BYTE *)(v106 + 400) = 0;
              *(_QWORD *)(v106 + 416) = v106 + 432;
              v66 = v140;
              *(_QWORD *)(v106 + 424) = v152;
              *(_QWORD *)(v106 + 528) = v106 + 544;
              *(_QWORD *)(v106 + 536) = 0x600000000LL;
              v67 = 0;
            }
            v169 = v65;
          }
          v159 = v66;
          LOBYTE(v160) = 1;
          if ( v68 <= v39 )
            goto LABEL_68;
LABEL_82:
          v39 = v65 + 432;
          sub_2237220(v65 + 416, v65 + 432, v68, 12);
          v67 = *(unsigned int *)(v65 + 424);
LABEL_68:
          v69 = *(_QWORD *)(v65 + 416) + 12 * v67;
          *(_QWORD *)v69 = v159;
          *(_DWORD *)(v69 + 8) = v160;
          ++*(_DWORD *)(v65 + 424);
          goto LABEL_32;
        }
LABEL_76:
        if ( v173 )
        {
          v81 = sub_168B9E0(v9);
          v82 = (__int64)v168;
          if ( v168 )
            v82 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v168 + 32LL))(v168);
          v157 = v82;
          v83 = sub_1587BC0(v81, &v157, v77, v78, v79, v80);
          v39 = (unsigned __int64)v158;
          v84 = *v83 + 32LL * v172;
          v65 = *(_QWORD *)(v84 + 8);
          if ( v65 )
          {
            v67 = *(unsigned int *)(v65 + 424);
            v85 = *(unsigned int *)(v65 + 428);
            v68 = v67 + 1;
          }
          else
          {
            v114 = *(_QWORD *)(v84 + 16);
            v115 = *(_DWORD *)(v114 + 14976);
            if ( v115 )
            {
              v126 = (unsigned int)(v115 - 1);
              *(_DWORD *)(v114 + 14976) = v126;
              v65 = *(_QWORD *)(v114 + 8 * v126 + 14848);
              v127 = *(unsigned int *)(v65 + 536);
              *(_BYTE *)v65 = 0;
              v128 = *(_QWORD *)(v65 + 528);
              *(_DWORD *)(v65 + 424) = 0;
              v129 = v128 + (v127 << 6);
              if ( v128 == v129 )
              {
                v68 = 1;
                v67 = 0;
              }
              else
              {
                v142 = v7;
                v130 = v129;
                v145 = &v161;
                v131 = v37;
                v132 = v128;
                v153 = v9;
                v133 = v84;
                v154 = v8;
                do
                {
                  while ( 1 )
                  {
                    v130 -= 64;
                    v134 = *(void **)(v130 + 24);
                    if ( v134 == (void *)(v130 + 40) )
                      break;
                    operator delete(v134);
                    if ( v132 == v130 )
                      goto LABEL_132;
                  }
                }
                while ( v132 != v130 );
LABEL_132:
                v67 = *(unsigned int *)(v65 + 424);
                v37 = v131;
                v84 = v133;
                v7 = v142;
                v38 = v145;
                v9 = v153;
                v8 = v154;
                v68 = v67 + 1;
              }
              *(_DWORD *)(v65 + 536) = 0;
              v85 = *(unsigned int *)(v65 + 428);
            }
            else
            {
              v145 = v158;
              v141 = v84;
              v116 = operator new(0x3A0u);
              v85 = 8;
              v68 = 1;
              v65 = v116;
              *(_BYTE *)v116 = 0;
              *(_QWORD *)(v116 + 96) = v116 + 112;
              *(_QWORD *)(v116 + 128) = v116 + 144;
              *(_QWORD *)(v116 + 160) = v116 + 176;
              *(_QWORD *)(v116 + 192) = v116 + 208;
              *(_QWORD *)(v116 + 224) = v116 + 240;
              *(_QWORD *)(v116 + 256) = v116 + 272;
              *(_QWORD *)(v116 + 288) = v116 + 304;
              *(_QWORD *)(v116 + 320) = v116 + 336;
              *(_QWORD *)(v116 + 352) = v116 + 368;
              *(_QWORD *)(v116 + 384) = v116 + 400;
              *(_QWORD *)(v116 + 104) = 0;
              *(_BYTE *)(v116 + 112) = 0;
              *(_QWORD *)(v116 + 136) = 0;
              *(_BYTE *)(v116 + 144) = 0;
              *(_QWORD *)(v116 + 168) = 0;
              *(_BYTE *)(v116 + 176) = 0;
              *(_QWORD *)(v116 + 200) = 0;
              *(_BYTE *)(v116 + 208) = 0;
              *(_QWORD *)(v116 + 232) = 0;
              *(_BYTE *)(v116 + 240) = 0;
              *(_QWORD *)(v116 + 264) = 0;
              *(_BYTE *)(v116 + 272) = 0;
              *(_QWORD *)(v116 + 296) = 0;
              *(_BYTE *)(v116 + 304) = 0;
              *(_QWORD *)(v116 + 328) = 0;
              *(_BYTE *)(v116 + 336) = 0;
              *(_QWORD *)(v116 + 360) = 0;
              *(_BYTE *)(v116 + 368) = 0;
              *(_QWORD *)(v116 + 392) = 0;
              *(_BYTE *)(v116 + 400) = 0;
              *(_QWORD *)(v116 + 416) = v116 + 432;
              v84 = v141;
              v39 = (unsigned __int64)v145;
              *(_QWORD *)(v116 + 424) = v152;
              *(_QWORD *)(v116 + 528) = v116 + 544;
              *(_QWORD *)(v116 + 536) = 0x600000000LL;
              v67 = 0;
            }
            *(_QWORD *)(v84 + 8) = v65;
          }
          v159 = v39;
          LOBYTE(v160) = 1;
          if ( v68 > v85 )
            goto LABEL_82;
          goto LABEL_68;
        }
LABEL_32:
        if ( v161 != v38 + 2 )
          operator delete(v161);
        sub_15F7200(v9);
        v45 = sub_C00A40(v37, v39, v42, v43, v44);
        sub_168B9F0((__int64)v9, v8, v45, 0x181Au, 0);
        v46 = (_BYTE *)sub_20EB760(67, 0);
        if ( v46 )
        {
          v161 = v38 + 2;
          sub_1AEB960(v38, v46, (__int64)&v46[v47]);
          if ( !v171 )
            goto LABEL_36;
        }
        else
        {
          v162 = 0;
          v161 = v38 + 2;
          v163[0] = 0;
          if ( !v171 )
          {
LABEL_36:
            if ( v173 )
            {
              v88 = sub_168B9E0(v9);
              v91 = (__int64)v168;
              if ( v168 )
                v91 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v168 + 32LL))(v168);
              v159 = v91;
              v92 = sub_1587BC0(v88, (__int64 *)&v159, v86, v87, v89, v90);
              sub_AEC220((unsigned __int8 **)(*v92 + 32LL * v172 + 8), v161, v162);
            }
            goto LABEL_37;
          }
        }
        sub_AEC220(v146, v161, v162);
LABEL_37:
        if ( v161 != v38 + 2 )
          operator delete(v161);
        sub_15F7200(v9);
LABEL_40:
        if ( v144 == ++v7 )
          goto LABEL_41;
        goto LABEL_3;
      }
      if ( v35 == -4096 )
        break;
      ++v143;
      v135 = v34;
      v34 = (_QWORD *)(v32 + 16LL * v33);
    }
    if ( !v34 )
      v34 = (_QWORD *)(v32 + 16LL * v33);
LABEL_91:
    v56 = *(unsigned int *)(v27 + 568);
    v57 = (*(_DWORD *)(v27 + 568) >> 1) + 1;
    if ( !v29 )
    {
      LODWORD(v30) = *(_DWORD *)(v27 + 584);
LABEL_52:
      v58 = (unsigned int)(3 * v30);
      v59 = (unsigned int)(4 * v57);
      if ( (unsigned int)v59 >= (unsigned int)v58 )
        goto LABEL_93;
LABEL_53:
      v60 = (unsigned int)v30 >> 3;
      if ( (int)v30 - *(_DWORD *)(v27 + 572) - v57 > (unsigned int)v60 )
        goto LABEL_54;
      v153 = (__m128 *)v21;
      sub_1B019E0(v27 + 568, v30, v56, v28, v60, v59);
      v28 = v27 + 568;
      if ( (*(_BYTE *)(v27 + 568) & 1) != 0 )
      {
        v107 = v27 + 576;
        v108 = 7;
      }
      else
      {
        v117 = *(_DWORD *)(v27 + 584);
        v107 = *(_QWORD *)(v27 + 576);
        if ( !v117 )
        {
LABEL_162:
          *(_DWORD *)(v27 + 568) = (2 * (*(_DWORD *)(v27 + 568) >> 1) + 2) | *(_DWORD *)(v27 + 568) & 1;
          BUG();
        }
        v108 = v117 - 1;
      }
      v109 = v108 & (((unsigned int)v153 >> 9) ^ ((unsigned int)v153 >> 4));
      v34 = (_QWORD *)(v107 + 16LL * v109);
      v110 = *v34;
      if ( v153 != (__m128 *)*v34 && v110 != -4096 )
      {
        v111 = 1;
        v112 = nullptr;
        while ( 1 )
        {
          if ( !v112 && v110 == -8192 )
            v112 = v34;
          v109 = v108 & (v111 + v109);
          v34 = (_QWORD *)(v107 + 16LL * v109);
          v110 = *v34;
          if ( v153 == (__m128 *)*v34 )
            break;
          if ( v110 == -4096 )
          {
LABEL_110:
            if ( v112 )
              v34 = v112;
            goto LABEL_96;
          }
          ++v111;
        }
      }
      goto LABEL_96;
    }
    v58 = 24;
    v59 = (unsigned int)(4 * v57);
    LODWORD(v30) = 8;
    if ( (unsigned int)v59 < 0x18 )
      goto LABEL_53;
LABEL_93:
    v153 = (__m128 *)v21;
    sub_1B019E0(v27 + 568, 2 * v30, v56, v28, v58, v59);
    v28 = v27 + 568;
    if ( (*(_BYTE *)(v27 + 568) & 1) != 0 )
    {
      v100 = v27 + 576;
      v101 = 7;
      goto LABEL_95;
    }
    v113 = *(_DWORD *)(v27 + 584);
    v100 = *(_QWORD *)(v27 + 576);
    if ( !v113 )
      goto LABEL_162;
    v101 = v113 - 1;
LABEL_95:
    v102 = v101 & (((unsigned int)v153 >> 9) ^ ((unsigned int)v153 >> 4));
    v34 = (_QWORD *)(v100 + 16LL * v102);
    v103 = *v34;
    if ( v153 != (__m128 *)*v34 && v103 != -4096 )
    {
      v137 = 1;
      v112 = nullptr;
      while ( 1 )
      {
        if ( !v112 && v103 == -8192 )
          v112 = v34;
        v102 = v101 & (v137 + v102);
        v34 = (_QWORD *)(v100 + 16LL * v102);
        v103 = *v34;
        if ( v153 == (__m128 *)*v34 )
          break;
        if ( v103 == -4096 )
          goto LABEL_110;
        ++v137;
      }
    }
LABEL_96:
    LODWORD(v56) = *(_DWORD *)(v27 + 568);
LABEL_54:
    *(_DWORD *)(v27 + 568) = (2 * ((unsigned int)v56 >> 1) + 2) | v56 & 1;
    if ( *v34 != -4096 )
      --*(_DWORD *)(v27 + 572);
    a7 = _mm_loadh_ps((const double *)&v145);
    *(__m128 *)v34 = a7;
    if ( (*(_BYTE *)(v27 + 568) & 1) != 0 )
    {
      v61 = v27 + 576;
      v62 = 128;
    }
    else
    {
      v61 = *(_QWORD *)(v27 + 576);
      v62 = 16LL * *(unsigned int *)(v27 + 584);
    }
    sub_1AF9570(v9, v34, (_QWORD *)(v62 + v61), v28, 1);
LABEL_59:
    v63 = (unsigned int)v165;
    v64 = (unsigned int)v165 + 1LL;
    if ( v64 > HIDWORD(v165) )
    {
      sub_2237220(p_ptr, p_ptr + 2, v64, 8);
      v63 = (unsigned int)v165;
    }
    ++v7;
    *((_QWORD *)ptr + v63) = v10;
    LODWORD(v165) = v165 + 1;
  }
  while ( v144 != v7 );
LABEL_41:
  v48 = (void **)ptr;
  v49 = 0;
  if ( (_DWORD)v165 )
  {
    v50 = (unsigned int)v165;
    v51 = (_QWORD *)sub_168B6C0(v148);
    v52 = sub_EC0680(v51, v149, v150, v151, (__int64)v48, v50);
    v48 = (void **)ptr;
    v49 = v52;
  }
  if ( v48 != p_ptr + 2 )
    free(v48);
  return v49;
}
