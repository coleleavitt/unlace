__int64 __fastcall sub_12E1020(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  void ***v3; // rbp
  void **v4; // r12
  void **v5; // rbx
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  void **v9; // r15
  _QWORD *v10; // r14
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  char v13; // al
  _QWORD *v14; // r12
  __int64 v15; // r14
  __int64 v16; // rbx
  __int64 v17; // r15
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // r13
  __int64 v22; // rbx
  __int64 v23; // rax
  _QWORD *v24; // rdi
  __int64 v25; // rbx
  __int64 *v26; // rsi
  __int64 v27; // rbx
  __int64 v28; // r14
  _QWORD *v29; // r15
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  void *v32; // rcx
  int *v33; // rsi
  __int64 v34; // rax
  __int64 i; // rcx
  __int64 j; // rcx
  __int64 v37; // rdx
  _QWORD *v38; // r15
  _QWORD *v39; // rbx
  __int64 v40; // r15
  _QWORD *v41; // rdi
  _QWORD *v42; // r14
  _QWORD *v43; // rdi
  char v44; // al
  char v45; // al
  char v46; // al
  char v47; // al
  void **v48; // r14
  __int64 v49; // rax
  __int64 v50; // rsi
  void **v51; // r15
  void *v52; // rdi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdi
  __int64 v58; // rax
  int v59; // edx
  __int64 v60; // rcx
  __int64 v61; // r15
  __int64 v62; // r14
  __int64 v63; // rbx
  void *v64; // rax
  size_t v65; // rdx
  unsigned __int64 v66; // rdi
  const void *v67; // rax
  char v68; // al
  char v69; // al
  char v70; // al
  char v71; // al
  char v72; // al
  char v73; // al
  char v74; // al
  char v75; // al
  char v76; // al
  char v77; // al
  char v78; // al
  char v79; // al
  char v80; // al
  char v81; // al
  char v82; // al
  char v83; // al
  char v84; // al
  char v85; // al
  void **v86; // rax
  void *v87; // rdx
  void *v88; // rdx
  void *v89; // rdx
  void *v90; // rdx
  void ***v91; // rdi
  void *v92; // rdx
  void **v93; // r13
  void **v94; // r14
  __int64 v95; // rax
  void **v96; // rbx
  void **v97; // r12
  void **v98; // r13
  void **v99; // rax
  void **v100; // rbx
  unsigned __int64 v103; // [rsp+8h] [rbp-D0h]
  __m128i v104; // [rsp+10h] [rbp-C8h] BYREF
  bool v105; // [rsp+27h] [rbp-B1h]
  __int64 v106; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v107; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v108; // [rsp+38h] [rbp-A0h] BYREF
  void ***v109; // [rsp+40h] [rbp-98h]
  unsigned __int64 v110; // [rsp+48h] [rbp-90h] BYREF
  void **v111; // [rsp+50h] [rbp-88h]
  __int64 v112; // [rsp+58h] [rbp-80h]
  void *v113; // [rsp+60h] [rbp-78h] BYREF
  void *v114; // [rsp+68h] [rbp-70h]
  __int64 v115; // [rsp+70h] [rbp-68h]
  void **v116; // [rsp+80h] [rbp-58h] BYREF
  void *v117; // [rsp+88h] [rbp-50h] BYREF
  void *v118; // [rsp+90h] [rbp-48h]
  void *v119; // [rsp+98h] [rbp-40h]

  v2 = a2;
  v3 = *(void ****)(a1 + 24);
  v4 = v3[5];
  v5 = v3[4];
  v6 = (char *)v4 - (char *)v5;
  v105 = (*((_BYTE *)v3 + 625) & 2) != 0;
  v7 = 0xCCCCCCCCCCCCCCCDLL * (v4 - v5);
  if ( v7 )
  {
    if ( v7 > 0x666666666666666LL )
      goto LABEL_75;
    v8 = operator new(v6);
    v4 = v3[5];
    v5 = v3[4];
    v103 = v8;
  }
  else
  {
    v103 = 0;
  }
  v107 = v103 + v6;
  if ( v4 == v5 )
  {
    v108 = v103;
  }
  else
  {
    v9 = v5;
    v10 = (_QWORD *)v103;
    do
    {
      v11 = v10 + 2;
      v12 = v10;
      v9 += 5;
      v10 += 5;
      *(v10 - 5) = v11;
      sub_12DB130(v12, *(v9 - 5), (__int64)*(v9 - 4) + (_QWORD)*(v9 - 5));
      *((_DWORD *)v10 - 2) = *((_DWORD *)v9 - 2);
      v13 = *((_BYTE *)v9 - 4) & 1 | *((_BYTE *)v10 - 4) & 0xFE;
      *((_BYTE *)v10 - 4) = v13;
      *((_BYTE *)v10 - 4) = *((_BYTE *)v9 - 4) & 2 | v13 & 0xFD;
    }
    while ( v4 != v9 );
    v108 = v103 + 8 * ((unsigned __int64)((char *)(v4 - 5) - (char *)v5) >> 3) + 40;
  }
  v14 = *(_QWORD **)(a1 + 24);
  v15 = v14[8];
  v16 = v14[7];
  v17 = v15 - v16;
  v18 = 0xCCCCCCCCCCCCCCCDLL * ((v15 - v16) >> 3);
  if ( v18 )
  {
    if ( v18 <= 0x666666666666666LL )
    {
      v19 = operator new(v14[8] - v16);
      v15 = v14[8];
      v16 = v14[7];
      v104.m128i_i64[0] = v19;
      goto LABEL_11;
    }
LABEL_75:
    std::__throw_bad_alloc();
  }
  v104.m128i_i64[0] = 0;
LABEL_11:
  v106 = v104.m128i_i64[0] + v17;
  if ( v15 == v16 )
  {
    v110 = v104.m128i_i64[0];
  }
  else
  {
    v109 = v3;
    v20 = v16;
    v21 = v16;
    v22 = v104.m128i_i64[0];
    do
    {
      v23 = v22 + 16;
      v24 = (_QWORD *)v22;
      v20 += 40;
      v22 += 40;
      *(_QWORD *)(v22 - 40) = v23;
      sub_12DB130(v24, *(_BYTE **)(v20 - 40), *(_QWORD *)(v20 - 40) + *(_QWORD *)(v20 - 32));
      *(_BYTE *)(v22 - 8) = *(_BYTE *)(v20 - 8);
    }
    while ( v15 != v20 );
    v25 = v21;
    v2 = a2;
    v3 = v109;
    v110 = v104.m128i_i64[0] + 8 * ((unsigned __int64)(v15 - 40 - v25) >> 3) + 40;
  }
  v26 = (__int64 *)(*(_QWORD *)(a1 + 24) + 600LL);
  v109 = &v116;
  v116 = (void **)v26;
  sub_C23620((__int64)&v117, v26);
  v27 = *(_QWORD *)(a1 + 24);
  v28 = v27 + 176;
  sub_9EE8A0(v27, v2);
  sub_12DCD30(v27 + 32, (__int64 *)(v2 + 32));
  sub_12DD050(v27 + 56, (__int64 *)(v2 + 56));
  sub_9EE8A0(v27 + 80, v2 + 80);
  sub_9EE8A0(v27 + 112, v2 + 112);
  sub_9EE8A0(v27 + 144, v2 + 144);
  if ( v27 + 176 == v2 + 176 )
    goto LABEL_34;
  v29 = *(_QWORD **)(v27 + 192);
  v30 = v27 + 184;
  v113 = v29;
  v31 = *(_QWORD **)(v27 + 208);
  v115 = v27 + 176;
  v114 = v31;
  if ( !v29 )
  {
    v114 = nullptr;
    *(_QWORD *)(v27 + 192) = 0;
    *(_QWORD *)(v27 + 200) = v30;
    *(_QWORD *)(v27 + 208) = v30;
    v33 = *(int **)(v2 + 192);
    *(_QWORD *)(v27 + 216) = 0;
    if ( v33 )
      goto LABEL_20;
LABEL_34:
    v111 = &v113;
    goto LABEL_35;
  }
  v32 = (void *)v31[2];
  v29[1] = 0;
  if ( v32 )
    v114 = v32;
  *(_QWORD *)(v27 + 192) = 0;
  *(_QWORD *)(v27 + 200) = v30;
  *(_QWORD *)(v27 + 208) = v30;
  v33 = *(int **)(v2 + 192);
  *(_QWORD *)(v27 + 216) = 0;
  if ( !v33 )
  {
    v112 = v27;
    v39 = v29;
    v40 = v28;
    v111 = &v113;
    while ( 1 )
    {
LABEL_28:
      sub_12DC6A0(v40, (_QWORD *)v39[3]);
      v41 = (_QWORD *)v39[8];
      v42 = (_QWORD *)v39[2];
      if ( v41 != v39 + 10 )
        operator delete(v41);
      v43 = (_QWORD *)v39[4];
      if ( v43 == v39 + 6 )
      {
        operator delete(v39);
        if ( !v42 )
        {
LABEL_50:
          v27 = v112;
          goto LABEL_35;
        }
      }
      else
      {
        operator delete(v43);
        operator delete(v39);
        if ( !v42 )
          goto LABEL_50;
      }
      v39 = v42;
    }
  }
LABEL_20:
  v111 = &v113;
  v34 = sub_12DE4A0(v27 + 176, v33, v30, &v113);
  for ( i = v34; *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 16) )
    ;
  *(_QWORD *)(v27 + 200) = i;
  for ( j = v34; *(_QWORD *)(j + 24); j = *(_QWORD *)(j + 24) )
    ;
  v37 = *(_QWORD *)(v2 + 216);
  *(_QWORD *)(v27 + 208) = j;
  *(_QWORD *)(v27 + 192) = v34;
  v38 = v113;
  *(_QWORD *)(v27 + 216) = v37;
  if ( v38 )
  {
    v112 = v27;
    v39 = v38;
    v40 = v115;
    goto LABEL_28;
  }
LABEL_35:
  sub_11189B0(v27 + 224, (__int64 *)(v2 + 224));
  sub_9EE8A0(v27 + 248, v2 + 248);
  v44 = *(_BYTE *)(v2 + 280) & 1 | *(_BYTE *)(v27 + 280) & 0xFE;
  *(_BYTE *)(v27 + 280) = v44;
  v45 = *(_BYTE *)(v2 + 280) & 2 | v44 & 0xFD;
  *(_BYTE *)(v27 + 280) = v45;
  v46 = *(_BYTE *)(v2 + 280) & 4 | v45 & 0xFB;
  *(_BYTE *)(v27 + 280) = v46;
  v47 = *(_BYTE *)(v2 + 280) & 8 | v46 & 0xF7;
  *(_BYTE *)(v27 + 280) = v47;
  *(_BYTE *)(v27 + 280) = *(_BYTE *)(v2 + 280) & 0x10 | v47 & 0xEF;
  *(_DWORD *)(v27 + 284) = *(_DWORD *)(v2 + 284);
  *(_DWORD *)(v27 + 288) = *(_DWORD *)(v2 + 288);
  *(_QWORD *)(v27 + 296) = *(_QWORD *)(v2 + 296);
  if ( v2 + 304 != v27 + 304 )
  {
    v48 = *(void ***)(v27 + 304);
    v49 = *(unsigned int *)(v27 + 320);
    v50 = 16 * v49;
    v51 = &v48[2 * v49];
    if ( (_DWORD)v49 )
    {
      do
      {
        while ( 1 )
        {
          v52 = *v48;
          if ( (char *)*v48 + 4096 != nullptr && (char *)*v48 + 0x2000 != nullptr )
          {
            if ( v52 )
              break;
          }
          v48 += 2;
          if ( v51 == v48 )
            goto LABEL_40;
        }
        operator delete[](v52);
        v48 += 2;
      }
      while ( v48 != v51 );
LABEL_40:
      v48 = *(void ***)(v27 + 304);
      v50 = 16LL * *(unsigned int *)(v27 + 320);
    }
    operator delete(v48, v50, 8);
    v57 = *(unsigned int *)(v2 + 320);
    *(_DWORD *)(v27 + 320) = v57;
    if ( (_DWORD)v57 )
    {
      v58 = sub_22300B0(16 * v57, 8, v53, v54, v55, v56);
      v59 = *(_DWORD *)(v2 + 312);
      v60 = *(unsigned int *)(v27 + 320);
      *(_QWORD *)(v27 + 304) = v58;
      v61 = *(_QWORD *)(v2 + 304);
      *(_DWORD *)(v27 + 312) = v59;
      *(_DWORD *)(v27 + 316) = *(_DWORD *)(v2 + 316);
      if ( v60 )
      {
        v112 = v27;
        v62 = v58;
        v63 = v58 + 16 * v60;
        do
        {
          v66 = *(unsigned int *)(v61 + 8);
          *(_DWORD *)(v62 + 8) = v66;
          *(_DWORD *)(v62 + 12) = *(_DWORD *)(v61 + 12);
          v67 = *(const void **)v61;
          if ( *(_QWORD *)v61 == -8192 || v67 == (const void *)-4096LL )
          {
            *(_QWORD *)v62 = v67;
          }
          else
          {
            v64 = (void *)operator new[](v66);
            v65 = *(unsigned int *)(v62 + 8);
            *(_QWORD *)v62 = v64;
            memcpy(v64, *(const void **)v61, v65);
          }
          v62 += 16;
          v61 += 16;
        }
        while ( v63 != v62 );
        v27 = v112;
      }
    }
    else
    {
      *(_QWORD *)(v27 + 304) = 0;
      *(_QWORD *)(v27 + 312) = 0;
    }
  }
  v104 = (__m128i)_mm_loadh_ps((const double *)&v110);
  sub_12E0E10(v27 + 328, v2 + 328);
  sub_11189B0(v27 + 600, (__int64 *)(v2 + 600));
  v68 = *(_BYTE *)(v2 + 624) & 1 | *(_BYTE *)(v27 + 624) & 0xFE;
  *(_BYTE *)(v27 + 624) = v68;
  v69 = *(_BYTE *)(v2 + 624) & 2 | v68 & 0xFD;
  *(_BYTE *)(v27 + 624) = v69;
  v70 = *(_BYTE *)(v2 + 624) & 4 | v69 & 0xFB;
  *(_BYTE *)(v27 + 624) = v70;
  v71 = *(_BYTE *)(v2 + 624) & 8 | v70 & 0xF7;
  *(_BYTE *)(v27 + 624) = v71;
  v72 = *(_BYTE *)(v2 + 624) & 0x10 | v71 & 0xEF;
  *(_BYTE *)(v27 + 624) = v72;
  v73 = *(_BYTE *)(v2 + 624) & 0x20 | v72 & 0xDF;
  *(_BYTE *)(v27 + 624) = v73;
  v74 = *(_BYTE *)(v2 + 624) & 0x40 | v73 & 0xBF;
  *(_BYTE *)(v27 + 624) = v74;
  *(_BYTE *)(v27 + 624) = *(_BYTE *)(v2 + 624) & 0x80 | v74 & 0x7F;
  v75 = *(_BYTE *)(v2 + 625) & 1 | *(_BYTE *)(v27 + 625) & 0xFE;
  *(_BYTE *)(v27 + 625) = v75;
  v76 = *(_BYTE *)(v2 + 625) & 2 | v75 & 0xFD;
  *(_BYTE *)(v27 + 625) = v76;
  v77 = *(_BYTE *)(v2 + 625) & 4 | v76 & 0xFB;
  *(_BYTE *)(v27 + 625) = v77;
  v78 = *(_BYTE *)(v2 + 625) & 8 | v77 & 0xF7;
  *(_BYTE *)(v27 + 625) = v78;
  v79 = *(_BYTE *)(v2 + 625) & 0x10 | v78 & 0xEF;
  *(_BYTE *)(v27 + 625) = v79;
  v80 = *(_BYTE *)(v2 + 625) & 0x20 | v79 & 0xDF;
  *(_BYTE *)(v27 + 625) = v80;
  v81 = *(_BYTE *)(v2 + 625) & 0x40 | v80 & 0xBF;
  *(_BYTE *)(v27 + 625) = v81;
  *(_BYTE *)(v27 + 625) = *(_BYTE *)(v2 + 625) & 0x80 | v81 & 0x7F;
  v82 = *(_BYTE *)(v2 + 626) & 1 | *(_BYTE *)(v27 + 626) & 0xFE;
  *(_BYTE *)(v27 + 626) = v82;
  v83 = *(_BYTE *)(v2 + 626) & 2 | v82 & 0xFD;
  *(_BYTE *)(v27 + 626) = v83;
  v84 = *(_BYTE *)(v2 + 626) & 4 | v83 & 0xFB;
  *(_BYTE *)(v27 + 626) = v84;
  v85 = *(_BYTE *)(v2 + 626) & 8 | v84 & 0xF7;
  *(_BYTE *)(v27 + 626) = v85;
  *(_BYTE *)(v27 + 626) = *(_BYTE *)(v2 + 626) & 0x10 | v85 & 0xEF;
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + 625LL) = (2 * v105) | *(_BYTE *)(*(_QWORD *)(a1 + 24) + 625LL) & 0xFD;
  v86 = v116;
  v87 = *v116;
  *v116 = nullptr;
  v113 = v87;
  v88 = v86[1];
  v86[1] = nullptr;
  v114 = v88;
  v89 = v86[2];
  v86[2] = nullptr;
  v115 = (__int64)v89;
  *v86 = v117;
  v117 = nullptr;
  v90 = v86[1];
  v91 = (void ***)v111;
  v86[1] = v118;
  v118 = v90;
  v92 = v86[2];
  v86[2] = v119;
  v119 = v92;
  sub_9B4A30(v91);
  sub_9B4A30(v109 + 1);
  v93 = (void **)v14[7];
  v94 = (void **)v14[8];
  v95 = v106;
  v96 = v93;
  *(__m128i *)(v14 + 7) = _mm_load_si128(&v104);
  for ( v14[9] = v95; v94 != v96; v96 += 5 )
  {
    while ( *v96 != v96 + 2 )
    {
      operator delete(*v96);
      v96 += 5;
      if ( v94 == v96 )
        goto LABEL_55;
    }
  }
LABEL_55:
  if ( v93 )
    operator delete(v93);
  v97 = v3[4];
  v98 = v3[5];
  v99 = (void **)v107;
  v100 = v97;
  *((__m128 *)v3 + 2) = _mm_loadh_ps((const double *)&v108);
  for ( v3[6] = v99; v98 != v100; v100 += 5 )
  {
    while ( *v100 != v100 + 2 )
    {
      operator delete(*v100);
      v100 += 5;
      if ( v98 == v100 )
        goto LABEL_60;
    }
  }
LABEL_60:
  if ( v97 )
    operator delete(v97);
  return 0;
}
