__int64 __fastcall sub_114AEA0(__int64 a1)
{
  size_t v2; // rax
  const void *v3; // r14
  size_t v4; // r12
  unsigned __int64 v5; // rbp
  bool v6; // zf
  _BYTE *v7; // rax
  const void *v8; // rax
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r13
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r14
  _BYTE *v16; // r12
  __int64 v17; // rax
  _BYTE *v18; // r15
  size_t v19; // rdx
  size_t v20; // r13
  __int64 v21; // r14
  _BYTE *v22; // rsi
  unsigned __int64 v23; // r12
  _BYTE *v24; // rdx
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  std::_V2 *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r13
  void (__fastcall *v31)(void **, __int64, __m128i *, int *); // r14
  unsigned __int64 v32; // rax
  _QWORD *v33; // rax
  _BYTE *v34; // rax
  unsigned __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  _BYTE *v39; // r15
  unsigned __int64 v40; // rbx
  __int64 v41; // rdx
  volatile signed __int32 *v42; // r13
  volatile signed __int32 *v43; // r12
  signed __int32 v44; // eax
  signed __int32 v45; // eax
  _BYTE *v46; // rsi
  __int64 v47; // rdx
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  unsigned __int64 v50; // rax
  int v52; // eax
  __int64 v53; // r13
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  size_t v57; // rax
  size_t v58; // rdx
  __m128i *v59; // rax
  __m128i *v60; // rsi
  void *v61; // r13
  unsigned __int64 v62; // rbx
  int v63; // eax
  __m128i v64; // rax
  __m128i *v65; // rsi
  void *v66; // r14
  unsigned __int64 v67; // r13
  unsigned int v68; // ecx
  unsigned int v69; // eax
  unsigned int v70; // r14d
  unsigned __int64 v71; // rax
  __m128i *v72; // rax
  __int64 v73; // rax
  __int64 v74; // r12
  _BYTE *v75; // rsi
  unsigned __int64 v76; // r14
  _BYTE *v77; // rdx
  void *v78; // rdi
  int v79; // r14d
  __int64 v80; // r13
  unsigned __int64 v81; // r15
  __int32 v82; // r15d
  void *v83; // rdi
  __m128i *v84; // rdi
  __int64 v85; // rcx
  unsigned __int64 v86; // rdx
  void *v87; // rdi
  int v88; // eax
  __int64 v89; // rcx
  __m128i *v90; // rdi
  unsigned __int64 v91; // [rsp+8h] [rbp-2A0h]
  unsigned int v92; // [rsp+10h] [rbp-298h]
  unsigned int v93; // [rsp+10h] [rbp-298h]
  __int64 v94; // [rsp+10h] [rbp-298h]
  __int64 v95; // [rsp+18h] [rbp-290h]
  int v96; // [rsp+18h] [rbp-290h]
  unsigned __int64 v97; // [rsp+18h] [rbp-290h]
  __int64 v98; // [rsp+20h] [rbp-288h]
  unsigned int v99; // [rsp+28h] [rbp-280h]
  __int64 v100; // [rsp+28h] [rbp-280h]
  __int64 v101; // [rsp+34h] [rbp-274h]
  __int64 v102; // [rsp+40h] [rbp-268h]
  char v103; // [rsp+5Ch] [rbp-24Ch] BYREF
  char v104; // [rsp+5Dh] [rbp-24Bh] BYREF
  char v105; // [rsp+5Eh] [rbp-24Ah] BYREF
  char v106; // [rsp+5Fh] [rbp-249h] BYREF
  int v107; // [rsp+60h] [rbp-248h] BYREF
  __int64 v108; // [rsp+68h] [rbp-240h]
  void *v109; // [rsp+70h] [rbp-238h] BYREF
  size_t v110; // [rsp+78h] [rbp-230h]
  _BYTE v111[16]; // [rsp+80h] [rbp-228h] BYREF
  __m128i v112; // [rsp+90h] [rbp-218h] BYREF
  _BYTE v113[16]; // [rsp+A0h] [rbp-208h] BYREF
  __m128i v114; // [rsp+B0h] [rbp-1F8h] BYREF
  _BYTE v115[16]; // [rsp+C0h] [rbp-1E8h] BYREF
  void *v116[2]; // [rsp+D0h] [rbp-1D8h] BYREF
  _BYTE v117[16]; // [rsp+E0h] [rbp-1C8h] BYREF
  void *v118[2]; // [rsp+F0h] [rbp-1B8h] BYREF
  _BYTE v119[16]; // [rsp+100h] [rbp-1A8h] BYREF
  __m128i v120; // [rsp+110h] [rbp-198h] BYREF
  __m128i v121; // [rsp+120h] [rbp-188h] BYREF
  void *v122; // [rsp+130h] [rbp-178h]
  __int64 v123; // [rsp+138h] [rbp-170h]
  __m128i v124; // [rsp+140h] [rbp-168h] BYREF
  void *ptr; // [rsp+150h] [rbp-158h] BYREF
  __m128i si128; // [rsp+158h] [rbp-150h] BYREF
  char v127; // [rsp+168h] [rbp-140h] BYREF
  void *v128; // [rsp+170h] [rbp-138h]
  __int64 v129; // [rsp+178h] [rbp-130h]
  __m128i v130[18]; // [rsp+180h] [rbp-128h] BYREF

  v2 = j__strlen("ROCM_PATH");
  sub_226CD00(&ptr, "ROCM_PATH", v2);
  v98 = a1 + 792;
  if ( !(_BYTE)v128 )
    goto LABEL_5;
  if ( !si128.m128i_i64[0] )
  {
    if ( ptr != &si128.m128i_u64[1] )
      operator delete(ptr);
LABEL_5:
    v3 = *(const void **)(*(_QWORD *)a1 + 104LL);
    v4 = *(_QWORD *)(*(_QWORD *)a1 + 112LL);
    sub_114A730((__int64)&ptr, (__int64)v3, v4);
    if ( *(_DWORD *)(a1 + 804) <= *(_DWORD *)(a1 + 800) )
    {
      v80 = sub_22136C0(a1 + 792, a1 + 808, 0, 64, &v120);
      v81 = v80 + ((unsigned __int64)*(unsigned int *)(a1 + 800) << 6);
      *(_OWORD *)(v81 + 8) = 0;
      v6 = si128.m128i_i64[0] == 0;
      *(_QWORD *)v81 = v81 + 24;
      if ( !v6 )
        sub_99FF50((char **)v81, (char **)&ptr);
      *(_BYTE *)(v81 + 24) = v127;
      *(_QWORD *)(v81 + 32) = v81 + 48;
      if ( v128 == v130 )
      {
        *(__m128i *)(v81 + 48) = _mm_load_si128(v130);
      }
      else
      {
        *(_QWORD *)(v81 + 32) = v128;
        *(_QWORD *)(v81 + 48) = v130[0].m128i_i64[0];
      }
      *(_QWORD *)(v81 + 40) = v129;
      v129 = 0;
      v130[0].m128i_i8[0] = 0;
      v128 = v130;
      sub_114A910(a1 + 792, v80);
      v82 = v120.m128i_i32[0];
      v83 = *(void **)(a1 + 792);
      if ( (void *)(a1 + 808) != v83 )
        free(v83);
      v84 = (__m128i *)v128;
      *(_QWORD *)(a1 + 792) = v80;
      *(_DWORD *)(a1 + 804) = v82;
      ++*(_DWORD *)(a1 + 800);
      if ( v84 != v130 )
        operator delete(v84);
    }
    else
    {
      v5 = *(_QWORD *)(a1 + 792) + ((unsigned __int64)*(unsigned int *)(a1 + 800) << 6);
      *(_OWORD *)(v5 + 8) = 0;
      v6 = si128.m128i_i64[0] == 0;
      *(_QWORD *)v5 = v5 + 24;
      if ( !v6 )
        sub_99FF50((char **)v5, (char **)&ptr);
      *(_BYTE *)(v5 + 24) = v127;
      *(_QWORD *)(v5 + 32) = v5 + 48;
      if ( v128 == v130 )
      {
        *(__m128i *)(v5 + 48) = _mm_load_si128(v130);
      }
      else
      {
        *(_QWORD *)(v5 + 32) = v128;
        *(_QWORD *)(v5 + 48) = v130[0].m128i_i64[0];
      }
      *(_QWORD *)(v5 + 40) = v129;
      ++*(_DWORD *)(a1 + 800);
    }
    if ( ptr != &v127 )
      free(ptr);
    si128 = _mm_load_si128((const __m128i *)&xmmword_2384DA0);
    ptr = &v127;
    v7 = *(_BYTE **)(*(_QWORD *)a1 + 136LL);
    LOWORD(v122) = 257;
    if ( *v7 )
    {
      v120.m128i_i64[0] = (__int64)v7;
      LOBYTE(v122) = 3;
    }
    sub_226A9C0(&v120, &ptr, 0);
    v8 = (const void *)sub_2266770(ptr, si128.m128i_i64[0], 0);
    v9 = (__int64)v8;
    v11 = v10;
    if ( v4 != v10 || v4 && memcmp(v8, v3, v4) )
    {
      sub_114A730((__int64)&v120, v9, v11);
      if ( *(_DWORD *)(a1 + 804) <= *(_DWORD *)(a1 + 800) )
      {
        v85 = sub_22136C0(a1 + 792, a1 + 808, 0, 64, v118);
        v86 = v85 + ((unsigned __int64)*(unsigned int *)(a1 + 800) << 6);
        *(_OWORD *)(v86 + 8) = 0;
        v6 = v120.m128i_i64[1] == 0;
        *(_QWORD *)v86 = v86 + 24;
        if ( !v6 )
        {
          v100 = v85;
          v97 = v86;
          sub_99FF50((char **)v86, (char **)&v120);
          v85 = v100;
          v86 = v97;
        }
        *(_BYTE *)(v86 + 24) = v121.m128i_i8[8];
        *(_QWORD *)(v86 + 32) = v86 + 48;
        if ( v122 == &v124 )
        {
          *(__m128i *)(v86 + 48) = _mm_load_si128(&v124);
        }
        else
        {
          *(_QWORD *)(v86 + 32) = v122;
          *(_QWORD *)(v86 + 48) = v124.m128i_i64[0];
        }
        v95 = v85;
        *(_QWORD *)(v86 + 40) = v123;
        v122 = &v124;
        v123 = 0;
        v124.m128i_i8[0] = 0;
        sub_114A910(a1 + 792, v85);
        v87 = *(void **)(a1 + 792);
        v88 = (int)v118[0];
        v89 = v95;
        if ( (void *)(a1 + 808) != v87 )
        {
          v96 = (int)v118[0];
          v94 = v89;
          free(v87);
          v88 = v96;
          v89 = v94;
        }
        v90 = (__m128i *)v122;
        *(_DWORD *)(a1 + 804) = v88;
        *(_QWORD *)(a1 + 792) = v89;
        ++*(_DWORD *)(a1 + 800);
        if ( v90 != &v124 )
          operator delete(v90);
      }
      else
      {
        v12 = *(_QWORD *)(a1 + 792) + ((unsigned __int64)*(unsigned int *)(a1 + 800) << 6);
        *(_OWORD *)(v12 + 8) = 0;
        v6 = v120.m128i_i64[1] == 0;
        *(_QWORD *)v12 = v12 + 24;
        if ( !v6 )
        {
          v91 = v12;
          sub_99FF50((char **)v12, (char **)&v120);
          v12 = v91;
        }
        *(_BYTE *)(v12 + 24) = v121.m128i_i8[8];
        *(_QWORD *)(v12 + 32) = v12 + 48;
        if ( v122 == &v124 )
        {
          *(__m128i *)(v12 + 48) = _mm_load_si128(&v124);
        }
        else
        {
          *(_QWORD *)(v12 + 32) = v122;
          *(_QWORD *)(v12 + 48) = v124.m128i_i64[0];
        }
        *(_QWORD *)(v12 + 40) = v123;
        ++*(_DWORD *)(a1 + 800);
      }
      if ( (unsigned __int64 *)v120.m128i_i64[0] != &v121.m128i_u64[1] )
        free((void *)v120.m128i_i64[0]);
    }
    v13 = sub_2266770(v3, v4, 0);
    v15 = v14;
    v16 = (_BYTE *)v13;
    v17 = sub_2266770(v9, v11, 0);
    LOBYTE(v118[0]) = 1;
    v18 = (_BYTE *)v17;
    v20 = v19;
    v120.m128i_i64[0] = (__int64)&v121;
    if ( v16 )
    {
      sub_1148360(&v120, v16, (__int64)&v16[v15]);
    }
    else
    {
      v120.m128i_i64[1] = 0;
      v121.m128i_i8[0] = 0;
    }
    sub_114AC70(a1 + 792, &v120, (char *)v118);
    if ( (__m128i *)v120.m128i_i64[0] != &v121 )
      operator delete((void *)v120.m128i_i64[0]);
    if ( v15 == v20 )
    {
      if ( !v20 || !memcmp(v18, v16, v20) )
        goto LABEL_31;
      LOBYTE(v118[0]) = 1;
    }
    else
    {
      LOBYTE(v118[0]) = 1;
      if ( !v18 )
      {
        v121.m128i_i8[0] = 0;
        v120.m128i_i64[0] = (__int64)&v121;
        v120.m128i_i64[1] = 0;
        goto LABEL_78;
      }
    }
    v120.m128i_i64[0] = (__int64)&v121;
    sub_1148360(&v120, v18, (__int64)&v18[v20]);
LABEL_78:
    sub_114AC70(a1 + 792, &v120, (char *)v118);
    if ( (__m128i *)v120.m128i_i64[0] != &v121 )
      operator delete((void *)v120.m128i_i64[0]);
LABEL_31:
    v21 = *(_QWORD *)a1;
    if ( *(_DWORD *)(a1 + 800) >= *(_DWORD *)(a1 + 804) )
    {
      v73 = sub_22136C0(a1 + 792, a1 + 808, 0, 64, v118);
      v120.m128i_i64[0] = (__int64)&v121;
      v74 = v73;
      sub_11482A0(&v120, *(_BYTE **)(v21 + 248), *(_QWORD *)(v21 + 248) + *(_QWORD *)(v21 + 256));
      v75 = (_BYTE *)v120.m128i_i64[0];
      v76 = v74 + ((unsigned __int64)*(unsigned int *)(a1 + 800) << 6);
      v77 = (_BYTE *)(v120.m128i_i64[0] + v120.m128i_i64[1]);
      *(_OWORD *)(v76 + 8) = 0;
      *(_QWORD *)v76 = v76 + 24;
      sub_9FC110((_QWORD *)v76, v75, v77);
      *(_BYTE *)(v76 + 24) = 1;
      *(_QWORD *)(v76 + 32) = v76 + 48;
      *(_QWORD *)(v76 + 40) = 0;
      *(_BYTE *)(v76 + 48) = 0;
      if ( (__m128i *)v120.m128i_i64[0] != &v121 )
        operator delete((void *)v120.m128i_i64[0]);
      sub_114A910(a1 + 792, v74);
      v78 = *(void **)(a1 + 792);
      v79 = (int)v118[0];
      if ( (void *)(a1 + 808) != v78 )
        free(v78);
      *(_QWORD *)(a1 + 792) = v74;
      *(_DWORD *)(a1 + 804) = v79;
      ++*(_DWORD *)(a1 + 800);
    }
    else
    {
      v120.m128i_i64[0] = (__int64)&v121;
      sub_11482A0(&v120, *(_BYTE **)(v21 + 248), *(_QWORD *)(v21 + 248) + *(_QWORD *)(v21 + 256));
      v22 = (_BYTE *)v120.m128i_i64[0];
      v23 = *(_QWORD *)(a1 + 792) + ((unsigned __int64)*(unsigned int *)(a1 + 800) << 6);
      v24 = (_BYTE *)(v120.m128i_i64[0] + v120.m128i_i64[1]);
      *(_OWORD *)(v23 + 8) = 0;
      *(_QWORD *)v23 = v23 + 24;
      sub_9FC110((_QWORD *)v23, v22, v24);
      *(_BYTE *)(v23 + 24) = 1;
      *(_QWORD *)(v23 + 32) = v23 + 48;
      *(_QWORD *)(v23 + 40) = 0;
      *(_BYTE *)(v23 + 48) = 0;
      if ( (__m128i *)v120.m128i_i64[0] != &v121 )
        operator delete((void *)v120.m128i_i64[0]);
      ++*(_DWORD *)(a1 + 800);
    }
    v25 = *(_QWORD *)a1;
    v106 = 1;
    v120.m128i_i64[0] = (__int64)&v121;
    sub_11482A0(&v120, *(_BYTE **)(v25 + 488), *(_QWORD *)(v25 + 488) + *(_QWORD *)(v25 + 496));
    v26 = j__strlen("/opt/rocm");
    if ( v26 <= 0x7FFFFFFFFFFFFFFFLL - v120.m128i_i64[1] )
    {
      sub_9CA820(&v120, "/opt/rocm", v26);
      sub_114AC70(a1 + 792, &v120, &v106);
      v27 = (std::_V2 *)v120.m128i_i64[0];
      if ( (__m128i *)v120.m128i_i64[0] != &v121 )
        operator delete((void *)v120.m128i_i64[0]);
      v107 = 0;
      v28 = std::_V2::system_category(v27);
      v111[0] = 0;
      v108 = v28;
      v109 = v111;
      v29 = *(_QWORD *)a1;
      v110 = 0;
      v30 = *(_QWORD *)(v29 + 8);
      v31 = *(void (__fastcall **)(void **, __int64, __m128i *, int *))(*(_QWORD *)v30 + 64LL);
      v118[0] = v119;
      sub_11482A0(v118, *(_BYTE **)(v29 + 488), *(_QWORD *)(v29 + 488) + *(_QWORD *)(v29 + 496));
      v32 = j__strlen("/opt");
      if ( v32 <= 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v118[1] )
      {
        sub_9CA820(v118, "/opt", v32);
        LOWORD(v122) = 260;
        v120.m128i_i64[0] = (__int64)v118;
        v31(v116, v30, &v120, &v107);
        if ( v118[0] != v119 )
          operator delete(v118[0]);
        v101 = 0;
        v99 = 0;
        v92 = 0;
        v102 = a1;
LABEL_42:
        v33 = v116[0];
        if ( v116[0] )
        {
          while ( 1 )
          {
            if ( v107 )
              goto LABEL_53;
            v34 = (_BYTE *)sub_2266D20(v33[1], v33[2], 0);
            v39 = v34;
            v40 = v35;
            if ( v35 <= 4 || *(_DWORD *)v34 != 1835233138 || v34[4] != 45 )
              goto LABEL_46;
            v53 = v110;
            if ( !v110 )
            {
              v120.m128i_i64[0] = (__int64)&v121;
              sub_1148360(&v120, v34, (__int64)&v34[v35]);
              sub_9E6D90((__int64)&v109, &v120);
              if ( (__m128i *)v120.m128i_i64[0] != &v121 )
                operator delete((void *)v120.m128i_i64[0]);
              v57 = v110;
              v58 = 0;
              *(_OWORD *)v118 = 0;
              if ( v110 > 4 )
              {
                v58 = v110 - 5;
                v57 = 5;
              }
              v120.m128i_i64[0] = (__int64)&v121;
              if ( (char *)v109 + v57 )
              {
                sub_1148360(&v120, (_BYTE *)v109 + v57, (__int64)v109 + v57 + v58);
                v53 = v120.m128i_i64[1];
                v59 = (__m128i *)v120.m128i_i64[0];
                v60 = (__m128i *)(v120.m128i_i64[0] + v120.m128i_i64[1]);
                if ( v120.m128i_i64[0] != v120.m128i_i64[0] + v120.m128i_i64[1] )
                {
                  do
                  {
                    if ( v59->m128i_i8[0] == 45 )
                      v59->m128i_i8[0] = 46;
                    v59 = (__m128i *)((char *)v59 + 1);
                  }
                  while ( v60 != v59 );
                  v53 = v120.m128i_i64[1];
                  v60 = (__m128i *)v120.m128i_i64[0];
                }
              }
              else
              {
                v120.m128i_i64[1] = 0;
                v60 = &v121;
                v121.m128i_i8[0] = 0;
              }
              sub_2233B90(v118, v60, v53, v54, v55, v56);
              v61 = v118[0];
              v62 = (unsigned __int64)v118[1];
              if ( (__m128i *)v120.m128i_i64[0] != &v121 )
                operator delete((void *)v120.m128i_i64[0]);
              v92 = (unsigned int)v61;
              v99 = HIDWORD(v61) & 0x7FFFFFFF;
              v101 = v62 & 0x7FFFFFFF7FFFFFFFLL;
              goto LABEL_46;
            }
            v120.m128i_i64[0] = (__int64)&v121;
            *(_OWORD *)v118 = 0;
            if ( v34 == (_BYTE *)-5LL )
            {
              v121.m128i_i8[0] = 0;
              v64 = (__m128i)0xFFFFFFFFFFFFFFFBLL;
              v65 = &v121;
              v120.m128i_i64[1] = 0;
            }
            else
            {
              sub_1148360(&v120, v34 + 5, (__int64)&v34[v35]);
              v64 = v120;
              v65 = (__m128i *)(v120.m128i_i64[0] + v120.m128i_i64[1]);
              if ( v120.m128i_i64[0] != v120.m128i_i64[0] + v120.m128i_i64[1] )
              {
                do
                {
                  if ( *(_BYTE *)v64.m128i_i64[0] == 45 )
                    *(_BYTE *)v64.m128i_i64[0] = 46;
                  ++v64.m128i_i64[0];
                }
                while ( (__m128i *)v64.m128i_i64[0] != v65 );
                v64.m128i_i64[1] = v120.m128i_i64[1];
                v65 = (__m128i *)v120.m128i_i64[0];
              }
            }
            sub_2233B90(v118, v65, v64.m128i_i64[1], v36, v37, v38);
            v66 = v118[0];
            v67 = (unsigned __int64)v118[1];
            if ( (__m128i *)v120.m128i_i64[0] != &v121 )
              operator delete((void *)v120.m128i_i64[0]);
            v68 = (unsigned int)v66;
            v69 = v67 & 0x7FFFFFFF;
            v70 = HIDWORD(v66) & 0x7FFFFFFF;
            if ( v92 < v68 )
              goto LABEL_122;
            if ( v92 == v68 )
            {
              if ( v70 > v99 )
                goto LABEL_122;
              if ( v70 == v99 )
                break;
            }
LABEL_46:
            v107 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v116[0] + 16LL))(v116[0]);
            v33 = v116[0];
            v108 = v41;
            if ( !*((_QWORD *)v116[0] + 2) )
            {
              v42 = (volatile signed __int32 *)v116[1];
              *(_OWORD *)v116 = 0;
              if ( !v42 )
                goto LABEL_53;
              if ( &_pthread_key_create )
              {
                if ( _InterlockedSub(v42 + 2, 1u) )
                  goto LABEL_42;
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
                if ( &_pthread_key_create )
                  goto LABEL_51;
              }
              else
              {
                v52 = *((_DWORD *)v42 + 2);
                *((_DWORD *)v42 + 2) = v52 - 1;
                if ( v52 != 1 )
                  goto LABEL_42;
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
                if ( &_pthread_key_create )
                {
LABEL_51:
                  if ( _InterlockedSub(v42 + 3, 1u) )
                    goto LABEL_42;
                  goto LABEL_52;
                }
              }
              v63 = *((_DWORD *)v42 + 3);
              *((_DWORD *)v42 + 3) = v63 - 1;
              if ( v63 != 1 )
                goto LABEL_42;
LABEL_52:
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 24LL))(v42);
              v33 = v116[0];
              if ( !v116[0] )
                goto LABEL_53;
            }
          }
          if ( v69 > (unsigned int)v101 || HIDWORD(v101) < (HIDWORD(v67) & 0x7FFFFFFFu) && v69 == (_DWORD)v101 )
          {
LABEL_122:
            v93 = v68;
            v120.m128i_i64[0] = (__int64)&v121;
            sub_1148360(&v120, v39, (__int64)&v39[v40]);
            sub_9E6D90((__int64)&v109, &v120);
            v68 = v93;
            if ( (__m128i *)v120.m128i_i64[0] != &v121 )
            {
              operator delete((void *)v120.m128i_i64[0]);
              v68 = v93;
            }
            v99 = HIDWORD(v66) & 0x7FFFFFFF;
            v101 = v67 & 0x7FFFFFFF7FFFFFFFLL;
          }
          v92 = v68;
          goto LABEL_46;
        }
LABEL_53:
        v43 = (volatile signed __int32 *)v116[1];
        if ( v116[1] )
        {
          if ( &_pthread_key_create )
          {
            v44 = _InterlockedExchangeAdd((volatile signed __int32 *)v116[1] + 2, 0xFFFFFFFF);
          }
          else
          {
            v44 = *((_DWORD *)v116[1] + 2);
            *((_DWORD *)v116[1] + 2) = v44 - 1;
          }
          if ( v44 == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
            if ( &_pthread_key_create )
            {
              v45 = _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF);
            }
            else
            {
              v45 = *((_DWORD *)v43 + 3);
              *((_DWORD *)v43 + 3) = v45 - 1;
            }
            if ( v45 == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 24LL))(v43);
          }
        }
        v46 = *(_BYTE **)(*(_QWORD *)v102 + 488LL);
        v47 = (__int64)&v46[*(_QWORD *)(*(_QWORD *)v102 + 496LL)];
        if ( v110 )
        {
          v105 = 1;
          v116[0] = v117;
          sub_11482A0(v116, v46, v47);
          v71 = j__strlen("/opt/");
          if ( v71 > 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v116[1] )
            goto LABEL_165;
          sub_9CA820(v116, "/opt/", v71);
          v72 = (__m128i *)sub_9CA820(v116, v109, v110);
          v120.m128i_i64[0] = (__int64)&v121;
          if ( (__m128i *)v72->m128i_i64[0] == &v72[1] )
          {
            v121 = _mm_loadu_si128(v72 + 1);
          }
          else
          {
            v120.m128i_i64[0] = v72->m128i_i64[0];
            v121.m128i_i64[0] = v72[1].m128i_i64[0];
          }
          v120.m128i_i64[1] = v72->m128i_i64[1];
          v72->m128i_i64[0] = (__int64)v72[1].m128i_i64;
          v72->m128i_i64[1] = 0;
          v72[1].m128i_i8[0] = 0;
          sub_114AC70(v98, &v120, &v105);
          if ( (__m128i *)v120.m128i_i64[0] != &v121 )
            operator delete((void *)v120.m128i_i64[0]);
          if ( v116[0] != v117 )
            operator delete(v116[0]);
          v46 = *(_BYTE **)(*(_QWORD *)v102 + 488LL);
          v47 = (__int64)&v46[*(_QWORD *)(*(_QWORD *)v102 + 496LL)];
        }
        v104 = 1;
        v114.m128i_i64[0] = (__int64)v115;
        sub_11482A0(&v114, v46, v47);
        v48 = j__strlen("/usr/local");
        if ( v48 <= 0x7FFFFFFFFFFFFFFFLL - v114.m128i_i64[1] )
        {
          sub_9CA820(&v114, "/usr/local", v48);
          sub_114AC70(v98, &v114, &v104);
          if ( (_BYTE *)v114.m128i_i64[0] != v115 )
            operator delete((void *)v114.m128i_i64[0]);
          v49 = *(_QWORD *)v102;
          v103 = 1;
          v112.m128i_i64[0] = (__int64)v113;
          sub_11482A0(&v112, *(_BYTE **)(v49 + 488), *(_QWORD *)(v49 + 488) + *(_QWORD *)(v49 + 496));
          v50 = j__strlen("/usr");
          if ( v50 <= 0x7FFFFFFFFFFFFFFFLL - v112.m128i_i64[1] )
          {
            sub_9CA820(&v112, "/usr", v50);
            sub_114AC70(v98, &v112, &v103);
            if ( (_BYTE *)v112.m128i_i64[0] != v113 )
              operator delete((void *)v112.m128i_i64[0]);
            sub_1149F30(v102);
            if ( v109 != v111 )
              operator delete(v109);
            if ( ptr != &v127 )
              free(ptr);
            return v98;
          }
        }
      }
    }
LABEL_165:
    std::__throw_length_error("basic_string::append");
  }
  sub_114AA50(a1 + 792, (__m128i *)&ptr);
  sub_1149F30(a1);
  if ( (_BYTE)v128 && ptr != &si128.m128i_u64[1] )
    operator delete(ptr);
  return v98;
}

