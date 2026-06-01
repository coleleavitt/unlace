__int64 __fastcall sub_48DCA0(__int64 *a1)
{
  __int64 v1; // r13
  __int64 v2; // rax
  unsigned int v3; // r14d
  __int64 v4; // rbp
  void **v5; // rax
  void **v6; // rdx
  const char *v7; // rsi
  unsigned __int64 v8; // rbp
  size_t v9; // r8
  __int64 *v10; // r15
  __int64 v11; // rax
  __int64 v12; // rax
  char v13; // al
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdi
  void **v20; // rsi
  __m128i si128; // xmm3
  __m128 v22; // xmm0
  __int64 v23; // rax
  __m128i v24; // xmm0
  int v25; // eax
  char *v26; // rdi
  __int64 v27; // r15
  __int64 v28; // rbp
  char *v29; // rbx
  void *v30; // rdi
  void *v31; // rdi
  int *v33; // rbx
  __int64 v34; // rax
  char v35; // dl
  __int64 v36; // rax
  __int64 v37; // r15
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rbx
  __m128i v41; // xmm1
  int v42; // edx
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // r15
  unsigned __int64 v46; // r15
  size_t v47; // r9
  _BYTE *v48; // rsi
  void **p_src; // [rsp+0h] [rbp-778h]
  __int64 v50; // [rsp+8h] [rbp-770h]
  int v51; // [rsp+8h] [rbp-770h]
  size_t v52; // [rsp+8h] [rbp-770h]
  __int64 v53; // [rsp+10h] [rbp-768h]
  __int64 v54; // [rsp+10h] [rbp-768h]
  __int64 v55; // [rsp+10h] [rbp-768h]
  size_t v56; // [rsp+10h] [rbp-768h]
  __int64 v57; // [rsp+20h] [rbp-758h]
  unsigned int v58; // [rsp+30h] [rbp-748h]
  __int64 v59; // [rsp+40h] [rbp-738h] BYREF
  __int64 *v60; // [rsp+48h] [rbp-730h]
  void *v61; // [rsp+50h] [rbp-728h] BYREF
  unsigned __int64 v62; // [rsp+58h] [rbp-720h]
  unsigned __int64 v63; // [rsp+60h] [rbp-718h]
  __int64 (__fastcall **v64)(); // [rsp+70h] [rbp-708h]
  void *v65; // [rsp+78h] [rbp-700h] BYREF
  __int128 v66; // [rsp+80h] [rbp-6F8h]
  __m128i v67; // [rsp+90h] [rbp-6E8h] BYREF
  __int64 v68; // [rsp+A0h] [rbp-6D8h]
  __int64 v69; // [rsp+A8h] [rbp-6D0h]
  __int64 v70; // [rsp+B0h] [rbp-6C8h] BYREF
  __int128 v71; // [rsp+B8h] [rbp-6C0h]
  __int64 v72; // [rsp+C8h] [rbp-6B0h]
  __int128 v73; // [rsp+D0h] [rbp-6A8h]
  __int64 v74; // [rsp+E0h] [rbp-698h]
  __int128 v75; // [rsp+E8h] [rbp-690h]
  __int64 v76; // [rsp+F8h] [rbp-680h]
  __int128 v77; // [rsp+100h] [rbp-678h]
  __int64 v78; // [rsp+110h] [rbp-668h]
  __int128 v79; // [rsp+118h] [rbp-660h]
  int v80; // [rsp+128h] [rbp-650h]
  __int64 v81; // [rsp+130h] [rbp-648h]
  __int128 v82; // [rsp+138h] [rbp-640h]
  __int64 v83; // [rsp+148h] [rbp-630h]
  __int128 v84; // [rsp+150h] [rbp-628h]
  __int64 v85; // [rsp+160h] [rbp-618h]
  char v86; // [rsp+168h] [rbp-610h]
  __int64 v87; // [rsp+170h] [rbp-608h]
  __int128 v88; // [rsp+178h] [rbp-600h]
  __int64 v89; // [rsp+188h] [rbp-5F0h]
  __int128 v90; // [rsp+190h] [rbp-5E8h]
  __int64 v91; // [rsp+1A0h] [rbp-5D8h]
  __int128 v92; // [rsp+1A8h] [rbp-5D0h]
  int v93; // [rsp+1B8h] [rbp-5C0h]
  __int16 v94; // [rsp+1BCh] [rbp-5BCh]
  char v95; // [rsp+1BEh] [rbp-5BAh]
  __int64 v96; // [rsp+1C0h] [rbp-5B8h]
  __int128 v97; // [rsp+1C8h] [rbp-5B0h]
  _OWORD *v98; // [rsp+1D8h] [rbp-5A0h]
  __int64 v99; // [rsp+1E0h] [rbp-598h]
  __int64 v100; // [rsp+1E8h] [rbp-590h]
  __int64 v101; // [rsp+1F0h] [rbp-588h]
  __int64 v102; // [rsp+1F8h] [rbp-580h]
  __int64 v103; // [rsp+200h] [rbp-578h]
  _OWORD v104[2]; // [rsp+208h] [rbp-570h] BYREF
  __int64 v105; // [rsp+228h] [rbp-550h]
  __int128 v106; // [rsp+230h] [rbp-548h]
  __int64 v107; // [rsp+240h] [rbp-538h]
  __int16 v108; // [rsp+248h] [rbp-530h]
  void *src; // [rsp+250h] [rbp-528h] BYREF
  unsigned __int64 v110; // [rsp+258h] [rbp-520h]
  char v111; // [rsp+308h] [rbp-470h]
  char v112; // [rsp+3E0h] [rbp-398h]
  _BYTE v113[184]; // [rsp+3F0h] [rbp-388h] BYREF
  char v114; // [rsp+4A8h] [rbp-2D0h]
  int v115; // [rsp+580h] [rbp-1F8h]
  char v116[416]; // [rsp+590h] [rbp-1E8h] BYREF
  char v117; // [rsp+730h] [rbp-48h] BYREF
  unsigned __int64 v118; // [rsp+738h] [rbp-40h]

  v60 = a1;
  v118 = __readfsqword(0x28u);
  v1 = *a1;
  v2 = switch_dbctx(*(int *)(*a1 + 16));
  v58 = sub_630AA0(*(_QWORD *)(v2 + 1480), *(_QWORD *)(*(_QWORD *)(v2 + 1480) + 8LL));
  if ( v58 <= 1 )
    goto LABEL_74;
  v3 = 1;
  v4 = 0;
  do
  {
    p_src = &src;
    v5 = &src;
    do
    {
      v6 = v5 + 43;
      *v5 = nullptr;
      v5 += 52;
      *(v5 - 15) = v6;
      *(_OWORD *)(v5 - 51) = 0;
      *(v5 - 49) = nullptr;
      *((_OWORD *)v5 - 24) = 0;
      *(v5 - 46) = nullptr;
      *(_OWORD *)(v5 - 45) = 0;
      *(v5 - 43) = nullptr;
      *((_OWORD *)v5 - 21) = 0;
      *(v5 - 40) = nullptr;
      *(_OWORD *)(v5 - 39) = 0;
      *((_DWORD *)v5 - 74) = 0;
      *(v5 - 36) = nullptr;
      *(_OWORD *)(v5 - 35) = 0;
      *(v5 - 33) = nullptr;
      *((_OWORD *)v5 - 16) = 0;
      *(v5 - 30) = nullptr;
      *((_BYTE *)v5 - 232) = 0;
      *(v5 - 28) = nullptr;
      *(_OWORD *)(v5 - 27) = 0;
      *(v5 - 25) = nullptr;
      *((_OWORD *)v5 - 12) = 0;
      *(v5 - 22) = nullptr;
      *(_OWORD *)(v5 - 21) = 0;
      *((_DWORD *)v5 - 38) = -1;
      *((_WORD *)v5 - 74) = 0;
      *((_BYTE *)v5 - 146) = 0;
      *(v5 - 18) = nullptr;
      *(_OWORD *)(v5 - 17) = 0;
      *(v5 - 14) = &dword_0 + 1;
      *(v5 - 13) = nullptr;
      *(v5 - 12) = nullptr;
      *((_DWORD *)v5 - 22) = 1065353216;
      *(v5 - 10) = nullptr;
      *(_OWORD *)(v5 - 9) = 0;
      *(_OWORD *)(v5 - 7) = 0;
      *(v5 - 5) = nullptr;
      *((_OWORD *)v5 - 2) = 0;
      *((_DWORD *)v5 - 4) = 0;
      *((_DWORD *)v5 - 3) = 0;
      *((_WORD *)v5 - 4) = 0;
    }
    while ( &v117 != (char *)v5 );
    if ( !(unsigned __int8)sub_48DBA0((__int64)&src, v1, v3, 0)
      || (v112 & 2) != 0
      || (v111 & 0x2F) != 0xD
      || !(unsigned __int8)sub_48DBA0((__int64)&src, v1, v3, 1)
      || sub_481350((__int64)&src, (__int64)v113, 0) )
    {
      v33 = dword_2389D00;
      v34 = dword_2389D00[0];
      if ( *(_DWORD *)(v1 + 28) > dword_2389D00[0] )
        goto LABEL_43;
      while ( 1 )
      {
        do
        {
          if ( jpt_4B5962 == (_UNKNOWN *__ptr32 *)++v33 )
            goto LABEL_36;
          v34 = *v33;
        }
        while ( *(_DWORD *)(v1 + 28) <= (int)v34 );
LABEL_43:
        sub_480900((__int64)(&src + 52 * v34), *(_DWORD *)(v1 + 4 * v34 + 16));
      }
    }
    v7 = "struct ";
    if ( (v112 & 2) == 0 && (v111 & 0x3F) == 0x1D )
      v7 = "union ";
    sub_45DE90((__int64)&v61, v7);
    v8 = v110;
    if ( v110 )
    {
      v9 = v110 - 1;
      if ( v110 != 1 )
      {
        v46 = v62;
        v47 = v110 - 1;
        if ( v62 )
        {
          v46 = v62 - 1;
          v47 = v9 + v62 - 1;
          v8 = v110 + v62 - 1;
        }
        v48 = v61;
        if ( v63 < v8 )
        {
          v56 = v110 - 1;
          v52 = v47;
          v61 = (void *)qvector_reserve(&v61, v61, v8, 1);
          v9 = v56;
          v48 = v61;
          v47 = v52;
        }
        v62 = v8;
        v48[v47] = 0;
        memcpy((char *)v61 + v46, src, v9);
      }
    }
    if ( *(int *)(v1 + 28) > 2 )
      sub_48DBA0((__int64)&src, v1, v3, 2);
    v4 = operator new(0xB8u);
    v10 = v60;
    *(_QWORD *)v4 = &off_2AFD020;
    v11 = *v10;
    *(_QWORD *)(v4 + 16) = 0;
    *(_OWORD *)(v4 + 24) = 0;
    *(_QWORD *)(v4 + 8) = v11;
    sub_47E730((_QWORD *)(v4 + 16), (__int64)(v10 + 1));
    v12 = v10[4];
    *(_QWORD *)(v4 + 120) = -1;
    *(_QWORD *)(v4 + 40) = v12;
    LODWORD(v12) = *((_DWORD *)v10 + 10);
    *(_QWORD *)(v4 + 128) = -1;
    *(_DWORD *)(v4 + 48) = v12;
    *(_QWORD *)(v4 + 136) = 0xFFFFFFFFLL;
    *(_DWORD *)(v4 + 144) = 0;
    *(_OWORD *)(v4 + 56) = 0;
    *(_OWORD *)(v4 + 72) = 0;
    *(_OWORD *)(v4 + 88) = 0;
    *(_OWORD *)(v4 + 104) = 0;
    merge_handler_ctr();
    *(_QWORD *)(v4 + 152) = 0;
    *(_QWORD *)v4 = &off_2B029A0;
    v13 = v115;
    *(_OWORD *)(v4 + 160) = 0;
    v14 = v13 & 2;
    if ( (v112 & 2) != 0 )
    {
      *(_BYTE *)(v4 + 176) = 0;
      if ( !v14 && (v114 & 0x3F) == 0x1D )
      {
LABEL_55:
        if ( !under_debugger )
          interr(2167);
        goto LABEL_76;
      }
      goto LABEL_19;
    }
    v35 = v111 & 0x3F;
    *(_BYTE *)(v4 + 176) = (v111 & 0x3F) == 29;
    if ( v14 || (v114 & 0x3F) != 0x1D )
    {
      if ( v35 == 29 )
        goto LABEL_55;
LABEL_19:
      v15 = *(_QWORD *)(v4 + 8);
      *(_QWORD *)(v4 + 72) = 0;
      if ( *(int *)(v15 + 28) > 0 )
      {
        v57 = 0;
        v59 = v4 + 152;
        while ( 1 )
        {
          v16 = operator new(0x218u);
          v17 = *(_QWORD *)(v4 + 8);
          v18 = v16;
          v65 = nullptr;
          v19 = *(int *)(v17 + 4LL * (int)v57 + 16);
          v53 = v17;
          v64 = off_2B02688;
          v68 = 0;
          v69 = 1;
          v70 = 0;
          v72 = 0;
          v74 = 0;
          v76 = 0;
          v78 = 0;
          v80 = 0;
          v81 = 0;
          v83 = 0;
          v85 = 0;
          v86 = 0;
          v87 = 0;
          v89 = 0;
          v91 = 0;
          v66 = 0;
          v67 = 0;
          v71 = 0;
          v73 = 0;
          v75 = 0;
          v77 = 0;
          v79 = 0;
          v82 = 0;
          v84 = 0;
          v88 = 0;
          v90 = 0;
          v92 = 0;
          v93 = -1;
          v98 = v104;
          v94 = 0;
          v95 = 0;
          v96 = 0;
          v99 = 1;
          v100 = 0;
          v101 = 0;
          v102 = 1065353216;
          v103 = 0;
          v105 = 0;
          v107 = 0;
          v108 = 0;
          v97 = 0;
          memset(v104, 0, sizeof(v104));
          v106 = 0;
          switch_dbctx(v19);
          v20 = p_src;
          sub_480FC0((__int64)&v70, (__int64)p_src);
          if ( (_DWORD)v85 )
          {
            v20 = &v65;
            if ( !(unsigned __int8)sub_47F2B0(&v70, (__int64)&v65, 0) )
            {
              v20 = &v65;
              if ( !(unsigned __int8)sub_47F2B0(&v70, (__int64)&v65, 0x80u)
                && ((v107 & 1) != 0 || (_DWORD)v19 != *(_DWORD *)(v53 + 24)) )
              {
                break;
              }
            }
          }
          *(_DWORD *)(v18 + 8) = v19;
          *(_QWORD *)v18 = &off_2B026C0;
          si128 = _mm_load_si128((const __m128i *)&xmmword_23838C0);
          v22 = _mm_loadh_ps((const double *)&v59);
          *(_QWORD *)(v18 + 48) = &off_2BD0E90;
          v23 = v66;
          *(__m128 *)(v18 + 32) = v22;
          *(_DWORD *)(v18 + 12) = -1;
          *(_QWORD *)(v18 + 56) = 0;
          v54 = v23;
          *(__m128i *)(v18 + 16) = si128;
          *(_OWORD *)(v18 + 64) = 0;
          if ( v23 )
          {
            v44 = qalloc_or_throw(v23 << 7, (const char *)v20);
            *(_QWORD *)(v18 + 72) = v54;
            v45 = 0;
            for ( *(_QWORD *)(v18 + 56) = v44; ; v44 = *(_QWORD *)(v18 + 56) )
            {
              sub_480B60(v44 + (v45 << 7), (const __m128i *)v65 + 8 * v45);
              if ( v54 == ++v45 )
                break;
            }
            *(_QWORD *)(v18 + 64) = v54;
          }
          v24 = _mm_load_si128(&v67);
          *(_QWORD *)(v18 + 96) = v68;
          v25 = v69;
          *(__m128i *)(v18 + 80) = v24;
          *(_DWORD *)(v18 + 104) = v25;
          *(_QWORD *)(v18 + 48) = off_2B02688;
          sub_488720(v18 + 112, (__int64)&v70);
          *(_BYTE *)(v18 + 528) = 0;
          v64 = off_2B02688;
          sub_481890((__int64)&v70);
          v26 = (char *)v65;
          v64 = (__int64 (__fastcall **)())&off_2BD0E90;
          if ( v65 )
          {
            if ( (_QWORD)v66 )
            {
              v55 = v18;
              v27 = 0;
              v50 = v4;
              v28 = v66;
              do
              {
                v29 = &v26[128 * v27];
                clear_tinfo_t(v29 + 64);
                v30 = *((void **)v29 + 5);
                if ( v30 )
                {
                  *((_QWORD *)v29 + 6) = 0;
                  qfree(v30);
                }
                v31 = *((void **)v29 + 2);
                if ( v31 )
                {
                  *((_QWORD *)v29 + 3) = 0;
                  qfree(v31);
                }
                ++v27;
                v26 = (char *)v65;
              }
              while ( v28 != v27 );
              v4 = v50;
              v18 = v55;
            }
            *(_QWORD *)&v66 = 0;
            qfree(v26);
          }
          p_src += 52;
          *(_QWORD *)v18 = &off_2B02778;
          *(_QWORD *)(v4 + 8 * v57 + 56) = v18;
          *(_DWORD *)(v18 + 12) = v57++;
          if ( *(_DWORD *)(*(_QWORD *)(v4 + 8) + 28LL) <= (int)v57 )
            goto LABEL_34;
        }
        if ( !under_debugger )
          interr(2937);
LABEL_76:
        BUG();
      }
      goto LABEL_34;
    }
    if ( v35 != 29 )
      goto LABEL_55;
    v36 = *(_QWORD *)(v4 + 8);
    *(_QWORD *)(v4 + 72) = 0;
    if ( *(int *)(v36 + 28) > 0 )
    {
      v37 = 0;
      do
      {
        v51 = v37;
        v38 = operator new(0x220u);
        v39 = *(_QWORD *)(v4 + 8);
        v40 = v38;
        v41 = _mm_load_si128((const __m128i *)&xmmword_23838C0);
        v42 = *(_DWORD *)(v39 + 4LL * (int)v37 + 16);
        *(_QWORD *)(v38 + 32) = v39;
        *(_DWORD *)(v38 + 12) = -1;
        *(_DWORD *)(v38 + 8) = v42;
        *(_QWORD *)(v38 + 40) = 0;
        *(_QWORD *)v38 = &off_2B028E8;
        *(__m128i *)(v38 + 16) = v41;
        *(_OWORD *)(v38 + 48) = 0;
        sub_484EF0(v38 + 64, v39, v42, (__int64)p_src);
        if ( *(_QWORD *)(v40 + 80) )
        {
          v43 = 0;
          do
          {
            *(_QWORD *)(*(_QWORD *)(v40 + 72) + (v43 << 7)) = v43;
            ++v43;
          }
          while ( v43 < *(_QWORD *)(v40 + 80) );
        }
        *(_QWORD *)(v4 + 8 * v37++ + 56) = v40;
        p_src += 52;
        *(_DWORD *)(v40 + 12) = v51;
      }
      while ( *(_DWORD *)(*(_QWORD *)(v4 + 8) + 28LL) > (int)v37 );
    }
LABEL_34:
    if ( v61 )
    {
      v62 = 0;
      qfree(v61);
    }
LABEL_36:
    ++v3;
    sub_481890((__int64)v116);
    sub_481890((__int64)v113);
    sub_481890((__int64)&src);
  }
  while ( v58 != v3 );
  if ( v4 )
  {
    *(_QWORD *)(v1 + 64) = v4;
    return 0;
  }
LABEL_74:
  if ( !*(_QWORD *)(v1 + 64) )
    sub_445720(v1, 7u, 0xFFFFFFFF, 0xFFFFFFFF);
  return 0;
}

