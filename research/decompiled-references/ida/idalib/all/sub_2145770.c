__int64 __fastcall sub_2145770(__int64 a1, void **a2)
{
  int *v3; // rax
  unsigned int v4; // ecx
  __int64 v5; // r9
  __int64 v6; // r15
  int *v7; // rbp
  int v8; // edx
  __int64 v9; // rdx
  int v10; // eax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r14
  __m128i v13; // xmm0
  bool v14; // cc
  void *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  int *v18; // rax
  void *v19; // rdi
  __int64 v20; // r8
  _BYTE *v21; // rbp
  int *v22; // rsi
  __m128i v23; // xmm6
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned int v27; // ecx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rbx
  _DWORD *v33; // rcx
  unsigned __int64 v34; // rsi
  _DWORD *v35; // r13
  int v36; // edx
  unsigned __int64 v37; // r14
  __m128i v38; // xmm2
  void *v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rdx
  void *v43; // rdi
  __int64 v44; // rsi
  unsigned __int64 v45; // r15
  __int64 v46; // rdx
  unsigned __int64 v47; // rsi
  __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  __int64 v50; // rdx
  __m128i v51; // xmm6
  int v52; // esi
  _DWORD *v53; // rsi
  __int64 v54; // rcx
  _DWORD *v55; // r13
  __int64 v56; // rbx
  __int64 v57; // r14
  unsigned __int64 v58; // rbp
  __m128i v59; // xmm3
  void *v60; // rdi
  __int64 v61; // rcx
  __m128i v62; // xmm7
  unsigned int v63; // eax
  __int64 v64; // rsi
  unsigned __int64 v65; // r14
  __int64 v66; // rax
  __int64 v67; // rax
  unsigned __int64 v68; // rdi
  _BYTE *v69; // r8
  __int64 v70; // rax
  __m128i v71; // xmm4
  int v72; // edx
  int *v73; // rdi
  __int64 v74; // rsi
  int *v75; // rbp
  int *v76; // rax
  unsigned __int64 v77; // rdx
  __m128i v78; // xmm1
  void *v79; // rdi
  __int64 v80; // rsi
  __m128i v81; // xmm5
  unsigned int v82; // eax
  __m128i v83; // xmm7
  unsigned int v84; // eax
  __int64 v85; // rax
  unsigned int v86; // edx
  __int64 v87; // rax
  void **v88; // rsi
  __int64 v89; // rdx
  unsigned int v90; // ecx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rdi
  __int64 (*v97)(); // rdx
  __int64 (*v98)(); // rax
  __int64 result; // rax
  _DWORD **v100; // rdi
  __int64 v101; // r14
  __int64 v102; // rdi
  __int64 v103; // r14
  __m128i v104; // xmm7
  __m128i v105; // xmm4
  unsigned int v106; // edx
  __int64 v107; // rdx
  __int64 v108; // rdx
  void (*v109)(void); // rax
  _BYTE *v110; // rbp
  const char *v111; // rax
  char v112; // r14
  _BYTE *v113; // r13
  __int64 v114; // [rsp+8h] [rbp-110h]
  int *v115; // [rsp+8h] [rbp-110h]
  unsigned __int8 v116; // [rsp+8h] [rbp-110h]
  unsigned __int8 v117; // [rsp+8h] [rbp-110h]
  unsigned __int64 v118; // [rsp+10h] [rbp-108h]
  unsigned __int64 v119; // [rsp+18h] [rbp-100h]
  _BYTE *v120; // [rsp+18h] [rbp-100h]
  __int64 v121; // [rsp+20h] [rbp-F8h]
  int *v122; // [rsp+20h] [rbp-F8h]
  int v123; // [rsp+28h] [rbp-F0h]
  _BYTE *v124; // [rsp+28h] [rbp-F0h]
  __int64 v125; // [rsp+30h] [rbp-E8h]
  __int64 v126; // [rsp+38h] [rbp-E0h]
  void **v127; // [rsp+48h] [rbp-D0h] BYREF
  __m128 v128; // [rsp+50h] [rbp-C8h] BYREF
  __m128 v129; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v130; // [rsp+70h] [rbp-A8h] BYREF
  int v131; // [rsp+80h] [rbp-98h] BYREF
  __m128i v132; // [rsp+88h] [rbp-90h] BYREF
  void *v133; // [rsp+98h] [rbp-80h] BYREF
  unsigned int v134; // [rsp+A0h] [rbp-78h]
  _BYTE v135[24]; // [rsp+B0h] [rbp-68h] BYREF
  void *v136; // [rsp+C8h] [rbp-50h] BYREF
  unsigned int v137; // [rsp+D0h] [rbp-48h]

  v125 = (__int64)a2;
  v3 = (int *)sub_2153C00(a1);
  v6 = *(_QWORD *)(a1 + 912);
  v7 = *(int **)v6;
  v123 = *v3;
  v8 = **(_DWORD **)v6;
  if ( v8 == 9 )
  {
    if ( *(_QWORD *)(sub_2153C00(a1) + 16)
      && **(_BYTE **)(sub_2153C00(a1) + 8) != 13
      && **(_BYTE **)(sub_2153C00(a1) + 8) != 10 )
    {
LABEL_116:
      sub_2132C70(a1, (__m128 *)a2);
      return 0;
    }
LABEL_114:
    v109 = *(void (**)(void))(**(_QWORD **)(a1 + 920) + 160LL);
    if ( v109 != nullsub_1403 )
      v109();
    goto LABEL_116;
  }
  while ( v8 == 11 )
  {
    while ( 1 )
    {
      v9 = *(unsigned int *)(v6 + 8);
      *(_BYTE *)(v6 + 129) = 0;
      v10 = v9;
      v11 = 40 * v9;
      v12 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v11 - 40) >> 3);
      if ( v11 > 0x28 )
      {
        do
        {
          v13 = _mm_loadu_si128((const __m128i *)v7 + 3);
          v14 = (unsigned int)v7[8] <= 0x40;
          *v7 = v7[10];
          *(__m128i *)(v7 + 2) = v13;
          if ( !v14 )
          {
            v15 = *((void **)v7 + 3);
            if ( v15 )
              operator delete[](v15);
          }
          v16 = *((_QWORD *)v7 + 8);
          v7 += 10;
          *((_QWORD *)v7 - 2) = v16;
          LODWORD(v16) = v7[8];
          v7[8] = 0;
          *(v7 - 2) = v16;
          --v12;
        }
        while ( v12 );
        v10 = *(_DWORD *)(v6 + 8);
        v7 = *(int **)v6;
      }
      v17 = (unsigned int)(v10 - 1);
      *(_DWORD *)(v6 + 8) = v17;
      v18 = &v7[10 * v17];
      if ( (unsigned int)v18[8] > 0x40 )
      {
        v19 = *((void **)v18 + 3);
        if ( v19 )
          operator delete[](v19);
      }
      v20 = *(unsigned int *)(v6 + 8);
      if ( !(_DWORD)v20 )
        break;
      v6 = *(_QWORD *)(a1 + 912);
      v7 = *(int **)v6;
      v8 = **(_DWORD **)v6;
      if ( v8 != 11 )
        goto LABEL_14;
    }
    sub_2127580((__m128 *)v135, v6, v11, v4, v20, v5);
    v64 = *(unsigned int *)(v6 + 8);
    v65 = *(_QWORD *)v6;
    v66 = 5 * v64;
    a2 = (void **)(v64 + 1);
    v67 = 8 * v66;
    v68 = *(_QWORD *)v6 + v67;
    if ( *(_QWORD *)v6 == v68 )
    {
      if ( (unsigned __int64)a2 > *(unsigned int *)(v6 + 12) )
      {
        sub_2131530(v6, (__int64)a2);
        v68 = *(_QWORD *)v6 + 40LL * *(unsigned int *)(v6 + 8);
      }
      v83 = _mm_loadu_si128((const __m128i *)&v135[8]);
      *(_DWORD *)v68 = *(_DWORD *)v135;
      v84 = v137;
      *(__m128i *)(v68 + 8) = v83;
      *(_DWORD *)(v68 + 32) = v84;
      if ( v84 > 0x40 )
      {
        a2 = &v136;
        sub_2205510(v68 + 24);
      }
      else
      {
        *(_QWORD *)(v68 + 24) = v136;
      }
      ++*(_DWORD *)(v6 + 8);
    }
    else
    {
      v122 = (int *)v135;
      v69 = v135;
      if ( (unsigned __int64)a2 > *(unsigned int *)(v6 + 12) )
      {
        if ( (unsigned __int64)v135 < v65 || v68 <= (unsigned __int64)v135 )
        {
          sub_2131530(v6, (__int64)a2);
          v65 = *(_QWORD *)v6;
          v69 = v135;
          v67 = 40LL * *(unsigned int *)(v6 + 8);
          v68 = *(_QWORD *)v6 + v67;
        }
        else
        {
          sub_2131530(v6, (__int64)a2);
          v110 = &v135[-v65];
          v65 = *(_QWORD *)v6;
          v69 = &v110[*(_QWORD *)v6];
          v67 = 40LL * *(unsigned int *)(v6 + 8);
          v122 = (int *)v69;
          v68 = *(_QWORD *)v6 + v67;
        }
      }
      v70 = v65 + v67 - 40;
      v71 = _mm_loadu_si128((const __m128i *)(v70 + 8));
      *(_DWORD *)v68 = *(_DWORD *)v70;
      v72 = *(_DWORD *)(v70 + 32);
      *(__m128i *)(v68 + 8) = v71;
      *(_DWORD *)(v68 + 32) = v72;
      *(_QWORD *)(v68 + 24) = *(_QWORD *)(v70 + 24);
      v73 = *(int **)v6;
      *(_DWORD *)(v70 + 32) = 0;
      v74 = *(unsigned int *)(v6 + 8);
      v75 = &v73[10 * v74];
      v76 = v75 - 10;
      v5 = (__int64)v75 - v65 - 40;
      v77 = 0xCCCCCCCCCCCCCCCDLL * (v5 >> 3);
      if ( v5 > 0 )
      {
        do
        {
          v76 -= 10;
          v75 -= 10;
          v78 = _mm_loadu_si128((const __m128i *)(v76 + 2));
          v14 = (unsigned int)v75[8] <= 0x40;
          *v75 = *v76;
          *(__m128i *)(v75 + 2) = v78;
          if ( !v14 )
          {
            v79 = *((void **)v75 + 3);
            if ( v79 )
            {
              v120 = v69;
              v118 = v77;
              v115 = v76;
              operator delete[](v79);
              v69 = v120;
              v77 = v118;
              v76 = v115;
            }
          }
          *((_QWORD *)v75 + 3) = *((_QWORD *)v76 + 3);
          v75[8] = v76[8];
          v76[8] = 0;
          --v77;
        }
        while ( v77 );
        LODWORD(v74) = *(_DWORD *)(v6 + 8);
        v73 = *(int **)v6;
      }
      v4 = (unsigned int)v122;
      v80 = (unsigned int)(v74 + 1);
      *(_DWORD *)(v6 + 8) = v80;
      if ( (unsigned __int64)v122 >= v65 && &v73[10 * v80] > v122 )
        v69 += 40;
      a2 = (void **)(v69 + 24);
      v14 = *(_DWORD *)(v65 + 32) <= 0x40u;
      v81 = _mm_loadu_si128((const __m128i *)(v69 + 8));
      *(_DWORD *)v65 = *(_DWORD *)v69;
      *(__m128i *)(v65 + 8) = v81;
      if ( v14 && (v82 = *((_DWORD *)v69 + 8), v82 <= 0x40) )
      {
        v107 = *((_QWORD *)v69 + 3);
        *(_DWORD *)(v65 + 32) = v82;
        *(_QWORD *)(v65 + 24) = v107;
      }
      else
      {
        sub_22056A0(v65 + 24, a2);
      }
    }
    if ( v137 > 0x40 && v136 )
      operator delete[](v136);
    v6 = *(_QWORD *)(a1 + 912);
    v7 = *(int **)v6;
    v8 = **(_DWORD **)v6;
  }
LABEL_14:
  if ( v8 == 9 && (**(_BYTE **)(sub_2153C00(a1) + 8) == 10 || **(_BYTE **)(sub_2153C00(a1) + 8) == 13) )
    goto LABEL_114;
  if ( v123 != 11 )
  {
    v85 = sub_2153C00(a1);
    v131 = *(_DWORD *)v85;
    v86 = *(_DWORD *)(v85 + 32);
    v132 = _mm_loadu_si128((const __m128i *)(v85 + 8));
    v134 = v86;
    if ( v86 > 0x40 )
      sub_2205510(&v133);
    else
      v133 = *(void **)(v85 + 24);
    v87 = sub_2124B50((__int64)&v131);
    v88 = (void **)&v128;
    v128 = 0u;
    v127 = (void **)v87;
    if ( (unsigned __int8)sub_213B1B0(a1, &v128, v89, v90, v91, v92) )
    {
      v111 = "The HLASM Label has to be an Identifier";
    }
    else
    {
      v96 = *(_QWORD *)(a1 + 8);
      v97 = sub_2128DA0;
      v98 = *(__int64 (**)())(*(_QWORD *)v96 + 152LL);
      if ( v98 != sub_2128DA0
        && (v88 = (void **)&v131, !((unsigned __int8 (__fastcall *)(__int64, int *))v98)(v96, &v131))
        || !*(_BYTE *)(a1 + 861) && (unsigned __int8)sub_2129170(a1) )
      {
        if ( v134 > 0x40 && v133 )
          operator delete[](v133);
        goto LABEL_82;
      }
      while ( 1 )
      {
        v100 = *(_DWORD ***)(a1 + 912);
        if ( **v100 != 11 )
          break;
        sub_21318A0((__int64)v100, (__int64)v88, (__int64)v97, v93, v94, v95);
      }
      if ( *(_DWORD *)sub_2153C00(a1) != 9 )
      {
        v101 = *(_QWORD *)(a1 + 16);
        if ( *(_BYTE *)(*(_QWORD *)(v101 + 152) + 22LL) )
        {
          v21 = v135;
          sub_2246780(&v129, &v128);
          LOWORD(v137) = 261;
          *(__m128 *)v135 = v129;
          v103 = sub_21093A0(v101, (void ***)v135);
          if ( (__int64 *)v129.m128_u64[0] != &v130 )
            operator delete((void *)v129.m128_u64[0]);
        }
        else
        {
          v102 = *(_QWORD *)(a1 + 16);
          v21 = v135;
          LOWORD(v137) = 261;
          *(__m128 *)v135 = v128;
          v103 = sub_21093A0(v102, (void ***)v135);
        }
        (*(void (__fastcall **)(_QWORD, __int64, void **))(**(_QWORD **)(a1 + 920) + 208LL))(
          *(_QWORD *)(a1 + 920),
          v103,
          v127);
        if ( (unsigned __int8)sub_2130D40(a1) )
          sub_210BBD0(v103, *(_QWORD **)(a1 + 24), *(_QWORD *)(a1 + 32), (__int64 *)&v127);
        if ( v134 > 0x40 && v133 )
          operator delete[](v133);
        goto LABEL_17;
      }
      v111 = "Cannot have just a label for an HLASM inline asm statement";
    }
    v88 = v127;
    v21 = v135;
    LOWORD(v137) = 259;
    *(_QWORD *)v135 = v111;
    v112 = sub_2153E90(a1, v127, v135, 0, 0);
    if ( v134 > 0x40 && v133 )
      operator delete[](v133);
    if ( !v112 )
      goto LABEL_17;
LABEL_82:
    sub_21319B0(a1, v88, (unsigned __int64)v97, v93, v94, v95);
    return 1;
  }
  v21 = v135;
LABEL_17:
  v22 = **(int ***)(a1 + 912);
  v23 = _mm_loadu_si128((const __m128i *)(v22 + 2));
  v131 = *v22;
  v24 = v22[8];
  v132 = v23;
  v134 = v24;
  if ( v24 > 0x40 )
    sub_2205510(&v133);
  else
    v133 = *((void **)v22 + 3);
  v25 = sub_2124B50((__int64)&v131);
  v129 = 0u;
  v126 = v25;
  if ( (unsigned __int8)sub_213B1B0(a1, &v129, v26, v27, v28, v29) )
  {
    LOWORD(v137) = 259;
    *(_QWORD *)v135 = "unexpected token at start of statement";
    result = sub_2153E90(a1, v126, v135, 0, 0);
  }
  else
  {
    v114 = a1;
    while ( 1 )
    {
      v32 = *(_QWORD *)(v114 + 912);
      v33 = *(_DWORD **)v32;
      if ( **(_DWORD **)v32 != 11 )
        break;
      v34 = *(unsigned int *)(v32 + 8);
      *(_BYTE *)(v32 + 129) = 0;
      v35 = v33 + 10;
      v36 = v34;
      v34 *= 40LL;
      v37 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v34 - 40) >> 3);
      if ( v34 > 0x28 )
      {
        do
        {
          v38 = _mm_loadu_si128((const __m128i *)(v35 + 2));
          v14 = *(v35 - 2) <= 0x40u;
          *(v35 - 10) = *v35;
          *((__m128i *)v35 - 2) = v38;
          if ( !v14 )
          {
            v39 = *((void **)v35 - 2);
            if ( v39 )
              operator delete[](v39);
          }
          v40 = *((_QWORD *)v35 + 3);
          v35 += 10;
          *((_QWORD *)v35 - 7) = v40;
          LODWORD(v40) = *(v35 - 2);
          *(v35 - 2) = 0;
          *(v35 - 12) = v40;
          --v37;
        }
        while ( v37 );
        v36 = *(_DWORD *)(v32 + 8);
        v33 = *(_DWORD **)v32;
      }
      v41 = (unsigned int)(v36 - 1);
      *(_DWORD *)(v32 + 8) = v41;
      v42 = (__int64)&v33[10 * v41];
      if ( *(_DWORD *)(v42 + 32) > 0x40u )
      {
        v43 = *(void **)(v42 + 24);
        if ( v43 )
          operator delete[](v43);
      }
      if ( !*(_DWORD *)(v32 + 8) )
      {
        sub_2127580((__m128 *)v21, v32, v42, (unsigned int)v33, v30, v31);
        v44 = *(unsigned int *)(v32 + 8);
        v45 = *(_QWORD *)v32;
        v46 = 5 * v44;
        v47 = v44 + 1;
        v48 = 8 * v46;
        v49 = *(_QWORD *)v32 + v48;
        if ( *(_QWORD *)v32 == v49 )
        {
          if ( v47 > *(unsigned int *)(v32 + 12) )
          {
            sub_2131530(v32, v47);
            v49 = *(_QWORD *)v32 + 40LL * *(unsigned int *)(v32 + 8);
          }
          v105 = _mm_loadu_si128((const __m128i *)(v21 + 8));
          *(_DWORD *)v49 = *(_DWORD *)v21;
          v106 = *((_DWORD *)v21 + 8);
          *(__m128i *)(v49 + 8) = v105;
          *(_DWORD *)(v49 + 32) = v106;
          if ( v106 > 0x40 )
            sub_2205510(v49 + 24);
          else
            *(_QWORD *)(v49 + 24) = *((_QWORD *)v21 + 3);
          ++*(_DWORD *)(v32 + 8);
        }
        else
        {
          v119 = (unsigned __int64)v21;
          v31 = (__int64)v21;
          if ( v47 > *(unsigned int *)(v32 + 12) )
          {
            if ( (unsigned __int64)v21 < v45 || v49 <= (unsigned __int64)v21 )
            {
              sub_2131530(v32, v47);
              v45 = *(_QWORD *)v32;
              v31 = (__int64)v21;
              v48 = 40LL * *(unsigned int *)(v32 + 8);
              v49 = *(_QWORD *)v32 + v48;
            }
            else
            {
              sub_2131530(v32, v47);
              v113 = &v21[-v45];
              v45 = *(_QWORD *)v32;
              v31 = (__int64)&v113[*(_QWORD *)v32];
              v48 = 40LL * *(unsigned int *)(v32 + 8);
              v119 = v31;
              v49 = *(_QWORD *)v32 + v48;
            }
          }
          v50 = v45 + v48 - 40;
          v51 = _mm_loadu_si128((const __m128i *)(v50 + 8));
          *(_DWORD *)v49 = *(_DWORD *)v50;
          v52 = *(_DWORD *)(v50 + 32);
          *(__m128i *)(v49 + 8) = v51;
          *(_DWORD *)(v49 + 32) = v52;
          *(_QWORD *)(v49 + 24) = *(_QWORD *)(v50 + 24);
          v53 = *(_DWORD **)v32;
          *(_DWORD *)(v50 + 32) = 0;
          v54 = *(unsigned int *)(v32 + 8);
          v55 = &v53[10 * v54];
          if ( (__int64)((__int64)v55 - v45 - 40) > 0 )
          {
            v121 = v32;
            v56 = (__int64)&v53[10 * v54 - 10];
            v57 = v31;
            v124 = v21;
            v58 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v56 - v45) >> 3);
            do
            {
              v56 -= 40;
              v55 -= 10;
              v59 = _mm_loadu_si128((const __m128i *)(v56 + 8));
              v14 = v55[8] <= 0x40u;
              *v55 = *(_DWORD *)v56;
              *(__m128i *)(v55 + 2) = v59;
              if ( !v14 )
              {
                v60 = *((void **)v55 + 3);
                if ( v60 )
                  operator delete[](v60);
              }
              *((_QWORD *)v55 + 3) = *(_QWORD *)(v56 + 24);
              v55[8] = *(_DWORD *)(v56 + 32);
              *(_DWORD *)(v56 + 32) = 0;
              --v58;
            }
            while ( v58 );
            v32 = v121;
            v21 = v124;
            v31 = v57;
            LODWORD(v54) = *(_DWORD *)(v121 + 8);
            v53 = *(_DWORD **)v121;
          }
          v61 = (unsigned int)(v54 + 1);
          *(_DWORD *)(v32 + 8) = v61;
          if ( v119 >= v45 && v119 < (unsigned __int64)&v53[10 * v61] )
            v31 += 40;
          v14 = *(_DWORD *)(v45 + 32) <= 0x40u;
          v62 = _mm_loadu_si128((const __m128i *)(v31 + 8));
          *(_DWORD *)v45 = *(_DWORD *)v31;
          *(__m128i *)(v45 + 8) = v62;
          if ( v14 && (v63 = *(_DWORD *)(v31 + 32), v63 <= 0x40) )
          {
            v108 = *(_QWORD *)(v31 + 24);
            *(_DWORD *)(v45 + 32) = v63;
            *(_QWORD *)(v45 + 24) = v108;
          }
          else
          {
            sub_22056A0(v45 + 24, v31 + 24);
          }
        }
        if ( v137 > 0x40 )
        {
          if ( v136 )
            operator delete[](v136);
        }
      }
    }
    v104 = _mm_loadu_si128(&v132);
    *(_DWORD *)v135 = v131;
    *(__m128i *)&v135[8] = v104;
    v137 = v134;
    if ( v134 > 0x40 )
      sub_2205510(v21 + 24);
    else
      v136 = v133;
    result = sub_2130E90(v114, v125, v129.m128_i64[0], v129.m128_i64[1], (int *)v21, v126);
    if ( v137 > 0x40 && v136 )
    {
      v116 = result;
      operator delete[](v136);
      result = v116;
    }
  }
  if ( v134 > 0x40 && v133 )
  {
    v117 = result;
    operator delete[](v133);
    return v117;
  }
  return result;
}
