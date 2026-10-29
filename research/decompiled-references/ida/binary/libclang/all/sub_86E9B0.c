__int64 __fastcall sub_86E9B0(__m128i *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rbp
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 result; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rax
  _BYTE *v15; // rdx
  char v16; // al
  __m128i *v17; // r15
  __int64 v18; // r13
  __int64 v19; // r12
  int v20; // eax
  unsigned int v21; // edx
  int v22; // eax
  __int8 v23; // si
  __int64 v24; // r13
  unsigned int v25; // esi
  unsigned int v26; // r14d
  __int32 v27; // r15d
  unsigned __int64 v28; // rbx
  _BYTE *v29; // r8
  __int64 v30; // rax
  __int64 v31; // rdi
  char v32; // al
  __int64 v33; // rax
  __int64 v34; // r8
  void **v35; // rsi
  unsigned __int64 v36; // rbp
  unsigned __int8 v37; // al
  unsigned __int8 **v38; // rdi
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // r12
  __int64 v43; // r14
  __int64 v44; // r12
  void *v45; // rdi
  int v46; // ebx
  int v47; // eax
  unsigned __int8 **v48; // rax
  unsigned __int8 **v49; // r12
  void *v50; // rax
  unsigned int v51; // r14d
  __int64 v52; // r13
  unsigned __int8 **v53; // rax
  unsigned __int8 **v54; // rbx
  unsigned __int8 **v55; // rax
  __int8 v56; // al
  __int64 v57; // rdx
  unsigned __int8 **v58; // rax
  __int64 v59; // r10
  __int64 v60; // r9
  unsigned __int64 v61; // r14
  unsigned __int64 v62; // r15
  unsigned __int8 **v63; // rax
  unsigned __int8 **v64; // rbx
  __int64 v65; // rax
  __m128i v66; // xmm0
  _QWORD *v67; // rax
  unsigned __int64 v68; // rbx
  unsigned __int64 v69; // rax
  unsigned int v70; // eax
  __int64 v71; // rcx
  unsigned __int64 v72; // r15
  __int64 v73; // rax
  __int64 *v74; // r14
  __int64 v75; // rax
  _QWORD *v76; // r8
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // rcx
  char v79; // al
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // r8
  unsigned __int64 v84; // r11
  unsigned __int64 v85; // rax
  __int64 v86; // rax
  unsigned __int64 v87; // rsi
  unsigned __int64 v88; // rax
  char v89; // al
  char v90; // al
  unsigned __int8 **v91; // rax
  unsigned __int8 **v92; // rbx
  __int64 v93; // rax
  _QWORD *v94; // r14
  unsigned __int8 *v95; // rbx
  _BYTE *v96; // rdx
  __int64 v97; // rax
  __int64 v98; // rsi
  unsigned __int8 **v99; // rax
  unsigned __int8 **v100; // rbx
  __int64 v101; // rdx
  int v102; // eax
  __int64 v103; // rax
  __int64 v104; // r12
  __int64 v105; // r15
  __int64 v106; // r12
  void *v107; // rdi
  unsigned __int8 *v108; // rax
  unsigned __int8 *v109; // rdx
  unsigned __int8 v110; // [rsp+8h] [rbp-140h]
  __int64 v111; // [rsp+8h] [rbp-140h]
  __int64 v112; // [rsp+8h] [rbp-140h]
  unsigned __int64 v113; // [rsp+8h] [rbp-140h]
  unsigned int v114; // [rsp+14h] [rbp-134h]
  __int64 v115; // [rsp+18h] [rbp-130h]
  unsigned __int64 v116; // [rsp+28h] [rbp-120h]
  __int64 v117; // [rsp+28h] [rbp-120h]
  __int64 v118; // [rsp+28h] [rbp-120h]
  _QWORD *v119; // [rsp+28h] [rbp-120h]
  __int64 v120; // [rsp+28h] [rbp-120h]
  __m128i *v121; // [rsp+30h] [rbp-118h]
  unsigned __int64 v122; // [rsp+38h] [rbp-110h]
  __int64 v123; // [rsp+40h] [rbp-108h]
  __int64 v124; // [rsp+48h] [rbp-100h]
  __int64 v125; // [rsp+48h] [rbp-100h]
  __int64 v126; // [rsp+48h] [rbp-100h]
  unsigned __int64 v127; // [rsp+48h] [rbp-100h]
  _BYTE *v128; // [rsp+48h] [rbp-100h]
  _QWORD *v129; // [rsp+50h] [rbp-F8h]
  __int64 v130; // [rsp+50h] [rbp-F8h]
  __int64 v131; // [rsp+58h] [rbp-F0h]
  __m128i v132; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v133; // [rsp+70h] [rbp-D8h]
  unsigned __int64 v134; // [rsp+78h] [rbp-D0h]
  void *v135[2]; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v136; // [rsp+90h] [rbp-B8h]
  __int64 v137; // [rsp+98h] [rbp-B0h]
  __m128i v138; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v139; // [rsp+B0h] [rbp-98h]
  unsigned int v140; // [rsp+B8h] [rbp-90h]
  __int64 *v141; // [rsp+C0h] [rbp-88h]
  __int64 v142; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v143[14]; // [rsp+D8h] [rbp-70h] BYREF

  v3 = a2;
  v4 = sub_A2CB40(a1->m128i_i64[0]);
  v5 = a1->m128i_i64[0];
  if ( (*(_BYTE *)(v4 + 1) & 0x20) == 0 && (!*(_DWORD *)(v5 + 48) || !*(_BYTE *)(v5 + 962) && !*(_BYTE *)(v5 + 963)) )
  {
    v6 = (__int64 *)sub_A2E130(v5, a2, 110, 0);
    v7 = sub_AC7B80(a2);
    if ( v6 )
    {
      v8 = *v6;
      if ( !*v6 )
      {
        v39 = v6[1];
        v40 = *(_DWORD *)(v39 + 14976);
        if ( v40 )
        {
          v41 = (unsigned int)(v40 - 1);
          *(_DWORD *)(v39 + 14976) = v41;
          v8 = *(_QWORD *)(v39 + 8 * v41 + 14848);
          v42 = *(unsigned int *)(v8 + 536);
          *(_BYTE *)v8 = 0;
          v43 = *(_QWORD *)(v8 + 528);
          *(_DWORD *)(v8 + 424) = 0;
          v44 = v43 + (v42 << 6);
          while ( v43 != v44 )
          {
            while ( 1 )
            {
              v44 -= 64;
              v45 = *(void **)(v44 + 24);
              if ( v45 == (void *)(v44 + 40) )
                break;
              operator delete(v45, *(_QWORD *)(v44 + 40) + 1LL);
              if ( v43 == v44 )
                goto LABEL_57;
            }
          }
LABEL_57:
          *(_DWORD *)(v8 + 536) = 0;
        }
        else
        {
          v8 = operator new(0x3A0u);
          *(_BYTE *)v8 = 0;
          *(_QWORD *)(v8 + 96) = v8 + 112;
          *(_QWORD *)(v8 + 128) = v8 + 144;
          *(_QWORD *)(v8 + 160) = v8 + 176;
          *(_QWORD *)(v8 + 192) = v8 + 208;
          *(_QWORD *)(v8 + 224) = v8 + 240;
          *(_QWORD *)(v8 + 256) = v8 + 272;
          *(_QWORD *)(v8 + 288) = v8 + 304;
          *(_QWORD *)(v8 + 320) = v8 + 336;
          *(_QWORD *)(v8 + 352) = v8 + 368;
          *(_QWORD *)(v8 + 384) = v8 + 400;
          *(_QWORD *)(v8 + 104) = 0;
          *(_BYTE *)(v8 + 112) = 0;
          *(_QWORD *)(v8 + 136) = 0;
          *(_BYTE *)(v8 + 144) = 0;
          *(_QWORD *)(v8 + 168) = 0;
          *(_BYTE *)(v8 + 176) = 0;
          *(_QWORD *)(v8 + 200) = 0;
          *(_BYTE *)(v8 + 208) = 0;
          *(_QWORD *)(v8 + 232) = 0;
          *(_BYTE *)(v8 + 240) = 0;
          *(_QWORD *)(v8 + 264) = 0;
          *(_BYTE *)(v8 + 272) = 0;
          *(_QWORD *)(v8 + 296) = 0;
          *(_BYTE *)(v8 + 304) = 0;
          *(_QWORD *)(v8 + 328) = 0;
          *(_BYTE *)(v8 + 336) = 0;
          *(_QWORD *)(v8 + 360) = 0;
          *(_BYTE *)(v8 + 368) = 0;
          *(_QWORD *)(v8 + 392) = 0;
          *(_BYTE *)(v8 + 400) = 0;
          *(_QWORD *)(v8 + 416) = v8 + 432;
          *(_QWORD *)(v8 + 424) = 0x800000000LL;
          *(_QWORD *)(v8 + 528) = v8 + 544;
          *(_QWORD *)(v8 + 536) = 0x600000000LL;
        }
        *v6 = v8;
      }
      v142 = v7;
      LOBYTE(v143[0]) = 1;
      v9 = *(unsigned int *)(v8 + 424);
      if ( *(unsigned int *)(v8 + 428) < (unsigned __int64)(v9 + 1) )
      {
        sub_25D6060(v8 + 416, v8 + 432, v9 + 1, 12);
        v9 = *(unsigned int *)(v8 + 424);
      }
      v10 = *(_QWORD *)(v8 + 416) + 12 * v9;
      *(_QWORD *)v10 = v142;
      *(_DWORD *)(v10 + 8) = v143[0];
      ++*(_DWORD *)(v8 + 424);
    }
    return 0;
  }
  v12 = *(_QWORD *)(a2 + 24);
  v13 = a1->m128i_i64[0];
  BYTE4(v142) &= ~1u;
  LODWORD(v142) = 0;
  if ( !(unsigned __int8)sub_856400((__int64)&v142, v13, v12) )
  {
    v14 = a1->m128i_i64[0];
    if ( *(_DWORD *)(a1->m128i_i64[0] + 48) )
    {
      v15 = *(_BYTE **)(v14 + 24);
      if ( *(_BYTE *)(v14 + 962) )
      {
        *v15 = 1;
        goto LABEL_16;
      }
      v16 = *(_BYTE *)(v14 + 963);
      *v15 |= v16;
      if ( v16 )
LABEL_16:
        sub_869D30(a1, *(_QWORD *)(v3 + 16));
    }
LABEL_17:
    result = 0;
    goto LABEL_18;
  }
  if ( !(unsigned __int8)sub_869D30(a1, *(_QWORD *)(v3 + 16)) )
    goto LABEL_17;
  v17 = (__m128i *)a1->m128i_i64[1];
  v18 = *(_QWORD *)(v3 + 32);
  v19 = a1->m128i_i64[0];
  v20 = (*(_WORD *)(v3 + 2) >> 3) & 0x3F;
  v21 = v20 - 13;
  v22 = v20 - 20;
  if ( ((*(_WORD *)(v3 + 2) >> 3) & 0x3Fu) < 0x1D )
    v21 = v22;
  v114 = v21;
  v111 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 8LL);
  if ( (v17[1].m128i_i8[8] & 1) != 0 )
    goto LABEL_17;
  if ( (*(_BYTE *)(sub_A2CB40(v19) + 1) & 0x20) == 0 )
  {
LABEL_59:
    sub_A2E130(v19, v3, 110, 0);
    goto LABEL_17;
  }
  sub_83CB20(&v132, v19, (_DWORD *)v3, 2u, v17, v111);
  v139 = v18;
  v140 = v114;
  v141 = &v142;
  v138 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v19, (__m128i)(unsigned __int64)v3);
  if ( (v134 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
    goto LABEL_17;
  v23 = v17[1].m128i_i8[8];
  if ( (v23 & 1) != 0 )
    goto LABEL_17;
  if ( (v23 & 2) != 0
    || v17[3].m128i_i32[2] == 1 && (v23 & 4) != 0
    || (v17[1].m128i_i8[8] & 8) != 0
    && v17[2].m128i_i64[0] == *(_QWORD *)(v17[3].m128i_i64[0] + 8LL * (((unsigned __int32)v17[1].m128i_i32[2] >> 4) - 1)) )
  {
    if ( (*(_BYTE *)(sub_A2CB40(v19) + 1) & 0x10) != 0 )
    {
      v56 = v17[1].m128i_i8[8];
      v57 = 2169;
      if ( (v56 & 2) == 0 )
      {
        if ( v17[3].m128i_i32[2] != 1 || (v57 = 2173, (v56 & 4) == 0) )
        {
          v57 = 2173;
          if ( (v56 & 8) != 0
            && *(_QWORD *)(v17[3].m128i_i64[0] + 8LL * (((unsigned __int32)v17[1].m128i_i32[2] >> 4) - 1)) == v17[2].m128i_i64[0] )
          {
            v57 = 2169;
          }
        }
      }
      v58 = (unsigned __int8 **)sub_A2E130(v19, v3, v57, 0);
      if ( v58 )
        sub_823450(v58, 2);
      goto LABEL_17;
    }
    goto LABEL_59;
  }
  v24 = v133;
  v25 = *(_DWORD *)v133;
  if ( (*(_BYTE *)(v133 + 4) & 1) != 0 )
  {
    if ( v25 <= 1 )
      goto LABEL_17;
  }
  else if ( !v25 )
  {
LABEL_70:
    if ( !*(_BYTE *)(v19 + 962) )
    {
      v48 = (unsigned __int8 **)sub_A2E130(v19, v3, 2171, 0);
      v49 = v48;
      if ( v48 )
      {
        sub_823450(v48, 2);
        sub_823450(v49, *(_DWORD *)v24 == 1);
        v50 = (void *)sub_AC7B80(v3);
        LOBYTE(v135[1]) = 1;
        v135[0] = v50;
        sub_839C90((__int64 *)v49, (__int64 *)v135);
      }
    }
    goto LABEL_17;
  }
  v116 = 0;
  v26 = 0;
  v122 = 0;
  v123 = v132.m128i_i64[0];
  v121 = v17;
  v27 = v17[3].m128i_i32[2];
  v115 = v3;
  v28 = v134;
  while ( 1 )
  {
    v29 = (_BYTE *)(v28 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (v28 & 1) != 0
      || (v30 = *(_QWORD *)&byte_8[v28 & 0xFFFFFFFFFFFFFFF0LL], (v30 & 1) != 0)
      || (((unsigned __int8)v28 | (unsigned __int8)v30) & 4) != 0 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v29 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 47
        || (v65 = v121[3].m128i_i64[0],
            v132.m128i_i64[0] = v123,
            v66 = _mm_load_si128(&v132),
            v136 = v65,
            v137 = v26,
            *(__m128i *)v135 = v66,
            v67 = sub_84A740((__int64 *)(v19 + 872), (__int64 *)v135),
            v29 = (_BYTE *)(v28 & 0xFFFFFFFFFFFFFFF0LL),
            !v67)
        || !*((_DWORD *)v67 + 8) )
      {
        if ( v26 == v27 )
          goto LABEL_73;
        goto LABEL_39;
      }
      v68 = *(_QWORD *)&byte_8[v28 & 0xFFFFFFFFFFFFFFF0LL] | v28 & 7;
      v69 = v68 & 0xFFFFFFFFFFFFFFF0LL;
      v28 = v68 & 0xFFFFFFFFFFFFFFFALL;
      v29 = (_BYTE *)v69;
    }
    if ( v26 == v27 )
      goto LABEL_107;
LABEL_39:
    v31 = *(_QWORD *)v29;
    v32 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v29 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( v27 - 1 == v26 )
      break;
LABEL_40:
    if ( (unsigned __int8)(v32 - 2) <= 4u )
      goto LABEL_41;
    v59 = 8LL * v26;
    if ( v32 == 14 )
    {
      v71 = v28;
      v3 = v115;
      v72 = *(_QWORD *)(v121[3].m128i_i64[0] + 8LL * v26);
      if ( v72 <= 1 )
      {
        if ( *(_BYTE *)(v31 + 16) != 14 )
        {
          v112 = v71;
          v73 = sub_B0D320(v31);
          v71 = v112;
          v31 = v73;
        }
        v113 = sub_81F6C0(v71, *(_QWORD *)(v31 + 32), 0);
        if ( *(_DWORD *)v24 == 5 )
        {
          v98 = v24 + 8;
          if ( v72 )
            v98 = v24 + 24;
          result = sub_83F380((__int64)&v138, v98, v113);
          goto LABEL_18;
        }
        v74 = (__int64 *)(v24 + 8);
        if ( v72 )
          v74 = (__int64 *)(v24 + 32);
        if ( (v113 & 1) != 0 || (byte_8[v113 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
        {
          v93 = sub_A2E130(v19, v115, 2240, 0);
          v94 = (_QWORD *)v93;
          if ( v93 )
          {
            v95 = *(unsigned __int8 **)v93;
            if ( !*(_QWORD *)v93 )
            {
              v101 = *(_QWORD *)(v93 + 8);
              v102 = *(_DWORD *)(v101 + 14976);
              if ( v102 )
              {
                v103 = (unsigned int)(v102 - 1);
                *(_DWORD *)(v101 + 14976) = v103;
                v95 = *(unsigned __int8 **)(v101 + 8 * v103 + 14848);
                v104 = *((unsigned int *)v95 + 134);
                v105 = *((_QWORD *)v95 + 66);
                *v95 = 0;
                *((_DWORD *)v95 + 106) = 0;
                v106 = v105 + (v104 << 6);
                while ( v105 != v106 )
                {
                  v106 -= 64;
                  v107 = *(void **)(v106 + 24);
                  if ( v107 != (void *)(v106 + 40) )
                    operator delete(v107, *(_QWORD *)(v106 + 40) + 1LL);
                }
                *((_DWORD *)v95 + 134) = 0;
              }
              else
              {
                v95 = (unsigned __int8 *)operator new(0x3A0u);
                *v95 = 0;
                v108 = v95 + 112;
                v109 = v95 + 432;
                do
                {
                  *((_QWORD *)v108 - 2) = v108;
                  v108 += 32;
                  *((_QWORD *)v108 - 5) = 0;
                  *(v108 - 32) = 0;
                }
                while ( v109 != v108 );
                *((_QWORD *)v95 + 52) = v109;
                *((_QWORD *)v95 + 53) = 0x800000000LL;
                *((_QWORD *)v95 + 66) = v95 + 544;
                *((_QWORD *)v95 + 67) = 0x600000000LL;
              }
              *v94 = v95;
            }
            v95[*v95 + 1] = 8;
            v96 = (_BYTE *)*v94;
            v97 = *(unsigned __int8 *)*v94;
            *v96 = v97 + 1;
            *(_QWORD *)&v96[8 * v97 + 16] = v113;
          }
        }
        else if ( (unsigned __int8)sub_833070(v19, v115, v139, v74)
               && (unsigned __int8)sub_82E1B0(v19, v115, v74, v114, v143) )
        {
          result = sub_833070(v19, v115, v113, v74);
          goto LABEL_18;
        }
        goto LABEL_17;
      }
      goto LABEL_48;
    }
LABEL_97:
    if ( (unsigned int)*(unsigned __int8 *)(v31 + 16) - 56 <= 1 )
    {
      v3 = v115;
      v60 = v121[3].m128i_i64[0];
      goto LABEL_99;
    }
    v126 = v59;
    v119 = v29;
    v75 = sub_820370(v31);
    v59 = v126;
    v76 = v119;
    v31 = v75;
    v60 = v121[3].m128i_i64[0];
    v77 = *(_QWORD *)(v60 + v126);
    if ( v31 )
    {
      v3 = v115;
LABEL_99:
      v61 = *(_QWORD *)(v60 + v59);
      v62 = *(unsigned int *)(v31 + 20);
      if ( v61 != v62 )
      {
        if ( v62 >= v61 )
        {
          result = sub_841030(&v138, (_DWORD *)(*(_QWORD *)(v24 + 8) + 56 * v61), *(_QWORD *)(v31 + 32));
          goto LABEL_18;
        }
        v63 = (unsigned __int8 **)sub_A2E240(v19, v3, 2179, 0);
        v64 = v63;
        if ( v63 )
        {
          sub_8356A0(v63, v61, 3u);
          sub_823450(v64, 0);
          sub_8356A0(v64, v62, 3u);
        }
        goto LABEL_17;
      }
      goto LABEL_48;
    }
    v78 = v77 & 0xFFFFFFFFFFFFFFF8LL;
    v127 = v77 & 0xFFFFFFFFFFFFFFF8LL;
    v116 = v77 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v77 <= 7 || (*(_BYTE *)(v78 + 28) & 0x7Fu) - 47 > 2 )
    {
      v120 = v59;
      v86 = sub_B0E910(*v76);
      v87 = *(_QWORD *)(v121[3].m128i_i64[0] + v120) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v121[3].m128i_i64[0] + v120) <= 7u || (*(_BYTE *)(v87 + 28) & 0x7Fu) - 57 > 2 )
        v87 = 0;
      v24 = *(_QWORD *)(v24 + 8) + 56LL * (unsigned int)sub_84C340(v86, v87);
      v88 = sub_6E8B00(*(_QWORD *)(v19 + 16), v87);
      v116 = 0;
      v28 = sub_81F6C0(v28, v88, 0);
    }
    else
    {
      if ( (*(_BYTE *)(v78 + 68) & 2) != 0 )
      {
        v129 = v76;
        v132.m128i_i64[0] = v123;
        v79 = sub_82E820(&v132, v19, 2u);
        v76 = v129;
        if ( !v79 )
        {
          v99 = (unsigned __int8 **)sub_A2E130(v19, v115, 2167, 1);
          v100 = v99;
          if ( v99 )
          {
            sub_823450(v99, 2);
            sub_8356A0(v100, v127, 0xAu);
          }
          sub_A2DD70(v19, *(unsigned int *)(v127 + 24), 105);
          goto LABEL_17;
        }
      }
      if ( *(_BYTE *)(sub_B14A40(*(_QWORD *)(*(_QWORD *)(*v76 + 8LL) & 0xFFFFFFFFFFFFFFF0LL)) + 73) >> 5 == 2 )
      {
        v80 = *(_QWORD *)(v24 + 8);
        v130 = v80;
        if ( !v80 )
          goto LABEL_169;
        v81 = *(_QWORD *)(v24 + 8);
        if ( *(char *)(v80 + 29) < 0 )
          v81 = sub_77A0C0(v80);
        v82 = v127;
        if ( *(char *)(v127 + 29) < 0 )
        {
          v131 = v81;
          v82 = sub_77A0C0(v127);
          v81 = v131;
        }
        if ( v82 != v81 )
        {
LABEL_169:
          v91 = (unsigned __int8 **)sub_A2E130(v19, v115, 2166, 0);
          v92 = v91;
          if ( v91 )
          {
            sub_823450(v91, 2);
            sub_8356A0(v92, v127, 0xAu);
            sub_823450(v92, v130 == 0);
            sub_8356A0(v92, v130, 0xAu);
          }
          goto LABEL_17;
        }
        v24 = *(_QWORD *)(v24 + 16);
      }
      else
      {
        v24 = *(_QWORD *)(v24 + 8) + 56LL * (*(_DWORD *)(v24 + 16) + (unsigned int)sub_83D880(v127));
      }
      v28 = sub_81F6C0(v28, *(_QWORD *)(v127 + 48), (*(_BYTE *)(v127 + 68) & 2) != 0);
      if ( (v83 & 4) != 0 )
      {
        v122 = v127;
      }
      else
      {
        v85 = v84;
        if ( (byte_8[v83 & 0xFFFFFFFFFFFFFFF0LL] & 4) == 0 )
          v85 = v122;
        v122 = v85;
      }
    }
LABEL_68:
    ++v26;
    if ( !*(_DWORD *)v24 )
    {
      v3 = v115;
      goto LABEL_70;
    }
  }
  if ( v32 != 14 )
  {
    if ( (unsigned __int8)(v32 - 2) > 4u )
    {
      v59 = 8LL * v26;
      goto LABEL_97;
    }
LABEL_41:
    v33 = sub_6D9A50(*(_QWORD **)(v19 + 16), v28);
    v34 = v33;
    if ( !v33 || (unsigned int)*(unsigned __int8 *)(v33 + 16) - 2 > 1 )
      BUG();
    v35 = *(void ***)(v33 + 40);
    v36 = *(_QWORD *)(v121[3].m128i_i64[0] + 8LL * v26);
    v37 = *(_BYTE *)(v33 + 19);
    if ( (v37 & 2) != 0 )
    {
      LODWORD(v135[1]) = *((_DWORD *)v35 + 2);
      if ( LODWORD(v135[1]) <= 0x40 )
      {
        v135[0] = *v35;
LABEL_46:
        if ( (void *)v36 >= v135[0] )
        {
          v3 = v115;
LABEL_48:
          if ( (*(_BYTE *)(sub_A2CB40(v19) + 1) & 0x10) == 0 )
            goto LABEL_59;
          v38 = (unsigned __int8 **)sub_A2E130(v19, v3, 2169, 0);
          if ( v38 )
            sub_823450(v38, 2);
          goto LABEL_17;
        }
        goto LABEL_66;
      }
      v124 = v34;
      sub_2585B30(v135);
      v34 = v124;
    }
    else
    {
      LODWORD(v135[1]) = 8 * ((v37 >> 2) & 0x1F);
      if ( SLODWORD(v135[1]) <= 64 )
      {
        v135[0] = v35;
        goto LABEL_46;
      }
      v125 = v34;
      sub_2585A50(v135, v35, 0);
      v34 = v125;
    }
    v46 = (int)v135[1];
    if ( LODWORD(v135[1]) <= 0x40 )
      goto LABEL_46;
    v117 = v34;
    v47 = sub_2587400(v135);
    v34 = v117;
    if ( (unsigned int)(v46 - v47) <= 0x40 )
    {
      if ( v36 >= *(_QWORD *)v135[0] )
      {
        v3 = v115;
        if ( v135[0] )
          operator delete[](v135[0]);
        goto LABEL_48;
      }
    }
    else if ( !v135[0] )
    {
      goto LABEL_66;
    }
    operator delete[](v135[0]);
    v34 = v117;
LABEL_66:
    v28 = *(_QWORD *)(v34 + 32);
    if ( v36 >= *(unsigned int *)(v24 + 16) )
    {
      v118 = v34;
      v70 = sub_8124E0(v115);
      if ( !(unsigned __int8)sub_838500(v19, v118, v70) )
        goto LABEL_17;
      sub_81FAA0(v24, v36);
      v116 = 0;
      v24 = *(_QWORD *)(v24 + 8) + 56LL * (unsigned int)v36;
    }
    else
    {
      v116 = 0;
      v24 = *(_QWORD *)(v24 + 8) + 56 * v36;
    }
    goto LABEL_68;
  }
LABEL_73:
  if ( (v28 & 4) != 0 )
    goto LABEL_74;
LABEL_107:
  if ( (v29[8] & 4) != 0 )
  {
LABEL_74:
    v3 = v115;
    if ( (*(_BYTE *)(sub_A2CB40(v19) + 1) & 8) == 0 )
      goto LABEL_59;
    v51 = 0;
    if ( v122 )
    {
      v51 = *(_DWORD *)(v122 + 24);
      v52 = 2;
LABEL_77:
      v53 = (unsigned __int8 **)sub_A2E130(v19, v115, 2174, 1);
      v54 = v53;
      if ( v53 )
      {
        sub_823450(v53, 2);
        sub_823450(v54, v52);
        sub_8356A0(v54, v122, 0xAu);
      }
      v55 = (unsigned __int8 **)sub_A2DD70(v19, v51, 2304);
      if ( v55 )
        sub_823450(v55, v52);
      goto LABEL_17;
    }
    if ( v123 )
    {
      if ( (v123 & 3) == 0 )
      {
        v52 = 1;
        v122 = v123 & 0xFFFFFFFFFFFFFFFCLL;
        v51 = *(_DWORD *)((v123 & 0xFFFFFFFFFFFFFFFCLL) + 24);
        goto LABEL_77;
      }
      if ( (v123 & 3) == 1 && (v123 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        v51 = sub_8124E0(v123 & 0xFFFFFFFFFFFFFFFCLL);
    }
    v52 = 0;
    goto LABEL_77;
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v29 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 47 )
  {
    v128 = v29;
    v132.m128i_i64[0] = v123;
    v89 = sub_82E820(&v132, v19, 2u);
    v29 = v128;
    if ( !v89 )
    {
      v90 = sub_836740(v19, v115, 2u, v28);
      v29 = v128;
      if ( v90 )
        goto LABEL_17;
    }
  }
  if ( v26 != v27 )
  {
    v31 = *(_QWORD *)v29;
    v32 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v29 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    goto LABEL_40;
  }
  result = sub_841030(&v138, (_DWORD *)v24, v28);
  if ( !(_BYTE)result )
    goto LABEL_17;
  if ( v116 && (*(_BYTE *)(v116 + 68) & 1) != 0 )
    result = sub_824FF0(v19, v115, v24, v116);
LABEL_18:
  if ( (unsigned int)v142 > 1 )
  {
    v110 = result;
    sub_69F740((__int64)&v142);
    return v110;
  }
  return result;
}

