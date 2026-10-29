__int64 __fastcall sub_12EF450(_QWORD *a1, int a2)
{
  __int64 v3; // rbp
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r15
  bool v7; // zf
  char *v8; // rsi
  void **v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // r12
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdx
  void **v16; // rcx
  __int64 v17; // rbx
  _QWORD *v18; // r12
  volatile signed __int32 *v19; // rdi
  _QWORD *v20; // rax
  __int64 v21; // rbx
  __int64 v22; // r14
  __int64 v23; // rcx
  __int64 v24; // r13
  char *v25; // rax
  __int64 v26; // rbp
  __int64 v27; // rsi
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  void *v32; // rdi
  void **v33; // rax
  void **v34; // rax
  void **v35; // rbx
  void **v36; // r15
  void *v37; // r14
  unsigned __int64 v38; // rbp
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // r12
  __int64 v47; // rbx
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rdx
  void *v56; // rbx
  __int64 v57; // rax
  __int64 v58; // rsi
  void *v59; // rax
  __int64 v60; // rsi
  __int64 v61; // rax
  volatile signed __int32 *v62; // r13
  __int64 v63; // r15
  __int64 v64; // rdi
  void **v65; // r14
  void **v66; // rbx
  void *v67; // rsi
  void **v68; // r14
  volatile signed __int32 *v69; // rbx
  __int64 v70; // r13
  __int64 v71; // rax
  unsigned __int64 v72; // r15
  void **v73; // rsi
  __int64 *v74; // r14
  __int64 v75; // rax
  _QWORD *v76; // rsi
  __int64 v77; // rax
  void (__fastcall *v78)(void **, _QWORD *, void **, int *); // rax
  int v79; // r14d
  int v80; // eax
  __int64 v81; // rdx
  volatile signed __int32 *v82; // rdi
  __int64 v83; // rax
  __int64 v84; // r13
  __int64 v85; // rdx
  __int64 v86; // rax
  void **v87; // rbx
  unsigned int v88; // ebp
  void *v89; // rax
  void *v90; // rdx
  void *v91; // rcx
  void *v92; // rdi
  unsigned int v93; // eax
  unsigned __int64 *v94; // r13
  unsigned __int64 *v95; // rbx
  unsigned __int64 *v96; // rdi
  __int64 *v97; // r12
  __int64 *i; // rbx
  __int64 v99; // rdi
  size_t v100; // rbx
  __int64 result; // rax
  void *v102; // rax
  __int64 v103; // rbx
  __int64 v104; // rbx
  int v105; // eax
  const char *v106; // r12
  _QWORD *v107; // rax
  __int64 v108; // rsi
  _QWORD *v109; // rbx
  void *v110; // r12
  __int64 v111; // rsi
  __int64 v112; // rax
  __int64 v113; // rsi
  _QWORD *v114; // rax
  _QWORD *v115; // r13
  __m128i si128; // xmm0
  unsigned __int64 *v117; // rax
  __int64 v118; // rax
  volatile signed __int32 *v119; // rdi
  __m128 v120; // xmm0
  unsigned __int64 *v121; // r14
  __int64 v122; // r13
  unsigned __int64 v123; // rcx
  unsigned __int64 *v124; // r13
  unsigned __int64 *v125; // rdi
  void *v126; // rax
  __int64 v127; // [rsp-10h] [rbp-578h]
  _QWORD *v128; // [rsp+0h] [rbp-568h] BYREF
  void **v129; // [rsp+8h] [rbp-560h] BYREF
  char *v130; // [rsp+10h] [rbp-558h]
  __int64 v131; // [rsp+18h] [rbp-550h]
  __int64 v132; // [rsp+20h] [rbp-548h]
  unsigned __int16 v133; // [rsp+2Eh] [rbp-53Ah]
  int v134; // [rsp+30h] [rbp-538h] BYREF
  __int64 v135; // [rsp+38h] [rbp-530h]
  _QWORD v136[2]; // [rsp+40h] [rbp-528h] BYREF
  void *v137[2]; // [rsp+50h] [rbp-518h] BYREF
  char v138; // [rsp+60h] [rbp-508h] BYREF
  void *v139; // [rsp+70h] [rbp-4F8h] BYREF
  __int64 v140; // [rsp+78h] [rbp-4F0h]
  __int64 v141; // [rsp+80h] [rbp-4E8h] BYREF
  __int16 v142; // [rsp+90h] [rbp-4D8h]
  void *ptr; // [rsp+A0h] [rbp-4C8h] BYREF
  __m128i v144; // [rsp+A8h] [rbp-4C0h] BYREF
  __int64 v145[150]; // [rsp+B8h] [rbp-4B0h] BYREF

  v3 = (__int64)a1;
  v4 = (__int64 *)a1[2];
  v5 = a1[21];
  v6 = v4[8];
  if ( v5 )
  {
    v7 = (*(_DWORD *)(v5 + 32))-- == 1;
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v5 + 24) + 8LL))(v5 + 24);
      v4 = (__int64 *)a1[2];
    }
  }
  v8 = (char *)v4[6];
  v9 = (void **)a1[9];
  a1[21] = 0;
  v10 = *v4;
  v11 = a1[4];
  v12 = a1[5];
  v130 = v8;
  v129 = v9;
  v128 = (_QWORD *)v10;
  v13 = operator new(0x5F8u);
  sub_13BF8D0(v13, v8, v129, v11, v128, v12);
  v14 = a1[2];
  v15 = a1[4];
  v16 = *(void ***)v14;
  v17 = *(_QWORD *)(v14 + 64);
  v130 = (char *)a1[9];
  LODWORD(v128) = v15;
  v129 = v16;
  v18 = (_QWORD *)operator new(0xD10u);
  v18[1] = 0x100000001LL;
  *v18 = off_2C42DB0;
  sub_1462530((_DWORD)v18 + 16, v17, (_DWORD)v128, (_DWORD)v129, (_DWORD)v130, v13, (__int64)a1, 0, 1, a2);
  v128 = v18 + 2;
  v19 = (volatile signed __int32 *)a1[13];
  v128 = v18;
  *(__m128 *)(v3 + 96) = _mm_loadh_ps((const double *)&v128);
  if ( v19 )
    sub_4343A0(v19);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(v3 + 40) + 432LL))(
    *(_QWORD *)(v3 + 40),
    *(_QWORD *)(v3 + 32),
    **(_QWORD **)(v3 + 16),
    *(_QWORD *)(v3 + 56));
  sub_145BE40(*(_QWORD *)(v3 + 96), *(_QWORD *)(v3 + 40), *(_QWORD *)(v3 + 56));
  if ( *(_BYTE *)(v6 + 75) )
    sub_145D580(*(_QWORD *)(v3 + 96));
  v20 = *(_QWORD **)(v3 + 96);
  v21 = *(_QWORD *)(v6 + 272);
  v22 = *(_QWORD *)(v6 + 264);
  v23 = v20[11];
  v24 = v20[10];
  v25 = (char *)v20[6];
  v128 = (_QWORD *)v23;
  v130 = v25;
  if ( v22 != v21 )
  {
    v131 = v3;
    v26 = v22;
    while ( 1 )
    {
      while ( 1 )
      {
        v33 = (void **)sub_FDBF00(
                         v24,
                         *(void **)v26,
                         *(char **)(v26 + 8),
                         *(_QWORD *)(*(_QWORD *)(v26 + 32) + 16LL) - *(_QWORD *)(*(_QWORD *)(v26 + 32) + 8LL),
                         0);
        if ( !*(_BYTE *)(v6 + 312) )
          break;
        v27 = *(_QWORD *)(v26 + 32);
        v129 = v33;
        sub_2230760(&ptr, v27);
        sub_2230390(
          (unsigned int)&v139,
          1,
          v28,
          v29,
          v30,
          v31,
          (__int64)ptr,
          v144.m128i_i64[0],
          v144.m128i_i64[1],
          v145[0]);
        sub_10249A0((__int64)v128, (unsigned __int64)v129, (__int64 *)&v139);
        v32 = v139;
        if ( v139 )
          goto LABEL_11;
LABEL_12:
        v26 += 40;
        if ( v21 == v26 )
          goto LABEL_16;
      }
      ptr = *(void **)(v26 + 32);
      sub_10249A0((__int64)v128, (unsigned __int64)v33, (__int64 *)&ptr);
      v32 = ptr;
      if ( ptr )
      {
LABEL_11:
        (*(void (__fastcall **)(void *))(*(_QWORD *)v32 + 8LL))(v32);
        goto LABEL_12;
      }
      v26 += 40;
      if ( v21 == v26 )
      {
LABEL_16:
        v3 = v131;
        break;
      }
    }
  }
  v34 = *(void ***)(v6 + 248);
  v35 = *(void ***)(v6 + 240);
  v129 = &v139;
  if ( v35 != v34 )
  {
    v132 = v3;
    v131 = v6;
    v36 = v34;
    while ( 1 )
    {
      sub_FD9C70((__int64)&ptr, v24, v35[4], (size_t)v35[5], 0, 1, 1);
      if ( (v144.m128i_i8[0] & 1) != 0 )
      {
        v102 = ptr;
        ptr = nullptr;
        v139 = v102;
        sub_A0E8E0((_QWORD **)v129);
        if ( v139 )
          (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v139 + 8LL))(v139, v127);
        sub_A04D90((__int64 *)&ptr);
      }
      else
      {
        v37 = ptr;
        v38 = (unsigned __int64)ptr;
        sub_A04D90((__int64 *)&ptr);
        if ( v37 )
        {
          while ( 1 )
          {
            v39 = *(_QWORD *)(v38 + 8);
            if ( !v39 )
              break;
            v38 = v39 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v39 & 4) == 0 || !v38 )
              goto LABEL_24;
          }
          v38 = 0;
LABEL_24:
          v40 = sub_FDBF00(v24, *v35, (char *)v35[1], *(_QWORD *)(v38 + 32), 0);
          while ( 1 )
          {
            v44 = *(_QWORD *)(v40 + 8);
            if ( !v44 )
              break;
            v40 = v44 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v44 & 4) == 0 || !v40 )
              goto LABEL_28;
          }
          v40 = 0;
LABEL_28:
          sub_1024E70((__int64)v128, v40, (__int64)v37, v41, v42, v43);
          goto LABEL_29;
        }
      }
      sub_FC70B0((__int64)&ptr, (__int64)v130, 0, 733);
      sub_AEC220((unsigned __int8 **)&ptr, *v35, (signed __int64)v35[1]);
      sub_AEC220((unsigned __int8 **)&ptr, v35[4], (signed __int64)v35[5]);
      sub_AEA040((__int64)&ptr);
LABEL_29:
      v35 += 8;
      if ( v36 == v35 )
      {
        v6 = v131;
        v3 = v132;
        break;
      }
    }
  }
  *((_BYTE *)v128 + 144) = *(_BYTE *)(v6 + 236);
  v45 = *(_QWORD *)(v3 + 16);
  v46 = *(_QWORD *)(v45 + 128);
  v47 = *(_QWORD *)(v45 + 160);
  v48 = sub_12EF2D0((_QWORD *)v3);
  sub_1388150(*(_QWORD *)(v3 + 96), v6, v48, v47, v46);
  v49 = *(_QWORD **)(v3 + 96);
  v50 = v49[8];
  v51 = v50 + 216;
  if ( *(_DWORD *)(v50 + 260) == 21 )
  {
    v52 = v49[9];
    if ( v52 )
      v51 = v52 + 216;
  }
  sub_13CE940(v49[13], *(_QWORD *)(*(_QWORD *)(v3 + 16) + 48LL), v49[7], v51);
  *(_BYTE *)(*(_QWORD *)(v3 + 96) + 545LL) = (2 * (**(_BYTE **)(*(_QWORD *)(v3 + 16) + 192LL) & 1))
                                           | *(_BYTE *)(*(_QWORD *)(v3 + 96) + 545LL) & 0xFD;
  v53 = *(_QWORD *)(v3 + 16);
  v54 = *(_QWORD *)(*(_QWORD *)(v3 + 96) + 56LL);
  if ( (*(_BYTE *)(v54 + 21) & 2) != 0 && (*(_BYTE *)(v54 + 22) & 0x40) != 0 )
  {
    sub_13049C0(v137, v53);
    v103 = *(_QWORD *)(*(_QWORD *)(v3 + 96) + 104LL);
    ptr = &v144.m128i_u64[1];
    sub_12E9400(&ptr, (_BYTE *)v137[0], (__int64)v137[0] + (unsigned __int64)v137[1]);
    sub_A0AAD0(v103 + 272, &ptr);
    if ( ptr != &v144.m128i_u64[1] )
      operator delete(ptr);
    v104 = *(_QWORD *)(*(_QWORD *)(v3 + 96) + 104LL);
    sub_12EB690(&v139, v3, (__int64)v137[0], (__int64)v137[1]);
    ptr = &v144.m128i_u64[1];
    sub_12E9400(&ptr, v139, (__int64)v139 + v140);
    sub_A0AAD0(v104 + 304, &ptr);
    if ( ptr != &v144.m128i_u64[1] )
      operator delete(ptr);
    if ( v139 != &v141 )
      operator delete(v139);
    if ( v137[0] != &v138 )
      operator delete(v137[0]);
    v53 = *(_QWORD *)(v3 + 16);
  }
  v7 = *(_QWORD *)(*(_QWORD *)(v53 + 176) + 32LL) == 0;
  v128 = *(_QWORD **)(v53 + 176);
  if ( !v7 )
  {
    v107 = (_QWORD *)operator new(0x90u);
    v108 = (__int64)v128;
    v109 = v107;
    v107[1] = 0x100000001LL;
    v110 = v107 + 2;
    *v107 = off_2C42FD0;
    sub_1357DB0(v107 + 2, v108);
    ptr = v110;
    v111 = *(_QWORD *)(v3 + 216);
    v144.m128i_i64[0] = (__int64)v109;
    if ( v111 == *(_QWORD *)(v3 + 224) )
    {
      sub_12EEBA0(v3 + 208, (char *)v111, &ptr);
    }
    else
    {
      *(_QWORD *)(v111 + 8) = 0;
      v112 = v144.m128i_i64[0];
      v113 = v111 + 16;
      *(_QWORD *)(v113 - 16) = v110;
      v144.m128i_i64[0] = 0;
      *(_QWORD *)(v113 - 8) = v112;
      ptr = nullptr;
      *(_QWORD *)(v3 + 216) = v113;
    }
    if ( v144.m128i_i64[0] )
      sub_4343A0((volatile signed __int32 *)v144.m128i_i64[0]);
  }
  v55 = v128[18];
  if ( v55 )
    sub_1359440(
      *(_QWORD *)(v3 + 96),
      v128[17],
      v55,
      **(_QWORD **)(*(_QWORD *)(v3 + 16) + 48LL),
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 48LL) + 8LL));
  v56 = *(void **)(v3 + 176);
  if ( v56 )
    goto LABEL_39;
  if ( v128[22] )
  {
    v114 = (_QWORD *)operator new(0xE0u);
    ptr = &v144.m128i_u64[1];
    v115 = v114;
    v114[1] = 0x100000001LL;
    v56 = v114 + 2;
    *v114 = off_2C43008;
    sub_12E94C0(&ptr, (_BYTE *)v128[21], v128[21] + v128[22]);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DB0);
    v115[3] = 0;
    *((__m128i *)v115 + 2) = si128;
    v115[2] = &off_2C44038;
    v115[9] = v115 + 11;
    v117 = (unsigned __int64 *)ptr;
    *((_OWORD *)v115 + 3) = 0;
    v115[8] = 0;
    if ( v117 == &v144.m128i_u64[1] )
    {
      *(__m128i *)(v115 + 11) = _mm_load_si128((const __m128i *)&v144.m128i_u64[1]);
    }
    else
    {
      v115[9] = v117;
      v115[11] = v144.m128i_i64[1];
    }
    *(__m128i *)(v115 + 15) = si128;
    v118 = v144.m128i_i64[0];
    v119 = *(volatile signed __int32 **)(v3 + 184);
    *(_OWORD *)(v115 + 17) = 0;
    *((__m128i *)v115 + 13) = _mm_load_si128((const __m128i *)&xmmword_23A9B50);
    v129 = (void **)v115;
    v115[10] = v118;
    *((_BYTE *)v115 + 104) = 0;
    v120 = _mm_loadh_ps((const double *)&v129);
    v115[14] = 0;
    v115[19] = 0;
    *((_BYTE *)v115 + 161) = 0;
    *((_BYTE *)v115 + 163) = 0;
    *((_BYTE *)v115 + 165) = 0;
    v115[21] = v115 + 23;
    v115[22] = 0;
    *((_BYTE *)v115 + 184) = 0;
    v115[25] = 0;
    *(__m128 *)(v3 + 176) = v120;
    if ( !v119 || (sub_4343A0(v119), (v56 = *(void **)(v3 + 176)) != nullptr) )
    {
LABEL_39:
      v57 = *(_QWORD *)(v3 + 184);
      ptr = v56;
      v144.m128i_i64[0] = v57;
      if ( v57 )
      {
        if ( !&_pthread_key_create )
        {
          ++*(_DWORD *)(v57 + 8);
          v58 = *(_QWORD *)(v3 + 216);
          if ( v58 != *(_QWORD *)(v3 + 224) )
            goto LABEL_43;
          goto LABEL_155;
        }
        _InterlockedAdd((volatile signed __int32 *)(v57 + 8), 1u);
      }
      v58 = *(_QWORD *)(v3 + 216);
      if ( v58 != *(_QWORD *)(v3 + 224) )
      {
LABEL_43:
        v59 = ptr;
        *(_QWORD *)(v58 + 8) = 0;
        v60 = v58 + 16;
        *(_QWORD *)(v60 - 16) = v59;
        v61 = v144.m128i_i64[0];
        v144.m128i_i64[0] = 0;
        *(_QWORD *)(v60 - 8) = v61;
        ptr = nullptr;
        *(_QWORD *)(v3 + 216) = v60;
        goto LABEL_44;
      }
LABEL_155:
      sub_12EEBA0(v3 + 208, (char *)v58, &ptr);
LABEL_44:
      if ( v144.m128i_i64[0] )
        sub_4343A0((volatile signed __int32 *)v144.m128i_i64[0]);
      v62 = *(volatile signed __int32 **)(v3 + 184);
      v63 = *(_QWORD *)(v3 + 176);
      if ( v62 )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd(v62 + 2, 1u);
        else
          ++*((_DWORD *)v62 + 2);
      }
      v64 = *(_QWORD *)(*(_QWORD *)(v3 + 96) + 104LL);
      ptr = &v144.m128i_u64[1];
      v144.m128i_i64[0] = 0x400000000LL;
      sub_13C5070(v64, &ptr);
      v65 = (void **)ptr;
      v66 = (void **)((char *)ptr + 32 * v144.m128i_u32[0]);
      if ( ptr != v66 )
      {
        do
        {
          v67 = *v65;
          v65 += 4;
          (*(void (__fastcall **)(__int64, void *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v63 + 72LL))(
            v63,
            v67,
            *(v65 - 3),
            0,
            0);
        }
        while ( v66 != v65 );
        v68 = (void **)ptr;
        v66 = (void **)((char *)ptr + 32 * v144.m128i_u32[0]);
        if ( ptr != v66 )
        {
          do
          {
            while ( 1 )
            {
              v66 -= 4;
              if ( *v66 == v66 + 2 )
                break;
              operator delete(*v66);
              if ( v68 == v66 )
                goto LABEL_54;
            }
          }
          while ( v68 != v66 );
LABEL_54:
          v66 = (void **)ptr;
        }
      }
      if ( v66 != (void **)&v144.m128i_u64[1] )
        free(v66);
      if ( v62 )
        sub_4343A0(v62);
      v69 = *(volatile signed __int32 **)(v3 + 184);
      v70 = *(_QWORD *)(v3 + 176);
      if ( v69 )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd(v69 + 2, 1u);
        else
          ++*((_DWORD *)v69 + 2);
      }
      v71 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 64LL);
      v72 = *(_QWORD *)(v71 + 120);
      if ( !v72 )
        goto LABEL_76;
      v73 = *(void ***)(v3 + 64);
      v130 = *(char **)(v71 + 112);
      v129 = v73;
      sub_FD9440((__int64)&ptr, (__int64)v73, v130, v72, 1);
      if ( (v144.m128i_i8[0] & 1) != 0 )
      {
        v126 = ptr;
        ptr = nullptr;
        v139 = v126;
        sub_A0E8E0((_QWORD **)&v139);
        if ( v139 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v139 + 8LL))(v139);
        sub_A04D70((__int64 *)&ptr);
      }
      else
      {
        v74 = (__int64 *)ptr;
        sub_A04D70((__int64 *)&ptr);
        if ( v74 )
        {
          v134 = 0;
          v135 = std::_V2::system_category((std::_V2 *)&ptr);
          v144 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
          ptr = v145;
          v75 = *v74;
          v142 = 261;
          v139 = v74 + 4;
          v140 = v75;
          sub_228FF50(&v139, &ptr, 0);
          v76 = v129[1];
          v77 = *(_QWORD *)(v3 + 96);
          v136[0] = off_2BE4668;
          v136[1] = v77;
          v78 = *(void (__fastcall **)(void **, _QWORD *, void **, int *))(*v76 + 64LL);
          v139 = ptr;
          v142 = 261;
          v140 = v144.m128i_i64[0];
          v78(v137, v76, &v139, &v134);
          v79 = (int)v129;
          if ( v137[0] )
          {
            while ( !v134 )
            {
              v80 = sub_12EF2D0((_QWORD *)v3);
              if ( !(unsigned __int8)sub_1ECB7B0(
                                       *((_QWORD *)v137[0] + 1),
                                       *((_QWORD *)v137[0] + 2),
                                       v79,
                                       *(_QWORD *)(v3 + 80),
                                       v80,
                                       0,
                                       (__int64)v136,
                                       0,
                                       10) )
                (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v70 + 72LL))(
                  v70,
                  *((_QWORD *)v137[0] + 1),
                  *((_QWORD *)v137[0] + 2),
                  0,
                  0);
              v134 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v137[0] + 16LL))(v137[0]);
              v135 = v81;
              if ( !*((_QWORD *)v137[0] + 2) )
              {
                v82 = (volatile signed __int32 *)v137[1];
                *(_OWORD *)v137 = 0;
                if ( !v82 )
                  break;
                sub_4343A0(v82);
                if ( !v137[0] )
                  break;
              }
            }
          }
          if ( v137[1] )
            sub_4343A0((volatile signed __int32 *)v137[1]);
          v136[0] = off_2BE4668;
          nullsub_1231(v136);
          if ( ptr != v145 )
            free(ptr);
          goto LABEL_76;
        }
      }
      (*(void (__fastcall **)(__int64, char *, unsigned __int64, _QWORD, _QWORD))(*(_QWORD *)v70 + 72LL))(
        v70,
        v130,
        v72,
        0,
        0);
LABEL_76:
      if ( v69 )
        sub_4343A0(v69);
      v83 = *(_QWORD *)(v3 + 184);
      v84 = *(_QWORD *)(v3 + 176);
      v130 = (char *)v83;
      if ( v83 )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd((volatile signed __int32 *)(v83 + 8), 1u);
        else
          ++*(_DWORD *)(v83 + 8);
      }
      v85 = *(_QWORD *)(v3 + 16);
      if ( *(_QWORD *)(*(_QWORD *)(v85 + 48) + 608LL) != *(_QWORD *)(*(_QWORD *)(v85 + 48) + 600LL) )
      {
        ptr = &v144.m128i_u64[1];
        v144.m128i_i64[0] = 0x1000000000LL;
        v86 = *(_QWORD *)(v85 + 48);
        v87 = *(void ***)(v86 + 600);
        v129 = *(void ***)(v86 + 608);
        if ( v87 != v129 )
        {
          v132 = v84;
          v131 = v3;
          v88 = v133;
          do
          {
            v93 = v88;
            BYTE1(v93) = 0;
            v139 = v87;
            v88 = v93;
            v142 = 260;
            sub_2230FD0(v137, &v139, 0, 1, 0, v93);
            if ( (v138 & 1) != 0 )
            {
              v3 = v131;
              sub_FC2AF0((__int64 *)v137);
              v94 = (unsigned __int64 *)ptr;
              v95 = (unsigned __int64 *)((char *)ptr + 72 * v144.m128i_u32[0]);
              if ( ptr == v95 )
                goto LABEL_97;
              do
              {
                while ( 1 )
                {
                  v95 -= 9;
                  v96 = (unsigned __int64 *)v95[4];
                  if ( v96 != v95 + 6 )
                    operator delete(v96);
                  if ( (unsigned __int64 *)*v95 == v95 + 2 )
                    break;
                  operator delete((void *)*v95);
                  if ( v94 == v95 )
                    goto LABEL_96;
                }
              }
              while ( v94 != v95 );
              goto LABEL_96;
            }
            sub_22603D0(&v139);
            v89 = v137[0];
            v90 = *v87;
            v91 = v87[1];
            v137[0] = nullptr;
            v136[0] = v89;
            sub_226BCD0((unsigned int)v136, 0, (_DWORD)v90, (_DWORD)v91, (unsigned int)&ptr, 0, (__int64)&v139);
            if ( v136[0] )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v136[0] + 8LL))(v136[0]);
            v92 = v139;
            if ( v139 && !_InterlockedSub((volatile signed __int32 *)v139 + 2, 1u) )
              (*(void (__fastcall **)(void *))(*(_QWORD *)v92 + 8LL))(v92);
            v87 += 4;
            sub_FC2AF0((__int64 *)v137);
          }
          while ( v129 != v87 );
          v121 = (unsigned __int64 *)ptr;
          v122 = v132;
          v3 = v131;
          v95 = (unsigned __int64 *)((char *)ptr + 72 * v144.m128i_u32[0]);
          if ( ptr != v95 )
          {
            do
            {
              v123 = v121[4];
              v121 += 9;
              (*(void (__fastcall **)(__int64, _QWORD, _QWORD, unsigned __int64, _QWORD))(*(_QWORD *)v122 + 72LL))(
                v122,
                *(v121 - 9),
                *(v121 - 8),
                v123,
                *(v121 - 4));
            }
            while ( v95 != v121 );
            v124 = (unsigned __int64 *)ptr;
            v95 = (unsigned __int64 *)((char *)ptr + 72 * v144.m128i_u32[0]);
            if ( ptr != v95 )
            {
              do
              {
                while ( 1 )
                {
                  v95 -= 9;
                  v125 = (unsigned __int64 *)v95[4];
                  if ( v125 != v95 + 6 )
                    operator delete(v125);
                  if ( (unsigned __int64 *)*v95 == v95 + 2 )
                    break;
                  operator delete((void *)*v95);
                  if ( v124 == v95 )
                    goto LABEL_96;
                }
              }
              while ( v124 != v95 );
LABEL_96:
              v95 = (unsigned __int64 *)ptr;
            }
          }
LABEL_97:
          if ( v95 != &v144.m128i_u64[1] )
            free(v95);
        }
      }
      if ( v130 )
        sub_4343A0((volatile signed __int32 *)v130);
    }
  }
  v97 = *(__int64 **)(v3 + 216);
  for ( i = *(__int64 **)(v3 + 208); v97 != i; i += 2 )
  {
    v99 = *i;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v99 + 16LL))(v99, *(_QWORD *)(v3 + 96));
  }
  if ( (*(_BYTE *)v128 & 2) != 0 )
    sub_13725F0(*(_QWORD *)(v3 + 96), (_DWORD)v128, 0, 0, 0, 1, 0);
  v100 = v128[8];
  if ( v100 )
  {
    v106 = (const char *)v128[7];
    if ( v100 == j__strlen("-") && !memcmp(v106, "-", v100) )
    {
      v106 = &byte_22F0C30;
      LODWORD(v100) = j__strlen(&byte_22F0C30);
    }
    sub_13725F0(*(_QWORD *)(v3 + 96), (_DWORD)v128, 1, (_DWORD)v106, v100, 0, 0);
  }
  if ( *((_DWORD *)v128 + 3) )
  {
    v105 = j__strlen(&byte_22F0C30);
    sub_13725F0(*(_QWORD *)(v3 + 96), (_DWORD)v128, 1, (unsigned int)&byte_22F0C30, v105, 1, 1);
  }
  result = *(_QWORD *)(v3 + 88);
  if ( result )
    *(_QWORD *)(*(_QWORD *)(v3 + 96) + 32LL) = result;
  return result;
}
