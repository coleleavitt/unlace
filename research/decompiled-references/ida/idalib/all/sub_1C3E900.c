__int64 __fastcall sub_1C3E900(
        __int64 a1,
        int a2,
        __int64 *a3,
        __int64 (__fastcall *a4)(__int64),
        __int64 a5,
        __int64 a6,
        __int64 (__fastcall *a7)(__int64),
        __int64 a8)
{
  unsigned int v12; // r14d
  _BYTE *v13; // rdi
  __int64 v14; // r8
  __int64 v15; // rax
  __m128 v16; // xmm0
  __m128 v17; // xmm1
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // ebx
  __int64 v26; // r8
  unsigned int v27; // eax
  char *v28; // rbx
  char *v29; // r12
  __int64 v30; // r15
  unsigned __int8 *v31; // rax
  unsigned __int8 *v32; // rdx
  __int64 v33; // rax
  unsigned __int8 *v34; // rax
  unsigned __int8 *v35; // rdx
  __int64 v36; // rax
  int v38; // eax
  unsigned __int64 v39; // rax
  int v40; // edx
  unsigned __int64 v41; // r12
  unsigned __int64 v42; // r14
  const __m128i *v43; // rbp
  unsigned __int8 *v44; // rdx
  const __m128i *v45; // rbp
  unsigned __int64 v46; // r15
  _BYTE *v47; // rsi
  _BYTE *v48; // rax
  size_t v49; // r12
  unsigned __int64 v50; // rbx
  __int64 v51; // rbx
  unsigned __int64 v52; // rdi
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // rax
  __int32 v55; // ebx
  _BYTE *v56; // rdi
  char *v57; // rcx
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rsi
  __int64 v61; // r9
  char *v62; // rsi
  __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  unsigned __int8 *v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  unsigned __int8 *v74; // rax
  _QWORD *v75; // rax
  const void *v76; // rsi
  __int64 v77; // rdx
  int v78; // eax
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // rdx
  void *v83; // rdi
  __int64 v84; // rdx
  int v85; // eax
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rsi
  __int64 v89; // rdx
  void *v90; // rdi
  size_t v91; // rdx
  __int64 v92; // rdx
  __int64 v93; // rbx
  __int64 v94; // rbp
  __int64 v95; // rbx
  void *v96; // rdi
  __int64 v97; // rsi
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v101; // [rsp+10h] [rbp-208h]
  __int64 v102; // [rsp+10h] [rbp-208h]
  unsigned __int8 *v103; // [rsp+10h] [rbp-208h]
  unsigned __int8 *v104; // [rsp+10h] [rbp-208h]
  __int64 v105; // [rsp+10h] [rbp-208h]
  size_t v106; // [rsp+18h] [rbp-200h]
  __int64 v107; // [rsp+20h] [rbp-1F8h]
  __int64 v108; // [rsp+38h] [rbp-1E0h]
  __int64 v109; // [rsp+38h] [rbp-1E0h]
  __int64 v110; // [rsp+38h] [rbp-1E0h]
  __m128 *v111; // [rsp+40h] [rbp-1D8h]
  __int64 v112; // [rsp+48h] [rbp-1D0h]
  _BYTE *v113; // [rsp+50h] [rbp-1C8h]
  const __m128i *v114; // [rsp+58h] [rbp-1C0h]
  unsigned __int64 v115; // [rsp+60h] [rbp-1B8h]
  char v116; // [rsp+7Fh] [rbp-199h] BYREF
  const __m128i *v117; // [rsp+80h] [rbp-198h] BYREF
  unsigned __int8 *v118; // [rsp+88h] [rbp-190h]
  int v119; // [rsp+90h] [rbp-188h]
  __int64 v120; // [rsp+A0h] [rbp-178h] BYREF
  unsigned __int64 v121; // [rsp+A8h] [rbp-170h]
  unsigned __int8 *v122; // [rsp+B0h] [rbp-168h]
  int v123; // [rsp+B8h] [rbp-160h]
  unsigned __int8 *v124; // [rsp+C0h] [rbp-158h]
  __int64 v125; // [rsp+C8h] [rbp-150h]
  char v126; // [rsp+118h] [rbp-100h]
  unsigned int v127; // [rsp+120h] [rbp-F8h]
  char v128; // [rsp+124h] [rbp-F4h]
  __int64 v129; // [rsp+130h] [rbp-E8h] BYREF
  void *ptr; // [rsp+138h] [rbp-E0h] BYREF
  unsigned __int64 v131; // [rsp+140h] [rbp-D8h]
  _BYTE dest[64]; // [rsp+148h] [rbp-D0h] BYREF
  void *v133[2]; // [rsp+188h] [rbp-90h]
  __int64 v134; // [rsp+198h] [rbp-80h]
  _QWORD *v135; // [rsp+1A0h] [rbp-78h]
  __m128 v136; // [rsp+1A8h] [rbp-70h]
  __int64 v137; // [rsp+1B8h] [rbp-60h]
  __int64 v138; // [rsp+1C0h] [rbp-58h]
  __int64 v139; // [rsp+1C8h] [rbp-50h]
  __int64 v140; // [rsp+1D0h] [rbp-48h]

  v12 = *((_DWORD *)a3 + 4);
  v13 = dest;
  v129 = *a3;
  v14 = a8;
  ptr = dest;
  v131 = 0x800000000LL;
  if ( v12 )
  {
    v76 = a3 + 3;
    if ( (__int64 *)a3[1] == a3 + 3 )
    {
      v91 = 8LL * v12;
      if ( v12 <= 8uLL
        || (sub_2237220(&ptr, dest, v12, 8),
            v76 = (const void *)a3[1],
            v13 = ptr,
            v14 = a8,
            (v91 = 8LL * *((unsigned int *)a3 + 4)) != 0) )
      {
        v105 = v14;
        memcpy(v13, v76, v91);
        v14 = v105;
      }
      LODWORD(v131) = v12;
    }
    else
    {
      ptr = (void *)a3[1];
      v131 = __PAIR64__(*((_DWORD *)a3 + 5), v12);
      a3[1] = (__int64)v76;
      *((_DWORD *)a3 + 5) = 0;
    }
  }
  v15 = a3[13];
  v16 = (__m128)_mm_loadu_si128((const __m128i *)(a3 + 11));
  a3[11] = 0;
  v17 = (__m128)_mm_loadu_si128((const __m128i *)(a3 + 15));
  *(_DWORD *)a3 = 0;
  v134 = v15;
  v18 = (_QWORD *)a3[14];
  *((_DWORD *)a3 + 4) = 0;
  v135 = v18;
  v19 = a3[17];
  a3[12] = 0;
  v137 = v19;
  v20 = a3[18];
  *(__m128 *)v133 = v16;
  v138 = v20;
  v21 = a3[19];
  v136 = v17;
  v139 = v21;
  v22 = a3[20];
  *((_BYTE *)a3 + 166) = 0;
  v140 = v22;
  *(_WORD *)((char *)a3 + 163) = 0;
  v25 = a7(v14);
  if ( !v25 )
  {
    v27 = a4(a5);
    v25 = v27;
    if ( v27 == 1 )
    {
      v108 = **(_QWORD **)a1;
      v106 = j__strlen(&byte_22F0C30);
      v112 = *(_QWORD *)(a1 + 8);
      v111 = *(__m128 **)(a1 + 16);
      sub_168B9B0((__int64)&v117, (__int64)&v111->m128_i64[1], 3837);
      sub_AE9DF0((unsigned __int8 **)&v117, *(_QWORD *)(**(_QWORD **)(a1 + 8) + 8LL), 8u);
      sub_1C2FE50((unsigned __int8 **)&v117, a2);
      v38 = sub_EEB7E0(**(_QWORD **)(a1 + 8), a2, *(double *)v16.m128_u64);
      v121 = 0;
      LODWORD(v120) = v38;
      v123 = v119;
      v39 = (unsigned __int64)v118;
      v122 = v118;
      if ( v117 )
      {
        v40 = *((_DWORD *)v118 + 3744);
        if ( v40 )
        {
          v92 = (unsigned int)(v40 - 1);
          *((_DWORD *)v118 + 3744) = v92;
          v41 = *(_QWORD *)(v39 + 8 * v92 + 14848);
          v93 = *(unsigned int *)(v41 + 536);
          v94 = *(_QWORD *)(v41 + 528);
          *(_BYTE *)v41 = 0;
          *(_DWORD *)(v41 + 424) = 0;
          v95 = v94 + (v93 << 6);
          while ( v94 != v95 )
          {
            while ( 1 )
            {
              v95 -= 64;
              v96 = *(void **)(v95 + 24);
              if ( v96 == (void *)(v95 + 40) )
                break;
              operator delete(v96);
              if ( v94 == v95 )
                goto LABEL_106;
            }
          }
LABEL_106:
          *(_DWORD *)(v41 + 536) = 0;
          v42 = v41 + 96;
        }
        else
        {
          v41 = operator new(0x3A0u);
          *(_BYTE *)v41 = 0;
          v42 = v41 + 96;
          *(_QWORD *)(v41 + 96) = v41 + 112;
          *(_QWORD *)(v41 + 128) = v41 + 144;
          *(_QWORD *)(v41 + 160) = v41 + 176;
          *(_QWORD *)(v41 + 192) = v41 + 208;
          *(_QWORD *)(v41 + 224) = v41 + 240;
          *(_QWORD *)(v41 + 256) = v41 + 272;
          *(_QWORD *)(v41 + 288) = v41 + 304;
          *(_QWORD *)(v41 + 320) = v41 + 336;
          *(_QWORD *)(v41 + 352) = v41 + 368;
          *(_QWORD *)(v41 + 384) = v41 + 400;
          *(_QWORD *)(v41 + 416) = v41 + 432;
          *(_QWORD *)(v41 + 104) = 0;
          *(_BYTE *)(v41 + 112) = 0;
          *(_QWORD *)(v41 + 136) = 0;
          *(_BYTE *)(v41 + 144) = 0;
          *(_QWORD *)(v41 + 168) = 0;
          *(_BYTE *)(v41 + 176) = 0;
          *(_QWORD *)(v41 + 200) = 0;
          *(_BYTE *)(v41 + 208) = 0;
          *(_QWORD *)(v41 + 232) = 0;
          *(_BYTE *)(v41 + 240) = 0;
          *(_QWORD *)(v41 + 264) = 0;
          *(_BYTE *)(v41 + 272) = 0;
          *(_QWORD *)(v41 + 296) = 0;
          *(_BYTE *)(v41 + 304) = 0;
          *(_QWORD *)(v41 + 328) = 0;
          *(_BYTE *)(v41 + 336) = 0;
          *(_QWORD *)(v41 + 360) = 0;
          *(_BYTE *)(v41 + 368) = 0;
          *(_QWORD *)(v41 + 392) = 0;
          *(_BYTE *)(v41 + 400) = 0;
          *(_QWORD *)(v41 + 424) = 0x800000000LL;
          *(_QWORD *)(v41 + 528) = v41 + 544;
          *(_QWORD *)(v41 + 536) = 0x600000000LL;
        }
        v43 = v117;
        v121 = v41;
        v44 = (unsigned __int8 *)&v117[1];
        *(_BYTE *)v41 = v117->m128i_i8[0];
        *(_BYTE *)(v41 + 1) = v43->m128i_i8[1];
        *(_BYTE *)(v41 + 2) = v43->m128i_i8[2];
        *(_BYTE *)(v41 + 3) = v43->m128i_i8[3];
        *(_BYTE *)(v41 + 4) = v43->m128i_i8[4];
        *(_BYTE *)(v41 + 5) = v43->m128i_i8[5];
        *(_BYTE *)(v41 + 6) = v43->m128i_i8[6];
        *(_BYTE *)(v41 + 7) = v43->m128i_i8[7];
        *(_BYTE *)(v41 + 8) = v43->m128i_i8[8];
        *(_BYTE *)(v41 + 9) = v43->m128i_i8[9];
        *(_BYTE *)(v41 + 10) = v43->m128i_i8[10];
        if ( (unsigned __int64)v44 < v41 + 32 && v41 + 16 < (unsigned __int64)&v43[2] )
        {
          *(_QWORD *)(v41 + 16) = v43[1].m128i_i64[0];
          *(_QWORD *)(v41 + 24) = v43[1].m128i_i64[1];
          *(_QWORD *)(v41 + 32) = v43[2].m128i_i64[0];
          *(_QWORD *)(v41 + 40) = v43[2].m128i_i64[1];
          *(_QWORD *)(v41 + 48) = v43[3].m128i_i64[0];
          *(_QWORD *)(v41 + 56) = v43[3].m128i_i64[1];
          *(_QWORD *)(v41 + 64) = v43[4].m128i_i64[0];
          *(_QWORD *)(v41 + 72) = v43[4].m128i_i64[1];
          *(_QWORD *)(v41 + 80) = v43[5].m128i_i64[0];
          *(_QWORD *)(v41 + 88) = v43[5].m128i_i64[1];
        }
        else
        {
          *(__m128i *)(v41 + 16) = _mm_loadu_si128(v43 + 1);
          *(__m128i *)(v41 + 32) = _mm_loadu_si128(v43 + 2);
          *(__m128i *)(v41 + 48) = _mm_loadu_si128(v43 + 3);
          *(__m128i *)(v41 + 64) = _mm_loadu_si128(v43 + 4);
          *(__m128i *)(v41 + 80) = _mm_loadu_si128(v43 + 5);
        }
        v114 = v43;
        v115 = v41;
        v45 = v43 + 6;
        v46 = v42 + 320;
        do
        {
          if ( v45 != (const __m128i *)v42 )
          {
            v48 = *(_BYTE **)v42;
            v49 = v45->m128i_u64[1];
            if ( v42 + 16 == *(_QWORD *)v42 )
              v50 = 15;
            else
              v50 = *(_QWORD *)(v42 + 16);
            if ( v49 > v50 )
            {
              if ( (v49 & 0x8000000000000000LL) != 0LL )
                std::__throw_length_error("basic_string::_M_create");
              v51 = 2 * v50;
              if ( v49 < v51 )
              {
                v52 = v51 + 1;
                if ( v51 < 0 )
                {
                  v52 = 0x8000000000000000LL;
                  v51 = 0x7FFFFFFFFFFFFFFFLL;
                }
              }
              else
              {
                v52 = v49 + 1;
                v51 = v45->m128i_i64[1];
              }
              v48 = (_BYTE *)operator new(v52);
              if ( v42 + 16 != *(_QWORD *)v42 )
              {
                v113 = v48;
                operator delete(*(void **)v42);
                v48 = v113;
              }
              *(_QWORD *)v42 = v48;
              *(_QWORD *)(v42 + 16) = v51;
            }
            if ( v49 )
            {
              v47 = (_BYTE *)v45->m128i_i64[0];
              if ( v49 == 1 )
                *v48 = *v47;
              else
                memcpy(v48, v47, v49);
              v48 = *(_BYTE **)v42;
            }
            *(_QWORD *)(v42 + 8) = v49;
            v48[v49] = 0;
          }
          v42 += 32LL;
          v45 += 2;
        }
        while ( v42 != v46 );
        if ( (const __m128i *)(v115 + 416) != &v114[26] )
        {
          v53 = v114[26].m128i_u32[2];
          v54 = *(unsigned int *)(v115 + 424);
          v55 = v114[26].m128i_i32[2];
          if ( v53 <= v54 )
          {
            if ( v114[26].m128i_i32[2] )
            {
              v97 = *(_QWORD *)(v115 + 416);
              v98 = v114[26].m128i_i64[0];
              v99 = 0;
              do
              {
                *(_QWORD *)(v97 + v99) = *(_QWORD *)(v98 + v99);
                *(_BYTE *)(v97 + v99 + 8) = *(_BYTE *)(v98 + v99 + 8);
                v99 += 12;
              }
              while ( 12 * v53 != v99 );
            }
          }
          else
          {
            if ( v53 > *(unsigned int *)(v115 + 428) )
            {
              *(_DWORD *)(v115 + 424) = 0;
              sub_2237220(v115 + 416, v115 + 432, v53, 12);
              v57 = (char *)v114[26].m128i_i64[0];
              v56 = *(_BYTE **)(v115 + 416);
              v61 = 0;
              v53 = v114[26].m128i_u32[2];
              v62 = v57;
            }
            else
            {
              v56 = *(_BYTE **)(v115 + 416);
              v57 = (char *)v114[26].m128i_i64[0];
              if ( *(_DWORD *)(v115 + 424) )
              {
                v58 = 3 * v54;
                v59 = 0;
                v60 = 4 * v58;
                v61 = v60;
                do
                {
                  *(_QWORD *)&v56[v59] = *(_QWORD *)&v57[v59];
                  v56[v59 + 8] = v57[v59 + 8];
                  v59 += 12;
                }
                while ( v60 != v59 );
                v53 = v114[26].m128i_u32[2];
                v56 += v60;
                v62 = &v57[v60];
              }
              else
              {
                v62 = (char *)v114[26].m128i_i64[0];
                v61 = 0;
              }
            }
            v63 = 12 * v53;
            if ( v62 != &v57[v63] )
              memcpy(v56, v62, v63 - v61);
          }
          *(_DWORD *)(v115 + 424) = v55;
        }
        sub_9EED30(v115 + 528, v114[33].m128i_i64);
      }
      sub_1C022A0(
        v108,
        (unsigned int *)&v120,
        v111,
        0,
        v112,
        1u,
        v16,
        v17,
        &byte_22F0C30,
        v106,
        0,
        (unsigned __int8 (__fastcall *)(__int64, __int64))sub_16A7620,
        (__int64)&v116);
      if ( v121 && v122 )
        sub_1580C40((unsigned __int64)v122, v121);
      if ( v117 && v118 )
        sub_1580C40((unsigned __int64)v118, (unsigned __int64)v117);
    }
    else if ( !v27 )
    {
      goto LABEL_15;
    }
    v28 = (char *)ptr;
    v29 = (char *)ptr + 8 * (unsigned int)v131;
    if ( v29 != ptr )
    {
      while ( 1 )
      {
        sub_168B9F0(
          (__int64)&v120,
          (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL),
          *(_DWORD *)((*(_QWORD *)v28 & 0xFFFFFFFFFFFFFFF8LL) + 24),
          0x1764u,
          0);
        v30 = *(_QWORD *)(**(_QWORD **)(a1 + 8) + 8LL);
        if ( v126 )
          break;
        if ( v128 )
        {
          v64 = sub_168B9E0(&v120);
          v68 = v122;
          if ( v122 )
          {
            v101 = v64;
            v68 = (unsigned __int8 *)(*(__int64 (__fastcall **)(unsigned __int8 *))(*(_QWORD *)v122 + 32LL))(v122);
            v64 = v101;
          }
          v117 = (const __m128i *)v68;
          v69 = sub_1587BC0(v64, (__int64 *)&v117, v64, v65, v66, v67);
          sub_AE9DF0((unsigned __int8 **)(*v69 + 32LL * v127 + 8), v30, 8u);
          if ( v126 )
            goto LABEL_12;
LABEL_71:
          if ( v128 )
          {
            v70 = sub_168B9E0(&v120);
            v74 = v122;
            if ( v122 )
            {
              v102 = v70;
              v74 = (unsigned __int8 *)(*(__int64 (__fastcall **)(unsigned __int8 *))(*(_QWORD *)v122 + 32LL))(v122);
              v70 = v102;
            }
            v117 = (const __m128i *)v74;
            v75 = sub_1587BC0(v70, (__int64 *)&v117, v70, v71, v72, v73);
            sub_1C2FE50((unsigned __int8 **)(*v75 + 32LL * v127 + 8), a2);
          }
        }
LABEL_8:
        v28 += 8;
        sub_15F7200(&v120);
        if ( v29 == v28 )
          goto LABEL_14;
      }
      v31 = v124;
      if ( !v124 )
      {
        v77 = v125;
        v78 = *(_DWORD *)(v125 + 14976);
        if ( v78 )
        {
          v79 = (unsigned int)(v78 - 1);
          *(_DWORD *)(v125 + 14976) = v79;
          v31 = *(unsigned __int8 **)(v77 + 8 * v79 + 14848);
          v80 = *((unsigned int *)v31 + 134);
          *v31 = 0;
          v81 = *((_QWORD *)v31 + 66);
          *((_DWORD *)v31 + 106) = 0;
          v82 = v81 + (v80 << 6);
          while ( v81 != v82 )
          {
            while ( 1 )
            {
              v82 -= 64;
              v83 = *(void **)(v82 + 24);
              if ( v83 == (void *)(v82 + 40) )
                break;
              v109 = v82;
              v107 = v81;
              v103 = v31;
              operator delete(v83);
              v81 = v107;
              v82 = v109;
              v31 = v103;
              if ( v107 == v109 )
                goto LABEL_82;
            }
          }
LABEL_82:
          *((_DWORD *)v31 + 134) = 0;
        }
        else
        {
          v31 = (unsigned __int8 *)operator new(0x3A0u);
          *v31 = 0;
          *((_QWORD *)v31 + 12) = v31 + 112;
          *((_QWORD *)v31 + 16) = v31 + 144;
          *((_QWORD *)v31 + 20) = v31 + 176;
          *((_QWORD *)v31 + 24) = v31 + 208;
          *((_QWORD *)v31 + 28) = v31 + 240;
          *((_QWORD *)v31 + 32) = v31 + 272;
          *((_QWORD *)v31 + 36) = v31 + 304;
          *((_QWORD *)v31 + 40) = v31 + 336;
          *((_QWORD *)v31 + 44) = v31 + 368;
          *((_QWORD *)v31 + 48) = v31 + 400;
          *((_QWORD *)v31 + 52) = v31 + 432;
          *((_QWORD *)v31 + 13) = 0;
          v31[112] = 0;
          *((_QWORD *)v31 + 17) = 0;
          v31[144] = 0;
          *((_QWORD *)v31 + 21) = 0;
          v31[176] = 0;
          *((_QWORD *)v31 + 25) = 0;
          v31[208] = 0;
          *((_QWORD *)v31 + 29) = 0;
          v31[240] = 0;
          *((_QWORD *)v31 + 33) = 0;
          v31[272] = 0;
          *((_QWORD *)v31 + 37) = 0;
          v31[304] = 0;
          *((_QWORD *)v31 + 41) = 0;
          v31[336] = 0;
          *((_QWORD *)v31 + 45) = 0;
          v31[368] = 0;
          *((_QWORD *)v31 + 49) = 0;
          v31[400] = 0;
          *((_QWORD *)v31 + 53) = 0x800000000LL;
          *((_QWORD *)v31 + 66) = v31 + 544;
          *((_QWORD *)v31 + 67) = 0x600000000LL;
        }
        v124 = v31;
      }
      v31[*v31 + 1] = 8;
      v32 = v124;
      v33 = *v124;
      *v124 = v33 + 1;
      *(_QWORD *)&v32[8 * v33 + 16] = v30;
      if ( v126 )
      {
LABEL_12:
        v34 = v124;
        if ( !v124 )
        {
          v84 = v125;
          v85 = *(_DWORD *)(v125 + 14976);
          if ( v85 )
          {
            v86 = (unsigned int)(v85 - 1);
            *(_DWORD *)(v125 + 14976) = v86;
            v34 = *(unsigned __int8 **)(v84 + 8 * v86 + 14848);
            v87 = *((unsigned int *)v34 + 134);
            *v34 = 0;
            v88 = *((_QWORD *)v34 + 66);
            *((_DWORD *)v34 + 106) = 0;
            v89 = v88 + (v87 << 6);
            while ( v88 != v89 )
            {
              while ( 1 )
              {
                v89 -= 64;
                v90 = *(void **)(v89 + 24);
                if ( v90 == (void *)(v89 + 40) )
                  break;
                v110 = v89;
                v104 = v34;
                operator delete(v90);
                v89 = v110;
                v34 = v104;
                if ( v88 == v110 )
                  goto LABEL_88;
              }
            }
LABEL_88:
            *((_DWORD *)v34 + 134) = 0;
          }
          else
          {
            v34 = (unsigned __int8 *)operator new(0x3A0u);
            *v34 = 0;
            *((_QWORD *)v34 + 12) = v34 + 112;
            *((_QWORD *)v34 + 16) = v34 + 144;
            *((_QWORD *)v34 + 20) = v34 + 176;
            *((_QWORD *)v34 + 24) = v34 + 208;
            *((_QWORD *)v34 + 28) = v34 + 240;
            *((_QWORD *)v34 + 32) = v34 + 272;
            *((_QWORD *)v34 + 36) = v34 + 304;
            *((_QWORD *)v34 + 40) = v34 + 336;
            *((_QWORD *)v34 + 44) = v34 + 368;
            *((_QWORD *)v34 + 48) = v34 + 400;
            *((_QWORD *)v34 + 52) = v34 + 432;
            *((_QWORD *)v34 + 13) = 0;
            v34[112] = 0;
            *((_QWORD *)v34 + 17) = 0;
            v34[144] = 0;
            *((_QWORD *)v34 + 21) = 0;
            v34[176] = 0;
            *((_QWORD *)v34 + 25) = 0;
            v34[208] = 0;
            *((_QWORD *)v34 + 29) = 0;
            v34[240] = 0;
            *((_QWORD *)v34 + 33) = 0;
            v34[272] = 0;
            *((_QWORD *)v34 + 37) = 0;
            v34[304] = 0;
            *((_QWORD *)v34 + 41) = 0;
            v34[336] = 0;
            *((_QWORD *)v34 + 45) = 0;
            v34[368] = 0;
            *((_QWORD *)v34 + 49) = 0;
            v34[400] = 0;
            *((_QWORD *)v34 + 53) = 0x800000000LL;
            *((_QWORD *)v34 + 66) = v34 + 544;
            *((_QWORD *)v34 + 67) = 0x600000000LL;
          }
          v124 = v34;
        }
        v34[*v34 + 1] = 2;
        v35 = v124;
        v36 = *v124;
        *v124 = v36 + 1;
        *(_QWORD *)&v35[8 * v36 + 16] = a2;
        goto LABEL_8;
      }
      goto LABEL_71;
    }
LABEL_14:
    v25 = 2;
  }
LABEL_15:
  if ( !BYTE3(v140) )
  {
LABEL_25:
    if ( !BYTE4(v140) || (_DWORD)v129 != 5 )
      goto LABEL_19;
LABEL_27:
    sub_1A445B0((__int64)v135, (__int64)&v129, v23, v24, v26);
    goto LABEL_19;
  }
  if ( (_DWORD)v129 == 5 )
  {
    if ( !BYTE4(v140) )
      goto LABEL_19;
    goto LABEL_27;
  }
  if ( v133[1] && (*(_BYTE *)(v135[29] + 46LL) & 0x20) != 0 )
  {
    sub_1663B80(v135, (__int64)&v129);
    goto LABEL_25;
  }
LABEL_19:
  if ( v133[0] )
    sub_1A39780((char *)v133[0]);
  if ( ptr != dest )
    free(ptr);
  return v25;
}
