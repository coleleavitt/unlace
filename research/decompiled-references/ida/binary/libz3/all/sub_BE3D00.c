__int64 __fastcall sub_BE3D00(__int64 a1, __int64 *a2, __int64 a3)
{
  char **exception; // rbp
  char **v4; // rbp
  unsigned int v8; // r13d
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // rax
  int *v14; // r8
  int v15; // edx
  int v16; // ecx
  int *v17; // rcx
  _QWORD *v18; // r15
  __int64 v19; // r13
  int v20; // eax
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 *v25; // rcx
  int v26; // r8d
  unsigned int v27; // edx
  __int64 *v28; // rsi
  __int64 v29; // rdx
  __int64 *v30; // rdi
  __int64 *v31; // rax
  __int64 v32; // rdx
  int v34; // edx
  __int64 v35; // rax
  int v36; // ecx
  __int64 v37; // rdx
  __int64 v38; // r12
  int v39; // eax
  __int64 *v40; // rax
  __int64 v41; // rbp
  __int64 v42; // r12
  __int64 v43; // r12
  unsigned __int64 v44; // r14
  __int64 v45; // rbx
  _QWORD *v46; // r15
  int v47; // eax
  _QWORD *v48; // rdx
  __int64 v49; // rax
  unsigned int v50; // eax
  __int64 v51; // rdx
  unsigned int v52; // eax
  unsigned int v53; // esi
  _QWORD *v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // r10
  char *v57; // rbx
  __int64 v58; // rax
  __int64 v59; // r9
  char *v60; // rax
  char *v61; // rdi
  unsigned __int64 v62; // rax
  __int64 v63; // r11
  char *v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rsi
  unsigned int v67; // eax
  size_t v68; // rsi
  unsigned int *v69; // rax
  __int64 v70; // rsi
  _QWORD *v71; // rax
  _QWORD *v72; // rsi
  int v73; // eax
  unsigned __int64 v74; // rax
  __int64 v75; // r11
  unsigned int v76; // ecx
  unsigned int v77; // r14d
  unsigned int v78; // edx
  unsigned int *v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rax
  int v82; // eax
  int v83; // eax
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rax
  _BYTE *v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // [rsp+8h] [rbp-120h]
  unsigned int v91; // [rsp+8h] [rbp-120h]
  __int64 v92; // [rsp+8h] [rbp-120h]
  __int64 v93; // [rsp+10h] [rbp-118h]
  __int64 v94; // [rsp+10h] [rbp-118h]
  char *v95; // [rsp+10h] [rbp-118h]
  _QWORD *v96; // [rsp+18h] [rbp-110h]
  char *v97; // [rsp+18h] [rbp-110h]
  __int64 v98; // [rsp+20h] [rbp-108h]
  __int64 v99[4]; // [rsp+40h] [rbp-E8h] BYREF
  void *v100; // [rsp+60h] [rbp-C8h]
  __int64 v101; // [rsp+68h] [rbp-C0h]
  _BYTE v102[184]; // [rsp+70h] [rbp-B8h] BYREF

  v8 = sub_B39350((__int64)a2, *(_DWORD *)(a1 + 8));
  v9 = sub_15D1F10(*a2);
  v10 = *(_QWORD *)(a1 + 200);
  v11 = v8;
  v12 = v9;
  v13 = v8;
  v14 = (int *)(v10 + 4LL * v8);
  v15 = *v14;
  if ( *v14 >= 0 )
  {
    v13 = v15;
    v16 = *(_DWORD *)(v10 + 4LL * v15);
    if ( v16 >= -1 )
    {
      if ( v16 != -1 )
      {
        do
        {
          v15 = v16;
          v16 = *(_DWORD *)(v10 + 4LL * v16);
        }
        while ( v16 >= 0 );
      }
      v17 = (int *)(v10 + 4LL * v8);
      do
      {
        *v17 = v15;
        v17 = (int *)(v10 + 4 * v13);
        v13 = *v17;
      }
      while ( (int)v13 >= 0 );
      v13 = v15;
    }
  }
  if ( *(_BYTE *)(a1 + 248) )
  {
    v18 = nullptr;
    v19 = sub_186B270(0x38u);
    v82 = *(_DWORD *)(a1 + 8);
    *(_QWORD *)v19 = &off_1C57F30;
    *(_DWORD *)(v19 + 8) = v82;
    *(_QWORD *)(v19 + 16) = v12;
    *(_QWORD *)(v19 + 24) = 0;
    *(_QWORD *)(v19 + 32) = 0;
    *(_BYTE *)(v19 + 40) = 1;
    *(_QWORD *)(v19 + 48) = 0;
    goto LABEL_11;
  }
  v18 = *(_QWORD **)(*(_QWORD *)(a1 + 184) + 8 * v13);
  if ( !v18 )
  {
    v34 = *v14;
    if ( *v14 >= 0 )
    {
      v35 = v34;
      v36 = *(_DWORD *)(v10 + 4LL * v34);
      v11 = v34;
      if ( v36 >= -1 )
      {
        if ( v36 != -1 )
        {
          do
          {
            v34 = v36;
            v36 = *(_DWORD *)(v10 + 4LL * v36);
          }
          while ( v36 >= 0 );
        }
        do
        {
          *v14 = v34;
          v14 = (int *)(v10 + 4 * v35);
          v35 = *v14;
        }
        while ( (int)v35 >= 0 );
        v11 = v34;
      }
    }
    v37 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * v11);
    if ( !v37 )
    {
      v85 = 0xFFFFFFFF0LL;
      v86 = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL);
      if ( v86 )
        v85 = 16LL * (unsigned int)(*(_DWORD *)(v86 - 4) - 1);
      v87 = (_BYTE *)(v85 + v86);
      if ( v87[8] != 1 )
        sub_A8ADA((__int64)"std::get: wrong index for variant");
      v88 = *(_QWORD *)v87;
      v89 = *(_QWORD *)(*(_QWORD *)v87 + 24LL);
      if ( !v89 || *(_DWORD *)(v89 + 24) == 2 )
      {
        v38 = sub_A6E8C0(a3, *a2, v88) | 1;
        *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * v11) = v38;
        goto LABEL_93;
      }
      v37 = sub_A6E590(a3);
      *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * v11) = v37;
    }
    v90 = v37;
    v38 = v37;
    if ( (v37 & 7) == 0 )
    {
      v19 = sub_186B270(0x38u);
      v39 = *(_DWORD *)(a1 + 8);
      *(_QWORD *)v19 = &off_1C57F30;
      *(_DWORD *)(v19 + 8) = v39;
      *(_QWORD *)(v19 + 16) = v12;
      *(_QWORD *)(v19 + 24) = 0;
      *(_QWORD *)(v19 + 32) = v90 & 0xFFFFFFFFFFFFFFF8LL;
      *(_BYTE *)(v19 + 40) = 0;
      *(_QWORD *)(v19 + 48) = 0;
      goto LABEL_11;
    }
LABEL_93:
    v19 = sub_186B270(0x38u);
    v83 = *(_DWORD *)(a1 + 8);
    *(_QWORD *)v19 = &off_1C57F30;
    *(_DWORD *)(v19 + 8) = v83;
    *(_QWORD *)(v19 + 16) = v12;
    *(_QWORD *)(v19 + 24) = 0;
    *(_QWORD *)(v19 + 32) = 0;
    *(_BYTE *)(v19 + 40) = 0;
    v84 = sub_186B270(0x28u);
    v18 = (_QWORD *)(v84 + 8);
    *(_BYTE *)(v84 + 8) = 1;
    *(_QWORD *)(v19 + 48) = v84 + 8;
    *(_QWORD *)(v84 + 16) = v38 & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)v84 = 0x100000002LL;
    goto LABEL_11;
  }
  v19 = sub_186B270(0x38u);
  v20 = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v19 + 16) = v12;
  v21 = v18[1];
  *(_QWORD *)v19 = &off_1C57F30;
  *(_DWORD *)(v19 + 8) = v20;
  *(_QWORD *)(v19 + 24) = 0;
  *(_QWORD *)(v19 + 32) = 0;
  *(_BYTE *)(v19 + 40) = 0;
  v22 = sub_186B270(0x28u);
  v18 = (_QWORD *)(v22 + 8);
  *(_BYTE *)(v22 + 8) = 0;
  *(_QWORD *)(v19 + 48) = v22 + 8;
  *(_QWORD *)(v22 + 16) = v21;
  *(_QWORD *)v22 = 0x100000002LL;
LABEL_11:
  v23 = a2[1];
  v24 = *(unsigned int *)(a1 + 216);
  v25 = *(__int64 **)(a1 + 208);
  v26 = *(_DWORD *)(*(_QWORD *)v23 + 12LL);
  v27 = v24 - 1;
  v24 *= 16;
  v28 = (__int64 *)((char *)v25 + v24);
  v29 = 16LL * (v26 & v27);
  v30 = &v25[(unsigned __int64)v29 / 8];
  if ( v29 == v24 )
  {
LABEL_83:
    if ( v25 == v30 )
      return v19;
    while ( 1 )
    {
      v81 = *v25;
      if ( (unsigned __int64)*v25 > 1 )
      {
        if ( *(_DWORD *)(*(_QWORD *)v81 + 12LL) == v26 && v23 == v81 )
        {
          v31 = v25;
          goto LABEL_29;
        }
      }
      else if ( !v81 )
      {
        return v19;
      }
      v25 += 2;
      if ( v30 == v25 )
        return v19;
    }
  }
  v31 = &v25[(unsigned __int64)v29 / 8];
  while ( 1 )
  {
    v32 = *v31;
    if ( (unsigned __int64)*v31 <= 1 )
    {
      if ( !v32 )
        return v19;
      goto LABEL_15;
    }
    if ( *(_DWORD *)(*(_QWORD *)v32 + 12LL) == v26 && v23 == v32 )
      break;
LABEL_15:
    v31 += 2;
    if ( v28 == v31 )
      goto LABEL_83;
  }
LABEL_29:
  v40 = (__int64 *)v31[1];
  if ( !v40 )
    return v19;
  v41 = *v40;
  v101 = 0x1000000000LL;
  v42 = *((unsigned int *)v40 + 2);
  v100 = v102;
  v43 = v41 + 16 * v42;
  if ( v41 == v43 )
    return v19;
  while ( *(_QWORD *)(v41 + 8) <= 1u )
  {
    v41 += 16;
    if ( v43 == v41 )
      return v19;
  }
  if ( v43 == v41 )
    return v19;
  v44 = *(_QWORD *)(v41 + 8);
  while ( 2 )
  {
    LODWORD(v101) = 0;
    if ( (*(_BYTE *)(v44 + 44) & 8) != 0 || (v52 = *(_DWORD *)(*(_QWORD *)v44 + 24LL), v52 <= 1) )
    {
      ++*(_DWORD *)(v19 + 24);
      *(_DWORD *)(v19 + 28) = 0;
    }
    else
    {
      v53 = HIDWORD(v101);
      v54 = (_QWORD *)(v44 + 120);
      LODWORD(v55) = 0;
      v56 = v44 + 8LL * (v52 - 2) + 128;
      do
      {
        v59 = *v54;
        if ( (unsigned int)v55 < v53 )
        {
          v57 = (char *)v100;
        }
        else
        {
          v98 = v56;
          v96 = v54;
          v93 = *v54;
          v60 = (char *)sub_186B270(16LL * v53);
          LODWORD(v55) = v101;
          v61 = (char *)v100;
          v57 = v60;
          v53 *= 2;
          v59 = v93;
          v54 = v96;
          v56 = v98;
          if ( (_DWORD)v101 )
          {
            if ( (unsigned int)(v101 - 1) <= 2 || v60 == (char *)v100 + 8 )
            {
              v74 = 0;
              v75 = 8LL * (unsigned int)v101;
              do
              {
                *(_QWORD *)&v57[v74] = *(_QWORD *)&v61[v74];
                v74 += 8LL;
              }
              while ( v74 != v75 );
            }
            else
            {
              v62 = 0;
              v63 = 16LL * ((unsigned int)v101 >> 1);
              do
              {
                *(__m128i *)&v57[v62] = _mm_loadu_si128((const __m128i *)&v61[v62]);
                v62 += 16LL;
              }
              while ( v62 != v63 );
              if ( (v55 & 1) != 0 )
                *(_QWORD *)&v57[8 * (v55 & 0xFFFFFFFE)] = *(_QWORD *)&v61[8 * (v55 & 0xFFFFFFFE)];
            }
          }
          if ( v61 && v61 != v102 )
          {
            sub_186B220(v61);
            LODWORD(v55) = v101;
            v56 = v98;
            v54 = v96;
            v59 = v93;
          }
          v100 = v57;
          HIDWORD(v101) = v53;
        }
        v58 = (unsigned int)v55;
        ++v54;
        v55 = (unsigned int)(v55 + 1);
        *(_QWORD *)&v57[8 * v58] = v59;
        LODWORD(v101) = v55;
      }
      while ( v54 != (_QWORD *)v56 );
      ++*(_DWORD *)(v19 + 24);
      *(_DWORD *)(v19 + 28) = v55;
      if ( (_DWORD)v55 )
      {
        v64 = &v57[8 * v55];
        v65 = *(_QWORD *)(*(_QWORD *)v57 + 8LL);
        if ( !v18 )
        {
          v95 = v64;
          v92 = *(_QWORD *)(*(_QWORD *)v57 + 8LL);
          v71 = (_QWORD *)sub_186B270(0x28u);
          v18 = v71 + 1;
          v65 = v92;
          *(_QWORD *)(v19 + 48) = v71 + 1;
          v72 = v71 + 1;
          *v71 = 2;
          v64 = v95;
          v73 = 1;
          goto LABEL_71;
        }
        while ( 1 )
        {
          v67 = *((_DWORD *)v18 - 1);
          if ( v67 == *((_DWORD *)v18 - 2) )
          {
            v68 = 16 * ((3 * v67 + 1) >> 1) + 8;
            if ( 16 * v67 + 8 >= (unsigned int)v68 || v67 >= (3 * v67 + 1) >> 1 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v99, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v99);
              sub_233E40((__int64)v99);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v97 = v64;
            v94 = v65;
            v91 = (3 * v67 + 1) >> 1;
            v69 = (unsigned int *)sub_186B300(v18 - 1, v68);
            v70 = v69[1];
            v18 = v69 + 2;
            v65 = v94;
            v64 = v97;
            *(_QWORD *)(v19 + 48) = v69 + 2;
            *v69 = v91;
            LODWORD(v69) = v70;
            v72 = &v18[2 * v70];
            v73 = (_DWORD)v69 + 1;
          }
          else
          {
            v66 = v67;
            v73 = v67 + 1;
            v72 = &v18[2 * v66];
          }
LABEL_71:
          v57 += 8;
          *(_BYTE *)v72 = 0;
          v72[1] = v65;
          *((_DWORD *)v18 - 1) = v73;
          if ( v57 == v64 )
            break;
          v65 = *(_QWORD *)(*(_QWORD *)v57 + 8LL);
        }
        v45 = *(_QWORD *)(v44 + 8);
LABEL_49:
        v50 = *((_DWORD *)v18 - 1);
        if ( v50 == *((_DWORD *)v18 - 2) )
        {
          v76 = (3 * v50 + 1) >> 1;
          v77 = v76;
          v78 = 16 * v76 + 8;
          if ( 16 * v50 + 8 >= v78 || v50 >= v76 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v99, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, v99);
            sub_233E40((__int64)v99);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v79 = (unsigned int *)sub_186B300(v18 - 1, v78);
          v80 = v79[1];
          v18 = v79 + 2;
          *v79 = v77;
          *(_QWORD *)(v19 + 48) = v79 + 2;
          LODWORD(v79) = v80;
          v48 = &v18[2 * v80];
          v47 = (_DWORD)v79 + 1;
        }
        else
        {
          v51 = v50;
          v47 = v50 + 1;
          v48 = &v18[2 * v51];
        }
        goto LABEL_40;
      }
    }
    v45 = *(_QWORD *)(v44 + 8);
    if ( v18 )
      goto LABEL_49;
    v46 = (_QWORD *)sub_186B270(0x28u);
    *v46 = 2;
    v47 = 1;
    v18 = v46 + 1;
    *(_QWORD *)(v19 + 48) = v18;
    v48 = v18;
LABEL_40:
    *(_BYTE *)v48 = 0;
    v48[1] = v45;
    *((_DWORD *)v18 - 1) = v47;
    v49 = v41 + 16;
    if ( v43 != v41 + 16 )
    {
      while ( 1 )
      {
        v44 = *(_QWORD *)(v49 + 8);
        v41 = v49;
        if ( v44 > 1 )
          break;
        v49 += 16;
        if ( v43 == v49 )
          goto LABEL_45;
      }
      if ( v43 != v49 )
        continue;
    }
    break;
  }
LABEL_45:
  if ( v100 && v100 != v102 )
    sub_186B220(v100);
  return v19;
}

