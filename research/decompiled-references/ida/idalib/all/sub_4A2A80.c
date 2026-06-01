__int64 __fastcall sub_4A2A80(__int64 *a1)
{
  __int64 v1; // r13
  __int64 v2; // rax
  unsigned int v3; // r14d
  _QWORD *v4; // rbp
  void **v5; // rax
  void **v6; // rdx
  const char *v7; // rsi
  unsigned __int64 v8; // rbp
  size_t v9; // r15
  _QWORD *v10; // rax
  const char *v11; // rbx
  __int64 *v12; // r15
  _QWORD *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  char v16; // al
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rdi
  __m128i si128; // xmm3
  __int64 v23; // rbx
  __m128 v24; // xmm0
  __m128i v25; // xmm0
  int v26; // eax
  char *v27; // rdi
  __int64 v28; // rbp
  __int64 v29; // r15
  char *v30; // rbx
  void *v31; // rdi
  void *v32; // rdi
  int *v34; // rbx
  __int64 v35; // rax
  char v36; // dl
  __int64 v37; // rax
  __int64 v38; // r15
  __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rbx
  __m128i v42; // xmm1
  int v43; // edx
  __int64 v44; // rdx
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  unsigned __int64 v48; // r9
  size_t v49; // r8
  _BYTE *v50; // rsi
  __int64 v51; // [rsp+0h] [rbp-798h]
  int v52; // [rsp+0h] [rbp-798h]
  size_t v53; // [rsp+0h] [rbp-798h]
  void **p_src; // [rsp+8h] [rbp-790h]
  _QWORD *v55; // [rsp+10h] [rbp-788h]
  __int64 v56; // [rsp+10h] [rbp-788h]
  unsigned __int64 v57; // [rsp+10h] [rbp-788h]
  __int64 v58; // [rsp+28h] [rbp-770h]
  unsigned int v59; // [rsp+38h] [rbp-760h]
  _QWORD *v60; // [rsp+40h] [rbp-758h] BYREF
  __int64 *v61; // [rsp+48h] [rbp-750h]
  void *v62; // [rsp+50h] [rbp-748h] BYREF
  unsigned __int64 v63; // [rsp+58h] [rbp-740h]
  unsigned __int64 v64; // [rsp+60h] [rbp-738h]
  __int64 (__fastcall **v65)(); // [rsp+70h] [rbp-728h]
  void *v66; // [rsp+78h] [rbp-720h] BYREF
  __int128 v67; // [rsp+80h] [rbp-718h]
  __m128i v68; // [rsp+90h] [rbp-708h] BYREF
  __int64 v69; // [rsp+A0h] [rbp-6F8h]
  __int64 v70; // [rsp+A8h] [rbp-6F0h]
  __int64 v71; // [rsp+B0h] [rbp-6E8h] BYREF
  __int128 v72; // [rsp+B8h] [rbp-6E0h]
  __int64 v73; // [rsp+C8h] [rbp-6D0h]
  __int128 v74; // [rsp+D0h] [rbp-6C8h]
  __int64 v75; // [rsp+E0h] [rbp-6B8h]
  __int128 v76; // [rsp+E8h] [rbp-6B0h]
  __int64 v77; // [rsp+F8h] [rbp-6A0h]
  __int128 v78; // [rsp+100h] [rbp-698h]
  __int64 v79; // [rsp+110h] [rbp-688h]
  __int128 v80; // [rsp+118h] [rbp-680h]
  int v81; // [rsp+128h] [rbp-670h]
  __int64 v82; // [rsp+130h] [rbp-668h]
  __int128 v83; // [rsp+138h] [rbp-660h]
  __int64 v84; // [rsp+148h] [rbp-650h]
  __int128 v85; // [rsp+150h] [rbp-648h]
  __int64 v86; // [rsp+160h] [rbp-638h]
  char v87; // [rsp+168h] [rbp-630h]
  __int64 v88; // [rsp+170h] [rbp-628h]
  __int128 v89; // [rsp+178h] [rbp-620h]
  __int64 v90; // [rsp+188h] [rbp-610h]
  __int128 v91; // [rsp+190h] [rbp-608h]
  __int64 v92; // [rsp+1A0h] [rbp-5F8h]
  __int128 v93; // [rsp+1A8h] [rbp-5F0h]
  __int64 v94; // [rsp+1B8h] [rbp-5E0h]
  __int16 v95; // [rsp+1C0h] [rbp-5D8h]
  char v96; // [rsp+1C2h] [rbp-5D6h]
  __int64 v97; // [rsp+1C8h] [rbp-5D0h]
  __int128 v98; // [rsp+1D0h] [rbp-5C8h]
  _OWORD *v99; // [rsp+1E0h] [rbp-5B8h]
  __int64 v100; // [rsp+1E8h] [rbp-5B0h]
  __int64 v101; // [rsp+1F0h] [rbp-5A8h]
  __int64 v102; // [rsp+1F8h] [rbp-5A0h]
  __int64 v103; // [rsp+200h] [rbp-598h]
  __int64 v104; // [rsp+208h] [rbp-590h]
  _OWORD v105[2]; // [rsp+210h] [rbp-588h] BYREF
  __int64 v106; // [rsp+230h] [rbp-568h]
  __int128 v107; // [rsp+238h] [rbp-560h]
  __int64 v108; // [rsp+248h] [rbp-550h]
  __int16 v109; // [rsp+250h] [rbp-548h]
  void *src; // [rsp+260h] [rbp-538h] BYREF
  unsigned __int64 v111; // [rsp+268h] [rbp-530h]
  char v112; // [rsp+318h] [rbp-480h]
  char v113; // [rsp+3F8h] [rbp-3A0h]
  _BYTE v114[184]; // [rsp+408h] [rbp-390h] BYREF
  char v115; // [rsp+4C0h] [rbp-2D8h]
  int v116; // [rsp+5A0h] [rbp-1F8h]
  char v117[424]; // [rsp+5B0h] [rbp-1E8h] BYREF
  unsigned __int64 v118; // [rsp+758h] [rbp-40h] BYREF

  v61 = a1;
  v118 = __readfsqword(0x28u);
  v1 = *a1;
  v2 = switch_dbctx(*(int *)(*a1 + 16));
  v59 = sub_64E0C0(*(_QWORD *)(v2 + 1672), *(_QWORD *)(*(_QWORD *)(v2 + 1672) + 8LL));
  if ( v59 <= 1 )
    goto LABEL_76;
  v3 = 1;
  v4 = nullptr;
  do
  {
    p_src = &src;
    v5 = &src;
    do
    {
      v6 = v5 + 44;
      *v5 = nullptr;
      v5 += 53;
      *(v5 - 15) = v6;
      *((_OWORD *)v5 - 26) = 0;
      *(v5 - 50) = nullptr;
      *(_OWORD *)(v5 - 49) = 0;
      *(v5 - 47) = nullptr;
      *((_OWORD *)v5 - 23) = 0;
      *(v5 - 44) = nullptr;
      *(_OWORD *)(v5 - 43) = 0;
      *(v5 - 41) = nullptr;
      *((_OWORD *)v5 - 20) = 0;
      *((_DWORD *)v5 - 76) = 0;
      *(v5 - 37) = nullptr;
      *((_OWORD *)v5 - 18) = 0;
      *(v5 - 34) = nullptr;
      *(_OWORD *)(v5 - 33) = 0;
      *(v5 - 31) = nullptr;
      *((_BYTE *)v5 - 240) = 0;
      *(v5 - 29) = nullptr;
      *((_OWORD *)v5 - 14) = 0;
      *(v5 - 26) = nullptr;
      *(_OWORD *)(v5 - 25) = 0;
      *(v5 - 23) = nullptr;
      *((_OWORD *)v5 - 11) = 0;
      *(v5 - 20) = (void *)-1LL;
      *((_WORD *)v5 - 76) = 0;
      *((_BYTE *)v5 - 150) = 0;
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
    while ( &v118 != (unsigned __int64 *)v5 );
    if ( !(unsigned __int8)sub_4A29A0((__int64)&src, v1, v3, 0)
      || (v113 & 2) != 0
      || (v112 & 0x2F) != 0xD
      || !(unsigned __int8)sub_4A29A0((__int64)&src, v1, v3, 1)
      || sub_496040((__int64)&src, (__int64)v114, 0) )
    {
      v34 = dword_23ADE48;
      v35 = dword_23ADE48[0];
      if ( *(_DWORD *)(v1 + 28) > dword_23ADE48[0] )
        goto LABEL_45;
      while ( 1 )
      {
        do
        {
          if ( jpt_4CC686 == (_UNKNOWN *__ptr32 *)++v34 )
            goto LABEL_38;
          v35 = *v34;
        }
        while ( *(_DWORD *)(v1 + 28) <= (int)v35 );
LABEL_45:
        sub_4955E0((__int64)(&src + 53 * v35), *(_DWORD *)(v1 + 4 * v35 + 16));
      }
    }
    v7 = "struct ";
    if ( (v113 & 2) == 0 && (v112 & 0x3F) == 0x1D )
      v7 = "union ";
    sub_472300((__int64)&v62, v7);
    v8 = v111;
    if ( v111 )
    {
      v9 = v111 - 1;
      if ( v111 != 1 )
      {
        v48 = v63;
        v49 = v111 - 1;
        if ( v63 )
        {
          v48 = v63 - 1;
          v49 = v9 + v63 - 1;
          v8 = v111 + v63 - 1;
        }
        v50 = v62;
        if ( v64 < v8 )
        {
          v57 = v48;
          v53 = v49;
          v62 = (void *)qvector_reserve(&v62, v62, v8, 1);
          v48 = v57;
          v50 = v62;
          v49 = v53;
        }
        v63 = v8;
        v50[v49] = 0;
        memcpy((char *)v62 + v48, src, v9);
      }
    }
    if ( *(int *)(v1 + 28) > 2 )
      sub_4A29A0((__int64)&src, v1, v3, 2);
    v10 = (_QWORD *)operator new(0xB8u);
    v4 = v10;
    v11 = haystack;
    if ( v63 )
      v11 = (const char *)v62;
    v12 = v61;
    v13 = v10 + 2;
    *v10 = &off_2B26160;
    v14 = *v12;
    v4[2] = 0;
    *(_OWORD *)(v4 + 3) = 0;
    v4[1] = v14;
    sub_493230(v13, (__int64)(v12 + 1));
    v15 = v12[4];
    v4[15] = -1;
    v4[5] = v15;
    LODWORD(v15) = *((_DWORD *)v12 + 10);
    v4[16] = -1;
    *((_DWORD *)v4 + 12) = v15;
    v4[17] = -1;
    v4[18] = 0;
    *(_OWORD *)(v4 + 7) = 0;
    *(_OWORD *)(v4 + 9) = 0;
    *(_OWORD *)(v4 + 11) = 0;
    *(_OWORD *)(v4 + 13) = 0;
    merge_handler_ctr(v4, v11);
    v4[19] = 0;
    *v4 = &off_2B2C960;
    v16 = v116;
    *((_OWORD *)v4 + 10) = 0;
    v17 = v16 & 2;
    if ( (v113 & 2) != 0 )
    {
      *((_BYTE *)v4 + 176) = 0;
      if ( !v17 && (v115 & 0x3F) == 0x1D )
      {
LABEL_57:
        if ( !under_debugger )
          interr(2167);
        goto LABEL_78;
      }
      goto LABEL_21;
    }
    v36 = v112 & 0x3F;
    *((_BYTE *)v4 + 176) = (v112 & 0x3F) == 29;
    if ( v17 || (v115 & 0x3F) != 0x1D )
    {
      if ( v36 == 29 )
        goto LABEL_57;
LABEL_21:
      v18 = v4[1];
      v4[9] = 0;
      if ( *(int *)(v18 + 28) > 0 )
      {
        v58 = 0;
        v60 = v4 + 19;
        while ( 1 )
        {
          v19 = operator new(0x220u);
          v20 = v4[1];
          v51 = v19;
          v66 = nullptr;
          v21 = *(int *)(v20 + 4LL * (int)v58 + 16);
          v65 = off_2B2C648;
          v69 = 0;
          v70 = 1;
          v71 = 0;
          v73 = 0;
          v75 = 0;
          v77 = 0;
          v79 = 0;
          v81 = 0;
          v82 = 0;
          v84 = 0;
          v86 = 0;
          v87 = 0;
          v88 = 0;
          v90 = 0;
          v92 = 0;
          v67 = 0;
          v68 = 0;
          v72 = 0;
          v74 = 0;
          v76 = 0;
          v78 = 0;
          v80 = 0;
          v83 = 0;
          v85 = 0;
          v89 = 0;
          v91 = 0;
          v93 = 0;
          v99 = v105;
          v94 = -1;
          v95 = 0;
          v96 = 0;
          v97 = 0;
          v100 = 1;
          v101 = 0;
          v102 = 0;
          v103 = 1065353216;
          v104 = 0;
          v106 = 0;
          v108 = 0;
          v109 = 0;
          v98 = 0;
          memset(v105, 0, sizeof(v105));
          v107 = 0;
          switch_dbctx(v21);
          sub_495CB0((__int64)&v71, (__int64)p_src);
          if ( (_DWORD)v86 )
          {
            if ( !(unsigned __int8)sub_493DF0(&v71, (__int64)&v66, 0)
              && !(unsigned __int8)sub_493DF0(&v71, (__int64)&v66, 0x80u)
              && ((v108 & 1) != 0 || (_DWORD)v21 != *(_DWORD *)(v20 + 24)) )
            {
              break;
            }
          }
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
          v23 = v67;
          v24 = _mm_loadh_ps((const double *)&v60);
          *(_DWORD *)(v51 + 8) = v21;
          *(__m128 *)(v51 + 32) = v24;
          *(_DWORD *)(v51 + 12) = -1;
          *(_QWORD *)v51 = &off_2B2C680;
          *(_QWORD *)(v51 + 48) = &off_2BFAE90;
          *(_QWORD *)(v51 + 56) = 0;
          *(__m128i *)(v51 + 16) = si128;
          *(_OWORD *)(v51 + 64) = 0;
          if ( v23 )
          {
            v46 = qalloc_or_throw(144 * v23);
            v47 = 0;
            *(_QWORD *)(v51 + 56) = v46;
            *(_QWORD *)(v51 + 72) = v23;
            while ( 1 )
            {
              v56 = v47;
              sub_495840(v46 + 144 * v47, (__int64)v66 + 144 * v47);
              v47 = v56 + 1;
              if ( v23 == v56 + 1 )
                break;
              v46 = *(_QWORD *)(v51 + 56);
            }
            *(_QWORD *)(v51 + 64) = v23;
          }
          v25 = _mm_load_si128(&v68);
          *(_QWORD *)(v51 + 96) = v69;
          v26 = v70;
          *(__m128i *)(v51 + 80) = v25;
          *(_DWORD *)(v51 + 104) = v26;
          *(_QWORD *)(v51 + 48) = off_2B2C648;
          sub_49D3B0(v51 + 112, (const __m128i *)&v71);
          *(_BYTE *)(v51 + 536) = 0;
          v65 = off_2B2C648;
          sub_496580((__int64)&v71);
          v27 = (char *)v66;
          v65 = (__int64 (__fastcall **)())&off_2BFAE90;
          if ( v66 )
          {
            if ( (_QWORD)v67 )
            {
              v55 = v4;
              v28 = 0;
              v29 = v67;
              do
              {
                v30 = &v27[144 * v28];
                clear_tinfo_t(v30 + 64);
                v31 = *((void **)v30 + 5);
                if ( v31 )
                {
                  *((_QWORD *)v30 + 6) = 0;
                  qfree(v31);
                }
                v32 = *((void **)v30 + 2);
                if ( v32 )
                {
                  *((_QWORD *)v30 + 3) = 0;
                  qfree(v32);
                }
                ++v28;
                v27 = (char *)v66;
              }
              while ( v29 != v28 );
              v4 = v55;
            }
            *(_QWORD *)&v67 = 0;
            qfree(v27);
          }
          p_src += 53;
          *(_QWORD *)v51 = &off_2B2C738;
          *(_DWORD *)(v51 + 12) = v58;
          v4[v58++ + 7] = v51;
          if ( *(_DWORD *)(v4[1] + 28LL) <= (int)v58 )
            goto LABEL_36;
        }
        if ( !under_debugger )
          interr(2937);
LABEL_78:
        BUG();
      }
      goto LABEL_36;
    }
    if ( v36 != 29 )
      goto LABEL_57;
    v37 = v4[1];
    v4[9] = 0;
    if ( *(int *)(v37 + 28) > 0 )
    {
      v38 = 0;
      do
      {
        v52 = v38;
        v39 = operator new(0x228u);
        v40 = v4[1];
        v41 = v39;
        v42 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
        v43 = *(_DWORD *)(v40 + 4LL * (int)v38 + 16);
        *(_QWORD *)(v39 + 32) = v40;
        *(_DWORD *)(v39 + 12) = -1;
        *(_DWORD *)(v39 + 8) = v43;
        *(_QWORD *)(v39 + 40) = 0;
        *(_QWORD *)v39 = &off_2B2C8A8;
        *(__m128i *)(v39 + 16) = v42;
        *(_OWORD *)(v39 + 48) = 0;
        sub_499B80(v39 + 64, v40, v43, (__int64)p_src);
        if ( *(_QWORD *)(v41 + 80) )
        {
          v44 = 0;
          v45 = 0;
          do
          {
            *(_QWORD *)(*(_QWORD *)(v41 + 72) + v44) = v45++;
            v44 += 144;
          }
          while ( v45 < *(_QWORD *)(v41 + 80) );
        }
        v4[v38++ + 7] = v41;
        p_src += 53;
        *(_DWORD *)(v41 + 12) = v52;
      }
      while ( *(_DWORD *)(v4[1] + 28LL) > (int)v38 );
    }
LABEL_36:
    if ( v62 )
    {
      v63 = 0;
      qfree(v62);
    }
LABEL_38:
    ++v3;
    sub_496580((__int64)v117);
    sub_496580((__int64)v114);
    sub_496580((__int64)&src);
  }
  while ( v59 != v3 );
  if ( v4 )
  {
    *(_QWORD *)(v1 + 64) = v4;
    return 0;
  }
LABEL_76:
  if ( !*(_QWORD *)(v1 + 64) )
    sub_459560(v1, 7u, 0xFFFFFFFF, 0xFFFFFFFF);
  return 0;
}
