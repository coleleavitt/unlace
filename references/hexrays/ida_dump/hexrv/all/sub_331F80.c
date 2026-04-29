unsigned __int64 __fastcall sub_331F80(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rbx
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // r13
  __int64 v18; // r12
  __int64 v19; // rbp
  _QWORD *v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rax
  __m128i si128; // xmm2
  __int64 v27; // rdx
  __int64 v28; // rbp
  __int64 i; // rbx
  __int64 v30; // rax
  __int64 v31; // rdi
  unsigned __int64 *v32; // rax
  unsigned __int64 v33; // rbx
  __int64 *v34; // rbp
  __int64 v35; // rdx
  __int64 *v36; // rdi
  __int64 *v37; // rdi
  _QWORD *v38; // rbx
  __int64 (__fastcall *v39)(_QWORD *); // rax
  __int64 v40; // rdi
  __int64 v41; // rdi
  __int64 v42; // rdi
  __int64 v43; // rdi
  _QWORD *v44; // rbx
  __int64 v45; // rdi
  _QWORD *v46; // rdi
  _QWORD *v47; // rdi
  _QWORD *v48; // rdi
  unsigned __int64 *v49; // rax
  unsigned __int64 v50; // rbx
  __int64 *v51; // rbp
  __int64 v52; // rdx
  __int64 *v53; // rdi
  __int64 *v54; // rdi
  __int64 v55; // rdi
  __int64 v56; // rdi
  __int64 v57; // rdi
  __int64 v58; // rdi
  __int64 *v59; // rbx
  __int64 v60; // rdi
  __int64 v61; // rdi
  __int64 v62; // r12
  __int64 j; // rbp
  _QWORD *v64; // rbx
  __int64 v65; // rdi
  __int64 v66; // rdi
  unsigned __int64 **v67; // rbx
  unsigned __int64 *v68; // rax
  unsigned __int64 v69; // rbp
  unsigned __int64 **v70; // rbx
  unsigned __int64 *v71; // rax
  unsigned __int64 v72; // rbp
  __int64 *v73; // rsi
  __int64 v74; // rax
  __int64 k; // r13
  __int64 *v76; // rbp
  __int64 v77; // rdi
  __int64 v78; // r12
  __int64 v79; // r14
  __int64 v80; // rbx
  __int64 v81; // rdi
  __int64 *v83; // r12
  __int64 v84; // rdx
  __int64 *v85; // r13
  __int64 v86; // rax
  __int64 *v87; // r13
  __int64 *v88; // rdi
  __int64 *v89; // rdi
  __int64 v90; // rax
  unsigned __int64 v91; // r12
  __int64 v92; // r13
  __int64 v93; // r13
  __int64 *v94; // rdi
  __int64 *v95; // rdi
  __int64 *v96; // rdi
  __int64 *v97; // rdi
  __int64 *v98; // rdi
  __int64 *v99; // rdi
  __int64 v100; // rdi
  __int64 v101; // rdi
  __int64 v102; // rdi
  __m128i v103; // [rsp+0h] [rbp-78h] BYREF
  __int64 *v104; // [rsp+10h] [rbp-68h]
  __int64 v105; // [rsp+18h] [rbp-60h]
  __int64 v106; // [rsp+20h] [rbp-58h] BYREF
  __int128 v107; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v108; // [rsp+38h] [rbp-40h]

  v108 = __readfsqword(0x28u);
  sub_63710((_QWORD *)a1);
  v2 = *(_QWORD *)(a1 + 520);
  while ( v2 )
  {
    v3 = v2;
    v2 = *(_QWORD *)(v2 + 8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  v4 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 520) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = 0x347000401LL;
  if ( v4 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    qfree(v4);
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 32) = 0;
  }
  v5 = *(_QWORD *)(a1 + 184);
  *(_QWORD *)(a1 + 56) = -1;
  *(_OWORD *)(a1 + 40) = -1;
  *(_QWORD *)(a1 + 64) = 0xFFFFFFFF00000000LL;
  *(_DWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 160) = -1;
  *(_OWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 168) = 0;
  if ( v5 )
  {
    *(_QWORD *)(a1 + 192) = 0;
    qfree(v5);
    *(_QWORD *)(a1 + 184) = 0;
    *(_QWORD *)(a1 + 200) = 0;
  }
  v6 = *(_QWORD *)(a1 + 208);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 216) = 0;
    qfree(v6);
    *(_QWORD *)(a1 + 208) = 0;
    *(_QWORD *)(a1 + 224) = 0;
  }
  v107 = 0;
  v106 = 0;
  v106 = qvector_reserve(&v106, 0, 1, 16);
  *(__m128i *)(v106 + 16 * v107) = _mm_load_si128((const __m128i *)&xmmword_3FE260);
  v7 = *(_QWORD *)(a1 + 232);
  v8 = v106;
  v106 = 0;
  v9 = (__m128i)_mm_loadh_ps((const double *)&v107 + 1);
  v107 = 0;
  if ( v7 )
  {
    *(_QWORD *)(a1 + 240) = 0;
    v103 = v9;
    qfree(v7);
    v10 = _mm_load_si128(&v103);
    v11 = v106;
    *(_QWORD *)(a1 + 232) = v8;
    *(__m128i *)(a1 + 240) = v10;
    if ( v11 )
    {
      *(_QWORD *)&v107 = 0;
      qfree(v11);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 232) = v8;
    *(__m128i *)(a1 + 240) = v9;
  }
  v12 = *(_QWORD *)(a1 + 272);
  *(_QWORD *)(a1 + 264) = 0;
  if ( v12 )
  {
    *(_QWORD *)(a1 + 280) = 0;
    qfree(v12);
    *(_QWORD *)(a1 + 272) = 0;
    *(_QWORD *)(a1 + 288) = 0;
  }
  *(_BYTE *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 312) = 0;
  clear_tinfo_t(a1 + 328);
  v13 = *(_QWORD *)(a1 + 336);
  if ( v13 )
  {
    *(_QWORD *)(a1 + 344) = 0;
    qfree(v13);
    *(_QWORD *)(a1 + 336) = 0;
    *(_QWORD *)(a1 + 352) = 0;
  }
  v14 = *(_QWORD *)(a1 + 376);
  *(_QWORD *)(a1 + 368) = 0;
  if ( v14 )
  {
    *(_QWORD *)(a1 + 384) = 0;
    qfree(v14);
    *(_QWORD *)(a1 + 376) = 0;
    *(_QWORD *)(a1 + 392) = 0;
  }
  v15 = *(_QWORD *)(a1 + 408);
  *(_DWORD *)(a1 + 400) = 0;
  if ( v15 )
  {
    *(_QWORD *)(a1 + 416) = 0;
    qfree(v15);
    *(_QWORD *)(a1 + 408) = 0;
    *(_QWORD *)(a1 + 424) = 0;
  }
  v16 = *(_QWORD *)(a1 + 432);
  if ( v16 )
  {
    v17 = *(_QWORD *)(a1 + 440);
    if ( v17 )
    {
      v18 = 0;
      v19 = 0;
      do
      {
        v20 = (_QWORD *)(v16 + v18);
        clear_tinfo_t(v16 + v18 + 80);
        v21 = *(_QWORD *)(v16 + v18 + 56);
        if ( v21 )
        {
          v20[8] = 0;
          qfree(v21);
        }
        v22 = v20[4];
        if ( v22 )
        {
          v20[5] = 0;
          qfree(v22);
        }
        ++v19;
        v18 += 104;
        cleanup_argloc(v20);
        v16 = *(_QWORD *)(a1 + 432);
      }
      while ( v17 != v19 );
    }
    *(_QWORD *)(a1 + 440) = 0;
    qfree(v16);
    *(_QWORD *)(a1 + 432) = 0;
    *(_QWORD *)(a1 + 448) = 0;
  }
  v23 = *(_QWORD *)(a1 + 456);
  if ( v23 )
  {
    *(_QWORD *)(a1 + 464) = 0;
    qfree(v23);
    *(_QWORD *)(a1 + 456) = 0;
    *(_QWORD *)(a1 + 472) = 0;
  }
  v24 = *(_QWORD *)(a1 + 496);
  *(_DWORD *)(a1 + 480) = -1;
  *(_QWORD *)(a1 + 488) = -1;
  if ( v24 )
  {
    *(_QWORD *)(a1 + 504) = 0;
    qfree(v24);
    *(_QWORD *)(a1 + 496) = 0;
    *(_QWORD *)(a1 + 512) = 0;
  }
  v25 = a1 + 536;
  do
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_3FE260);
    *(_QWORD *)(v25 + 16) = "<unnamed inteval>";
    v25 += 32;
    *(_QWORD *)(v25 - 8) = 0;
    *(__m128i *)(v25 - 32) = si128;
  }
  while ( a1 + 728 != v25 );
  v27 = *(_QWORD *)(a1 + 728);
  if ( v27 )
  {
    v28 = *(_QWORD *)(a1 + 736);
    if ( v28 )
    {
      for ( i = 0; i != v28; ++i )
      {
        v30 = v27 + 40 * i;
        v31 = *(_QWORD *)(v30 + 16);
        if ( v31 )
        {
          *(_QWORD *)(v30 + 24) = 0;
          qfree(v31);
          v27 = *(_QWORD *)(a1 + 728);
        }
      }
    }
    *(_QWORD *)(a1 + 736) = 0;
    qfree(v27);
    *(_QWORD *)(a1 + 728) = 0;
    *(_QWORD *)(a1 + 744) = 0;
  }
  v32 = *(unsigned __int64 **)(a1 + 816);
  *(_DWORD *)(a1 + 792) = 0;
  *(_OWORD *)(a1 + 752) = 0;
  *(_OWORD *)(a1 + 768) = 0;
  *(_OWORD *)(a1 + 800) = 0;
  if ( !v32 )
    goto LABEL_54;
  v33 = *v32;
  if ( !*(_QWORD *)(a1 + 824) )
  {
    *v32 = *v32 & 3 | (unsigned __int64)v32 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(*(_QWORD *)(a1 + 816) + 8LL) = _mm_unpacklo_epi64(
                                                  (__m128i)*(unsigned __int64 *)(a1 + 816),
                                                  (__m128i)*(unsigned __int64 *)(a1 + 816));
    **(_QWORD **)(a1 + 816) &= ~1uLL;
    **(_QWORD **)(a1 + 816) |= 2uLL;
    goto LABEL_55;
  }
  v34 = (__int64 *)(v33 & 0xFFFFFFFFFFFFFFFCLL);
  v35 = *(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v35 & 2) == 0 )
  {
    v36 = (__int64 *)v34[1];
    if ( (*(_BYTE *)v36 & 2) != 0 )
    {
      v37 = (__int64 *)v34[2];
      if ( (*(_BYTE *)v37 & 2) != 0 )
        goto LABEL_163;
    }
    else
    {
      sub_323EF0(v36);
      v37 = (__int64 *)v34[2];
      if ( (*(_BYTE *)v37 & 2) != 0 )
        goto LABEL_49;
    }
    sub_323EF0(v37);
LABEL_49:
    v35 = *v34;
    if ( (*v34 & 2) != 0 )
    {
LABEL_50:
      if ( v33 > 3 )
        qfree(v33 & 0xFFFFFFFFFFFFFFFCLL);
      v32 = *(unsigned __int64 **)(a1 + 816);
      v33 = *v32;
      goto LABEL_53;
    }
LABEL_163:
    *v34 = v35 | 2;
    goto LABEL_50;
  }
LABEL_53:
  *v32 = v33 & 3 | (unsigned __int64)v32 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(*(_QWORD *)(a1 + 816) + 8LL) = _mm_unpacklo_epi64(
                                                (__m128i)*(unsigned __int64 *)(a1 + 816),
                                                (__m128i)*(unsigned __int64 *)(a1 + 816));
  **(_QWORD **)(a1 + 816) &= ~1uLL;
  **(_QWORD **)(a1 + 816) |= 2uLL;
LABEL_54:
  *(_QWORD *)(a1 + 824) = 0;
LABEL_55:
  sub_7E780((unsigned __int64 **)(a1 + 872));
  v38 = *(_QWORD **)(a1 + 920);
  *(_QWORD *)(a1 + 904) = 0;
  *(_DWORD *)(a1 + 912) = 0;
  *(_OWORD *)(a1 + 888) = 0;
  if ( v38 )
  {
    v39 = *(__int64 (__fastcall **)(_QWORD *))(*v38 + 8LL);
    if ( v39 == sub_763B0 )
    {
      v40 = v38[4];
      *v38 = &off_4AE7B8;
      if ( v40 )
      {
        v38[5] = 0;
        qfree(v40);
      }
      v41 = v38[1];
      if ( v41 )
      {
        v38[2] = 0;
        qfree(v41);
      }
      qfree(v38);
    }
    else
    {
      v39(v38);
    }
  }
  v42 = *(_QWORD *)(a1 + 928);
  *(_QWORD *)(a1 + 920) = 0;
  if ( v42 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 8LL))(v42);
  v43 = *(_QWORD *)(a1 + 936);
  *(_QWORD *)(a1 + 928) = 0;
  if ( v43 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 8LL))(v43);
  v44 = *(_QWORD **)(a1 + 944);
  *(_QWORD *)(a1 + 936) = 0;
  if ( v44 )
  {
    v45 = v44[5];
    if ( v45 )
    {
      v44[6] = 0;
      qfree(v45);
    }
    clear_tinfo_t(v44 + 4);
    operator delete(v44, 0x48u);
  }
  *(_QWORD *)(a1 + 944) = 0;
  sub_324640(*(_QWORD **)(a1 + 968));
  *(_QWORD *)(a1 + 968) = 0;
  v46 = *(_QWORD **)(a1 + 1016);
  *(_QWORD *)(a1 + 976) = a1 + 960;
  *(_QWORD *)(a1 + 984) = a1 + 960;
  *(_QWORD *)(a1 + 992) = 0;
  sub_324640(v46);
  *(_QWORD *)(a1 + 1016) = 0;
  v47 = *(_QWORD **)(a1 + 1064);
  *(_QWORD *)(a1 + 1024) = a1 + 1008;
  *(_QWORD *)(a1 + 1032) = a1 + 1008;
  *(_QWORD *)(a1 + 1040) = 0;
  sub_324640(v47);
  *(_QWORD *)(a1 + 1064) = 0;
  v48 = *(_QWORD **)(a1 + 1112);
  *(_QWORD *)(a1 + 1072) = a1 + 1056;
  *(_QWORD *)(a1 + 1080) = a1 + 1056;
  *(_QWORD *)(a1 + 1088) = 0;
  sub_324640(v48);
  *(_QWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1120) = a1 + 1104;
  *(_QWORD *)(a1 + 1128) = a1 + 1104;
  v49 = *(unsigned __int64 **)(a1 + 1144);
  *(_QWORD *)(a1 + 1136) = 0;
  if ( !v49 )
    goto LABEL_82;
  v50 = *v49;
  if ( !*(_QWORD *)(a1 + 1152) )
  {
    *v49 = *v49 & 3 | (unsigned __int64)v49 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(*(_QWORD *)(a1 + 1144) + 8LL) = _mm_unpacklo_epi64(
                                                   (__m128i)*(unsigned __int64 *)(a1 + 1144),
                                                   (__m128i)*(unsigned __int64 *)(a1 + 1144));
    **(_QWORD **)(a1 + 1144) &= ~1uLL;
    **(_QWORD **)(a1 + 1144) |= 2uLL;
    goto LABEL_83;
  }
  v51 = (__int64 *)(v50 & 0xFFFFFFFFFFFFFFFCLL);
  v52 = *(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v52 & 2) == 0 )
  {
    v53 = (__int64 *)v51[1];
    if ( (*(_BYTE *)v53 & 2) != 0 )
    {
      v54 = (__int64 *)v51[2];
      if ( (*(_BYTE *)v54 & 2) != 0 )
        goto LABEL_165;
    }
    else
    {
      sub_323EF0(v53);
      v54 = (__int64 *)v51[2];
      if ( (*(_BYTE *)v54 & 2) != 0 )
        goto LABEL_77;
    }
    sub_323EF0(v54);
LABEL_77:
    v52 = *v51;
    if ( (*v51 & 2) != 0 )
    {
LABEL_78:
      if ( v50 > 3 )
        qfree(v50 & 0xFFFFFFFFFFFFFFFCLL);
      v49 = *(unsigned __int64 **)(a1 + 1144);
      v50 = *v49;
      goto LABEL_81;
    }
LABEL_165:
    *v51 = v52 | 2;
    goto LABEL_78;
  }
LABEL_81:
  *v49 = v50 & 3 | (unsigned __int64)v49 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(*(_QWORD *)(a1 + 1144) + 8LL) = _mm_unpacklo_epi64(
                                                 (__m128i)*(unsigned __int64 *)(a1 + 1144),
                                                 (__m128i)*(unsigned __int64 *)(a1 + 1144));
  **(_QWORD **)(a1 + 1144) &= ~1uLL;
  **(_QWORD **)(a1 + 1144) |= 2uLL;
LABEL_82:
  *(_QWORD *)(a1 + 1152) = 0;
LABEL_83:
  v55 = *(_QWORD *)(a1 + 1160);
  if ( v55 )
  {
    *(_QWORD *)(a1 + 1168) = 0;
    qfree(v55);
    *(_QWORD *)(a1 + 1160) = 0;
    *(_QWORD *)(a1 + 1176) = 0;
  }
  v56 = *(_QWORD *)(a1 + 1192);
  *(_DWORD *)(a1 + 1184) = -1;
  if ( v56 )
  {
    *(_QWORD *)(a1 + 1200) = 0;
    qfree(v56);
    *(_QWORD *)(a1 + 1192) = 0;
    *(_QWORD *)(a1 + 1208) = 0;
  }
  v57 = *(_QWORD *)(a1 + 1216);
  if ( v57 )
  {
    *(_QWORD *)(a1 + 1224) = 0;
    qfree(v57);
    *(_QWORD *)(a1 + 1216) = 0;
    *(_QWORD *)(a1 + 1232) = 0;
  }
  v58 = *(_QWORD *)(a1 + 1240);
  if ( v58 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 8LL))(v58);
  v59 = *(__int64 **)(a1 + 1248);
  *(_QWORD *)(a1 + 1240) = 0;
  if ( v59 )
  {
    v60 = *v59;
    if ( *v59 )
    {
      v59[1] = 0;
      qfree(v60);
    }
    qfree(v59);
  }
  v61 = *(_QWORD *)(a1 + 1256);
  *(_QWORD *)(a1 + 1248) = 0;
  if ( v61 )
  {
    v62 = *(_QWORD *)(a1 + 1264);
    if ( v62 )
    {
      for ( j = 0; j != v62; ++j )
      {
        v64 = (_QWORD *)(v61 + 96 * j);
        v65 = v64[7];
        if ( v65 )
        {
          v64[8] = 0;
          qfree(v65);
        }
        clear_tinfo_t(v64 + 6);
        v66 = v64[3];
        if ( v66 )
        {
          v64[4] = 0;
          qfree(v66);
        }
        cleanup_argloc(v64);
        v61 = *(_QWORD *)(a1 + 1256);
      }
    }
    *(_QWORD *)(a1 + 1264) = 0;
    qfree(v61);
    *(_QWORD *)(a1 + 1256) = 0;
    *(_QWORD *)(a1 + 1272) = 0;
  }
  sub_7F750((unsigned __int64 **)(a1 + 1280));
  *(_QWORD *)(a1 + 1296) = 0;
  *(_DWORD *)(a1 + 1304) = 1;
  sub_7FAB0((unsigned __int64 **)(a1 + 1312));
  v67 = *(unsigned __int64 ***)(a1 + 1328);
  if ( v67 )
  {
    v68 = *v67;
    if ( !*v67 )
    {
LABEL_110:
      qfree(v67);
      goto LABEL_111;
    }
    v69 = *v68;
    if ( !v67[1] )
    {
      *v68 = (unsigned __int64)v68 & 0xFFFFFFFFFFFFFFFCLL | *v68 & 3;
      *(__m128i *)(*v67 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v67, (__m128i)(unsigned __int64)*v67);
      **v67 &= ~1uLL;
      **v67 |= 2u;
      goto LABEL_108;
    }
    v91 = v69 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v69 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_161:
      *v68 = (unsigned __int64)v68 & 0xFFFFFFFFFFFFFFFCLL | v69 & 3;
      *(__m128i *)(*v67 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v67, (__m128i)(unsigned __int64)*v67);
      **v67 &= ~1uLL;
      **v67 |= 2u;
      v67[1] = nullptr;
LABEL_108:
      if ( *v67 )
        qfree(*v67);
      goto LABEL_110;
    }
    v92 = *(_QWORD *)(v91 + 8);
    if ( (*(_BYTE *)v92 & 2) != 0 )
    {
      v93 = *(_QWORD *)(v91 + 16);
      if ( (*(_BYTE *)v93 & 2) != 0 )
        goto LABEL_183;
      goto LABEL_151;
    }
    v96 = *(__int64 **)(v92 + 8);
    if ( (*(_BYTE *)v96 & 2) != 0 )
    {
      v97 = *(__int64 **)(v92 + 16);
      if ( (*(_BYTE *)v97 & 2) != 0 )
      {
LABEL_192:
        v102 = *(_QWORD *)(v92 + 48);
        if ( v102 )
        {
          *(_QWORD *)(v92 + 56) = 0;
          qfree(v102);
        }
        *(_QWORD *)v92 |= 2uLL;
LABEL_171:
        if ( v92 )
          qfree(v92);
        v93 = *(_QWORD *)(v91 + 16);
        if ( (*(_BYTE *)v93 & 2) != 0 )
        {
LABEL_157:
          if ( (*(_BYTE *)v91 & 2) != 0 )
          {
LABEL_158:
            if ( v69 > 3 )
              qfree(v69 & 0xFFFFFFFFFFFFFFFCLL);
            v68 = *v67;
            v69 = **v67;
            goto LABEL_161;
          }
LABEL_183:
          v100 = *(_QWORD *)(v91 + 48);
          if ( v100 )
          {
            *(_QWORD *)(v91 + 56) = 0;
            qfree(v100);
          }
          *(_QWORD *)v91 |= 2uLL;
          goto LABEL_158;
        }
LABEL_151:
        v94 = *(__int64 **)(v93 + 8);
        if ( (*(_BYTE *)v94 & 2) != 0 )
        {
          v95 = *(__int64 **)(v93 + 16);
          if ( (*(_BYTE *)v95 & 2) != 0 )
            goto LABEL_188;
        }
        else
        {
          sub_324070(v94);
          v95 = *(__int64 **)(v93 + 16);
          if ( (*(_BYTE *)v95 & 2) != 0 )
            goto LABEL_154;
        }
        sub_324070(v95);
LABEL_154:
        if ( (*(_BYTE *)v93 & 2) != 0 )
        {
LABEL_155:
          if ( v93 )
            qfree(v93);
          goto LABEL_157;
        }
LABEL_188:
        v101 = *(_QWORD *)(v93 + 48);
        if ( v101 )
        {
          *(_QWORD *)(v93 + 56) = 0;
          qfree(v101);
        }
        *(_QWORD *)v93 |= 2uLL;
        goto LABEL_155;
      }
    }
    else
    {
      sub_324070(v96);
      v97 = *(__int64 **)(v92 + 16);
      if ( (*(_BYTE *)v97 & 2) != 0 )
        goto LABEL_170;
    }
    sub_324070(v97);
LABEL_170:
    if ( (*(_BYTE *)v92 & 2) != 0 )
      goto LABEL_171;
    goto LABEL_192;
  }
LABEL_111:
  v70 = *(unsigned __int64 ***)(a1 + 1344);
  *(_QWORD *)(a1 + 1328) = 0;
  if ( !v70 )
    goto LABEL_118;
  v71 = *v70;
  if ( *v70 )
  {
    v72 = *v71;
    if ( !v70[1] )
    {
      *v71 = *v71 & 3 | (unsigned __int64)v71 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*v70 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v70, (__m128i)(unsigned __int64)*v70);
      **v70 &= ~1uLL;
      **v70 |= 2u;
      goto LABEL_115;
    }
    v83 = (__int64 *)(v72 & 0xFFFFFFFFFFFFFFFCLL);
    v84 = *(_QWORD *)(v72 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v84 & 2) != 0 )
    {
LABEL_147:
      *v71 = v72 & 3 | (unsigned __int64)v71 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*v70 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v70, (__m128i)(unsigned __int64)*v70);
      **v70 &= ~1uLL;
      **v70 |= 2u;
      v70[1] = nullptr;
LABEL_115:
      if ( *v70 )
        qfree(*v70);
      goto LABEL_117;
    }
    v85 = (__int64 *)v83[1];
    v86 = *v85;
    if ( (*v85 & 2) != 0 )
    {
      v87 = (__int64 *)v83[2];
      if ( (*(_BYTE *)v87 & 2) != 0 )
        goto LABEL_186;
      goto LABEL_137;
    }
    v98 = (__int64 *)v85[1];
    if ( (*(_BYTE *)v98 & 2) != 0 )
    {
      v99 = (__int64 *)v85[2];
      if ( (*(_BYTE *)v99 & 2) != 0 )
      {
LABEL_199:
        *v85 = v86 | 2;
LABEL_179:
        if ( v85 )
          qfree(v85);
        v87 = (__int64 *)v83[2];
        if ( (*(_BYTE *)v87 & 2) != 0 )
        {
LABEL_143:
          v84 = *v83;
          if ( (*v83 & 2) != 0 )
          {
LABEL_144:
            if ( v72 > 3 )
              qfree(v72 & 0xFFFFFFFFFFFFFFFCLL);
            v71 = *v70;
            v72 = **v70;
            goto LABEL_147;
          }
LABEL_186:
          *v83 = v84 | 2;
          goto LABEL_144;
        }
LABEL_137:
        v88 = (__int64 *)v87[1];
        if ( (*(_BYTE *)v88 & 2) != 0 )
        {
          v89 = (__int64 *)v87[2];
          if ( (*(_BYTE *)v89 & 2) != 0 )
          {
            v90 = *v87;
LABEL_197:
            *v87 = v90 | 2;
LABEL_141:
            if ( v87 )
              qfree(v87);
            goto LABEL_143;
          }
        }
        else
        {
          sub_323D10(v88);
          v89 = (__int64 *)v87[2];
          if ( (*(_BYTE *)v89 & 2) != 0 )
            goto LABEL_140;
        }
        sub_323D10(v89);
LABEL_140:
        v90 = *v87;
        if ( (*v87 & 2) != 0 )
          goto LABEL_141;
        goto LABEL_197;
      }
    }
    else
    {
      sub_323D10(v98);
      v99 = (__int64 *)v85[2];
      if ( (*(_BYTE *)v99 & 2) != 0 )
        goto LABEL_178;
    }
    sub_323D10(v99);
LABEL_178:
    v86 = *v85;
    if ( (*v85 & 2) != 0 )
      goto LABEL_179;
    goto LABEL_199;
  }
LABEL_117:
  qfree(v70);
LABEL_118:
  v73 = *(__int64 **)(a1 + 1336);
  *(_QWORD *)(a1 + 1344) = 0;
  v104 = v73;
  if ( v73 )
  {
    v74 = *v73;
    if ( *v73 )
    {
      v105 = v73[1];
      if ( v105 )
      {
        for ( k = 0; k != v105; ++k )
        {
          v76 = (__int64 *)(v74 + 24 * k);
          v77 = *v76;
          if ( *v76 )
          {
            v103.m128i_i64[0] = v76[1];
            if ( v103.m128i_i64[0] )
            {
              v78 = 0;
              v79 = 0;
              do
              {
                v80 = v77 + v78;
                ++v79;
                v78 += 112;
                sub_1188E0(v80 + 88);
                sub_1188E0(v80 + 72);
                sub_1188E0(v80 + 56);
                v77 = *v76;
              }
              while ( v103.m128i_i64[0] != v79 );
            }
            v76[1] = 0;
            qfree(v77);
            v74 = *v104;
          }
        }
      }
      v104[1] = 0;
      qfree(v74);
    }
    qfree(v104);
  }
  *(_QWORD *)(a1 + 1336) = 0;
  *(_QWORD *)(a1 + 1352) = -1;
  sub_7FBC0((unsigned __int64 **)(a1 + 1360));
  sub_7FCD0((unsigned __int64 **)(a1 + 1376));
  sub_7FCD0((unsigned __int64 **)(a1 + 1392));
  v81 = *(_QWORD *)(a1 + 1408);
  if ( v81 )
  {
    *(_QWORD *)(a1 + 1416) = 0;
    qfree(v81);
    *(_QWORD *)(a1 + 1408) = 0;
    *(_QWORD *)(a1 + 1424) = 0;
  }
  *(_QWORD *)(a1 + 1432) = -1;
  return v108 - __readfsqword(0x28u);
}
