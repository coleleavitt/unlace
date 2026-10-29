void __fastcall sub_54F310(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char **v4; // r12
  char **exception; // r12
  __int64 v6; // rdx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rdx
  __m128i v18; // xmm1
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r14
  _QWORD *v22; // r13
  __int64 *v23; // rax
  _QWORD *v24; // r14
  _QWORD *v25; // rax
  __int64 v26; // rdi
  __int64 i; // r13
  unsigned int v28; // r14d
  int v29; // eax
  int v30; // r15d
  int v31; // r12d
  __int64 v32; // rcx
  int v33; // eax
  _QWORD *v34; // rcx
  std::ios_base *v35; // r9
  int v36; // eax
  int v37; // r8d
  int v38; // r9d
  __int64 v39; // rax
  _QWORD *v40; // rdx
  unsigned int v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  _QWORD *v44; // rcx
  __int64 v45; // r13
  int v46; // r9d
  int v47; // eax
  int v48; // r8d
  int v49; // r9d
  __int64 v50; // rax
  _QWORD *v51; // rdx
  unsigned int v52; // eax
  unsigned int v53; // r13d
  size_t v54; // rsi
  unsigned int *v55; // rax
  __int64 v56; // rcx
  unsigned int v57; // ecx
  size_t v58; // rsi
  __int64 v59; // rax
  int v60; // ecx
  _QWORD **v61; // rbx
  void *v62; // rdi
  _QWORD *v63; // rax
  _QWORD *v64; // rax
  int v65; // [rsp-8h] [rbp-E8h]
  int v66; // [rsp-8h] [rbp-E8h]
  int v67; // [rsp+0h] [rbp-E0h]
  int v68; // [rsp+0h] [rbp-E0h]
  int v69; // [rsp+0h] [rbp-E0h]
  int v70; // [rsp+0h] [rbp-E0h]
  __int64 v71; // [rsp+8h] [rbp-D8h]
  int v72; // [rsp+8h] [rbp-D8h]
  int v73; // [rsp+8h] [rbp-D8h]
  int v74; // [rsp+8h] [rbp-D8h]
  int v75; // [rsp+10h] [rbp-D0h]
  int v76; // [rsp+10h] [rbp-D0h]
  int v77; // [rsp+10h] [rbp-D0h]
  int v78; // [rsp+10h] [rbp-D0h]
  int v79; // [rsp+18h] [rbp-C8h]
  int v80; // [rsp+18h] [rbp-C8h]
  int v81; // [rsp+18h] [rbp-C8h]
  int v82; // [rsp+18h] [rbp-C8h]
  int v83; // [rsp+20h] [rbp-C0h]
  int v84; // [rsp+20h] [rbp-C0h]
  int v85; // [rsp+20h] [rbp-C0h]
  int v86; // [rsp+20h] [rbp-C0h]
  int v87; // [rsp+28h] [rbp-B8h]
  char v88; // [rsp+28h] [rbp-B8h]
  char v89; // [rsp+28h] [rbp-B8h]
  int v90; // [rsp+28h] [rbp-B8h]
  __m128i v91; // [rsp+30h] [rbp-B0h] BYREF
  std::ios_base *v92; // [rsp+40h] [rbp-A0h]
  int v93[2]; // [rsp+48h] [rbp-98h]
  int v94; // [rsp+50h] [rbp-90h]
  int v95; // [rsp+58h] [rbp-88h] BYREF
  __int64 v96; // [rsp+60h] [rbp-80h] BYREF
  int v97; // [rsp+68h] [rbp-78h]
  int v98; // [rsp+70h] [rbp-70h]
  int v99; // [rsp+78h] [rbp-68h]
  int v100; // [rsp+80h] [rbp-60h] BYREF
  int v101; // [rsp+88h] [rbp-58h] BYREF
  void *v102; // [rsp+90h] [rbp-50h]
  int *v103; // [rsp+98h] [rbp-48h]
  int *v104; // [rsp+A0h] [rbp-40h]
  void *v105; // [rsp+A8h] [rbp-38h]
  int v106; // [rsp+B0h] [rbp-30h]
  __int64 v107; // [rsp+B8h] [rbp-28h]

  v6 = a3 + 656;
  *a1 = a2;
  v8 = *(_QWORD *)(v6 - 656);
  a1[1] = a4;
  a1[3] = v6;
  a1[2] = v8;
  *(_QWORD *)v93 = a4;
  v83 = (_DWORD)a1 + 32;
  sub_DA3080(a1 + 4, v8, -1, 1);
  v9 = sub_186B270(0x80u);
  *(_QWORD *)v9 = 0;
  *(_DWORD *)(v9 + 8) = 0;
  *(_QWORD *)(v9 + 16) = 0;
  *(_DWORD *)(v9 + 24) = 0;
  *(_QWORD *)(v9 + 32) = 0;
  *(_DWORD *)(v9 + 40) = 0;
  *(_QWORD *)(v9 + 48) = 0;
  *(_DWORD *)(v9 + 56) = 0;
  *(_QWORD *)(v9 + 64) = 0;
  *(_DWORD *)(v9 + 72) = 0;
  *(_QWORD *)(v9 + 80) = 0;
  *(_DWORD *)(v9 + 88) = 0;
  *(_QWORD *)(v9 + 96) = 0;
  *(_DWORD *)(v9 + 104) = 0;
  *(_QWORD *)(v9 + 112) = 0;
  *(_DWORD *)(v9 + 120) = 0;
  a1[5] = v9;
  a1[6] = 8;
  *((_DWORD *)a1 + 14) = 0;
  *((_DWORD *)a1 + 16) = 1;
  v10 = sub_186B270(0x80u);
  *(_QWORD *)v10 = 0;
  *(_DWORD *)(v10 + 8) = 0;
  *(_QWORD *)(v10 + 16) = 0;
  *(_DWORD *)(v10 + 24) = 0;
  *(_QWORD *)(v10 + 32) = 0;
  *(_DWORD *)(v10 + 40) = 0;
  *(_QWORD *)(v10 + 48) = 0;
  *(_DWORD *)(v10 + 56) = 0;
  *(_QWORD *)(v10 + 64) = 0;
  *(_DWORD *)(v10 + 72) = 0;
  *(_QWORD *)(v10 + 80) = 0;
  *(_DWORD *)(v10 + 88) = 0;
  *(_QWORD *)(v10 + 96) = 0;
  *(_DWORD *)(v10 + 104) = 0;
  *(_QWORD *)(v10 + 112) = 0;
  *(_DWORD *)(v10 + 120) = 0;
  a1[9] = v10;
  a1[16] = (__int64)(a1 + 14);
  a1[17] = (__int64)(a1 + 14);
  v11 = a1[2];
  a1[10] = 8;
  a1[20] = v11;
  v91 = _mm_unpacklo_epi64(
          (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                  + 64),
          (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  *((_DWORD *)a1 + 22) = 0;
  *((_DWORD *)a1 + 24) = 2;
  *((_DWORD *)a1 + 28) = 0;
  a1[15] = 0;
  a1[18] = 0;
  *((_DWORD *)a1 + 38) = 0;
  a1[21] = 0;
  a1[22] = v11;
  a1[24] = v11;
  a1[26] = v11;
  a1[23] = 0;
  a1[25] = 0;
  a1[27] = 0;
  a1[28] = 0;
  v79 = (_DWORD)a1 + 232;
  v92 = (std::ios_base *)(a1 + 45);
  std::ios_base::ios_base((std::ios_base *)(a1 + 45));
  *((_WORD *)a1 + 292) = 0;
  v12 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  v13 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  *((_OWORD *)a1 + 37) = 0;
  *((_OWORD *)a1 + 38) = 0;
  v14 = *(_QWORD *)(v12 - 24);
  a1[45] = (__int64)&`vtable for'std::ios + 16;
  a1[72] = 0;
  a1[29] = v12;
  *(__int64 *)((char *)a1 + v14 + 232) = v13;
  a1[30] = 0;
  v87 = v13;
  std::ios::init();
  v15 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  v16 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  v17 = *(_QWORD *)(v15 - 24);
  a1[31] = v15;
  v75 = v16;
  *(__int64 *)((char *)a1 + v17 + 248) = v16;
  std::ios::init();
  v18 = _mm_load_si128(&v91);
  v71 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  *(__int64 *)((char *)a1
             + *(_QWORD *)(`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1] - 24LL)
             + 232) = v71;
  a1[29] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  a1[45] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  *(__m128i *)(a1 + 31) = v18;
  *(_OWORD *)(a1 + 33) = 0;
  *(_OWORD *)(a1 + 35) = 0;
  *(_OWORD *)(a1 + 37) = 0;
  v91.m128i_i64[0] = (__int64)(a1 + 32);
  std::locale::locale((std::locale *)(a1 + 39));
  *((_DWORD *)a1 + 80) = 24;
  *((_BYTE *)a1 + 344) = 0;
  v19 = v91.m128i_i64[0];
  a1[42] = 0;
  a1[32] = (__int64)&`vtable for'std::stringbuf + 16;
  a1[41] = (__int64)(a1 + 43);
  std::ios::init();
  v101 = 0;
  v103 = &v101;
  v104 = &v101;
  v20 = *a1;
  v102 = nullptr;
  v21 = *(unsigned int *)(v20 + 40);
  v22 = *(_QWORD **)(v20 + 32);
  v105 = nullptr;
  v23 = *(__int64 **)v93;
  v24 = &v22[2 * v21];
  if ( v22 != v24 )
  {
    while ( *v22 <= 1u )
    {
      v22 += 2;
      if ( v24 == v22 )
      {
LABEL_31:
        *(_QWORD *)v93 = v23;
        goto LABEL_11;
      }
    }
    if ( v24 != v22 )
    {
      while ( 2 )
      {
        v19 = (__int64)v22;
        sub_5529E0(&v100, v22);
        v25 = v22 + 2;
        if ( v24 != v22 + 2 )
        {
          while ( 1 )
          {
            v22 = v25;
            if ( *v25 > 1u )
              break;
            v25 += 2;
            if ( v24 == v25 )
            {
              v23 = *(__int64 **)v93;
              goto LABEL_31;
            }
          }
          if ( v24 != v25 )
            continue;
        }
        break;
      }
    }
  }
LABEL_11:
  v26 = **(_QWORD **)v93;
  if ( **(_QWORD **)v93 )
  {
    for ( i = v26 + 24LL * *(unsigned int *)(**(_QWORD **)v93 - 4LL); v26 != i; v26 += 24 )
    {
      v19 = v26;
      sub_5529E0(&v100, v26);
    }
  }
  v28 = (_DWORD)v105 + 1;
  v29 = sub_180B190((unsigned int)((_DWORD)v105 + 1), v19);
  v30 = (1 << v29 < v28) + v29;
  v31 = 0;
  if ( v30 )
  {
    do
    {
      *(_QWORD *)v93 = a1[2];
      v45 = *(_QWORD *)(*(_QWORD *)v93 + 840LL);
      sub_180C5A0(&v95, "rule_id");
      v46 = v45;
      LODWORD(v45) = v93[0];
      v47 = sub_15E3D10(
              v93[0],
              (int)&v95,
              (int)&qword_18D6CD0,
              0,
              0,
              v46,
              1,
              v65,
              v67,
              v71,
              v75,
              v79,
              v83,
              v87,
              v91.m128i_i8[0],
              v91.m128i_i32[2],
              (int)v92,
              v93[0],
              v94,
              v95,
              v96,
              v97,
              v98,
              v99,
              v100,
              v101,
              (int)v102,
              (int)v103,
              (int)v104,
              v105,
              v106,
              v107);
      v50 = sub_15DC610(
              v45,
              v47,
              0,
              0,
              v48,
              v49,
              v69,
              v73,
              v77,
              v81,
              v85,
              v89,
              v91.m128i_i32[0],
              v91.m128i_i32[2],
              (int)v92,
              *(void **)v93);
      *(_QWORD *)v93 = v50;
      if ( v50 )
        ++*(_DWORD *)(v50 + 8);
      v51 = (_QWORD *)a1[25];
      if ( v51 )
      {
        v52 = *((_DWORD *)v51 - 1);
        if ( v52 == *((_DWORD *)v51 - 2) )
        {
          v53 = (3 * v52 + 1) >> 1;
          v54 = 8 * v53 + 8;
          if ( 8 * v52 + 8 >= (unsigned int)v54 || v52 >= v53 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v96, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v96);
            sub_233E40((__int64)&v96);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v55 = (unsigned int *)sub_186B300(v51 - 1, v54);
          v56 = v55[1];
          v51 = v55 + 2;
          *v55 = v53;
          a1[25] = (__int64)(v55 + 2);
          LODWORD(v55) = v56;
          v34 = &v51[v56];
          v33 = (_DWORD)v55 + 1;
        }
        else
        {
          v32 = v52;
          v33 = v52 + 1;
          v34 = &v51[v32];
        }
      }
      else
      {
        v64 = (_QWORD *)sub_186B270(0x18u);
        v51 = v64 + 1;
        *v64 = 2;
        v33 = 1;
        a1[25] = (__int64)v51;
        v34 = v51;
      }
      *v34 = *(_QWORD *)v93;
      *((_DWORD *)v51 - 1) = v33;
      v35 = *(std::ios_base **)(a1[2] + 840);
      *(_QWORD *)v93 = a1[2];
      v92 = v35;
      sub_180C5A0(&v96, "rule_id_p");
      v36 = sub_15E3D10(
              v93[0],
              (int)&v96,
              (int)&qword_18D6CD0,
              0,
              0,
              (int)v92,
              1,
              v66,
              v70,
              v74,
              v78,
              v82,
              v86,
              v90,
              v91.m128i_i8[0],
              v91.m128i_i32[2],
              (int)v92,
              v93[0],
              v94,
              v95,
              v96,
              v97,
              v98,
              v99,
              v100,
              v101,
              (int)v102,
              (int)v103,
              (int)v104,
              v105,
              v106,
              v107);
      v39 = sub_15DC610(
              v93[0],
              v36,
              0,
              0,
              v37,
              v38,
              v68,
              v72,
              v76,
              v80,
              v84,
              v88,
              v91.m128i_i32[0],
              v91.m128i_i32[2],
              (int)v92,
              *(void **)v93);
      *(_QWORD *)v93 = v39;
      if ( v39 )
        ++*(_DWORD *)(v39 + 8);
      v40 = (_QWORD *)a1[27];
      if ( v40 )
      {
        v41 = *((_DWORD *)v40 - 1);
        if ( v41 == *((_DWORD *)v40 - 2) )
        {
          v57 = (3 * v41 + 1) >> 1;
          v58 = 8 * v57 + 8;
          if ( 8 * v41 + 8 >= (unsigned int)v58 || v41 >= v57 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v96, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, &v96);
            sub_233E40((__int64)&v96);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          LODWORD(v92) = (3 * v41 + 1) >> 1;
          v59 = sub_186B300(v40 - 1, v58);
          v60 = (int)v92;
          v40 = (_QWORD *)(v59 + 8);
          a1[27] = v59 + 8;
          *(_DWORD *)v59 = v60;
          LODWORD(v59) = *(_DWORD *)(v59 + 4);
          v44 = &v40[(unsigned int)v59];
          v43 = v59 + 1;
        }
        else
        {
          v42 = v41;
          v43 = v41 + 1;
          v44 = &v40[v42];
        }
      }
      else
      {
        v63 = (_QWORD *)sub_186B270(0x18u);
        v40 = v63 + 1;
        *v63 = 2;
        v43 = 1;
        a1[27] = (__int64)v40;
        v44 = v40;
      }
      ++v31;
      *v44 = *(_QWORD *)v93;
      *((_DWORD *)v40 - 1) = v43;
    }
    while ( v30 != v31 );
  }
  v61 = (_QWORD **)v102;
  if ( v102 )
  {
    do
    {
      sub_54D9D0(v61[3]);
      v62 = v61;
      v61 = (_QWORD **)v61[2];
      operator delete(v62, 0x28u);
    }
    while ( v61 );
  }
}

