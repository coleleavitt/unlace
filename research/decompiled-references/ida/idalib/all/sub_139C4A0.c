__int64 *__fastcall sub_139C4A0(__int64 *a1, _BYTE *a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v8; // r12
  _QWORD *v9; // rax
  _BYTE *v10; // rsi
  unsigned __int64 v11; // rdx
  __int64 v12; // rbx
  _QWORD *v13; // rdi
  _QWORD *v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  _BYTE *v19; // rsi
  __int64 v20; // rdx
  _BYTE *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r11
  __int64 v25; // rdx
  char *v26; // rax
  __m128i v27; // xmm0
  __int64 v28; // rbx
  _BYTE *v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r8
  __int64 v33; // r11
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  __m128i v36; // xmm0
  _QWORD *v37; // rbx
  __int64 v38; // rbp
  __int64 v39; // rax
  _QWORD *v40; // rdx
  _QWORD *v41; // rdi
  __int64 v42; // r8
  __int64 v43; // r8
  unsigned __int64 v44; // r11
  __int64 v45; // rdx
  char *v46; // rax
  __m128i v47; // xmm0
  unsigned __int64 v48; // rbx
  __int64 v49; // r11
  _BYTE *v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // r8
  unsigned __int64 v53; // r11
  __int64 v54; // rdx
  unsigned __int64 v55; // rax
  __m128i v56; // xmm0
  __int64 v57; // rbx
  unsigned __int64 v58; // rbp
  _QWORD *v59; // r11
  __int64 v60; // r8
  char *v61; // r8
  char *v62; // r9
  __int64 v63; // rdx
  unsigned __int64 v64; // rax
  __m128i v65; // xmm0
  unsigned __int64 v66; // r15
  char *v67; // rbx
  char *v68; // rbp
  _QWORD *v69; // r9
  char *v70; // r8
  __m128i si128; // xmm0
  void *v72; // rcx
  __m128i v73; // xmm1
  __m128i v74; // xmm0
  __m128 v75; // xmm0
  int v76; // ecx
  int v77; // r14d
  unsigned int v78; // ecx
  int v79; // r14d
  int v80; // r13d
  unsigned int v81; // ecx
  int v82; // r14d
  int v83; // r13d
  unsigned int v84; // ecx
  int v85; // r13d
  int v86; // eax
  unsigned int v87; // ecx
  int v88; // r13d
  __int64 v89; // rbp
  unsigned int *v90; // rax
  __int64 *result; // rax
  _QWORD *v92; // r13
  __int64 v93; // rax
  int v94; // eax
  unsigned int v95; // edx
  _QWORD *v96; // r14
  __int64 v97; // rax
  int v98; // eax
  unsigned int v99; // edx
  _QWORD *v100; // r14
  __int64 v101; // rax
  int v102; // eax
  unsigned int v103; // edx
  _QWORD *v104; // r13
  __int64 v105; // rax
  int v106; // eax
  unsigned int v107; // edx
  __int64 v108; // rax
  void **v109; // r13
  _QWORD *v110; // rax
  void **v111; // r14
  void **v112; // rbp
  void **v113; // rdi
  void **v114; // rdi
  void **v115; // rbp
  void **v116; // r14
  __int64 v117; // rdx
  __m128i v118; // [rsp+8h] [rbp-D0h] BYREF
  __int64 *v119; // [rsp+18h] [rbp-C0h]
  __int64 v120; // [rsp+20h] [rbp-B8h]
  char *v121; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v122; // [rsp+30h] [rbp-A8h]
  __int64 v123; // [rsp+38h] [rbp-A0h]
  int v124; // [rsp+4Ch] [rbp-8Ch] BYREF
  void *v125[2]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v126; // [rsp+60h] [rbp-78h]
  void *v127; // [rsp+70h] [rbp-68h]
  __int64 v128; // [rsp+80h] [rbp-58h] BYREF
  __int16 v129; // [rsp+90h] [rbp-48h]

  v119 = a1;
  v123 = a3;
  v8 = operator new(0x30u);
  *(_QWORD *)v8 = &off_2C441D0;
  *(_QWORD *)(v8 + 8) = 0;
  *(_QWORD *)(v8 + 16) = 0;
  *(_BYTE *)(v8 + 24) = 1;
  *(_BYTE *)(v8 + 25) = a5;
  *(_BYTE *)(v8 + 26) = 0;
  *(_QWORD *)(v8 + 32) = 0;
  v9 = (_QWORD *)operator new(0x980u);
  v10 = *(_BYTE **)(a4 + 48);
  v11 = *(_QWORD *)a4 & 0xFFFFFFFF007FFFFFLL;
  v12 = (__int64)v9;
  v9[1] = 0x100000001LL;
  v13 = v9 + 8;
  *v9 = off_2BB25D8;
  v14 = v9 + 2;
  v15 = v11 | v9[2] & 0xFF800000LL;
  v16 = *(_QWORD *)(a4 + 24) & 0x1FFFFFFFFLL;
  *v14 = v15;
  *(_QWORD *)(v12 + 24) = *(_QWORD *)(a4 + 8);
  *(_QWORD *)(v12 + 32) = *(_QWORD *)(a4 + 16);
  v17 = v16 | *(_QWORD *)(v12 + 40) & 0xFFFFFFFE00000000LL;
  v18 = *(_QWORD *)(a4 + 56);
  *(_QWORD *)(v12 + 40) = v17;
  *(_QWORD *)(v12 + 48) = *(_QWORD *)(a4 + 32);
  *(_BYTE *)(v12 + 56) = *(_BYTE *)(a4 + 40);
  *(_QWORD *)(v12 + 64) = v12 + 80;
  sub_1396CD0(v13, v10, (__int64)&v10[v18]);
  v19 = *(_BYTE **)(a4 + 80);
  v20 = *(_QWORD *)(a4 + 88);
  *(_QWORD *)(v12 + 96) = v12 + 112;
  sub_1396CD0((_QWORD *)(v12 + 96), v19, (__int64)&v19[v20]);
  v21 = *(_BYTE **)(a4 + 112);
  v22 = *(_QWORD *)(a4 + 120);
  *(_QWORD *)(v12 + 128) = v12 + 144;
  sub_1396CD0((_QWORD *)(v12 + 128), v21, (__int64)&v21[v22]);
  v23 = *(_QWORD *)(a4 + 152);
  v24 = *(_QWORD *)(a4 + 144);
  *(_OWORD *)(v12 + 160) = 0;
  *(_QWORD *)(v12 + 176) = 0;
  v25 = v23 - v24;
  if ( (v23 - v24) >> 5 )
  {
    if ( (unsigned __int64)((v23 - v24) >> 5) > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_102;
    v118.m128i_i64[0] = v23 - v24;
    v26 = (char *)operator new(v23 - v24);
    v23 = *(_QWORD *)(a4 + 152);
    v25 = v118.m128i_i64[0];
    v24 = *(_QWORD *)(a4 + 144);
  }
  else
  {
    v26 = nullptr;
  }
  v118.m128i_i64[0] = (__int64)v26;
  v27 = _mm_loadl_epi64(&v118);
  *(_QWORD *)(v12 + 176) = &v26[v25];
  *(__m128i *)(v12 + 160) = _mm_unpacklo_epi64(v27, v27);
  if ( v23 != v24 )
  {
    v121 = v26;
    v122 = v24;
    v120 = v12;
    v28 = v23;
    do
    {
      v118.m128i_i64[1] = v24;
      *(_QWORD *)v26 = v26 + 16;
      v29 = *(_BYTE **)v24;
      v30 = *(_QWORD *)(v24 + 8);
      v118.m128i_i64[0] = (__int64)v26;
      sub_1396CD0(v26, v29, (__int64)&v29[v30]);
      v24 = v118.m128i_i64[1] + 32;
      v26 = (char *)(v118.m128i_i64[0] + 32);
    }
    while ( v28 != v118.m128i_i64[1] + 32 );
    v31 = v28 - 32;
    v12 = v120;
    v26 = &v121[((v31 - v122) & 0xFFFFFFFFFFFFFFE0LL) + 32];
  }
  v32 = *(_QWORD *)(a4 + 176);
  v33 = *(_QWORD *)(a4 + 168);
  *(_QWORD *)(v12 + 168) = v26;
  *(_OWORD *)(v12 + 184) = 0;
  *(_QWORD *)(v12 + 200) = 0;
  v34 = v32 - v33;
  if ( (v32 - v33) >> 5 )
  {
    if ( (unsigned __int64)((v32 - v33) >> 5) > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_102;
    v118.m128i_i64[0] = v32 - v33;
    v35 = operator new(v32 - v33);
    v32 = *(_QWORD *)(a4 + 176);
    v34 = v118.m128i_i64[0];
    v33 = *(_QWORD *)(a4 + 168);
  }
  else
  {
    v35 = 0;
  }
  v118.m128i_i64[0] = v35;
  v36 = _mm_loadl_epi64(&v118);
  *(_QWORD *)(v12 + 200) = v35 + v34;
  *(__m128i *)(v12 + 184) = _mm_unpacklo_epi64(v36, v36);
  if ( v32 != v33 )
  {
    v121 = (char *)v33;
    v118.m128i_i64[1] = v12;
    v37 = (_QWORD *)v35;
    v120 = (__int64)v14;
    v38 = v32;
    v122 = v35;
    v39 = v33;
    do
    {
      v40 = v37 + 2;
      v41 = v37;
      v118.m128i_i64[0] = v39;
      v37 += 4;
      *(v37 - 4) = v40;
      sub_1396CD0(v41, *(_BYTE **)v39, *(_QWORD *)v39 + *(_QWORD *)(v39 + 8));
      v39 = v118.m128i_i64[0] + 32;
    }
    while ( v38 != v118.m128i_i64[0] + 32 );
    v42 = v38 - 32;
    v12 = v118.m128i_i64[1];
    v14 = (_QWORD *)v120;
    v35 = v122 + ((v42 - (_QWORD)v121) & 0xFFFFFFFFFFFFFFE0LL) + 32;
  }
  v43 = *(_QWORD *)(a4 + 200);
  v44 = *(_QWORD *)(a4 + 192);
  *(_QWORD *)(v12 + 192) = v35;
  *(_OWORD *)(v12 + 208) = 0;
  *(_QWORD *)(v12 + 224) = 0;
  v45 = v43 - v44;
  if ( (__int64)(v43 - v44) >> 5 )
  {
    if ( (unsigned __int64)((__int64)(v43 - v44) >> 5) > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_102;
    v118.m128i_i64[0] = v43 - v44;
    v46 = (char *)operator new(v43 - v44);
    v43 = *(_QWORD *)(a4 + 200);
    v45 = v118.m128i_i64[0];
    v44 = *(_QWORD *)(a4 + 192);
  }
  else
  {
    v46 = nullptr;
  }
  v118.m128i_i64[0] = (__int64)v46;
  v47 = _mm_loadl_epi64(&v118);
  *(_QWORD *)(v12 + 224) = &v46[v45];
  *(__m128i *)(v12 + 208) = _mm_unpacklo_epi64(v47, v47);
  if ( v43 != v44 )
  {
    v121 = v46;
    v120 = v12;
    v48 = v44;
    v122 = v44;
    v49 = v43;
    do
    {
      v118.m128i_i64[1] = v49;
      v48 += 32LL;
      *(_QWORD *)v46 = v46 + 16;
      v50 = *(_BYTE **)(v48 - 32);
      v51 = *(_QWORD *)(v48 - 24);
      v118.m128i_i64[0] = (__int64)v46;
      sub_1396CD0(v46, v50, (__int64)&v50[v51]);
      v49 = v118.m128i_i64[1];
      v46 = (char *)(v118.m128i_i64[0] + 32);
    }
    while ( v118.m128i_i64[1] != v48 );
    v12 = v120;
    v46 = &v121[((v118.m128i_i64[1] - 32 - v122) & 0xFFFFFFFFFFFFFFE0LL) + 32];
  }
  v52 = *(_QWORD *)(a4 + 224);
  v53 = *(_QWORD *)(a4 + 216);
  *(_QWORD *)(v12 + 216) = v46;
  *(_OWORD *)(v12 + 232) = 0;
  *(_QWORD *)(v12 + 248) = 0;
  v54 = v52 - v53;
  if ( (__int64)(v52 - v53) >> 5 )
  {
    if ( (unsigned __int64)((__int64)(v52 - v53) >> 5) > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_102;
    v118.m128i_i64[0] = v52 - v53;
    v55 = operator new(v52 - v53);
    v52 = *(_QWORD *)(a4 + 224);
    v54 = v118.m128i_i64[0];
    v53 = *(_QWORD *)(a4 + 216);
  }
  else
  {
    v55 = 0;
  }
  v118.m128i_i64[0] = v55;
  v56 = _mm_loadl_epi64(&v118);
  *(_QWORD *)(v12 + 248) = v55 + v54;
  *(__m128i *)(v12 + 232) = _mm_unpacklo_epi64(v56, v56);
  if ( v52 != v53 )
  {
    v121 = (char *)v55;
    v118.m128i_i64[1] = v12;
    v57 = v52;
    v120 = (__int64)v14;
    v58 = v53;
    v122 = v53;
    v59 = (_QWORD *)v55;
    do
    {
      v118.m128i_i64[0] = (__int64)v59;
      v58 += 32LL;
      *v59 = v59 + 2;
      sub_1396CD0(v59, *(_BYTE **)(v58 - 32), *(_QWORD *)(v58 - 32) + *(_QWORD *)(v58 - 24));
      v59 = (_QWORD *)(v118.m128i_i64[0] + 32);
    }
    while ( v57 != v58 );
    v60 = v57 - 32;
    v14 = (_QWORD *)v120;
    v12 = v118.m128i_i64[1];
    v55 = (unsigned __int64)&v121[((v60 - v122) & 0xFFFFFFFFFFFFFFE0LL) + 32];
  }
  v61 = *(char **)(a4 + 248);
  v62 = *(char **)(a4 + 240);
  *(_QWORD *)(v12 + 240) = v55;
  *(_OWORD *)(v12 + 256) = 0;
  *(_QWORD *)(v12 + 272) = 0;
  v63 = v61 - v62;
  if ( (v61 - v62) >> 5 )
  {
    if ( (unsigned __int64)((v61 - v62) >> 5) <= 0x7FFFFFFFFFFFFFFLL )
    {
      v118.m128i_i64[0] = v61 - v62;
      v64 = operator new(v61 - v62);
      v61 = *(char **)(a4 + 248);
      v63 = v118.m128i_i64[0];
      v62 = *(char **)(a4 + 240);
      goto LABEL_32;
    }
LABEL_102:
    std::__throw_bad_alloc();
  }
  v64 = 0;
LABEL_32:
  v118.m128i_i64[0] = v64;
  v65 = _mm_loadl_epi64(&v118);
  *(_QWORD *)(v12 + 272) = v64 + v63;
  *(__m128i *)(v12 + 256) = _mm_unpacklo_epi64(v65, v65);
  if ( v61 != v62 )
  {
    v118.m128i_i64[1] = v12;
    v66 = v64;
    v67 = v61;
    v120 = (__int64)v14;
    v68 = v62;
    v121 = v62;
    v69 = (_QWORD *)v64;
    do
    {
      v118.m128i_i64[0] = (__int64)v69;
      v68 += 32;
      *v69 = v69 + 2;
      sub_1396CD0(v69, *((_BYTE **)v68 - 4), *((_QWORD *)v68 - 4) + *((_QWORD *)v68 - 3));
      v69 = (_QWORD *)(v118.m128i_i64[0] + 32);
    }
    while ( v67 != v68 );
    v14 = (_QWORD *)v120;
    v70 = v67 - 32;
    v12 = v118.m128i_i64[1];
    v64 = v66 + ((v70 - v121) & 0xFFFFFFFFFFFFFFE0LL) + 32;
  }
  *(_QWORD *)(v12 + 264) = v64;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D30);
  v72 = (void *)(v12 + 1480);
  *(_QWORD *)(v12 + 280) = v12 + 304;
  v73 = _mm_load_si128((const __m128i *)&xmmword_23A8DA0);
  *(_QWORD *)(v12 + 1328) = v12 + 1352;
  *(__m128i *)(v12 + 288) = si128;
  *(_QWORD *)(v12 + 1352) = v12 + 280;
  *(_OWORD *)(v12 + 1336) = 0;
  *(_QWORD *)(v12 + 1360) = 0;
  *(_QWORD *)(v12 + 1368) = 0;
  *(__m128i *)(v12 + 1376) = v73;
  *(_OWORD *)(v12 + 1392) = 0;
  *(_QWORD *)(v12 + 1408) = 0;
  *(_BYTE *)(v12 + 1424) = 0;
  *(_QWORD *)(v12 + 1432) = 0;
  *(_QWORD *)(v12 + 1440) = 0;
  *(_QWORD *)(v12 + 1448) = 0;
  *(_QWORD *)(v12 + 1456) = 0;
  *(_QWORD *)(v12 + 1464) = 0;
  *(_QWORD *)(v12 + 1472) = 0;
  *(_QWORD *)(v12 + 1480) = v12 + 1496;
  if ( a2 )
  {
    v118.m128i_i64[0] = v12 + 1480;
    sub_1396C10((_QWORD *)(v12 + 1480), a2, (__int64)&a2[v123]);
    v72 = (void *)v118.m128i_i64[0];
  }
  else
  {
    *(_QWORD *)(v12 + 1488) = 0;
    *(_BYTE *)(v12 + 1496) = 0;
  }
  v74 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  *(_QWORD *)(v12 + 1536) = v12 + 1552;
  *(__m128i *)(v12 + 2072) = v74;
  v118.m128i_i64[0] = v12;
  *(_QWORD *)(v12 + 1544) = 0x4000000000LL;
  *(_QWORD *)(v12 + 1512) = 0;
  v75 = _mm_loadh_ps((const double *)v118.m128i_i64);
  *(_QWORD *)(v12 + 2064) = v12 + 2088;
  *(_QWORD *)(v12 + 1520) = 0;
  *(_DWORD *)(v12 + 1528) = 0;
  *(_QWORD *)(v12 + 2344) = 0;
  *(_QWORD *)(v12 + 2352) = 0;
  *(_DWORD *)(v12 + 2360) = 0;
  *(_QWORD *)(v12 + 2368) = 0;
  *(_QWORD *)(v12 + 2376) = 0;
  *(_DWORD *)(v12 + 2384) = 0;
  *(_QWORD *)(v12 + 2392) = 0;
  *(_QWORD *)(v12 + 2400) = 0;
  *(_DWORD *)(v12 + 2408) = 0;
  *(_BYTE *)(v12 + 2416) = 0;
  *(_QWORD *)(v12 + 2424) = 0;
  *(__m128 *)(v8 + 32) = v75;
  if ( a5 )
  {
    v125[0] = v72;
    LOWORD(v127) = 260;
    if ( (unsigned int)sub_228BF70(v125, 1) )
    {
      v108 = sub_1396D90(v8, 1);
      sub_FC70B0((__int64)v125, v108, 0, 834);
      if ( (_BYTE)v129 )
      {
        sub_FC7790(v126, (__int64 *)v125, SHIBYTE(v129));
        v126 = 0;
        v129 = 0;
      }
      if ( v127 != &v128 )
        operator delete(v127);
      v109 = (void **)v125[0];
      if ( v125[0] )
      {
        v110 = v125[1];
        if ( v125[1] )
        {
          if ( v125[0] >= v125[1] && v125[0] <= (char *)v125[1] + 14848 )
          {
            v117 = *((unsigned int *)v125[1] + 3744);
            *((_DWORD *)v125[1] + 3744) = v117 + 1;
            v110[v117 + 1856] = v109;
          }
          else
          {
            v111 = *((void ***)v125[0] + 66);
            v112 = &v111[8 * (unsigned __int64)*((unsigned int *)v125[0] + 134)];
            if ( v111 != v112 )
            {
              do
              {
                while ( 1 )
                {
                  v112 -= 8;
                  v113 = (void **)v112[3];
                  if ( v113 == v112 + 5 )
                    break;
                  operator delete(v113);
                  if ( v111 == v112 )
                    goto LABEL_87;
                }
              }
              while ( v111 != v112 );
LABEL_87:
              v112 = (void **)v109[66];
            }
            if ( v112 != v109 + 68 )
              free(v112);
            v114 = (void **)v109[52];
            if ( v114 != v109 + 54 )
              free(v114);
            v115 = v109 + 48;
            v116 = v109 + 8;
            do
            {
              while ( *v115 != v115 + 2 )
              {
                operator delete(*v115);
                v115 -= 4;
                if ( v116 == v115 )
                  goto LABEL_95;
              }
              v115 -= 4;
            }
            while ( v116 != v115 );
LABEL_95:
            operator delete(v109, 0x3A0u);
          }
        }
      }
      *(_BYTE *)(v8 + 25) = 0;
      v14 = *(_QWORD **)(v8 + 32);
    }
    else
    {
      v14 = *(_QWORD **)(v8 + 32);
    }
  }
  v76 = *((_DWORD *)v14 + 340);
  v77 = 68 << v76;
  v78 = v76 + 8;
  v79 = *((_DWORD *)v14 + 341) | v77;
  *((_DWORD *)v14 + 341) = v79;
  if ( v78 > 0x1F )
  {
    v92 = (_QWORD *)v14[167];
    v93 = v92[1];
    if ( (unsigned __int64)(v93 + 4) > v92[2] )
    {
      sub_2236E10(v14[167], v92 + 3, v93 + 4, 1);
      v93 = v92[1];
    }
    *(_DWORD *)(*v92 + v93) = v79;
    v94 = *((_DWORD *)v14 + 340);
    v95 = 0;
    v92[1] += 4LL;
    if ( v94 )
      v95 = 0x44u >> (32 - v94);
    *((_DWORD *)v14 + 341) = v95;
    *((_DWORD *)v14 + 340) = ((_BYTE)v94 + 8) & 0x1F;
    v14 = *(_QWORD **)(v8 + 32);
    v79 = *((_DWORD *)v14 + 341);
    v78 = *((_DWORD *)v14 + 340);
  }
  else
  {
    *((_DWORD *)v14 + 340) = v78;
  }
  v80 = 73 << v78;
  v81 = v78 + 8;
  v82 = v80 | v79;
  *((_DWORD *)v14 + 341) = v82;
  if ( v81 > 0x1F )
  {
    v104 = (_QWORD *)v14[167];
    v105 = v104[1];
    if ( (unsigned __int64)(v105 + 4) > v104[2] )
    {
      sub_2236E10(v14[167], v104 + 3, v105 + 4, 1);
      v105 = v104[1];
    }
    *(_DWORD *)(*v104 + v105) = v82;
    v106 = *((_DWORD *)v14 + 340);
    v107 = 0;
    v104[1] += 4LL;
    if ( v106 )
      v107 = 0x49u >> (32 - v106);
    *((_DWORD *)v14 + 341) = v107;
    *((_DWORD *)v14 + 340) = ((_BYTE)v106 + 8) & 0x1F;
    v14 = *(_QWORD **)(v8 + 32);
    v82 = *((_DWORD *)v14 + 341);
    v81 = *((_DWORD *)v14 + 340);
  }
  else
  {
    *((_DWORD *)v14 + 340) = v81;
  }
  v83 = 65 << v81;
  v84 = v81 + 8;
  v85 = v82 | v83;
  *((_DWORD *)v14 + 341) = v85;
  if ( v84 > 0x1F )
  {
    v100 = (_QWORD *)v14[167];
    v101 = v100[1];
    if ( (unsigned __int64)(v101 + 4) > v100[2] )
    {
      sub_2236E10(v14[167], v100 + 3, v101 + 4, 1);
      v101 = v100[1];
    }
    *(_DWORD *)(*v100 + v101) = v85;
    v102 = *((_DWORD *)v14 + 340);
    v103 = 0;
    v100[1] += 4LL;
    if ( v102 )
      v103 = 0x41u >> (32 - v102);
    *((_DWORD *)v14 + 341) = v103;
    *((_DWORD *)v14 + 340) = ((_BYTE)v102 + 8) & 0x1F;
    v14 = *(_QWORD **)(v8 + 32);
    v85 = *((_DWORD *)v14 + 341);
    v84 = *((_DWORD *)v14 + 340);
  }
  else
  {
    *((_DWORD *)v14 + 340) = v84;
  }
  v86 = 71 << v84;
  v87 = v84 + 8;
  v88 = v86 | v85;
  *((_DWORD *)v14 + 341) = v88;
  if ( v87 > 0x1F )
  {
    v96 = (_QWORD *)v14[167];
    v97 = v96[1];
    if ( (unsigned __int64)(v97 + 4) > v96[2] )
    {
      sub_2236E10(v14[167], v96 + 3, v97 + 4, 1);
      v97 = v96[1];
    }
    *(_DWORD *)(*v96 + v97) = v88;
    v98 = *((_DWORD *)v14 + 340);
    v99 = 0;
    v96[1] += 4LL;
    if ( v98 )
      v99 = 0x47u >> (32 - v98);
    *((_DWORD *)v14 + 341) = v99;
    *((_DWORD *)v14 + 340) = ((_BYTE)v98 + 8) & 0x1F;
  }
  else
  {
    *((_DWORD *)v14 + 340) = v87;
  }
  sub_139AC10(v8);
  v89 = *(_QWORD *)(v8 + 32);
  sub_A25970(v89 + 1312, 8u, 3u);
  v124 = 1;
  *(__m128i *)v125 = _mm_load_si128((const __m128i *)&xmmword_23AA2B0);
  v90 = sub_A25EE0(v89 + 1496, &v124);
  sub_1398530(v89 + 1312, *v90, (__int64)v125, 2);
  sub_A25550(v89 + 1312);
  result = v119;
  *v119 = v8;
  return result;
}
