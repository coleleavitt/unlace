unsigned __int64 __fastcall sub_1B250D0(
        __int64 *a1,
        unsigned __int64 *a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __m128i si128)
{
  unsigned __int64 *v8; // r13
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rbp
  char v18; // dl
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rsi
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rdi
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // rdx
  _BYTE *v37; // rbx
  unsigned __int64 v38; // rbp
  __int64 v39; // rbp
  _QWORD *v40; // rax
  unsigned __int64 v41; // rax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  bool v46; // cf
  __int64 v47; // r15
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rcx
  unsigned __int64 *v53; // r14
  __int64 v54; // rbp
  unsigned int v55; // eax
  int v56; // r8d
  __int64 *v57; // rsi
  __int64 v58; // rdi
  __int64 v59; // rdx
  int v60; // eax
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // rdx
  __int64 v65; // rbp
  unsigned __int64 *v66; // r14
  __int64 v67; // r13
  unsigned __int64 v68; // r12
  __int64 v69; // rbx
  void *v70; // rdi
  __int64 v71; // rdx
  int v72; // eax
  int v73; // r11d
  __int64 *v74; // r10
  int v75; // edi
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // rdx
  __int64 v83; // rbp
  __int64 v84; // r14
  unsigned __int64 v85; // r12
  __int64 v86; // rbx
  void *v87; // rdi
  unsigned __int64 v88; // rax
  __int64 v89; // rax
  __m128 *v90; // rax
  __m128 *v91; // r11
  __int64 v92; // rdx
  unsigned __int64 *v93; // r9
  int v94; // r10d
  __int64 v95; // rdx
  unsigned __int64 v96; // rsi
  unsigned __int64 *v97; // rax
  unsigned __int64 v98; // rdx
  unsigned int v99; // esi
  unsigned __int64 *v100; // rdi
  unsigned __int64 v101; // r8
  int v102; // r11d
  unsigned int v103; // r9d
  int v104; // r11d
  unsigned int v105; // r10d
  unsigned __int64 *v106; // r8
  int v107; // r9d
  __int64 v108; // rsi
  __int64 v109; // rsi
  unsigned __int64 v110; // rdi
  __m128 *v111; // rsi
  int v112; // r10d
  unsigned __int64 *v113; // [rsp+8h] [rbp-1E0h]
  __int64 v114; // [rsp+28h] [rbp-1C0h]
  __int64 v115; // [rsp+28h] [rbp-1C0h]
  unsigned int v116; // [rsp+28h] [rbp-1C0h]
  int i; // [rsp+28h] [rbp-1C0h]
  __int64 v121; // [rsp+48h] [rbp-1A0h]
  __int64 v122; // [rsp+48h] [rbp-1A0h]
  __int64 v123; // [rsp+48h] [rbp-1A0h]
  unsigned int v124; // [rsp+48h] [rbp-1A0h]
  __int64 v125; // [rsp+58h] [rbp-190h]
  unsigned __int64 *v126; // [rsp+58h] [rbp-190h]
  __int64 *v127; // [rsp+60h] [rbp-188h]
  int v128; // [rsp+60h] [rbp-188h]
  __int64 *v129; // [rsp+68h] [rbp-180h]
  unsigned int v130; // [rsp+74h] [rbp-174h] BYREF
  unsigned __int64 v131; // [rsp+78h] [rbp-170h] BYREF
  __int64 v132; // [rsp+80h] [rbp-168h] BYREF
  __int64 v133; // [rsp+8Ch] [rbp-15Ch] BYREF
  __int64 v134; // [rsp+94h] [rbp-154h]
  int v135; // [rsp+9Ch] [rbp-14Ch]
  char v136[4]; // [rsp+A0h] [rbp-148h] BYREF
  int v137; // [rsp+A4h] [rbp-144h]
  int v138; // [rsp+A8h] [rbp-140h]
  void *ptr; // [rsp+D0h] [rbp-118h] BYREF
  __int64 v140; // [rsp+D8h] [rbp-110h]
  _BYTE v141[64]; // [rsp+E0h] [rbp-108h] BYREF
  __m128 v142; // [rsp+120h] [rbp-C8h] BYREF
  __int64 v143; // [rsp+130h] [rbp-B8h]
  __int64 v144; // [rsp+140h] [rbp-A8h]
  __int64 v145; // [rsp+148h] [rbp-A0h]
  char v146; // [rsp+198h] [rbp-50h]
  unsigned int v147; // [rsp+1A0h] [rbp-48h]
  char v148; // [rsp+1A4h] [rbp-44h]

  v113 = &a2[a3];
  ptr = v141;
  v140 = 0x800000000LL;
  if ( v113 == a2 )
    return 0;
  v8 = a2;
  do
  {
    v15 = *v8;
    v130 = 0;
    v16 = *a1;
    v131 = v15;
    v133 = 0;
    v17 = sub_1B06DD0(v16, &v131, &v130, &v133, (__int64)&byte_22F0C30, 0, *(double *)si128.m128i_i64);
    if ( v18 )
    {
      v19 = (unsigned int)v140;
      v20 = (unsigned int)v140 + 1LL;
      if ( v20 > HIDWORD(v140) )
      {
        sub_2237220(&ptr, v141, v20, 8);
        v19 = (unsigned int)v140;
      }
      *((_QWORD *)ptr + v19) = v15;
      LODWORD(v140) = v140 + 1;
    }
    if ( v17 )
    {
      sub_1AFB290((__int64)v136, a1[1], v17, 1);
      if ( v137 == 85 && v138 == 1 )
        goto LABEL_9;
      sub_168B9F0((__int64)&v142, a1, v130, 0x1199u, 0);
      v9 = sub_EEC8C0(v15, (__int64)a1, *(double *)si128.m128i_i64);
      if ( v146 )
      {
        v21 = v144;
        if ( v144 )
        {
          v22 = *(unsigned int *)(v144 + 424);
          v23 = *(unsigned int *)(v144 + 428);
          v24 = v22 + 1;
        }
        else
        {
          v59 = v145;
          v60 = *(_DWORD *)(v145 + 14976);
          if ( v60 )
          {
            v61 = (unsigned int)(v60 - 1);
            *(_DWORD *)(v145 + 14976) = v61;
            v21 = *(_QWORD *)(v59 + 8 * v61 + 14848);
            v62 = *(unsigned int *)(v21 + 536);
            *(_BYTE *)v21 = 0;
            v63 = *(_QWORD *)(v21 + 528);
            *(_DWORD *)(v21 + 424) = 0;
            v64 = v63 + (v62 << 6);
            if ( v63 == v64 )
            {
              v24 = 1;
              v22 = 0;
            }
            else
            {
              v122 = v17;
              v65 = v63;
              v66 = v8;
              v67 = v21;
              v127 = a1;
              v68 = v15;
              v69 = v64;
              do
              {
                while ( 1 )
                {
                  v69 -= 64;
                  v70 = *(void **)(v69 + 24);
                  if ( v70 == (void *)(v69 + 40) )
                    break;
                  operator delete(v70);
                  if ( v65 == v69 )
                    goto LABEL_49;
                }
              }
              while ( v65 != v69 );
LABEL_49:
              v21 = v67;
              v15 = v68;
              v8 = v66;
              v17 = v122;
              v22 = *(unsigned int *)(v21 + 424);
              a1 = v127;
              v24 = v22 + 1;
            }
            *(_DWORD *)(v21 + 536) = 0;
            v23 = *(unsigned int *)(v21 + 428);
          }
          else
          {
            v21 = operator new(0x3A0u);
            v23 = 8;
            v22 = 0;
            *(_BYTE *)v21 = 0;
            *(_QWORD *)(v21 + 96) = v21 + 112;
            *(_QWORD *)(v21 + 128) = v21 + 144;
            *(_QWORD *)(v21 + 160) = v21 + 176;
            *(_QWORD *)(v21 + 192) = v21 + 208;
            *(_QWORD *)(v21 + 224) = v21 + 240;
            *(_QWORD *)(v21 + 256) = v21 + 272;
            *(_QWORD *)(v21 + 288) = v21 + 304;
            *(_QWORD *)(v21 + 320) = v21 + 336;
            *(_QWORD *)(v21 + 352) = v21 + 368;
            *(_QWORD *)(v21 + 384) = v21 + 400;
            *(_QWORD *)(v21 + 416) = v21 + 432;
            *(_QWORD *)(v21 + 104) = 0;
            *(_BYTE *)(v21 + 112) = 0;
            *(_QWORD *)(v21 + 136) = 0;
            *(_BYTE *)(v21 + 144) = 0;
            *(_QWORD *)(v21 + 168) = 0;
            *(_BYTE *)(v21 + 176) = 0;
            *(_QWORD *)(v21 + 200) = 0;
            *(_BYTE *)(v21 + 208) = 0;
            *(_QWORD *)(v21 + 232) = 0;
            *(_BYTE *)(v21 + 240) = 0;
            *(_QWORD *)(v21 + 264) = 0;
            *(_BYTE *)(v21 + 272) = 0;
            *(_QWORD *)(v21 + 296) = 0;
            *(_BYTE *)(v21 + 304) = 0;
            *(_QWORD *)(v21 + 328) = 0;
            *(_BYTE *)(v21 + 336) = 0;
            *(_QWORD *)(v21 + 360) = 0;
            *(_BYTE *)(v21 + 368) = 0;
            *(_QWORD *)(v21 + 392) = 0;
            *(_BYTE *)(v21 + 400) = 0;
            *(_QWORD *)(v21 + 528) = v21 + 544;
            v24 = 1;
            *(_QWORD *)(v21 + 424) = 0x800000000LL;
            *(_QWORD *)(v21 + 536) = 0x600000000LL;
          }
          v144 = v21;
        }
        v134 = v9;
        LOBYTE(v135) = 1;
        if ( v24 > v23 )
        {
          v114 = v21;
          sub_2237220(v21 + 416, v21 + 432, v24, 12);
          v21 = v114;
          v22 = *(unsigned int *)(v114 + 424);
        }
        v25 = 3 * v22;
      }
      else
      {
        if ( !v148 )
        {
LABEL_8:
          sub_15F7200(&v142);
LABEL_9:
          v10 = a1[1];
          v11 = *(unsigned int *)(v10 + 344);
          if ( !(_DWORD)v11 )
            goto LABEL_11;
          v12 = *(_QWORD *)(v10 + 336) + 6776 * v11 - 6776;
          if ( *(_QWORD *)(v12 + 6768) != *(_QWORD *)(v10 + 328) )
            goto LABEL_11;
          v43 = *(unsigned int *)(v12 + 8);
          v44 = *(unsigned int *)(v10 + 27504);
          if ( (unsigned int)v43 <= (unsigned int)v44 )
            goto LABEL_11;
          v46 = v43 == v44;
          v45 = v43 - v44;
          if ( v46 || v45 == 1 )
            goto LABEL_11;
          v47 = *(_QWORD *)v12 + 1688 * (v45 - 2);
          if ( !v47 || *(_DWORD *)(v47 + 976) == 103 )
            goto LABEL_11;
          v48 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 32LL))(v17);
          v51 = *(unsigned int *)(v47 + 1296);
          v52 = v47 + 1280;
          v53 = *(unsigned __int64 **)(v47 + 1280);
          v54 = v48;
          if ( !(_DWORD)v51 )
            goto LABEL_74;
          v55 = ((unsigned int)v48 >> 4) ^ ((unsigned int)v48 >> 9);
          v56 = (v51 - 1) & v55;
          v57 = (__int64 *)&v53[v56];
          v58 = *v57;
          if ( v54 == *v57 )
          {
LABEL_43:
            sub_1AFEC60(&v142, v57, &v53[v51], v52, 1);
LABEL_11:
            v13 = (unsigned int)v140;
            v14 = (unsigned int)v140 + 1LL;
            if ( v14 > HIDWORD(v140) )
            {
              sub_2237220(&ptr, v141, v14, 8);
              v13 = (unsigned int)v140;
            }
            *((_QWORD *)ptr + v13) = v15;
            LODWORD(v140) = v140 + 1;
            goto LABEL_14;
          }
          v73 = 1;
          v74 = nullptr;
          if ( v58 != -4096 )
          {
            while ( 1 )
            {
              if ( v58 == -8192 && !v74 )
                v74 = v57;
              v56 = (v51 - 1) & (v73 + v56);
              v57 = (__int64 *)&v53[v56];
              v58 = *v57;
              if ( v54 == *v57 )
                goto LABEL_43;
              if ( v58 == -4096 )
                break;
              ++v73;
            }
            if ( v74 )
              v57 = v74;
          }
          v49 = (unsigned int)(3 * v51);
          v75 = *(_DWORD *)(v47 + 1288) + 1;
          v50 = (unsigned int)(4 * v75);
          if ( (unsigned int)v50 < (unsigned int)v49 )
          {
            v76 = (unsigned int)(v51 - *(_DWORD *)(v47 + 1292) - v75);
            v77 = (unsigned int)v51 >> 3;
            if ( (unsigned int)v76 > (unsigned int)v77 )
            {
LABEL_62:
              v78 = *v57;
              goto LABEL_63;
            }
            v124 = v55;
            sub_1B054E0(v47 + 1280, v51, v51, v52, v76, v77);
            v51 = *(unsigned int *)(v47 + 1296);
            if ( !(_DWORD)v51 )
              goto LABEL_146;
            v53 = *(unsigned __int64 **)(v47 + 1280);
            v104 = v51 - 1;
            v57 = (__int64 *)&v53[((_DWORD)v51 - 1) & v124];
            v105 = (v51 - 1) & v124;
            v75 = *(_DWORD *)(v47 + 1288) + 1;
            v52 = v47 + 1280;
            v78 = *v57;
            if ( v54 == *v57 )
              goto LABEL_63;
            if ( v78 != -4096 )
            {
              v106 = &v53[v104 & v124];
              v107 = 1;
              v57 = nullptr;
              while ( 1 )
              {
                if ( v78 == -8192 && !v57 )
                  v57 = (__int64 *)v106;
                v105 = v104 & (v107 + v105);
                v106 = &v53[v105];
                v78 = *v106;
                if ( v54 == *v106 )
                  break;
                if ( v78 == -4096 )
                  goto LABEL_140;
                ++v107;
              }
LABEL_101:
              v57 = (__int64 *)v106;
LABEL_63:
              *(_DWORD *)(v47 + 1288) = v75;
              if ( v78 != -4096 )
                --*(_DWORD *)(v47 + 1292);
              goto LABEL_65;
            }
          }
          else
          {
LABEL_74:
            v116 = *(_DWORD *)(v47 + 1296);
            v88 = (((((((unsigned int)(2 * v51 - 1) | ((unsigned __int64)(unsigned int)(2 * v51 - 1) >> 1)) >> 2)
                    | (unsigned int)(2 * v51 - 1)
                    | ((unsigned __int64)(unsigned int)(2 * v51 - 1) >> 1)) >> 4)
                  | (((unsigned int)(2 * v51 - 1) | ((unsigned __int64)(unsigned int)(2 * v51 - 1) >> 1)) >> 2)
                  | (unsigned int)(2 * v51 - 1)
                  | ((unsigned __int64)(unsigned int)(2 * v51 - 1) >> 1)) >> 8)
                | (((((unsigned int)(2 * v51 - 1) | ((unsigned __int64)(unsigned int)(2 * v51 - 1) >> 1)) >> 2)
                  | (unsigned int)(2 * v51 - 1)
                  | ((unsigned __int64)(unsigned int)(2 * v51 - 1) >> 1)) >> 4)
                | (((unsigned int)(2 * v51 - 1) | ((unsigned __int64)(unsigned int)(2 * v51 - 1) >> 1)) >> 2)
                | (unsigned int)(2 * v51 - 1)
                | ((unsigned __int64)(unsigned int)(2 * v51 - 1) >> 1);
            v89 = ((v88 >> 16) | v88) + 1;
            if ( (unsigned int)v89 < 0x40 )
              LODWORD(v89) = 64;
            *(_DWORD *)(v47 + 1296) = v89;
            v90 = (__m128 *)sub_22300B0(8LL * (unsigned int)v89, 8, v51, v52, v49, v50);
            v52 = v47 + 1280;
            v91 = v90;
            *(_QWORD *)(v47 + 1280) = v90;
            if ( v53 )
            {
              v92 = *(unsigned int *)(v47 + 1296);
              *(_QWORD *)(v47 + 1288) = 0;
              v123 = v116;
              v93 = &v53[v123];
              v94 = v92;
              v95 = 8 * v92;
              if ( v90 != (__m128 *)((char *)v90 + v95) )
              {
                v96 = ((unsigned __int64)(v95 - 8) >> 3) + 1;
                if ( v95 == 8 )
                  goto LABEL_81;
                do
                {
                  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
                  ++v90;
                  v90[-1] = (__m128)si128;
                }
                while ( v90 != &v91[v96 >> 1] );
                v90 = (__m128 *)((char *)v91 + 8 * (v96 & 0xFFFFFFFFFFFFFFFELL));
                if ( (v96 & 0xFFFFFFFFFFFFFFFELL) != v96 )
LABEL_81:
                  v90->m128_u64[0] = -4096;
              }
              v97 = v53;
              for ( i = v94 - 1; v93 != v97; ++v97 )
              {
                v98 = *v97;
                if ( *v97 != -8192 && v98 != -4096 )
                {
                  if ( !v94 )
                  {
                    *(_QWORD *)&dword_0 = *v97;
                    BUG();
                  }
                  v99 = i & (((unsigned int)v98 >> 9) ^ ((unsigned int)v98 >> 4));
                  v100 = (unsigned __int64 *)v91 + v99;
                  v101 = *v100;
                  if ( v98 != *v100 && v101 != -4096 )
                  {
                    v128 = 1;
                    v126 = nullptr;
                    while ( 1 )
                    {
                      if ( v101 == -8192 )
                      {
                        if ( v126 )
                          v100 = v126;
                        v126 = v100;
                      }
                      v99 = i & (v128 + v99);
                      v100 = (unsigned __int64 *)v91 + v99;
                      v101 = *v100;
                      if ( v98 == *v100 )
                        break;
                      if ( v101 == -4096 )
                      {
                        if ( v126 )
                          v100 = v126;
                        break;
                      }
                      ++v128;
                    }
                  }
                  *v100 = *v97;
                  ++*(_DWORD *)(v47 + 1288);
                }
              }
              operator delete(v53, v123 * 8, 8);
              v52 = v47 + 1280;
              v53 = *(unsigned __int64 **)(v47 + 1280);
              v51 = *(unsigned int *)(v47 + 1296);
              v75 = *(_DWORD *)(v47 + 1288) + 1;
            }
            else
            {
              v108 = *(unsigned int *)(v47 + 1296);
              *(_QWORD *)(v47 + 1288) = 0;
              v51 = v108;
              v109 = 8 * v108;
              v53 = (unsigned __int64 *)((char *)v90 + v109);
              if ( v90 == (__m128 *)((char *)v90 + v109) )
              {
                v75 = 1;
              }
              else
              {
                v110 = ((unsigned __int64)(v109 - 8) >> 3) + 1;
                if ( v109 == 8 )
                  goto LABEL_109;
                v111 = &v90[v110 >> 1];
                do
                {
                  ++v90;
                  v90[-1] = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8C80);
                }
                while ( v111 != v90 );
                v90 = (__m128 *)((char *)v91 + 8 * (v110 & 0xFFFFFFFFFFFFFFFELL));
                if ( (v110 & 0xFFFFFFFFFFFFFFFELL) != v110 )
LABEL_109:
                  v90->m128_u64[0] = -4096;
                v53 = (unsigned __int64 *)v91;
                v75 = 1;
              }
            }
            if ( !(_DWORD)v51 )
            {
LABEL_146:
              ++*(_DWORD *)(v47 + 1288);
              BUG();
            }
            v102 = v51 - 1;
            v103 = (v51 - 1) & (((unsigned int)v54 >> 9) ^ ((unsigned int)v54 >> 4));
            v57 = (__int64 *)&v53[v103];
            v78 = *v57;
            if ( *v57 == v54 )
            {
              v78 = v54;
              goto LABEL_63;
            }
            if ( v78 != -4096 )
            {
              v106 = &v53[v102 & (((unsigned int)v54 >> 9) ^ ((unsigned int)v54 >> 4))];
              v112 = 1;
              v57 = nullptr;
              while ( 1 )
              {
                if ( v78 == -8192 && !v57 )
                  v57 = (__int64 *)v106;
                v103 = v102 & (v112 + v103);
                v106 = &v53[v103];
                v78 = *v106;
                if ( v54 == *v106 )
                  goto LABEL_101;
                if ( v78 == -4096 )
                {
LABEL_140:
                  if ( v57 )
                    goto LABEL_62;
                  v57 = (__int64 *)v106;
                  break;
                }
                ++v112;
              }
            }
          }
          *(_DWORD *)(v47 + 1288) = v75;
LABEL_65:
          *v57 = v54;
          goto LABEL_43;
        }
        v27 = sub_168B9E0(&v142);
        v31 = v143;
        if ( v143 )
        {
          v121 = v27;
          v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v143 + 32LL))(v143);
          v27 = v121;
        }
        v132 = v31;
        v32 = sub_1587BC0(v27, &v132, v27, v28, v29, v30);
        v33 = *v32 + 32LL * v147;
        v21 = *(_QWORD *)(v33 + 8);
        if ( v21 )
        {
          v34 = *(unsigned int *)(v21 + 424);
          v35 = *(unsigned int *)(v21 + 428);
          v36 = v34 + 1;
        }
        else
        {
          v71 = *(_QWORD *)(v33 + 16);
          v72 = *(_DWORD *)(v71 + 14976);
          if ( v72 )
          {
            v79 = (unsigned int)(v72 - 1);
            *(_DWORD *)(v71 + 14976) = v79;
            v21 = *(_QWORD *)(v71 + 8 * v79 + 14848);
            v80 = *(unsigned int *)(v21 + 536);
            *(_BYTE *)v21 = 0;
            v81 = *(_QWORD *)(v21 + 528);
            *(_DWORD *)(v21 + 424) = 0;
            v82 = v81 + (v80 << 6);
            if ( v81 == v82 )
            {
              v36 = 1;
              v34 = 0;
            }
            else
            {
              v125 = v17;
              v83 = v81;
              v84 = v21;
              v129 = a1;
              v85 = v15;
              v86 = v82;
              do
              {
                while ( 1 )
                {
                  v86 -= 64;
                  v87 = *(void **)(v86 + 24);
                  if ( v87 == (void *)(v86 + 40) )
                    break;
                  operator delete(v87);
                  if ( v83 == v86 )
                    goto LABEL_70;
                }
              }
              while ( v83 != v86 );
LABEL_70:
              v21 = v84;
              v15 = v85;
              v17 = v125;
              v34 = *(unsigned int *)(v84 + 424);
              a1 = v129;
              v36 = v34 + 1;
            }
            *(_DWORD *)(v21 + 536) = 0;
            v35 = *(unsigned int *)(v21 + 428);
          }
          else
          {
            v21 = operator new(0x3A0u);
            v35 = 8;
            v34 = 0;
            *(_BYTE *)v21 = 0;
            *(_QWORD *)(v21 + 96) = v21 + 112;
            *(_QWORD *)(v21 + 128) = v21 + 144;
            *(_QWORD *)(v21 + 160) = v21 + 176;
            *(_QWORD *)(v21 + 192) = v21 + 208;
            *(_QWORD *)(v21 + 224) = v21 + 240;
            *(_QWORD *)(v21 + 256) = v21 + 272;
            *(_QWORD *)(v21 + 288) = v21 + 304;
            *(_QWORD *)(v21 + 320) = v21 + 336;
            *(_QWORD *)(v21 + 352) = v21 + 368;
            *(_QWORD *)(v21 + 384) = v21 + 400;
            *(_QWORD *)(v21 + 416) = v21 + 432;
            *(_QWORD *)(v21 + 104) = 0;
            *(_BYTE *)(v21 + 112) = 0;
            *(_QWORD *)(v21 + 136) = 0;
            *(_BYTE *)(v21 + 144) = 0;
            *(_QWORD *)(v21 + 168) = 0;
            *(_BYTE *)(v21 + 176) = 0;
            *(_QWORD *)(v21 + 200) = 0;
            *(_BYTE *)(v21 + 208) = 0;
            *(_QWORD *)(v21 + 232) = 0;
            *(_BYTE *)(v21 + 240) = 0;
            *(_QWORD *)(v21 + 264) = 0;
            *(_BYTE *)(v21 + 272) = 0;
            *(_QWORD *)(v21 + 296) = 0;
            *(_BYTE *)(v21 + 304) = 0;
            *(_QWORD *)(v21 + 328) = 0;
            *(_BYTE *)(v21 + 336) = 0;
            *(_QWORD *)(v21 + 360) = 0;
            *(_BYTE *)(v21 + 368) = 0;
            *(_QWORD *)(v21 + 392) = 0;
            *(_BYTE *)(v21 + 400) = 0;
            *(_QWORD *)(v21 + 528) = v21 + 544;
            v36 = 1;
            *(_QWORD *)(v21 + 424) = 0x800000000LL;
            *(_QWORD *)(v21 + 536) = 0x600000000LL;
          }
          *(_QWORD *)(v33 + 8) = v21;
        }
        v134 = v9;
        LOBYTE(v135) = 1;
        if ( v36 > v35 )
        {
          v115 = v21;
          sub_2237220(v21 + 416, v21 + 432, v36, 12);
          v21 = v115;
          v34 = *(unsigned int *)(v115 + 424);
        }
        v25 = 3 * v34;
      }
      v26 = *(_QWORD *)(v21 + 416) + 4 * v25;
      *(_QWORD *)v26 = v134;
      *(_DWORD *)(v26 + 8) = v135;
      ++*(_DWORD *)(v21 + 424);
      goto LABEL_8;
    }
LABEL_14:
    ++v8;
  }
  while ( v113 != v8 );
  v37 = ptr;
  v38 = 0;
  if ( (_DWORD)v140 )
  {
    v39 = (unsigned int)v140;
    v40 = (_QWORD *)sub_168B6C0((__int64)a1);
    v41 = sub_EC0740(v40, a4, a5, a6, (__int64)v37, v39);
    v37 = ptr;
    v38 = v41;
  }
  if ( v37 != v141 )
    free(v37);
  return v38;
}
