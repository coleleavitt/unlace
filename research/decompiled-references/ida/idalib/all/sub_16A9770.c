__int64 __fastcall sub_16A9770(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 a5,
        __int64 a6,
        double a7,
        char a8)
{
  unsigned int v9; // r15d
  unsigned int v11; // ebp
  __int64 *v12; // r15
  __int64 v13; // r14
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  int v18; // edx
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rcx
  const __m128i *v21; // r14
  unsigned __int8 *v22; // rdx
  const __m128i *v23; // r12
  const __m128i *v24; // rbx
  unsigned __int64 v25; // r13
  _BYTE *v26; // rsi
  _BYTE *v27; // rax
  size_t v28; // r14
  unsigned __int64 v29; // rbp
  __int64 v30; // rbp
  unsigned __int64 v31; // rdi
  __int64 v32; // rbx
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  __int32 v35; // ebp
  _BYTE *v36; // rdi
  char *v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rcx
  char *v40; // rsi
  __int64 v41; // rdx
  unsigned __int8 *v42; // rsi
  unsigned __int64 v43; // rdi
  unsigned int *v44; // rax
  __int64 v45; // rax
  _BYTE *v46; // rax
  signed __int64 v47; // rdx
  __int64 v48; // rax
  unsigned __int64 v49; // rax
  int v50; // edx
  unsigned __int64 v51; // r14
  unsigned __int64 v52; // r15
  const __m128i *v53; // r12
  unsigned __int8 *v54; // rdx
  const __m128i *v55; // rcx
  const __m128i *v56; // rax
  unsigned __int64 v57; // r12
  const __m128i *v58; // r15
  const __m128i *v59; // rbx
  _BYTE *v60; // rsi
  _BYTE *v61; // rax
  size_t v62; // r13
  unsigned __int64 v63; // rbp
  __int64 v64; // rbp
  unsigned __int64 v65; // rdi
  const __m128i *v66; // rcx
  __int64 v67; // rbx
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // rcx
  __int32 v70; // ebp
  _BYTE *v71; // rdi
  char *v72; // rax
  __int64 v73; // rsi
  __int64 v74; // rcx
  char *v75; // rsi
  __int64 v76; // rdx
  __int64 v77; // rdx
  __int64 v78; // rbp
  __int64 v79; // r12
  __int64 v80; // rbp
  void *v81; // rdi
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rbp
  __int64 v86; // r12
  __int64 v87; // rbp
  void *v88; // rdi
  __int64 v89; // rcx
  __int64 v90; // rax
  int v91; // [rsp+8h] [rbp-2140h]
  int v92; // [rsp+10h] [rbp-2138h]
  _BYTE *v93; // [rsp+28h] [rbp-2120h]
  __int64 v94; // [rsp+40h] [rbp-2108h]
  _BYTE *v96; // [rsp+50h] [rbp-20F8h]
  const __m128i *v97; // [rsp+50h] [rbp-20F8h]
  const __m128i *v98; // [rsp+58h] [rbp-20F0h]
  _BOOL8 v99; // [rsp+58h] [rbp-20F0h]
  __int64 v100; // [rsp+58h] [rbp-20F0h]
  __int64 v101; // [rsp+68h] [rbp-20E0h]
  unsigned __int64 v102; // [rsp+78h] [rbp-20D0h] BYREF
  __int64 v103; // [rsp+80h] [rbp-20C8h]
  unsigned int v104; // [rsp+88h] [rbp-20C0h]
  char v105; // [rsp+96h] [rbp-20B2h] BYREF
  char v106; // [rsp+97h] [rbp-20B1h] BYREF
  __int64 v107; // [rsp+98h] [rbp-20B0h] BYREF
  __int16 v108; // [rsp+A0h] [rbp-20A8h] BYREF
  __int64 v109; // [rsp+A4h] [rbp-20A4h]
  unsigned int v110; // [rsp+ACh] [rbp-209Ch]
  __m128i *v111; // [rsp+B0h] [rbp-2098h] BYREF
  unsigned __int64 v112; // [rsp+B8h] [rbp-2090h]
  int v113; // [rsp+C0h] [rbp-2088h]
  __m128i *v114; // [rsp+D0h] [rbp-2078h] BYREF
  unsigned __int64 v115; // [rsp+D8h] [rbp-2070h]
  int v116; // [rsp+E0h] [rbp-2068h]
  unsigned int v117; // [rsp+F0h] [rbp-2058h] BYREF
  unsigned __int64 v118; // [rsp+F8h] [rbp-2050h]
  unsigned __int64 v119; // [rsp+100h] [rbp-2048h]
  int v120; // [rsp+108h] [rbp-2040h]
  unsigned __int64 v121; // [rsp+110h] [rbp-2038h] BYREF
  unsigned __int64 v122; // [rsp+118h] [rbp-2030h]
  unsigned __int64 v123; // [rsp+120h] [rbp-2028h]
  int v124; // [rsp+128h] [rbp-2020h]
  int v125; // [rsp+130h] [rbp-2018h] BYREF
  __int64 v126; // [rsp+138h] [rbp-2010h]
  __int64 v127; // [rsp+140h] [rbp-2008h]
  int v128; // [rsp+148h] [rbp-2000h]
  __int64 v129; // [rsp+150h] [rbp-1FF8h]
  _DWORD v130[46]; // [rsp+160h] [rbp-1FE8h] BYREF
  unsigned int v131; // [rsp+218h] [rbp-1F30h]
  int v132; // [rsp+21Ch] [rbp-1F2Ch]
  _DWORD v133[1994]; // [rsp+220h] [rbp-1F28h] BYREF

  v104 = a4;
  v102 = a5;
  v103 = a3;
  if ( ((1LL << a2) & 0x4D) == 0 )
  {
    v11 = v103;
    v12 = (__int64 *)(a6 & 0xFFFFFFFFFFFFFFF0LL);
    v13 = *(_QWORD *)(v102 + 8);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a6 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48
      || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48 )
    {
      v125 = 9;
      v126 = 0;
      v127 = a6;
      v128 = 0;
      v129 = 0;
      if ( a2 == 4 )
      {
        LOBYTE(v108) = a8;
        HIBYTE(v108) = 4;
        LODWORD(v109) = v103;
        HIDWORD(v109) = v103;
        v110 = a4;
      }
      else
      {
        if ( a2 == 5 )
        {
          LOBYTE(v108) = a8;
          HIBYTE(v108) = 5;
          v109 = v103;
        }
        else
        {
          LODWORD(v109) = v103;
          v108 = 768;
          HIDWORD(v109) = v103;
        }
        v110 = a4;
      }
      v91 = a1;
      sub_1A19220((unsigned int)v130, a1, (unsigned int)&v125, (unsigned int)&v108, (unsigned int)&v102, 1, 0, 1);
      v92 = v130[0];
      if ( !v130[0] && v131 >= 0x1D )
      {
        if ( v131 <= 0x1E )
          goto LABEL_18;
        if ( v131 == 39 )
        {
          v14 = *v12;
          v9 = 0;
          if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
          {
            sub_1A0BB10(v130);
            return v9;
          }
LABEL_18:
          if ( v132 == 2 )
          {
            v92 = 2;
            v15 = 4743;
          }
          else
          {
            if ( v132 == 3 )
            {
              sub_1BF27B0(v133, a1, v11, &v107);
              if ( (*(_BYTE *)(*(_QWORD *)v107 + 83LL) & 8) != 0
                && (v44 = *(unsigned int **)(*(_QWORD *)v107 + 128LL), *((_BYTE *)v44 + 4)) )
              {
                v45 = *(_QWORD *)&v44[2 * *v44 + 2];
                v99 = v45 != 0;
              }
              else
              {
                v99 = 0;
                v45 = 0;
              }
              v94 = v45;
              sub_168B9B0((__int64)&v111, a1 + 8, 4752);
              sub_AE9DF0((unsigned __int8 **)&v111, a2, 2u);
              sub_AE9DF0((unsigned __int8 **)&v111, v13, 8u);
              sub_AE9DF0((unsigned __int8 **)&v111, a6, 8u);
              sub_AE9DF0((unsigned __int8 **)&v111, v99, 2u);
              v46 = (_BYTE *)v94;
              v47 = 0;
              if ( v94 )
              {
                v47 = *(_DWORD *)(v94 + 16) * ((*(_WORD *)(v94 + 2) >> 6) & 7u);
                v46 = (_BYTE *)(v94 + 4LL * *(unsigned int *)(v94 + 4) + 20);
              }
              sub_AEC220((unsigned __int8 **)&v111, v46, v47);
              v121 = __PAIR64__(a4, v11);
              LOBYTE(v122) = 1;
              sub_AEC610((__int64 *)&v111, (__int64 *)&v121);
              v48 = sub_EEC8C0(v102, (__int64)&v121, a7);
              LOBYTE(v122) = 1;
              v121 = v48;
              sub_AEC610((__int64 *)&v111, (__int64 *)&v121);
              v117 = v11;
              v118 = 0;
              v120 = v113;
              v49 = v112;
              v119 = v112;
              if ( v111 )
              {
                v50 = *(_DWORD *)(v112 + 14976);
                if ( v50 )
                {
                  v84 = (unsigned int)(v50 - 1);
                  *(_DWORD *)(v112 + 14976) = v84;
                  v51 = *(_QWORD *)(v49 + 8 * v84 + 14848);
                  v85 = *(unsigned int *)(v51 + 536);
                  *(_BYTE *)v51 = 0;
                  v86 = *(_QWORD *)(v51 + 528);
                  *(_DWORD *)(v51 + 424) = 0;
                  v87 = v86 + (v85 << 6);
                  while ( v86 != v87 )
                  {
                    while ( 1 )
                    {
                      v87 -= 64;
                      v88 = *(void **)(v87 + 24);
                      if ( v88 == (void *)(v87 + 40) )
                        break;
                      operator delete(v88);
                      if ( v86 == v87 )
                        goto LABEL_135;
                    }
                  }
LABEL_135:
                  *(_DWORD *)(v51 + 536) = 0;
                  v52 = v51 + 96;
                }
                else
                {
                  v51 = operator new(0x3A0u);
                  *(_BYTE *)v51 = 0;
                  v52 = v51 + 96;
                  *(_QWORD *)(v51 + 96) = v51 + 112;
                  *(_QWORD *)(v51 + 128) = v51 + 144;
                  *(_QWORD *)(v51 + 160) = v51 + 176;
                  *(_QWORD *)(v51 + 192) = v51 + 208;
                  *(_QWORD *)(v51 + 224) = v51 + 240;
                  *(_QWORD *)(v51 + 256) = v51 + 272;
                  *(_QWORD *)(v51 + 288) = v51 + 304;
                  *(_QWORD *)(v51 + 320) = v51 + 336;
                  *(_QWORD *)(v51 + 352) = v51 + 368;
                  *(_QWORD *)(v51 + 384) = v51 + 400;
                  *(_QWORD *)(v51 + 416) = v51 + 432;
                  *(_QWORD *)(v51 + 104) = 0;
                  *(_BYTE *)(v51 + 112) = 0;
                  *(_QWORD *)(v51 + 136) = 0;
                  *(_BYTE *)(v51 + 144) = 0;
                  *(_QWORD *)(v51 + 168) = 0;
                  *(_BYTE *)(v51 + 176) = 0;
                  *(_QWORD *)(v51 + 200) = 0;
                  *(_BYTE *)(v51 + 208) = 0;
                  *(_QWORD *)(v51 + 232) = 0;
                  *(_BYTE *)(v51 + 240) = 0;
                  *(_QWORD *)(v51 + 264) = 0;
                  *(_BYTE *)(v51 + 272) = 0;
                  *(_QWORD *)(v51 + 296) = 0;
                  *(_BYTE *)(v51 + 304) = 0;
                  *(_QWORD *)(v51 + 328) = 0;
                  *(_BYTE *)(v51 + 336) = 0;
                  *(_QWORD *)(v51 + 360) = 0;
                  *(_BYTE *)(v51 + 368) = 0;
                  *(_QWORD *)(v51 + 392) = 0;
                  *(_BYTE *)(v51 + 400) = 0;
                  *(_QWORD *)(v51 + 424) = 0x800000000LL;
                  *(_QWORD *)(v51 + 528) = v51 + 544;
                  *(_QWORD *)(v51 + 536) = 0x600000000LL;
                }
                v53 = v111;
                v118 = v51;
                v54 = (unsigned __int8 *)&v111[1];
                *(_BYTE *)v51 = v111->m128i_i8[0];
                *(_BYTE *)(v51 + 1) = v53->m128i_i8[1];
                *(_BYTE *)(v51 + 2) = v53->m128i_i8[2];
                *(_BYTE *)(v51 + 3) = v53->m128i_i8[3];
                *(_BYTE *)(v51 + 4) = v53->m128i_i8[4];
                *(_BYTE *)(v51 + 5) = v53->m128i_i8[5];
                *(_BYTE *)(v51 + 6) = v53->m128i_i8[6];
                *(_BYTE *)(v51 + 7) = v53->m128i_i8[7];
                *(_BYTE *)(v51 + 8) = v53->m128i_i8[8];
                *(_BYTE *)(v51 + 9) = v53->m128i_i8[9];
                *(_BYTE *)(v51 + 10) = v53->m128i_i8[10];
                if ( (unsigned __int64)v54 < v51 + 32 && v51 + 16 < (unsigned __int64)&v53[2] )
                {
                  *(_QWORD *)(v51 + 16) = v53[1].m128i_i64[0];
                  *(_QWORD *)(v51 + 24) = v53[1].m128i_i64[1];
                  *(_QWORD *)(v51 + 32) = v53[2].m128i_i64[0];
                  *(_QWORD *)(v51 + 40) = v53[2].m128i_i64[1];
                  *(_QWORD *)(v51 + 48) = v53[3].m128i_i64[0];
                  *(_QWORD *)(v51 + 56) = v53[3].m128i_i64[1];
                  *(_QWORD *)(v51 + 64) = v53[4].m128i_i64[0];
                  *(_QWORD *)(v51 + 72) = v53[4].m128i_i64[1];
                  *(_QWORD *)(v51 + 80) = v53[5].m128i_i64[0];
                  *(_QWORD *)(v51 + 88) = v53[5].m128i_i64[1];
                }
                else
                {
                  *(__m128i *)(v51 + 16) = _mm_loadu_si128(v53 + 1);
                  *(__m128i *)(v51 + 32) = _mm_loadu_si128(v53 + 2);
                  *(__m128i *)(v51 + 48) = _mm_loadu_si128(v53 + 3);
                  *(__m128i *)(v51 + 64) = _mm_loadu_si128(v53 + 4);
                  *(__m128i *)(v51 + 80) = _mm_loadu_si128(v53 + 5);
                }
                v55 = v53 + 6;
                v56 = v53 + 26;
                v97 = v53;
                v57 = v52;
                v100 = (1LL << a2) & 0x4D;
                v58 = v56;
                v59 = v55;
                do
                {
                  if ( (const __m128i *)v57 != v59 )
                  {
                    v61 = *(_BYTE **)v57;
                    v62 = v59->m128i_u64[1];
                    if ( *(_QWORD *)v57 == v57 + 16 )
                      v63 = 15;
                    else
                      v63 = *(_QWORD *)(v57 + 16);
                    if ( v62 > v63 )
                    {
                      if ( (v62 & 0x8000000000000000LL) != 0LL )
LABEL_143:
                        std::__throw_length_error("basic_string::_M_create");
                      v64 = 2 * v63;
                      if ( v62 < v64 )
                      {
                        v65 = v64 + 1;
                        if ( v64 < 0 )
                        {
                          v65 = 0x8000000000000000LL;
                          v64 = 0x7FFFFFFFFFFFFFFFLL;
                        }
                      }
                      else
                      {
                        v65 = v62 + 1;
                        v64 = v59->m128i_i64[1];
                      }
                      v61 = (_BYTE *)operator new(v65);
                      if ( *(_QWORD *)v57 != v57 + 16 )
                      {
                        v93 = v61;
                        operator delete(*(void **)v57);
                        v61 = v93;
                      }
                      *(_QWORD *)v57 = v61;
                      *(_QWORD *)(v57 + 16) = v64;
                    }
                    if ( v62 )
                    {
                      v60 = (_BYTE *)v59->m128i_i64[0];
                      if ( v62 == 1 )
                        *v61 = *v60;
                      else
                        memcpy(v61, v60, v62);
                      v61 = *(_BYTE **)v57;
                    }
                    *(_QWORD *)(v57 + 8) = v62;
                    v61[v62] = 0;
                  }
                  v59 += 2;
                  v57 += 32LL;
                }
                while ( v59 != v58 );
                v66 = v59;
                v67 = v100;
                if ( (const __m128i *)(v51 + 416) != v66 )
                {
                  v68 = v97[26].m128i_u32[2];
                  v69 = *(unsigned int *)(v51 + 424);
                  v70 = v97[26].m128i_i32[2];
                  if ( v68 <= v69 )
                  {
                    if ( v97[26].m128i_i32[2] )
                    {
                      v89 = *(_QWORD *)(v51 + 416);
                      v90 = v97[26].m128i_i64[0];
                      do
                      {
                        *(_QWORD *)(v89 + v67) = *(_QWORD *)(v90 + v67);
                        *(_BYTE *)(v89 + v67 + 8) = *(_BYTE *)(v90 + v67 + 8);
                        v67 += 12;
                      }
                      while ( 12 * v68 != v67 );
                    }
                  }
                  else
                  {
                    if ( v68 > *(unsigned int *)(v51 + 428) )
                    {
                      *(_DWORD *)(v51 + 424) = 0;
                      sub_2237220(v51 + 416, v51 + 432, v68, 12);
                      v72 = (char *)v97[26].m128i_i64[0];
                      v71 = *(_BYTE **)(v51 + 416);
                      v74 = 0;
                      v68 = v97[26].m128i_u32[2];
                      v75 = v72;
                    }
                    else
                    {
                      v71 = *(_BYTE **)(v51 + 416);
                      v72 = (char *)v97[26].m128i_i64[0];
                      if ( *(_DWORD *)(v51 + 424) )
                      {
                        v73 = 12 * v69;
                        v74 = 12 * v69;
                        do
                        {
                          *(_QWORD *)&v71[v67] = *(_QWORD *)&v72[v67];
                          v71[v67 + 8] = v72[v67 + 8];
                          v67 += 12;
                        }
                        while ( v73 != v67 );
                        v68 = v97[26].m128i_u32[2];
                        v71 += v73;
                        v75 = &v72[v73];
                      }
                      else
                      {
                        v75 = (char *)v97[26].m128i_i64[0];
                        v74 = 0;
                      }
                    }
                    v76 = 12 * v68;
                    if ( v75 != &v72[v76] )
                      memcpy(v71, v75, v76 - v74);
                  }
                  *(_DWORD *)(v51 + 424) = v70;
                }
                sub_9EED30(v51 + 528, v97[33].m128i_i64);
              }
              sub_1C022A0(
                (unsigned int)v130 + 192,
                (unsigned int)&v117,
                v91,
                1,
                (unsigned int)&v102,
                1,
                (__int64)&byte_22F0C30,
                0,
                0,
                (__int64)sub_16A7620,
                (__int64)&v105);
              if ( v118 && v119 )
                sub_1580C40(v119, v118);
              v42 = (unsigned __int8 *)v111;
              if ( !v111 )
                goto LABEL_62;
              v43 = v112;
              if ( !v112 )
                goto LABEL_62;
LABEL_61:
              sub_1580C40(v43, (unsigned __int64)v42);
LABEL_62:
              v9 = 1;
              sub_1A0BB10(v130);
              return v9;
            }
            v15 = 0;
            if ( v132 == 1 )
            {
              v92 = 0;
              v15 = (v133[2] | v133[716] & 0x3FFFFFFF) == 0 ? 4759 : 4761;
            }
          }
          sub_168B9B0((__int64)&v114, a1 + 8, v15);
          sub_AE9DF0((unsigned __int8 **)&v114, a2, 2u);
          sub_AE9DF0((unsigned __int8 **)&v114, v13, 8u);
          sub_AE9DF0((unsigned __int8 **)&v114, a6, 8u);
          v121 = __PAIR64__(a4, v11);
          LOBYTE(v122) = 1;
          sub_AEC610((__int64 *)&v114, (__int64 *)&v121);
          v16 = sub_EEC8C0(v102, (__int64)&v121, a7);
          LOBYTE(v122) = 1;
          v121 = v16;
          sub_AEC610((__int64 *)&v114, (__int64 *)&v121);
          LODWORD(v121) = v11;
          v122 = 0;
          v124 = v116;
          v17 = v115;
          v123 = v115;
          if ( v114 )
          {
            v18 = *(_DWORD *)(v115 + 14976);
            if ( v18 )
            {
              v77 = (unsigned int)(v18 - 1);
              *(_DWORD *)(v115 + 14976) = v77;
              v19 = *(_QWORD *)(v17 + 8 * v77 + 14848);
              v78 = *(unsigned int *)(v19 + 536);
              *(_BYTE *)v19 = 0;
              v79 = *(_QWORD *)(v19 + 528);
              *(_DWORD *)(v19 + 424) = 0;
              v80 = v79 + (v78 << 6);
              while ( v79 != v80 )
              {
                while ( 1 )
                {
                  v80 -= 64;
                  v81 = *(void **)(v80 + 24);
                  if ( v81 == (void *)(v80 + 40) )
                    break;
                  operator delete(v81);
                  if ( v79 == v80 )
                    goto LABEL_118;
                }
              }
LABEL_118:
              *(_DWORD *)(v19 + 536) = 0;
              v20 = v19 + 96;
            }
            else
            {
              v19 = operator new(0x3A0u);
              *(_BYTE *)v19 = 0;
              v20 = v19 + 96;
              *(_QWORD *)(v19 + 96) = v19 + 112;
              *(_QWORD *)(v19 + 128) = v19 + 144;
              *(_QWORD *)(v19 + 160) = v19 + 176;
              *(_QWORD *)(v19 + 192) = v19 + 208;
              *(_QWORD *)(v19 + 224) = v19 + 240;
              *(_QWORD *)(v19 + 256) = v19 + 272;
              *(_QWORD *)(v19 + 288) = v19 + 304;
              *(_QWORD *)(v19 + 320) = v19 + 336;
              *(_QWORD *)(v19 + 352) = v19 + 368;
              *(_QWORD *)(v19 + 384) = v19 + 400;
              *(_QWORD *)(v19 + 416) = v19 + 432;
              *(_QWORD *)(v19 + 104) = 0;
              *(_BYTE *)(v19 + 112) = 0;
              *(_QWORD *)(v19 + 136) = 0;
              *(_BYTE *)(v19 + 144) = 0;
              *(_QWORD *)(v19 + 168) = 0;
              *(_BYTE *)(v19 + 176) = 0;
              *(_QWORD *)(v19 + 200) = 0;
              *(_BYTE *)(v19 + 208) = 0;
              *(_QWORD *)(v19 + 232) = 0;
              *(_BYTE *)(v19 + 240) = 0;
              *(_QWORD *)(v19 + 264) = 0;
              *(_BYTE *)(v19 + 272) = 0;
              *(_QWORD *)(v19 + 296) = 0;
              *(_BYTE *)(v19 + 304) = 0;
              *(_QWORD *)(v19 + 328) = 0;
              *(_BYTE *)(v19 + 336) = 0;
              *(_QWORD *)(v19 + 360) = 0;
              *(_BYTE *)(v19 + 368) = 0;
              *(_QWORD *)(v19 + 392) = 0;
              *(_BYTE *)(v19 + 400) = 0;
              *(_QWORD *)(v19 + 424) = 0x800000000LL;
              *(_QWORD *)(v19 + 528) = v19 + 544;
              *(_QWORD *)(v19 + 536) = 0x600000000LL;
            }
            v21 = v114;
            v122 = v19;
            v22 = (unsigned __int8 *)&v114[1];
            *(_BYTE *)v19 = v114->m128i_i8[0];
            *(_BYTE *)(v19 + 1) = v21->m128i_i8[1];
            *(_BYTE *)(v19 + 2) = v21->m128i_i8[2];
            *(_BYTE *)(v19 + 3) = v21->m128i_i8[3];
            *(_BYTE *)(v19 + 4) = v21->m128i_i8[4];
            *(_BYTE *)(v19 + 5) = v21->m128i_i8[5];
            *(_BYTE *)(v19 + 6) = v21->m128i_i8[6];
            *(_BYTE *)(v19 + 7) = v21->m128i_i8[7];
            *(_BYTE *)(v19 + 8) = v21->m128i_i8[8];
            *(_BYTE *)(v19 + 9) = v21->m128i_i8[9];
            *(_BYTE *)(v19 + 10) = v21->m128i_i8[10];
            if ( (unsigned __int64)v22 < v19 + 32 && v19 + 16 < (unsigned __int64)&v21[2] )
            {
              *(_QWORD *)(v19 + 16) = v21[1].m128i_i64[0];
              *(_QWORD *)(v19 + 24) = v21[1].m128i_i64[1];
              *(_QWORD *)(v19 + 32) = v21[2].m128i_i64[0];
              *(_QWORD *)(v19 + 40) = v21[2].m128i_i64[1];
              *(_QWORD *)(v19 + 48) = v21[3].m128i_i64[0];
              *(_QWORD *)(v19 + 56) = v21[3].m128i_i64[1];
              *(_QWORD *)(v19 + 64) = v21[4].m128i_i64[0];
              *(_QWORD *)(v19 + 72) = v21[4].m128i_i64[1];
              *(_QWORD *)(v19 + 80) = v21[5].m128i_i64[0];
              *(_QWORD *)(v19 + 88) = v21[5].m128i_i64[1];
            }
            else
            {
              *(__m128i *)(v19 + 16) = _mm_loadu_si128(v21 + 1);
              *(__m128i *)(v19 + 32) = _mm_loadu_si128(v21 + 2);
              *(__m128i *)(v19 + 48) = _mm_loadu_si128(v21 + 3);
              *(__m128i *)(v19 + 64) = _mm_loadu_si128(v21 + 4);
              *(__m128i *)(v19 + 80) = _mm_loadu_si128(v21 + 5);
            }
            v101 = (1LL << a2) & 0x4D;
            v23 = v21 + 6;
            v24 = v21 + 26;
            v25 = v20;
            v98 = v21;
            do
            {
              if ( v23 != (const __m128i *)v25 )
              {
                v27 = *(_BYTE **)v25;
                v28 = v23->m128i_u64[1];
                if ( *(_QWORD *)v25 == v25 + 16 )
                  v29 = 15;
                else
                  v29 = *(_QWORD *)(v25 + 16);
                if ( v28 > v29 )
                {
                  if ( (v28 & 0x8000000000000000LL) != 0LL )
                    goto LABEL_143;
                  v30 = 2 * v29;
                  if ( v28 < v30 )
                  {
                    v31 = v30 + 1;
                    if ( v30 < 0 )
                    {
                      v31 = 0x8000000000000000LL;
                      v30 = 0x7FFFFFFFFFFFFFFFLL;
                    }
                  }
                  else
                  {
                    v31 = v28 + 1;
                    v30 = v23->m128i_i64[1];
                  }
                  v27 = (_BYTE *)operator new(v31);
                  if ( *(_QWORD *)v25 != v25 + 16 )
                  {
                    v96 = v27;
                    operator delete(*(void **)v25);
                    v27 = v96;
                  }
                  *(_QWORD *)v25 = v27;
                  *(_QWORD *)(v25 + 16) = v30;
                }
                if ( v28 )
                {
                  v26 = (_BYTE *)v23->m128i_i64[0];
                  if ( v28 == 1 )
                    *v27 = *v26;
                  else
                    memcpy(v27, v26, v28);
                  v27 = *(_BYTE **)v25;
                }
                *(_QWORD *)(v25 + 8) = v28;
                v27[v28] = 0;
              }
              v23 += 2;
              v25 += 32LL;
            }
            while ( v23 != v24 );
            v32 = v101;
            if ( (const __m128i *)(v19 + 416) != v23 )
            {
              v33 = v98[26].m128i_u32[2];
              v34 = *(unsigned int *)(v19 + 424);
              v35 = v98[26].m128i_i32[2];
              if ( v33 <= v34 )
              {
                if ( v98[26].m128i_i32[2] )
                {
                  v82 = *(_QWORD *)(v19 + 416);
                  v83 = v98[26].m128i_i64[0];
                  do
                  {
                    *(_QWORD *)(v82 + v32) = *(_QWORD *)(v83 + v32);
                    *(_BYTE *)(v82 + v32 + 8) = *(_BYTE *)(v83 + v32 + 8);
                    v32 += 12;
                  }
                  while ( 12 * v33 != v32 );
                }
              }
              else
              {
                if ( v33 > *(unsigned int *)(v19 + 428) )
                {
                  *(_DWORD *)(v19 + 424) = 0;
                  sub_2237220(v19 + 416, v19 + 432, v33, 12);
                  v37 = (char *)v98[26].m128i_i64[0];
                  v36 = *(_BYTE **)(v19 + 416);
                  v39 = 0;
                  v33 = v98[26].m128i_u32[2];
                  v40 = v37;
                }
                else
                {
                  v36 = *(_BYTE **)(v19 + 416);
                  v37 = (char *)v98[26].m128i_i64[0];
                  if ( *(_DWORD *)(v19 + 424) )
                  {
                    v38 = 12 * v34;
                    v39 = 12 * v34;
                    do
                    {
                      *(_QWORD *)&v36[v32] = *(_QWORD *)&v37[v32];
                      v36[v32 + 8] = v37[v32 + 8];
                      v32 += 12;
                    }
                    while ( v38 != v32 );
                    v33 = v98[26].m128i_u32[2];
                    v36 += v38;
                    v40 = &v37[v38];
                  }
                  else
                  {
                    v40 = (char *)v98[26].m128i_i64[0];
                    v39 = 0;
                  }
                }
                v41 = 12 * v33;
                if ( v40 != &v37[v41] )
                  memcpy(v36, v40, v41 - v39);
              }
              *(_DWORD *)(v19 + 424) = v35;
            }
            sub_9EED30(v19 + 528, v98[33].m128i_i64);
          }
          sub_1C022A0(
            (unsigned int)v130 + 192,
            (unsigned int)&v121,
            v91,
            v92,
            (unsigned int)&v102,
            1,
            (__int64)&byte_22F0C30,
            0,
            0,
            (__int64)sub_16A7620,
            (__int64)&v106);
          if ( v122 && v123 )
            sub_1580C40(v123, v122);
          v42 = (unsigned __int8 *)v114;
          if ( !v114 )
            goto LABEL_62;
          v43 = v115;
          if ( !v115 )
            goto LABEL_62;
          goto LABEL_61;
        }
      }
      v9 = 0;
      sub_1A0BB10(v130);
      return v9;
    }
  }
  return 0;
}
