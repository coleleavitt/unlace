_QWORD *__fastcall sub_A340D0(__int64 a1, __int64 a2)
{
  __m128 *v2; // rbp
  void *v3; // rax
  int v4; // edi
  unsigned int *v5; // r14
  unsigned int v6; // r12d
  unsigned int v7; // eax
  char *v8; // rbx
  char *i; // rax
  char *v10; // rbx
  int v11; // eax
  __int16 v12; // si
  char *v13; // rbx
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int16 v17; // si
  int v18; // ecx
  __int16 v19; // ax
  __int16 v20; // cx
  __int64 v21; // rdi
  int v22; // ecx
  __int16 v23; // r12
  int v24; // r15d
  char v25; // r12
  __int64 v26; // rdx
  __int64 v27; // r13
  int v28; // eax
  __int64 v29; // r12
  __int64 v30; // r15
  unsigned __int64 v31; // rax
  const __m128i *v32; // r12
  const __m128i *v33; // rdi
  __int64 v34; // r12
  __int64 j; // r15
  char v36; // al
  __int64 v37; // rsi
  _BYTE *v38; // rdx
  unsigned __int8 v39; // al
  char v40; // al
  int v41; // eax
  __int64 v42; // rax
  int v43; // ebx
  unsigned __int64 v44; // r12
  unsigned int v45; // r12d
  __int64 v46; // rax
  unsigned __int64 *v47; // r12
  __int64 v48; // rsi
  __m128 *v49; // rdx
  unsigned int v50; // ecx
  __int64 v51; // rbx
  bool v52; // cf
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rbx
  unsigned __int64 v56; // r14
  _QWORD *v57; // rbp
  _QWORD *v58; // r15
  _QWORD *v59; // rdi
  _QWORD *v60; // rdi
  _QWORD *v61; // rdi
  __m128 *v62; // rbx
  unsigned __int64 v63; // r12
  unsigned __int64 v64; // r14
  _QWORD *v65; // rbp
  _QWORD *v66; // r15
  _QWORD *v67; // rdi
  _QWORD *v68; // rdi
  _QWORD *v69; // rdi
  __int64 v70; // r15
  __int64 v71; // rbx
  int v72; // eax
  void **v73; // rbx
  __int64 v75; // rbx
  __int64 v76; // rax
  unsigned __int64 v77; // r15
  __int64 v78; // rax
  _BYTE *v79; // rax
  _QWORD *v80; // rbp
  unsigned __int64 v81; // rax
  __int64 v82; // rcx
  __int64 *v83; // rdi
  char *v84; // rax
  __int8 v85; // r13
  int v86; // r12d
  unsigned int v87; // r9d
  int v88; // ebx
  char *v89; // rax
  int v90; // r9d
  char *v91; // rbp
  void *v92; // rdi
  char *v93; // rsi
  char *v94; // r8
  __int64 v95; // r10
  __int64 v96; // rdx
  __int64 v97; // rcx
  char *v98; // rax
  char *v99; // rax
  void *v100; // rdi
  char *v101; // rsi
  char *v102; // r9
  __int64 v103; // rdx
  __int64 v104; // rcx
  char *v105; // rax
  __m128 *v106; // [rsp+0h] [rbp-1178h] BYREF
  __int64 *v107; // [rsp+8h] [rbp-1170h]
  __int64 *v108; // [rsp+10h] [rbp-1168h]
  int v109; // [rsp+1Ch] [rbp-115Ch]
  __int64 v110; // [rsp+20h] [rbp-1158h]
  __int64 v111; // [rsp+28h] [rbp-1150h]
  void **v112; // [rsp+30h] [rbp-1148h]
  __int64 v113; // [rsp+38h] [rbp-1140h]
  __int16 v114; // [rsp+42h] [rbp-1136h] BYREF
  __int8 v115[4]; // [rsp+44h] [rbp-1134h] BYREF
  int v116[2]; // [rsp+48h] [rbp-1130h] BYREF
  __m128 *v117; // [rsp+50h] [rbp-1128h] BYREF
  int v118; // [rsp+58h] [rbp-1120h]
  unsigned __int64 v119; // [rsp+60h] [rbp-1118h] BYREF
  int v120; // [rsp+68h] [rbp-1110h]
  __m128 v121; // [rsp+70h] [rbp-1108h] BYREF
  __int128 v122; // [rsp+80h] [rbp-10F8h]
  _BYTE *v123; // [rsp+90h] [rbp-10E8h]
  char v124; // [rsp+98h] [rbp-10E0h]
  int v125; // [rsp+9Ch] [rbp-10DCh]
  void **v126; // [rsp+A0h] [rbp-10D8h]
  __int64 v127; // [rsp+B0h] [rbp-10C8h] BYREF
  __int128 v128; // [rsp+B8h] [rbp-10C0h]
  __m128 *v129; // [rsp+C8h] [rbp-10B0h]
  __int64 v130; // [rsp+D0h] [rbp-10A8h]
  char v131; // [rsp+D8h] [rbp-10A0h] BYREF
  __m128 *v132; // [rsp+F8h] [rbp-1080h]
  __int64 v133; // [rsp+100h] [rbp-1078h]
  __int128 v134; // [rsp+108h] [rbp-1070h] BYREF
  void *ptr; // [rsp+118h] [rbp-1060h]
  void *v136; // [rsp+120h] [rbp-1058h] BYREF
  __m128i si128; // [rsp+128h] [rbp-1050h]
  char v138; // [rsp+138h] [rbp-1040h] BYREF

  v111 = a2;
  v112 = &v136;
  v2 = &v121;
  v136 = &v138;
  v129 = (__m128 *)&v131;
  v113 = a1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D90);
  v108 = &v127;
  v130 = 0x400000000LL;
  v128 = 0;
  v132 = (__m128 *)&v134;
  v133 = 0;
  v134 = 0;
  v127 = 64;
  v3 = sub_A1F5F0();
  v4 = *(_DWORD *)(a1 + 672);
  ptr = v3;
  if ( v4 )
  {
    v75 = v113;
    v106 = *(__m128 **)(v113 + 664);
    v106 = (__m128 *)((char *)v106 + 168 * *(unsigned int *)(v113 + 680));
    v121 = _mm_loadh_ps((const double *)&v106);
    sub_A21520((__int64 *)&v121);
    v76 = *(unsigned int *)(v75 + 680);
    v77 = v121.m128_u64[0];
    v106 = (__m128 *)v121.m128_u64[0];
    v78 = *(_QWORD *)(v75 + 664) + 168 * v76;
    v121 = _mm_loadh_ps((const double *)&v121.m128_u64[1]);
    v107 = (__int64 *)v78;
    if ( v106 != (__m128 *)v78 )
    {
      v106 = &v121;
      do
      {
        v85 = *(_BYTE *)v77;
        v86 = *(_DWORD *)(v77 + 4);
        v87 = 2 * v127;
        v88 = *(_DWORD *)(v77 + 8);
        ++HIDWORD(v127);
        if ( 4 * HIDWORD(v127) >= (unsigned int)(3 * v127) )
        {
          v109 = 2 * v127;
          v110 = v87;
          v89 = (char *)sub_A1F380(v87);
          v90 = v109;
          v91 = v89;
          v92 = ptr;
          if ( (_DWORD)v127 )
          {
            v93 = (char *)ptr;
            v94 = (char *)ptr + 16 * (unsigned int)v127;
            v95 = v110 - 1;
            do
            {
              v96 = *((_QWORD *)v93 + 1);
              if ( v96 )
              {
                do
                {
                  v97 = *(_QWORD *)(v96 + 168);
                  v98 = &v91[16 * (v95 & *(_QWORD *)(v96 + 176))];
                  *(_QWORD *)(v96 + 168) = *((_QWORD *)v98 + 1);
                  *((_QWORD *)v98 + 1) = v96;
                  v96 = v97;
                  ++*((_DWORD *)v98 + 1);
                }
                while ( v97 );
              }
              v93 += 16;
            }
            while ( v94 != v93 );
          }
          v109 = v90;
          free(v92);
          ptr = v91;
          LODWORD(v127) = v109;
        }
        v79 = (_BYTE *)sub_A270B0(v108 + 1, 184, 3u);
        *v79 = v85;
        v80 = v79;
        v79 += 32;
        *((_DWORD *)v79 - 7) = v86;
        *((_DWORD *)v79 - 6) = v88;
        v80[2] = v79;
        v80[3] = 0x100000000LL;
        if ( *(_DWORD *)(v77 + 24) )
          sub_A2A510((__int64)(v80 + 2), v77 + 16);
        v115[0] = v85;
        v80[21] = 0;
        v116[0] = v86;
        v116[1] = v88;
        v81 = sub_A220C0(v88, v116, v115);
        v82 = (unsigned int)v127;
        v83 = (__int64 *)v106;
        v80[22] = v81;
        v84 = (char *)ptr + 16 * (v81 & (v82 - 1));
        v80[21] = *((_QWORD *)v84 + 1);
        ++*((_DWORD *)v84 + 1);
        *((_QWORD *)v84 + 1) = v80;
        v121.m128_u64[0] += 168LL;
        sub_A21520(v83);
        v77 = v121.m128_u64[0];
      }
      while ( (__int64 *)v121.m128_u64[0] != v107 );
      v2 = v106;
    }
  }
  v5 = (unsigned int *)&v119;
  v122 = 0;
  v6 = 1;
  v121.m128_i32[2] = 2;
  v121.m128_u64[0] = (unsigned __int64)&off_2BEBEE0;
  v124 = 0;
  v126 = v112;
  v125 = 1;
  v123 = nullptr;
  sub_A1F700(v2);
  LODWORD(v119) = 0;
  sub_227BF10(v2, &v119, 4);
  v117 = v2;
  v118 = 1;
  if ( HIDWORD(v127) > 2 )
  {
    v6 = 1;
    if ( (unsigned int)(4 * HIDWORD(v127)) > 2 )
    {
      _BitScanReverse(&v7, 4 * HIDWORD(v127) / 3u);
      v6 = 1 << (32 - (v7 ^ 0x1F));
    }
  }
  if ( (_DWORD)v127 == v6 )
  {
    v8 = (char *)ptr;
  }
  else
  {
    v99 = (char *)sub_A1F380(v6);
    v100 = ptr;
    v8 = v99;
    if ( (_DWORD)v127 )
    {
      v101 = (char *)ptr;
      v102 = (char *)ptr + 16 * (unsigned int)v127;
      do
      {
        v103 = *((_QWORD *)v101 + 1);
        if ( v103 )
        {
          do
          {
            v104 = *(_QWORD *)(v103 + 168);
            v105 = &v8[16 * ((v6 - 1LL) & *(_QWORD *)(v103 + 176))];
            *(_QWORD *)(v103 + 168) = *((_QWORD *)v105 + 1);
            *((_QWORD *)v105 + 1) = v103;
            v103 = v104;
            ++*((_DWORD *)v105 + 1);
          }
          while ( v104 );
        }
        v101 += 16;
      }
      while ( v102 != v101 );
    }
    free(v100);
    LODWORD(v127) = v6;
    ptr = v8;
  }
  LODWORD(v106) = 0;
  for ( i = v8; ; i = (char *)ptr )
  {
    v10 = &i[16 * (unsigned int)v106];
    if ( *((_QWORD *)v10 + 1) )
    {
      v11 = sub_227AEE0(v2);
      v12 = *((_WORD *)v10 + 2);
      *(_DWORD *)v10 = v11 + (_DWORD)v123 - v122;
      sub_A20860((__int64 *)&v117, v12);
      v13 = *((char **)v10 + 1);
      if ( v13 )
      {
        v107 = (__int64 *)&v114;
        do
        {
          v14 = *((_QWORD *)v13 + 22);
          if ( v118 != 1 )
            v14 = _byteswap_uint64(v14);
          v119 = v14;
          sub_227BF10(v117, &v119, 8);
          v15 = *((_QWORD *)v13 + 2);
          v16 = v15 + 136LL * *((unsigned int *)v13 + 6);
          if ( v15 == v16 )
          {
            v23 = 2;
          }
          else
          {
            v17 = 2;
            do
            {
              v18 = ((char)HIBYTE(*(_QWORD *)v15) >> 31) & 4;
              v19 = v18 + 5;
              v20 = v18 + 9;
              if ( (BYTE3(*(_QWORD *)(v15 + 8)) & 0x80u) != 0 )
                v19 = v20;
              v21 = *(_QWORD *)(v15 + 104);
              if ( (HIBYTE(*(_QWORD *)(v15 + 8)) & 0x80u) != 0 )
                v19 += 4;
              v22 = *(_DWORD *)(v15 + 24) + *(_QWORD *)(v15 + 64);
              v15 += 136;
              v17 += v22 + v21 + 10 + v19;
            }
            while ( v16 != v15 );
            v23 = v17;
          }
          v114 = 9;
          v119 = (unsigned __int64)v2;
          v120 = 1;
          sub_227BF10(v2, v107, 2);
          sub_A20860((__int64 *)&v119, v23);
          v24 = *((_DWORD *)v13 + 1);
          v25 = *v13;
          LODWORD(v119) = *((_DWORD *)v13 + 2);
          sub_227BF10(v2, &v119, 4);
          LODWORD(v119) = v24;
          sub_227BF10(v2, &v119, 4);
          LOBYTE(v119) = v25;
          sub_227BF10(v2, &v119, 1);
          v26 = *((unsigned int *)v13 + 6);
          v27 = *((_QWORD *)v13 + 2);
          v28 = *((_DWORD *)v13 + 6);
          v29 = 136 * v26;
          v30 = v27 + 136 * v26;
          if ( v27 != v30 )
          {
            _BitScanReverse64(&v31, 0xF0F0F0F0F0F0F0F1LL * (v29 >> 3));
            sub_A33BF0(*((_QWORD *)v13 + 2), (__m128i *)(v27 + 136 * v26), 2LL * (int)(63 - (v31 ^ 0x3F)));
            if ( (unsigned __int64)v29 <= 0x880 )
            {
              sub_A2B2F0(v27, v30);
            }
            else
            {
              v32 = (const __m128i *)(v27 + 2176);
              sub_A2B2F0(v27, v27 + 2176);
              if ( v30 != v27 + 2176 )
              {
                do
                {
                  v33 = v32;
                  v32 = (const __m128i *)((char *)v32 + 136);
                  sub_A2ACD0(v33);
                }
                while ( (const __m128i *)v30 != v32 );
              }
            }
            v28 = *((_DWORD *)v13 + 6);
          }
          LOWORD(v119) = v28;
          sub_227BF10(v2, &v119, 2);
          v34 = *((_QWORD *)v13 + 2);
          for ( j = v34 + 136LL * *((unsigned int *)v13 + 6); j != v34; v34 += 136 )
          {
            sub_A1F510((__int64)v2, v34);
            sub_A20890((__int64)v2, v34 + 16);
            LOWORD(v119) = 0;
            v39 = *(_BYTE *)(v34 + 88);
            if ( (v39 & 1) != 0 )
            {
              LOBYTE(v119) = 1;
              BYTE1(v119) = (v39 >> 1) & 3;
            }
            sub_227BF10(v2, &v119, 2);
            v114 = *(_QWORD *)(v34 + 104);
            sub_227BF10(v2, v107, 2);
            sub_227BF10(v2, *(_QWORD *)(v34 + 96), *(_QWORD *)(v34 + 104));
            v40 = *(_BYTE *)(v34 + 128);
            if ( (v40 & 1) != 0 )
            {
              v36 = (2 * ((v40 & 2) != 0)) | 1;
              v37 = (unsigned int)v36;
            }
            else
            {
              v36 = 0;
              v37 = 0;
            }
            v38 = v123;
            if ( (unsigned __int64)v123 >= *((_QWORD *)&v122 + 1) )
            {
              sub_227BA10(v2, v37);
            }
            else
            {
              ++v123;
              *v38 = v36;
            }
          }
          v13 = *((char **)v13 + 21);
        }
        while ( v13 );
      }
    }
    LODWORD(v106) = (_DWORD)v106 + 1;
    if ( (unsigned int)v127 <= (unsigned int)v106 )
      break;
  }
  v41 = sub_227AEE0(v2);
  v42 = (unsigned int)(v41 + (_DWORD)v123 - v122);
  v43 = (v42 + 3) & 0xFFFFFFFC;
  v44 = ((v42 + 3) & 0xFFFFFFFFFFFFFFFCLL) - v42 - 1;
  if ( ((v42 + 3) & 0xFFFFFFFFFFFFFFFCLL) != v42 )
  {
    do
    {
      --v44;
      LOBYTE(v119) = 0;
      sub_227BF10(v117, &v119, 1);
    }
    while ( v44 != -1 );
  }
  sub_A20800((__int64)v117, v127, v118);
  sub_A20800((__int64)v117, HIDWORD(v127), v118);
  if ( (_DWORD)v127 )
  {
    v45 = 0;
    do
    {
      v46 = v45++;
      sub_A20800((__int64)v117, *((_DWORD *)ptr + 4 * v46), v118);
    }
    while ( (unsigned int)v127 > v45 );
  }
  LODWORD(v119) = v43;
  v121.m128_u64[0] = (unsigned __int64)&unk_2C76288;
  sub_227B7A0(v2);
  free(ptr);
  v47 = (unsigned __int64 *)v129;
  v48 = (unsigned int)v130;
  v106 = (__m128 *)((char *)v129 + 8 * (unsigned int)v130);
  if ( v129 != v106 )
  {
    v107 = (__int64 *)&v119;
    v49 = v129;
    while ( 1 )
    {
      v50 = (unsigned int)(((char *)v47 - (char *)v49) >> 3) >> 7;
      v51 = 4096LL << v50;
      v52 = v50 < 0x1E;
      v53 = *v47;
      if ( !v52 )
        v51 = 0x40000000000LL;
      v54 = (v53 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      v55 = v53 + v51;
      if ( v53 == v49->m128_u64[v48 - 1] )
        v55 = v128;
      v56 = v54 + 184;
      if ( v55 < v54 + 184 )
      {
LABEL_64:
        if ( v106 == (__m128 *)++v47 )
          goto LABEL_70;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v57 = *(_QWORD **)(v56 - 168);
            v58 = &v57[17 * *(unsigned int *)(v56 - 160)];
            if ( v57 != v58 )
            {
              do
              {
                while ( 1 )
                {
                  v58 -= 17;
                  v59 = (_QWORD *)v58[12];
                  if ( v59 != v58 + 14 )
                    operator delete(v59);
                  v60 = (_QWORD *)v58[7];
                  if ( v60 != v58 + 9 )
                    operator delete(v60);
                  v61 = (_QWORD *)v58[2];
                  if ( v61 == v58 + 4 )
                    break;
                  operator delete(v61);
                  if ( v57 == v58 )
                    goto LABEL_61;
                }
              }
              while ( v57 != v58 );
LABEL_61:
              v58 = *(_QWORD **)(v56 - 184 + 16);
            }
            if ( v58 == (_QWORD *)(v56 - 152) )
              break;
            v56 += 184LL;
            free(v58);
            if ( v55 < v56 )
              goto LABEL_64;
          }
          v56 += 184LL;
        }
        while ( v55 >= v56 );
        if ( v106 == (__m128 *)++v47 )
        {
LABEL_70:
          v5 = (unsigned int *)v107;
          break;
        }
      }
      v49 = v129;
      v48 = (unsigned int)v130;
    }
  }
  v62 = v132;
  v106 = &v132[(unsigned int)v133];
  if ( v132 != v106 )
  {
    v107 = (__int64 *)v5;
    do
    {
      while ( 1 )
      {
        v63 = v62->m128_u64[0] + v62->m128_u64[1];
        v64 = ((v62->m128_u64[0] + 7) & 0xFFFFFFFFFFFFFFF8LL) + 184;
        if ( v63 >= v64 )
          break;
LABEL_84:
        if ( v106 == ++v62 )
          goto LABEL_85;
      }
      do
      {
        while ( 1 )
        {
          v65 = *(_QWORD **)(v64 - 168);
          v66 = &v65[17 * *(unsigned int *)(v64 - 160)];
          if ( v65 != v66 )
          {
            do
            {
              while ( 1 )
              {
                v66 -= 17;
                v67 = (_QWORD *)v66[12];
                if ( v67 != v66 + 14 )
                  operator delete(v67);
                v68 = (_QWORD *)v66[7];
                if ( v68 != v66 + 9 )
                  operator delete(v68);
                v69 = (_QWORD *)v66[2];
                if ( v69 == v66 + 4 )
                  break;
                operator delete(v69);
                if ( v65 == v66 )
                  goto LABEL_81;
              }
            }
            while ( v65 != v66 );
LABEL_81:
            v66 = *(_QWORD **)(v64 - 184 + 16);
          }
          if ( v66 == (_QWORD *)(v64 - 152) )
            break;
          v64 += 184LL;
          free(v66);
          if ( v63 < v64 )
            goto LABEL_84;
        }
        v64 += 184LL;
      }
      while ( v63 >= v64 );
      ++v62;
    }
    while ( v106 != v62 );
LABEL_85:
    v5 = (unsigned int *)v107;
  }
  v70 = (__int64)v108;
  v71 = (__int64)(v108 + 1);
  sub_A24B10((__m128 *)(v108 + 1));
  sub_9B7090(v71);
  v127 = v111;
  v72 = sub_A246B0(v111);
  v73 = v112;
  LODWORD(v128) = v72;
  sub_A26A30(v70, v113 + 40, v5, (__int64)v112);
  if ( v136 != v73 + 3 )
    free(v136);
  return sub_A25550(v111);
}
