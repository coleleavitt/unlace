__int64 __fastcall sub_3A1040(__int64 a1, __int64 a2, int a3, __int64 *a4, int a5, int a6)
{
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r13
  unsigned int **v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r15
  __int64 v17; // r13
  unsigned int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // r13
  int v24; // eax
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 *v29; // r12
  __int64 v30; // rsi
  __int64 v31; // rdi
  bool v32; // zf
  unsigned int v33; // edx
  __int64 v34; // r12
  __int64 v35; // rax
  unsigned int v36; // ecx
  __int64 v37; // r15
  __int64 v38; // rax
  __int64 v39; // rcx
  unsigned int v40; // r14d
  __int64 v41; // r14
  __int64 v42; // rax
  __int64 v43; // r14
  __int64 v44; // rax
  __int64 v45; // r13
  int v46; // eax
  int v47; // r8d
  int v48; // r9d
  __int64 v49; // rax
  __int64 v50; // r14
  __int64 *v51; // r13
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 result; // rax
  unsigned int i; // r14d
  __int64 v56; // r12
  unsigned __int64 v57; // r13
  __int64 *v58; // r15
  __int64 v59; // rsi
  __int64 v60; // rdi
  __int64 v61; // r15
  int v62; // eax
  int v63; // r8d
  int v64; // r9d
  __int64 v65; // rax
  __int64 v66; // r12
  __int64 *v67; // r13
  __int64 v68; // rsi
  __int64 v69; // rdi
  int v70[2]; // [rsp+0h] [rbp-288h]
  __int64 v71; // [rsp+0h] [rbp-288h]
  unsigned int v72; // [rsp+0h] [rbp-288h]
  char v73; // [rsp+0h] [rbp-288h]
  int v74[2]; // [rsp+0h] [rbp-288h]
  int v75[2]; // [rsp+0h] [rbp-288h]
  __int64 v76; // [rsp+8h] [rbp-280h]
  __int64 v77; // [rsp+8h] [rbp-280h]
  int v78; // [rsp+8h] [rbp-280h]
  int v79[2]; // [rsp+8h] [rbp-280h]
  int v80[2]; // [rsp+8h] [rbp-280h]
  __int64 v81; // [rsp+8h] [rbp-280h]
  int v82[2]; // [rsp+10h] [rbp-278h]
  __int64 v83; // [rsp+10h] [rbp-278h]
  int v84[2]; // [rsp+10h] [rbp-278h]
  int v85; // [rsp+10h] [rbp-278h]
  __int64 v86; // [rsp+10h] [rbp-278h]
  int v87; // [rsp+10h] [rbp-278h]
  int v88; // [rsp+18h] [rbp-270h]
  __int64 v89; // [rsp+18h] [rbp-270h]
  __int64 v90; // [rsp+20h] [rbp-268h]
  char v91; // [rsp+28h] [rbp-260h]
  __int64 v92; // [rsp+28h] [rbp-260h]
  char v93[8]; // [rsp+28h] [rbp-260h]
  __int64 v94; // [rsp+28h] [rbp-260h]
  char v95; // [rsp+28h] [rbp-260h]
  char v96; // [rsp+28h] [rbp-260h]
  int v97; // [rsp+30h] [rbp-258h]
  int v98[2]; // [rsp+30h] [rbp-258h]
  __int64 v99; // [rsp+30h] [rbp-258h]
  int v100; // [rsp+30h] [rbp-258h]
  int v101[2]; // [rsp+30h] [rbp-258h]
  __int64 v102; // [rsp+38h] [rbp-250h]
  __int64 v103; // [rsp+38h] [rbp-250h]
  int v104; // [rsp+40h] [rbp-248h]
  int v105[2]; // [rsp+40h] [rbp-248h]
  __int64 v106; // [rsp+58h] [rbp-230h]
  void *v107; // [rsp+60h] [rbp-228h]
  __int64 v108; // [rsp+70h] [rbp-218h] BYREF
  char v109[8]; // [rsp+78h] [rbp-210h] BYREF
  int v110[2]; // [rsp+80h] [rbp-208h] BYREF
  __int64 v111; // [rsp+88h] [rbp-200h] BYREF
  __m128i v112; // [rsp+90h] [rbp-1F8h] BYREF
  __m128i v113; // [rsp+A0h] [rbp-1E8h] BYREF
  _QWORD v114[2]; // [rsp+B0h] [rbp-1D8h] BYREF
  _BYTE ptr[16]; // [rsp+C0h] [rbp-1C8h] BYREF
  char v116[8]; // [rsp+D0h] [rbp-1B8h] BYREF
  _BYTE v117[432]; // [rsp+D8h] [rbp-1B0h] BYREF

  v8 = *(_QWORD *)(a1 + 8);
  v90 = a1;
  v108 = 0;
  sub_62B3F0(a2, v8, (unsigned int)&v108, (_DWORD)a4, a5, a6);
  sub_2FCDE0(a4);
  v9 = a4[1];
  if ( v108 )
  {
    LODWORD(v10) = *(_DWORD *)(v108 - 4);
    if ( v9 )
    {
      v11 = *(unsigned int *)(v9 - 4);
      v12 = (unsigned int **)(a4 + 1);
      if ( (unsigned int)v10 < (unsigned int)v11 )
      {
        v57 = v9 + 8 * v11;
        v58 = (__int64 *)(v9 + 8LL * (unsigned int)v10);
        if ( (unsigned __int64)v58 < v57 )
          goto LABEL_64;
        goto LABEL_60;
      }
      if ( (unsigned int)v11 < (unsigned int)v10 )
        goto LABEL_7;
LABEL_61:
      *(_DWORD *)(v9 - 4) = v10;
    }
    else
    {
      v12 = (unsigned int **)(a4 + 1);
LABEL_68:
      if ( (_DWORD)v10 )
      {
        v9 = 0;
        LODWORD(v11) = 0;
        goto LABEL_7;
      }
    }
    goto LABEL_11;
  }
  if ( !v9 )
    goto LABEL_11;
  v10 = *(unsigned int *)(v9 - 4);
  if ( !(_DWORD)v10 )
    goto LABEL_61;
  v57 = v9 + 8 * v10;
  v58 = (__int64 *)a4[1];
  LODWORD(v10) = 0;
  if ( v9 >= v57 )
    goto LABEL_61;
  do
  {
    while ( 1 )
    {
LABEL_64:
      v59 = *v58;
      if ( !*v58 )
        goto LABEL_63;
      v60 = *a4;
      v32 = (*(_DWORD *)(v59 + 8))-- == 1;
      if ( !v32 )
        break;
      sub_15D7BC0(v60, v59);
LABEL_63:
      if ( (unsigned __int64)++v58 >= v57 )
        goto LABEL_67;
    }
    ++v58;
  }
  while ( (unsigned __int64)v58 < v57 );
LABEL_67:
  v9 = a4[1];
  v12 = (unsigned int **)(a4 + 1);
  if ( !v9 )
    goto LABEL_68;
LABEL_60:
  LODWORD(v11) = *(_DWORD *)(v9 - 4);
  if ( (unsigned int)v11 >= (unsigned int)v10 )
    goto LABEL_61;
LABEL_7:
  while ( !v9 || *(_DWORD *)(v9 - 8) < (unsigned int)v10 )
  {
    sub_23A6F0(v12);
    v9 = a4[1];
  }
  *(_DWORD *)(v9 - 4) = v10;
  v13 = 8LL * (unsigned int)v11;
  v14 = 8LL * (unsigned int)v10;
  if ( v13 != v14 )
    memset((void *)(v9 + v13), 0, v14 - v13);
LABEL_11:
  v15 = *(_QWORD *)(a2 + 40);
  v16 = 0;
  v17 = *(_QWORD *)(v15 + 16);
  v18 = *(_DWORD *)(v17 + 32);
  if ( v18 )
  {
    do
    {
      while ( 1 )
      {
        v19 = *(_QWORD *)(v15 + 8LL * (unsigned int)v16 + 32);
        if ( *(_WORD *)(v19 + 4) == 1 )
        {
          v20 = 8LL * *(unsigned int *)(v19 + 16);
          if ( !*(_QWORD *)(a4[1] + v20) )
            break;
        }
        if ( (unsigned int)++v16 >= v18 )
          goto LABEL_27;
      }
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(ptr);
      sub_39A600((__int64)v116, *(const char **)(v17 + 16));
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::stringbuf::str(&v113, v117);
      sub_180C5A0(&v111, v113.m128i_i64[0]);
      sub_233E40((__int64)&v113);
      *(_QWORD *)v82 = *(_QWORD *)(v90 + 8);
      sub_39A8C0(&v113, v90);
      v76 = v113.m128i_i64[0];
      if ( v113.m128i_i64[0] && !*(_DWORD *)(v113.m128i_i64[0] + 8) )
        sub_15D7BC0(v113.m128i_i64[1], v113.m128i_i64[0]);
      v21 = *(_QWORD *)(v17 + 8LL * (unsigned int)v16 + 48);
      *(_QWORD *)v70 = *(_QWORD *)(v90 + 8);
      v22 = sub_1674700(v90 + 16, *(unsigned int *)(v90 + 40));
      v23 = v22;
      if ( v22 )
        ++*(_DWORD *)(v22 + 8);
      v113.m128i_i64[0] = v22;
      v24 = sub_15E3510(*(_QWORD *)v70, &v111, 1, &v113, v21, 0);
      v112.m128i_i64[0] = v76;
      v27 = sub_15DC610(
              v70[0],
              v24,
              1,
              (int)&v112,
              v25,
              v26,
              v70[0],
              v76,
              v82[0],
              (int)&v113,
              v90,
              v91,
              v97,
              v102,
              v104,
              ptr);
      v28 = v27;
      if ( v27 )
        ++*(_DWORD *)(v27 + 8);
      sub_399430(v23, v71);
      sub_399450(v77, v83);
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream();
      v29 = (__int64 *)(a4[1] + v20);
      v30 = *v29;
      if ( *v29 )
      {
        v31 = *a4;
        v32 = (*(_DWORD *)(v30 + 8))-- == 1;
        if ( v32 )
          sub_15D7BC0(v31, v30);
      }
      *v29 = v28;
      ++v16;
      sub_399450(0, v71);
      v15 = *(_QWORD *)(a2 + 40);
      v17 = *(_QWORD *)(v15 + 16);
      v18 = *(_DWORD *)(v17 + 32);
    }
    while ( (unsigned int)v16 < v18 );
  }
LABEL_27:
  v33 = *(_DWORD *)(a2 + 68);
  v72 = 0;
  if ( !v33 )
    goto LABEL_51;
  while ( 2 )
  {
    v34 = v72 + 10LL;
    v35 = *(_QWORD *)(a2 + 8 * v34);
    v36 = *(_DWORD *)(*(_QWORD *)((v35 & 0xFFFFFFFFFFFFFFF8LL) + 16) + 32LL);
    *(_QWORD *)v84 = *(_QWORD *)((v35 & 0xFFFFFFFFFFFFFFF8LL) + 16);
    if ( !v36 )
      goto LABEL_50;
    v37 = 0;
    while ( 2 )
    {
      v38 = *(_QWORD *)((v35 & 0xFFFFFFFFFFFFFFF8LL) + 8LL * (unsigned int)v37 + 32);
      if ( *(_WORD *)(v38 + 4) != 1
        || (v78 = 8 * *(_DWORD *)(v38 + 16), *(_QWORD *)(a4[1] + 8LL * *(unsigned int *)(v38 + 16))) )
      {
        if ( (unsigned int)++v37 >= v36 )
          break;
        goto LABEL_31;
      }
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(ptr);
      sub_39A600((__int64)v116, *(const char **)(*(_QWORD *)v84 + 16LL));
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::stringbuf::str(&v113, v117);
      sub_180C5A0(&v111, v113.m128i_i64[0]);
      sub_233E40((__int64)&v113);
      v103 = *(_QWORD *)(v90 + 8);
      sub_39A8C0(&v113, v90);
      v92 = v113.m128i_i64[0];
      if ( v113.m128i_i64[0] && !*(_DWORD *)(v113.m128i_i64[0] + 8) )
        sub_15D7BC0(v113.m128i_i64[1], v113.m128i_i64[0]);
      v113 = (__m128i)1uLL;
      v39 = *(_QWORD *)(v90 + 8);
      v40 = *(_DWORD *)(v90 + 40);
      v114[0] = 1;
      v114[1] = 0;
      v106 = v39;
      *(_QWORD *)v105 = v90 + 16;
      sub_182CBA0(qword_1C7F2C0, v114);
      LODWORD(v114[0]) = 1;
      BYTE4(v114[0]) &= ~1u;
      v41 = sub_1674520(v90 + 16, &v113, v40);
      v107 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v113);
      sub_182CBA0(v107, v114);
      if ( v41 )
        ++*(_DWORD *)(v41 + 8);
      v42 = sub_15E1B70(*(_QWORD *)(v90 + 24));
      *(_QWORD *)v98 = v42;
      if ( v42 )
        ++*(_DWORD *)(v42 + 8);
      sub_399450(v92, v103);
      sub_399450(v41, v106);
      *(_QWORD *)v93 = *(_QWORD *)(v90 + 8);
      v43 = *(_QWORD *)(*(_QWORD *)v84 + 8LL * (unsigned int)v37 + 48);
      v44 = sub_1674700(*(_QWORD *)v105, *(unsigned int *)(v90 + 40));
      v45 = v44;
      if ( v44 )
        ++*(_DWORD *)(v44 + 8);
      v113.m128i_i64[0] = v44;
      v46 = sub_15E3510(*(_QWORD *)v93, &v111, 1, &v113, v43, 0);
      v112.m128i_i64[0] = *(_QWORD *)v98;
      v49 = sub_15DC610(
              *(int *)v93,
              v46,
              1,
              (int)&v112,
              v47,
              v48,
              v72,
              v78,
              v84[0],
              (int)&v113,
              v90,
              v93[0],
              v98[0],
              v103,
              v105[0],
              ptr);
      v50 = v49;
      if ( v49 )
        ++*(_DWORD *)(v49 + 8);
      sub_399430(v45, v94);
      sub_399450(v99, v102);
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream();
      v51 = (__int64 *)(a4[1] + *(_QWORD *)v79);
      v52 = *v51;
      if ( *v51 )
      {
        v53 = *a4;
        v32 = (*(_DWORD *)(v52 + 8))-- == 1;
        if ( v32 )
          sub_15D7BC0(v53, v52);
      }
      *v51 = v50;
      ++v37;
      sub_399450(0, v94);
      v36 = *(_DWORD *)(*(_QWORD *)v84 + 32LL);
      if ( (unsigned int)v37 < v36 )
      {
LABEL_31:
        v35 = *(_QWORD *)(a2 + 8 * v34);
        continue;
      }
      break;
    }
    v33 = *(_DWORD *)(a2 + 68);
LABEL_50:
    if ( ++v72 < v33 )
      continue;
    break;
  }
LABEL_51:
  result = v108;
  if ( v108 )
  {
    v73 = 0;
    for ( i = 0; i < *(_DWORD *)(result - 4); ++i )
    {
      v56 = *(_QWORD *)(result + 8LL * i);
      if ( v56 && !*(_QWORD *)(a4[1] + 8LL * i) )
      {
        v95 = v73 + 1;
        v61 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL);
        std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(ptr);
        sub_39A600((__int64)v116, *(const char **)(v61 + 16));
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::stringbuf::str(&v113, v117);
        sub_180C5A0(v109, v113.m128i_i64[0]);
        sub_233E40((__int64)&v113);
        sub_39A8C0(&v112, v90);
        v100 = v112.m128i_i32[2];
        *(_QWORD *)v74 = v112.m128i_i64[0];
        *(_QWORD *)v80 = *(_QWORD *)(v90 + 8);
        sub_39A880(&v113, v90);
        v85 = v113.m128i_i32[2];
        v88 = v113.m128i_i32[0];
        v111 = v113.m128i_i64[0];
        v62 = sub_15E3510(*(_QWORD *)v80, v109, 1, &v111, v56, 0);
        *(_QWORD *)v110 = *(_QWORD *)v74;
        v65 = sub_15DC610(
                v80[0],
                v62,
                1,
                (int)v110,
                v63,
                v64,
                v74[0],
                v80[0],
                v85,
                v88,
                v90,
                v95,
                v100,
                v102,
                v104,
                ptr);
        v66 = v65;
        if ( v65 )
          ++*(_DWORD *)(v65 + 8);
        sub_399430(v89, v86);
        if ( *(_QWORD *)v75 )
        {
          v87 = *(_DWORD *)(*(_QWORD *)v75 + 8LL);
          *(_DWORD *)(*(_QWORD *)v75 + 8LL) = v87 - 1;
          if ( v87 == 1 )
            sub_15D7BC0(*(_QWORD *)v101, *(_QWORD *)v75);
        }
        std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream();
        v67 = (__int64 *)(a4[1] + 8LL * i);
        v68 = *v67;
        if ( *v67 )
        {
          v69 = *a4;
          v32 = (*(_DWORD *)(v68 + 8))-- == 1;
          if ( v32 )
            sub_15D7BC0(v69, v68);
        }
        *v67 = v66;
        sub_399450(0, v81);
        v73 = v96;
        result = v108;
      }
      if ( !result )
        return result;
    }
    return sub_186B220((void *)(result - 8));
  }
  return result;
}

