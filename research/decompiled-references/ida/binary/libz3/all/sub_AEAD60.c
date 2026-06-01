__int64 __fastcall sub_AEAD60(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4, int a5, int a6)
{
  char **v6; // r12
  char **exception; // r12
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 result; // rax
  _DWORD *v12; // rax
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rbp
  unsigned int v18; // r15d
  __int64 v19; // rbx
  unsigned int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  _QWORD *v23; // rcx
  __m128i v24; // xmm1
  __int64 v25; // rbx
  unsigned int v26; // eax
  __int64 v27; // rdx
  __m128i v28; // xmm0
  unsigned int v29; // edx
  size_t v30; // rsi
  _DWORD *v31; // rax
  int v32; // ecx
  int v33; // r8d
  int v34; // r9d
  _QWORD *v35; // rbx
  std::ostream *v36; // r15
  __int64 v37; // rax
  __int64 v38; // rbp
  _QWORD *v39; // r14
  __int64 v40; // r12
  int v41; // edx
  int v42; // ecx
  int v43; // r8d
  int v44; // r9d
  int v45; // ecx
  int v46; // r8d
  int v47; // r9d
  _DWORD *v48; // rax
  __int64 v49; // rax
  const char *v50; // rdi
  unsigned int v51; // edx
  size_t v52; // rdi
  __int64 v53; // rax
  _DWORD *v54; // r15
  _DWORD *v55; // rcx
  __int64 v56; // r9
  __int64 v57; // rdi
  _DWORD *v58; // r8
  _DWORD *i; // rsi
  int v60; // eax
  __m128i v61; // xmm0
  __int64 v62; // rax
  _QWORD *v63; // rbx
  _QWORD *v64; // r15
  __int64 v65; // rsi
  __int64 v66; // rdi
  bool v67; // zf
  __int64 *v68; // rbp
  __int64 *v69; // r12
  __int64 v70; // rsi
  __int64 v71; // rdi
  int v72; // edx
  int v73; // ecx
  int v74; // r8d
  int v75; // r9d
  int v76; // ecx
  int v77; // r8d
  int v78; // r9d
  __int64 v79; // rdx
  int *v80; // rax
  int v81; // ebx
  int v82; // ecx
  int v83; // r8d
  int v84; // r9d
  _QWORD *v85; // rax
  _QWORD *v86; // rax
  int v87; // [rsp-8h] [rbp-120h]
  void *v88; // [rsp+0h] [rbp-118h]
  void *v89; // [rsp+0h] [rbp-118h]
  void *v90; // [rsp+0h] [rbp-118h]
  void *v91; // [rsp+8h] [rbp-110h]
  __int64 v92; // [rsp+8h] [rbp-110h]
  __int64 v93; // [rsp+8h] [rbp-110h]
  int v94; // [rsp+10h] [rbp-108h]
  int v95; // [rsp+10h] [rbp-108h]
  int v96; // [rsp+10h] [rbp-108h]
  __int64 v97; // [rsp+18h] [rbp-100h] BYREF
  __m128i v98; // [rsp+20h] [rbp-F8h] BYREF
  __m128i v99; // [rsp+30h] [rbp-E8h] BYREF
  __m128i v100; // [rsp+40h] [rbp-D8h] BYREF
  __m128i v101; // [rsp+50h] [rbp-C8h] BYREF
  _DWORD *v102; // [rsp+60h] [rbp-B8h]
  __int64 v103; // [rsp+68h] [rbp-B0h]
  int v104; // [rsp+70h] [rbp-A8h]
  void *v105; // [rsp+78h] [rbp-A0h] BYREF
  __int64 v106; // [rsp+80h] [rbp-98h] BYREF
  __int64 v107; // [rsp+88h] [rbp-90h] BYREF
  void *v108; // [rsp+90h] [rbp-88h] BYREF
  int v109; // [rsp+98h] [rbp-80h]
  int v110; // [rsp+A0h] [rbp-78h]
  void *v111; // [rsp+A8h] [rbp-70h]
  void *v112; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v113; // [rsp+B8h] [rbp-60h]
  __int64 v114; // [rsp+C0h] [rbp-58h] BYREF
  __m128i v115; // [rsp+C8h] [rbp-50h]

  v8 = (__int64)a1;
  v9 = a4;
  v10 = a3;
  LODWORD(v88) = (_DWORD)a2;
  result = *(_QWORD *)(*a1 + 112LL);
  if ( *(_BYTE *)(result + 564) )
  {
    v15 = *(_QWORD *)a3;
    v16 = *(_QWORD *)(a3 + 8);
    LODWORD(v112) = (_DWORD)a2;
    v17 = 0;
    v97 = v15;
    if ( v16 )
    {
      v18 = 0;
      do
      {
        if ( v18 >= *(_DWORD *)(v16 - 4) )
          break;
        v19 = *(_QWORD *)(v16 + 8LL * v18);
        if ( v19 )
          ++*(_DWORD *)(v19 + 8);
        if ( v17 )
        {
          v20 = *(_DWORD *)(v17 - 4);
          if ( v20 == *(_DWORD *)(v17 - 8) )
          {
            v29 = (3 * v20 + 1) >> 1;
            v30 = 8 * v29 + 8;
            if ( 8 * v20 + 8 >= (unsigned int)v30 || v20 >= v29 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)&v108, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v108);
              sub_233E40((__int64)&v108);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v98.m128i_i32[0] = (3 * v20 + 1) >> 1;
            v31 = (_DWORD *)sub_186B300((void *)(v17 - 8), v30);
            v17 = (__int64)(v31 + 2);
            *v31 = v98.m128i_i32[0];
            LODWORD(v31) = v31[1];
            v23 = (_QWORD *)(v17 + 8LL * (unsigned int)v31);
            v16 = *(_QWORD *)(v10 + 8);
            v22 = (_DWORD)v31 + 1;
          }
          else
          {
            v21 = v20;
            v22 = v20 + 1;
            v23 = (_QWORD *)(v17 + 8 * v21);
          }
        }
        else
        {
          v85 = (_QWORD *)sub_186B270(0x18u);
          v23 = v85 + 1;
          *v85 = 2;
          v16 = *(_QWORD *)(v10 + 8);
          v22 = 1;
          v17 = (__int64)v23;
        }
        *v23 = v19;
        ++v18;
        *(_DWORD *)(v17 - 4) = v22;
      }
      while ( v16 );
    }
    v24 = (__m128i)_mm_loadh_ps((const double *)&v97);
    v115 = v24;
    if ( v9 )
      ++*(_DWORD *)(v9 + 8);
    v25 = a1[4];
    if ( v25 )
    {
      v26 = *(_DWORD *)(v25 - 4);
      if ( v26 == *(_DWORD *)(v25 - 8) )
      {
        v51 = (3 * v26 + 1) >> 1;
        v52 = 40 * v51 + 8;
        if ( 40 * v26 + 8 >= (unsigned int)v52 || v26 >= v51 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&v108, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, &v108);
          sub_233E40((__int64)&v108);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v98.m128i_i32[0] = (3 * v26 + 1) >> 1;
        v99 = v24;
        v53 = sub_186B270(v52);
        v54 = *(_DWORD **)(v8 + 32);
        LODWORD(a3) = v98.m128i_i32[0];
        v55 = (_DWORD *)v53;
        v25 = v53 + 8;
        v24 = _mm_load_si128(&v99);
        if ( v54 )
        {
          v56 = (unsigned int)*(v54 - 1);
          v57 = v53 + 8;
          *(_DWORD *)(v53 + 4) = v56;
          v58 = &v54[10 * v56];
          for ( i = v54; v58 != i; *((_QWORD *)i - 2) = 0 )
          {
            v60 = *i;
            i += 10;
            v57 += 40;
            *(_DWORD *)(v57 - 40) = v60;
            *(_QWORD *)(v57 - 32) = *((_QWORD *)i - 4);
            v61 = _mm_loadu_si128((const __m128i *)(i - 6));
            v62 = *((_QWORD *)i - 1);
            *((_QWORD *)i - 3) = 0;
            *(__m128i *)(v57 - 24) = v61;
            *(_QWORD *)(v57 - 8) = v62;
          }
          if ( (_DWORD)v56 )
          {
            v98.m128i_i64[0] = v17;
            v100.m128i_i32[0] = a3;
            v102 = v55;
            v103 = v10;
            v99.m128i_i64[0] = v25;
            v63 = v54;
            v64 = &v54[10 * v56];
            v101 = v24;
            do
            {
              v65 = v63[3];
              if ( v65 )
              {
                v66 = v63[4];
                v67 = (*(_DWORD *)(v65 + 8))-- == 1;
                if ( v67 )
                  sub_15D7BC0(v66, v65);
              }
              v68 = (__int64 *)v63[2];
              if ( v68 )
              {
                v69 = &v68[*((unsigned int *)v68 - 1)];
                if ( v68 >= v69 )
                  goto LABEL_62;
                do
                {
                  while ( 1 )
                  {
                    v70 = *v68;
                    if ( *v68 )
                    {
                      v71 = v63[1];
                      v67 = (*(_DWORD *)(v70 + 8))-- == 1;
                      if ( v67 )
                        break;
                    }
                    if ( ++v68 >= v69 )
                      goto LABEL_61;
                  }
                  sub_15D7BC0(v71, v70);
                  ++v68;
                }
                while ( v68 < v69 );
LABEL_61:
                v68 = (__int64 *)v63[2];
                if ( v68 )
LABEL_62:
                  sub_186B220(v68 - 1);
              }
              v63 += 5;
            }
            while ( v63 != v64 );
            v17 = v98.m128i_i64[0];
            v25 = v99.m128i_i64[0];
            LODWORD(a3) = v100.m128i_i32[0];
            v55 = v102;
            v24 = _mm_load_si128(&v101);
            v10 = v103;
            v54 = *(_DWORD **)(v8 + 32);
          }
          v99.m128i_i64[0] = (__int64)v55;
          v98.m128i_i32[0] = a3;
          v100 = v24;
          sub_186B220(v54 - 2);
          v55 = (_DWORD *)v99.m128i_i64[0];
          v24 = _mm_load_si128(&v100);
          LODWORD(a3) = v98.m128i_i32[0];
          a2 = (__int64 *)(v25 + 40LL * *(unsigned int *)(v99.m128i_i64[0] + 4));
          result = (unsigned int)(*(_DWORD *)(v99.m128i_i64[0] + 4) + 1);
        }
        else
        {
          *(_DWORD *)(v53 + 4) = 0;
          a2 = (__int64 *)(v53 + 8);
          result = 1;
        }
        *(_QWORD *)(v8 + 32) = v25;
        *v55 = a3;
      }
      else
      {
        v27 = v26;
        result = v26 + 1;
        a3 = 5 * v27;
        a2 = (__int64 *)(v25 + 8 * a3);
      }
    }
    else
    {
      v98 = v24;
      v86 = (_QWORD *)sub_186B270(0x58u);
      v25 = (__int64)(v86 + 1);
      *v86 = 2;
      v24 = _mm_load_si128(&v98);
      result = 1;
      a1[4] = v25;
      a2 = (__int64 *)v25;
    }
    v28 = _mm_loadl_epi64((const __m128i *)&v97);
    LODWORD(a4) = (_DWORD)v88;
    *(__m128i *)(a2 + 3) = v24;
    *(_DWORD *)a2 = (_DWORD)v88;
    *(__m128i *)(a2 + 1) = _mm_unpacklo_epi64(v28, (__m128i)(unsigned __int64)v17);
    *(_DWORD *)(v25 - 4) = result;
  }
  if ( *(_QWORD *)(v8 + 64) )
  {
    v12 = *(_DWORD **)(v10 + 8);
    if ( v12 )
      v13 = *(v12 - 1);
    else
      v13 = 0;
    v14 = *(_QWORD *)(v8 + 80);
    HIDWORD(v105) = v13;
    a2 = &v106;
    v107 = v9;
    v106 = v14;
    LODWORD(v105) = 0;
    v108 = nullptr;
    v112 = v12;
    result = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *, void **, void **, char *, void **))(v8 + 72))(
               v8 + 48,
               &v106,
               &v107,
               &v105,
               &v108,
               (char *)&v105 + 4,
               &v112);
    a5 = v87;
  }
  if ( *(_BYTE *)(v8 + 41) )
  {
    sub_AEA470(v8, (__int64)a2, a3, a4, a5, a6);
    v35 = *(_QWORD **)(v10 + 8);
    v36 = *(std::ostream **)(v8 + 792);
    if ( v35 )
    {
      v37 = *((unsigned int *)v35 - 1);
      if ( &v35[v37] != v35 )
      {
        v97 = v8;
        v38 = v8 + 88;
        v39 = &v35[v37];
        v98.m128i_i64[0] = v10;
        do
        {
          v40 = *v35;
          sub_168ACC0(v38, *v35);
          sub_168C010(
            v38,
            (int)v36,
            v41,
            v42,
            v43,
            v44,
            v88,
            (__int64)v91,
            v94,
            v97,
            v98.m128i_i64[0],
            v98.m128i_i32[2],
            v99.m128i_i64[0],
            v99.m128i_i32[2],
            v100.m128i_i32[0],
            v100.m128i_i32[2],
            v101.m128i_i32[0],
            v101.m128i_i32[2],
            (int)v102,
            v103,
            v104,
            (__int64)v105,
            v106,
            v107,
            v108,
            v109,
            v110,
            v111);
          if ( !*(_WORD *)(v40 + 4) )
          {
            v48 = *(_DWORD **)(*(_QWORD *)(v40 + 16) + 24LL);
            if ( v48 )
            {
              if ( !*v48 && v48[1] == 8 && *(_DWORD *)(v40 + 24) == 1 )
                v40 = *(_QWORD *)(v40 + 32);
            }
          }
          ++v35;
          sub_168C720(
            v38,
            (int)v36,
            v40,
            v45,
            v46,
            v47,
            v89,
            v92,
            v95,
            v97,
            v98.m128i_i32[0],
            v98.m128i_i8[8],
            v99.m128i_i32[0],
            v99.m128i_i32[2],
            v100.m128i_i32[0],
            v100.m128i_i32[2],
            v101.m128i_i32[0],
            v101.m128i_i8[8],
            (int)v102,
            v103,
            v104,
            v105);
        }
        while ( v39 != v35 );
        v8 = v97;
        v10 = v98.m128i_i64[0];
      }
    }
    if ( (unsigned int)v88 > 3 )
    {
      if ( (_DWORD)v88 != 4 )
      {
        sub_1872CE0("");
        sub_1873130(114, 221);
      }
      goto LABEL_82;
    }
    if ( (_DWORD)v88 == 1 )
    {
      if ( !v9 )
      {
LABEL_82:
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_AE96B0(v8, (__int64)v36, v10);
        std::__ostream_insert<char,std::char_traits<char>>();
        return std::ostream::flush(v36);
      }
      v49 = *(_QWORD *)(v9 + 16);
      v50 = *(const char **)(v49 + 16);
      if ( v50 )
      {
        if ( (*(_QWORD *)(v49 + 16) & 7LL) == 1 )
        {
          sub_180CE20(
            (int)&v112,
            v49 + 16,
            1,
            v32,
            v33,
            v34,
            (int)v88,
            v91,
            v94,
            v97,
            v98.m128i_i32[0],
            v98.m128i_i32[2],
            v99.m128i_i32[0],
            v99.m128i_i32[2],
            v100.m128i_i32[0],
            v100.m128i_i32[2],
            v101.m128i_i32[0],
            v101.m128i_i32[2],
            (int)v102,
            v103,
            v104,
            (int)v105,
            v106,
            v107,
            (int)v108,
            v109,
            v110,
            v111,
            (int)v112,
            v113);
          if ( v113 == 10 && *(_QWORD *)v112 == 0x6974706D75737361LL && *((_WORD *)v112 + 4) == 28271 )
          {
            if ( v112 != &v114 )
              operator delete(v112, v114 + 1);
            goto LABEL_82;
          }
          if ( v112 != &v114 )
            operator delete(v112, v114 + 1);
        }
        else if ( !strcmp(v50, "assumption") )
        {
          goto LABEL_82;
        }
      }
    }
    else if ( !v9 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_AE96B0(v8, (__int64)v36, v10);
LABEL_69:
      std::__ostream_insert<char,std::char_traits<char>>();
      return std::ostream::flush(v36);
    }
    sub_168ACC0(v8 + 88, v9);
    sub_168C010(
      v8 + 88,
      (int)v36,
      v72,
      v73,
      v74,
      v75,
      v88,
      (__int64)v91,
      v94,
      v97,
      v98.m128i_i64[0],
      v98.m128i_i32[2],
      v99.m128i_i64[0],
      v99.m128i_i32[2],
      v100.m128i_i32[0],
      v100.m128i_i32[2],
      v101.m128i_i32[0],
      v101.m128i_i32[2],
      (int)v102,
      v103,
      v104,
      (__int64)v105,
      v106,
      v107,
      v108,
      v109,
      v110,
      v111);
    LODWORD(v79) = v9;
    if ( !*(_WORD *)(v9 + 4) )
    {
      v80 = *(int **)(*(_QWORD *)(v9 + 16) + 24LL);
      if ( v80 )
      {
        v76 = *v80;
        if ( !*v80 && v80[1] == 8 && *(_DWORD *)(v9 + 24) == 1 )
          v79 = *(_QWORD *)(v9 + 32);
      }
    }
    sub_168C720(
      v8 + 88,
      (int)v36,
      v79,
      v76,
      v77,
      v78,
      v90,
      v93,
      v96,
      v97,
      v98.m128i_i32[0],
      v98.m128i_i8[8],
      v99.m128i_i32[0],
      v99.m128i_i32[2],
      v100.m128i_i32[0],
      v100.m128i_i32[2],
      v101.m128i_i32[0],
      v101.m128i_i8[8],
      (int)v102,
      v103,
      v104,
      v105);
    std::__ostream_insert<char,std::char_traits<char>>();
    v81 = sub_AE96B0(v8, (__int64)v36, v10);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_168BF80(v8 + 88, v81, v9, v82, v83, v84);
    goto LABEL_69;
  }
  return result;
}

