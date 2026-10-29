void __fastcall sub_12C0D70(__int64 a1, __int64 a2, __int64 a3)
{
  void *v4; // rbp
  size_t v5; // rbx
  _QWORD *v6; // rax
  size_t v7; // rbx
  size_t v8; // rdx
  int v9; // eax
  __int64 v10; // rbx
  void *v11; // r12
  __int64 v12; // rax
  void (__fastcall *v13)(void **, __int64, __m128i *, int *); // r8
  _BYTE *v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rdx
  volatile signed __int32 *v17; // rax
  volatile signed __int32 *v18; // r15
  __int8 *v19; // rsi
  __int64 v20; // r15
  bool v21; // dl
  __m128i *v22; // rax
  size_t v23; // r15
  size_t v24; // r9
  unsigned __int64 v25; // rdx
  char *v26; // rax
  _BYTE *v27; // rdi
  size_t v28; // r15
  unsigned __int64 v29; // rax
  _BYTE *v30; // rdi
  void *v31; // r15
  void *v32; // r13
  __m128i *v33; // rax
  char *v34; // r13
  unsigned __int64 v35; // rdx
  char *v36; // rax
  void *v37; // rdi
  char *v38; // r13
  unsigned __int64 v39; // rax
  _BYTE *v40; // rdi
  __m128i *p_si128; // rax
  size_t v42; // rsi
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rdi
  unsigned __int64 v45; // r13
  __int8 *v46; // rax
  int v47; // ecx
  int v48; // edx
  __int64 *v49; // rdi
  int v50; // eax
  signed __int32 v51; // eax
  __m128i *v52; // rax
  size_t v53; // r15
  size_t v54; // r9
  unsigned __int64 v55; // rdx
  char *v56; // rax
  _BYTE *v57; // rax
  size_t v58; // r15
  unsigned __int64 v59; // rdx
  _BYTE *v60; // rdi
  __m128i *v61; // rdx
  unsigned __int64 v62; // rax
  size_t v63; // rsi
  unsigned __int64 v64; // r15
  __int64 *v65; // rax
  __int64 v66; // rsi
  unsigned __int64 v67; // rdi
  size_t v68; // r8
  unsigned __int64 v69; // r15
  _BYTE *v70; // rcx
  _BYTE *v71; // rdi
  __m128i v72; // xmm2
  __m128i v73; // xmm5
  __m128i v74; // xmm4
  void *v77; // [rsp+20h] [rbp-348h]
  int v78; // [rsp+38h] [rbp-330h]
  __int8 *v79; // [rsp+38h] [rbp-330h]
  void *v80; // [rsp+38h] [rbp-330h]
  volatile signed __int32 *v81; // [rsp+40h] [rbp-328h]
  int v82; // [rsp+50h] [rbp-318h] BYREF
  __int64 v83; // [rsp+58h] [rbp-310h]
  void *v84; // [rsp+60h] [rbp-308h] BYREF
  size_t v85; // [rsp+68h] [rbp-300h]
  __int64 v86; // [rsp+70h] [rbp-2F8h] BYREF
  void *v87; // [rsp+80h] [rbp-2E8h] BYREF
  size_t v88; // [rsp+88h] [rbp-2E0h]
  _QWORD v89[2]; // [rsp+90h] [rbp-2D8h] BYREF
  void *v90; // [rsp+A0h] [rbp-2C8h] BYREF
  size_t v91; // [rsp+A8h] [rbp-2C0h]
  __int64 v92; // [rsp+B0h] [rbp-2B8h] BYREF
  void *src; // [rsp+C0h] [rbp-2A8h] BYREF
  size_t n; // [rsp+C8h] [rbp-2A0h]
  _BYTE v95[16]; // [rsp+D0h] [rbp-298h] BYREF
  void *v96; // [rsp+E0h] [rbp-288h] BYREF
  __int64 v97; // [rsp+E8h] [rbp-280h]
  __m128i v98; // [rsp+F0h] [rbp-278h] BYREF
  __int16 v99; // [rsp+100h] [rbp-268h]
  void *v100; // [rsp+110h] [rbp-258h] BYREF
  __int64 v101; // [rsp+118h] [rbp-250h]
  __m128i v102; // [rsp+120h] [rbp-248h] BYREF
  __int16 v103; // [rsp+130h] [rbp-238h]
  void *v104[2]; // [rsp+140h] [rbp-228h] BYREF
  __m128i v105; // [rsp+150h] [rbp-218h] BYREF
  __int16 v106; // [rsp+160h] [rbp-208h]
  __m128i v107; // [rsp+170h] [rbp-1F8h] BYREF
  __m128i si128; // [rsp+180h] [rbp-1E8h] BYREF
  __int64 v109; // [rsp+190h] [rbp-1D8h]
  int v110; // [rsp+198h] [rbp-1D0h]
  void *v111; // [rsp+1A0h] [rbp-1C8h] BYREF
  __int64 v112; // [rsp+1B0h] [rbp-1B8h] BYREF
  void *v113; // [rsp+1C0h] [rbp-1A8h] BYREF
  __int64 v114; // [rsp+1D0h] [rbp-198h] BYREF
  void *v115; // [rsp+1E0h] [rbp-188h] BYREF
  __int64 v116; // [rsp+1F0h] [rbp-178h] BYREF
  __m128i v117; // [rsp+200h] [rbp-168h] BYREF
  __m128i v118; // [rsp+210h] [rbp-158h] BYREF
  __int64 v119; // [rsp+220h] [rbp-148h]
  int v120; // [rsp+228h] [rbp-140h]
  void *v121; // [rsp+230h] [rbp-138h] BYREF
  __int64 v122; // [rsp+240h] [rbp-128h] BYREF
  void *v123; // [rsp+250h] [rbp-118h] BYREF
  __int64 v124; // [rsp+260h] [rbp-108h] BYREF
  void *v125[2]; // [rsp+270h] [rbp-F8h] BYREF
  __int64 v126; // [rsp+280h] [rbp-E8h] BYREF
  __m256i ptr; // [rsp+290h] [rbp-D8h] BYREF
  __int16 v128; // [rsp+2B0h] [rbp-B8h]

  sub_112B6F0(&v84, a1);
  v4 = v84;
  v5 = v85;
  v87 = v89;
  if ( (char *)v84 + v85 && !v84 )
    goto LABEL_216;
  if ( v85 > 0xF )
  {
    if ( (v85 & 0x8000000000000000LL) != 0LL )
      goto LABEL_217;
    v6 = (_QWORD *)operator new(v85 + 1);
    v89[0] = v5;
    v87 = v6;
LABEL_122:
    memcpy(v6, v4, v5);
    v6 = v87;
    goto LABEL_6;
  }
  if ( v85 == 1 )
  {
    LOBYTE(v89[0]) = *(_BYTE *)v84;
    v6 = v89;
    goto LABEL_6;
  }
  v6 = v89;
  if ( v85 )
    goto LABEL_122;
LABEL_6:
  v88 = v5;
  *((_BYTE *)v6 + v5) = 0;
  v7 = v88;
  if ( 0x7FFFFFFFFFFFFFFFLL - v88 <= 7 )
    goto LABEL_213;
  if ( v87 == v89 )
    v8 = 15;
  else
    v8 = v89[0];
  if ( v88 + 8 > v8 )
    sub_998B30((__int64)&v87, v88, 0, "/include", 8u);
  else
    *(_QWORD *)((char *)v87 + v88) = 0x6564756C636E692FLL;
  v88 = v7 + 8;
  *((_BYTE *)v87 + v7 + 8) = 0;
  sub_12B8E90((__int64)&v90, a1 + 16);
  v9 = *(_DWORD *)(a1 + 60);
  n = 0;
  v95[0] = 0;
  v78 = v9;
  src = v95;
  v82 = 0;
  v83 = std::_V2::system_category((std::_V2 *)&v90);
  sub_1220870(&v107, "0.0.0", 5u);
  v10 = v88;
  v11 = v87;
  ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[3];
  *(__m128i *)&ptr.m256i_u64[1] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( v88 > 0x80 )
  {
    sub_2236E10(&ptr, &ptr.m256i_u64[3], v88, 1);
    v49 = (__int64 *)(ptr.m256i_i64[0] + ptr.m256i_i64[1]);
LABEL_124:
    memcpy(v49, v11, v10);
    v10 += ptr.m256i_i64[1];
    goto LABEL_13;
  }
  if ( v88 )
  {
    v49 = &ptr.m256i_i64[3];
    goto LABEL_124;
  }
LABEL_13:
  ptr.m256i_i64[1] = v10;
  v103 = 257;
  v96 = (void *)"c++";
  v99 = 259;
  LOWORD(v119) = 257;
  v106 = 257;
  sub_228A3B0(&ptr, &v96, &v100, v104, &v117);
  v12 = sub_112C5D0(a1);
  v13 = *(void (__fastcall **)(void **, __int64, __m128i *, int *))(*(_QWORD *)v12 + 64LL);
  LOWORD(v119) = 261;
  v117 = *(__m128i *)ptr.m256i_i8;
  v13(v104, v12, &v117, &v82);
LABEL_14:
  if ( !v82 )
  {
    while ( v104[0] )
    {
      v14 = (_BYTE *)sub_228AA60(*((_QWORD *)v104[0] + 1), *((_QWORD *)v104[0] + 2), 0);
      if ( *v14 != 118 )
      {
        sub_1220870(&v117, v14, v15);
        if ( (unsigned __int8)sub_1213FB0((__int64)&v107, v119, SHIDWORD(v119), v120, v125[0], (size_t)v125[1]) )
        {
          sub_9EE8A0((__int64)&v107, (__int64)&v117);
          v109 = v119;
          v110 = v120;
          sub_9EE8A0((__int64)&v111, (__int64)&v121);
          sub_9EE8A0((__int64)&v113, (__int64)&v123);
          sub_9EE8A0((__int64)&v115, (__int64)v125);
        }
        if ( v125[0] != &v126 )
          operator delete(v125[0]);
        if ( v123 != &v124 )
          operator delete(v123);
        if ( v121 != &v122 )
          operator delete(v121);
        if ( (__m128i *)v117.m128i_i64[0] != &v118 )
          operator delete((void *)v117.m128i_i64[0]);
      }
      v82 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v104[0] + 16LL))(v104[0]);
      v83 = v16;
      if ( *((_QWORD *)v104[0] + 2) )
        goto LABEL_14;
      v17 = (volatile signed __int32 *)v104[1];
      *(_OWORD *)v104 = 0;
      if ( !v17 )
        goto LABEL_14;
      if ( &_pthread_key_create )
      {
        if ( _InterlockedSub(v17 + 2, 1u) )
          goto LABEL_14;
      }
      else
      {
        v47 = *((_DWORD *)v17 + 2);
        *((_DWORD *)v17 + 2) = v47 - 1;
        if ( v47 != 1 )
          goto LABEL_14;
      }
      v81 = v17;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
      if ( &_pthread_key_create )
      {
        if ( _InterlockedSub(v81 + 3, 1u) )
          goto LABEL_14;
      }
      else
      {
        v48 = *((_DWORD *)v81 + 3);
        *((_DWORD *)v81 + 3) = v48 - 1;
        if ( v48 != 1 )
          goto LABEL_14;
      }
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v81 + 24LL))(v81);
      if ( v82 )
        break;
    }
  }
  v18 = (volatile signed __int32 *)v104[1];
  if ( v104[1] )
  {
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v104[1] + 2, 0xFFFFFFFF) != 1 )
        goto LABEL_37;
    }
    else
    {
      v50 = *((_DWORD *)v104[1] + 2);
      *((_DWORD *)v104[1] + 2) = v50 - 1;
      if ( v50 != 1 )
        goto LABEL_37;
    }
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
    if ( &_pthread_key_create )
    {
      v51 = _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF);
    }
    else
    {
      v51 = *((_DWORD *)v18 + 3);
      *((_DWORD *)v18 + 3) = v51 - 1;
    }
    if ( v51 == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 24LL))(v18);
  }
LABEL_37:
  if ( (int)v109 > 0 )
    sub_9EE8A0((__int64)&src, (__int64)&v107);
  if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[3] )
    free((void *)ptr.m256i_i64[0]);
  if ( v115 != &v116 )
    operator delete(v115);
  if ( v113 != &v114 )
    operator delete(v113);
  if ( v111 != &v112 )
    operator delete(v111);
  if ( (__m128i *)v107.m128i_i64[0] != &si128 )
    operator delete((void *)v107.m128i_i64[0]);
  if ( n )
  {
    v19 = (__int8 *)v87;
    v20 = v88;
    v21 = v87 == nullptr && (char *)v87 + v88 != nullptr;
    if ( !v78 )
      goto LABEL_51;
    v52 = &v98;
    v96 = &v98;
    if ( v21 )
      goto LABEL_216;
    if ( v88 > 0xF )
    {
      v79 = (__int8 *)v87;
      if ( (v88 & 0x8000000000000000LL) != 0LL )
        goto LABEL_217;
      v52 = (__m128i *)operator new(v88 + 1);
      v98.m128i_i64[0] = v20;
      v19 = v79;
      v96 = v52;
    }
    else
    {
      if ( v88 == 1 )
      {
        v98.m128i_i8[0] = *(_BYTE *)v87;
LABEL_146:
        v97 = v20;
        v52->m128i_i8[v20] = 0;
        v53 = v97;
        if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v97) <= 4 )
          goto LABEL_213;
        v54 = v97 + 5;
        if ( v96 == &v98 )
          v55 = 15;
        else
          v55 = v98.m128i_i64[0];
        if ( v54 > v55 )
        {
          v80 = (void *)(v97 + 5);
          sub_998B30((__int64)&v96, v97, 0, "/c++/", 5u);
          v54 = (size_t)v80;
        }
        else
        {
          v56 = (char *)v96 + v97;
          *(_DWORD *)v56 = 724263727;
          v56[4] = 47;
        }
        v97 = v54;
        *((_BYTE *)v96 + v53 + 5) = 0;
        v57 = v96;
        v58 = n + v97;
        if ( v96 == &v98 )
          v59 = 15;
        else
          v59 = v98.m128i_i64[0];
        if ( v58 > v59 )
        {
          sub_998B30((__int64)&v96, v97, 0, src, n);
          v57 = v96;
        }
        else if ( n )
        {
          v60 = (char *)v96 + v97;
          if ( n == 1 )
            *v60 = *(_BYTE *)src;
          else
            memcpy(v60, src, n);
          v57 = v96;
        }
        v97 = v58;
        v57[v58] = 0;
        v61 = (__m128i *)v96;
        v117.m128i_i64[0] = (__int64)&v118;
        if ( v96 == &v98 )
        {
          v74 = _mm_load_si128(&v98);
          v63 = v97;
          v97 = 0;
          v98.m128i_i8[0] = 0;
          v118 = v74;
          v117.m128i_i64[1] = v63;
          if ( v63 == 0x7FFFFFFFFFFFFFFFLL )
            goto LABEL_213;
          v64 = v63 + 1;
          v61 = &v118;
          v62 = 15;
        }
        else
        {
          v62 = v98.m128i_i64[0];
          v63 = v97;
          v96 = &v98;
          v117.m128i_i64[0] = (__int64)v61;
          v118.m128i_i64[0] = v98.m128i_i64[0];
          v117.m128i_i64[1] = v97;
          v97 = 0;
          v98.m128i_i8[0] = 0;
          if ( v117.m128i_i64[1] == 0x7FFFFFFFFFFFFFFFLL )
            goto LABEL_213;
          v64 = v63 + 1;
          if ( v61 == &v118 )
            v62 = 15;
        }
        if ( v62 < v64 )
          sub_998B30((__int64)&v117, v63, 0, "/", 1u);
        else
          v61->m128i_i8[v63] = 47;
        v117.m128i_i64[1] = v64;
        *(_BYTE *)(v117.m128i_i64[0] + v64) = 0;
        v65 = (__int64 *)v117.m128i_i64[0];
        ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[2];
        if ( (__m128i *)v117.m128i_i64[0] == &v118 )
        {
          v66 = v117.m128i_i64[1];
          v65 = &ptr.m256i_i64[2];
          v73 = _mm_load_si128(&v118);
          v117.m128i_i64[1] = 0;
          v68 = v91;
          v118.m128i_i8[0] = 0;
          v67 = 15;
          *(__m128i *)&ptr.m256i_u64[2] = v73;
          v70 = v90;
          ptr.m256i_i64[1] = v66;
          v69 = v91 + v66;
        }
        else
        {
          v66 = v117.m128i_i64[1];
          v67 = v118.m128i_i64[0];
          ptr.m256i_i64[0] = v117.m128i_i64[0];
          v68 = v91;
          v117.m128i_i64[1] = 0;
          ptr.m256i_i64[1] = v66;
          v118.m128i_i8[0] = 0;
          v69 = v91 + v66;
          ptr.m256i_i64[2] = v67;
          if ( (unsigned __int64 *)v117.m128i_i64[0] == &ptr.m256i_u64[2] )
            v67 = 15;
          v117.m128i_i64[0] = (__int64)&v118;
          v70 = v90;
        }
        if ( v67 < v69 )
        {
          sub_998B30((__int64)&ptr, v66, 0, v70, v68);
          v65 = (__int64 *)ptr.m256i_i64[0];
        }
        else if ( v68 )
        {
          v71 = (char *)v65 + v66;
          if ( v68 == 1 )
            *v71 = *v70;
          else
            memcpy(v71, v70, v68);
          v65 = (__int64 *)ptr.m256i_i64[0];
        }
        ptr.m256i_i64[1] = v69;
        *((_BYTE *)v65 + v69) = 0;
        v107.m128i_i64[0] = (__int64)&si128;
        if ( (unsigned __int64 *)ptr.m256i_i64[0] == &ptr.m256i_u64[2] )
        {
          si128 = _mm_load_si128((const __m128i *)&ptr.m256i_u64[2]);
        }
        else
        {
          v107.m128i_i64[0] = ptr.m256i_i64[0];
          si128.m128i_i64[0] = ptr.m256i_i64[2];
        }
        v107.m128i_i64[1] = ptr.m256i_i64[1];
        if ( (__m128i *)v117.m128i_i64[0] != &v118 )
          operator delete((void *)v117.m128i_i64[0]);
        if ( v96 != &v98 )
          operator delete(v96);
        v128 = 260;
        ptr.m256i_i64[0] = (__int64)&v107;
        sub_112FA80(a2, a3, (__int64)&ptr);
        if ( (__m128i *)v107.m128i_i64[0] != &si128 )
          operator delete((void *)v107.m128i_i64[0]);
        v19 = (__int8 *)v87;
        v20 = v88;
        v21 = v87 == nullptr && (char *)v87 + v88 != nullptr;
LABEL_51:
        v22 = &v102;
        v100 = &v102;
        if ( v21 )
          goto LABEL_216;
        if ( (unsigned __int64)v20 > 0xF )
        {
          if ( v20 < 0 )
            goto LABEL_217;
          v22 = (__m128i *)operator new(v20 + 1);
          v102.m128i_i64[0] = v20;
          v100 = v22;
        }
        else
        {
          if ( v20 == 1 )
          {
            v102.m128i_i8[0] = *v19;
            goto LABEL_55;
          }
          if ( !v20 )
          {
LABEL_55:
            v101 = v20;
            v22->m128i_i8[v20] = 0;
            v23 = v101;
            if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v101) <= 4 )
              goto LABEL_213;
            v24 = v101 + 5;
            if ( v100 == &v102 )
              v25 = 15;
            else
              v25 = v102.m128i_i64[0];
            if ( v24 > v25 )
            {
              v77 = (void *)(v101 + 5);
              sub_998B30((__int64)&v100, v101, 0, "/c++/", 5u);
              v24 = (size_t)v77;
            }
            else
            {
              v26 = (char *)v100 + v101;
              *(_DWORD *)v26 = 724263727;
              v26[4] = 47;
            }
            v101 = v24;
            *((_BYTE *)v100 + v23 + 5) = 0;
            v27 = v100;
            v28 = n + v101;
            if ( v100 == &v102 )
              v29 = 15;
            else
              v29 = v102.m128i_i64[0];
            if ( v28 > v29 )
            {
              sub_998B30((__int64)&v100, v101, 0, src, n);
              v27 = v100;
            }
            else if ( n )
            {
              v30 = (char *)v100 + v101;
              if ( n == 1 )
                *v30 = *(_BYTE *)src;
              else
                memcpy(v30, src, n);
              v27 = v100;
            }
            v101 = v28;
            v27[v28] = 0;
            v117.m128i_i64[0] = (__int64)&v118;
            if ( v100 == &v102 )
            {
              v118 = _mm_load_si128(&v102);
            }
            else
            {
              v117.m128i_i64[0] = (__int64)v100;
              v118.m128i_i64[0] = v102.m128i_i64[0];
            }
            v102.m128i_i8[0] = 0;
            v128 = 260;
            v117.m128i_i64[1] = v101;
            v100 = &v102;
            v101 = 0;
            ptr.m256i_i64[0] = (__int64)&v117;
            sub_112FA80(a2, a3, (__int64)&ptr);
            if ( (__m128i *)v117.m128i_i64[0] != &v118 )
              operator delete((void *)v117.m128i_i64[0]);
            if ( v100 != &v102 )
              operator delete(v100);
            v31 = v87;
            v32 = (void *)v88;
            v104[0] = &v105;
            if ( !((char *)v87 + v88) || v87 )
            {
              if ( v88 <= 0xF )
              {
                if ( v88 == 1 )
                {
                  v105.m128i_i8[0] = *(_BYTE *)v87;
                  v33 = &v105;
                  goto LABEL_78;
                }
                v33 = &v105;
                if ( !v88 )
                {
LABEL_78:
                  v104[1] = v32;
                  *((_BYTE *)v32 + (_QWORD)v33) = 0;
                  v34 = (char *)v104[1];
                  if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v104[1] > 4 )
                  {
                    if ( v104[0] == &v105 )
                      v35 = 15;
                    else
                      v35 = v105.m128i_i64[0];
                    if ( (char *)v104[1] + 5 > (void *)v35 )
                    {
                      sub_998B30((__int64)v104, (size_t)v104[1], 0, "/c++/", 5u);
                    }
                    else
                    {
                      v36 = (char *)v104[1] + (unsigned __int64)v104[0];
                      *(_DWORD *)v36 = 724263727;
                      v36[4] = 47;
                    }
                    v104[1] = v34 + 5;
                    *((_BYTE *)v104[0] + (unsigned __int64)v34 + 5) = 0;
                    v37 = v104[0];
                    v38 = (char *)v104[1] + n;
                    if ( v104[0] == &v105 )
                      v39 = 15;
                    else
                      v39 = v105.m128i_i64[0];
                    if ( (unsigned __int64)v38 > v39 )
                    {
                      sub_998B30((__int64)v104, (size_t)v104[1], 0, src, n);
                      v37 = v104[0];
                    }
                    else if ( n )
                    {
                      v40 = (char *)v104[1] + (unsigned __int64)v104[0];
                      if ( n == 1 )
                        *v40 = *(_BYTE *)src;
                      else
                        memcpy(v40, src, n);
                      v37 = v104[0];
                    }
                    v104[1] = v38;
                    v38[(_QWORD)v37] = 0;
                    p_si128 = (__m128i *)v104[0];
                    v107.m128i_i64[0] = (__int64)&si128;
                    if ( v104[0] == &v105 )
                    {
                      v42 = (size_t)v104[1];
                      v72 = _mm_load_si128(&v105);
                      v104[1] = nullptr;
                      v105.m128i_i8[0] = 0;
                      si128 = v72;
                      v107.m128i_i64[1] = v42;
                      if ( 0x7FFFFFFFFFFFFFFFLL - v42 > 8 )
                      {
                        v45 = v42 + 9;
                        p_si128 = &si128;
                        v43 = 15;
LABEL_94:
                        if ( v43 < v45 )
                        {
                          sub_998B30((__int64)&v107, v42, 0, "/backward", 9u);
                        }
                        else
                        {
                          v46 = &p_si128->m128i_i8[v42];
                          *(_QWORD *)v46 = 0x7261776B6361622FLL;
                          v46[8] = 100;
                        }
                        v107.m128i_i64[1] = v45;
                        *(_BYTE *)(v107.m128i_i64[0] + v45) = 0;
                        v117.m128i_i64[0] = (__int64)&v118;
                        if ( (__m128i *)v107.m128i_i64[0] == &si128 )
                        {
                          v118 = _mm_load_si128(&si128);
                        }
                        else
                        {
                          v117.m128i_i64[0] = v107.m128i_i64[0];
                          v118.m128i_i64[0] = si128.m128i_i64[0];
                        }
                        ptr.m256i_i64[0] = (__int64)&v117;
                        si128.m128i_i8[0] = 0;
                        v117.m128i_i64[1] = v107.m128i_i64[1];
                        v107.m128i_i64[0] = (__int64)&si128;
                        v107.m128i_i64[1] = 0;
                        v128 = 260;
                        sub_112FA80(a2, a3, (__int64)&ptr);
                        if ( (__m128i *)v117.m128i_i64[0] != &v118 )
                          operator delete((void *)v117.m128i_i64[0]);
                        if ( (__m128i *)v107.m128i_i64[0] != &si128 )
                          operator delete((void *)v107.m128i_i64[0]);
                        if ( v104[0] != &v105 )
                          operator delete(v104[0]);
                        goto LABEL_104;
                      }
                    }
                    else
                    {
                      v42 = (size_t)v104[1];
                      v43 = v105.m128i_i64[0];
                      v104[0] = &v105;
                      v107.m128i_i64[0] = (__int64)p_si128;
                      v44 = 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v104[1];
                      si128.m128i_i64[0] = v105.m128i_i64[0];
                      v107.m128i_i64[1] = (__int64)v104[1];
                      v104[1] = nullptr;
                      v105.m128i_i8[0] = 0;
                      if ( v44 > 8 )
                      {
                        v45 = v42 + 9;
                        if ( p_si128 == &si128 )
                          v43 = 15;
                        goto LABEL_94;
                      }
                    }
                  }
LABEL_213:
                  std::__throw_length_error("basic_string::append");
                }
LABEL_136:
                memcpy(v33, v31, (size_t)v32);
                v33 = (__m128i *)v104[0];
                goto LABEL_78;
              }
              if ( (v88 & 0x8000000000000000LL) == 0LL )
              {
                v33 = (__m128i *)operator new(v88 + 1);
                v105.m128i_i64[0] = (__int64)v32;
                v104[0] = v33;
                goto LABEL_136;
              }
LABEL_217:
              std::__throw_length_error("basic_string::_M_create");
            }
LABEL_216:
            std::__throw_logic_error("basic_string::_M_construct null not valid");
          }
        }
        memcpy(v22, v19, v20);
        v22 = (__m128i *)v100;
        goto LABEL_55;
      }
      if ( !v88 )
        goto LABEL_146;
    }
    memcpy(v52, v19, v20);
    v52 = (__m128i *)v96;
    goto LABEL_146;
  }
LABEL_104:
  if ( src != v95 )
    operator delete(src);
  if ( v90 != &v92 )
    operator delete(v90);
  if ( v87 != v89 )
    operator delete(v87);
  if ( v84 != &v86 )
    operator delete(v84);
}
