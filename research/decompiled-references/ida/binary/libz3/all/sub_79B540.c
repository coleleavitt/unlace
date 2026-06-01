__int64 __fastcall sub_79B540(__int64 a1, unsigned int a2, unsigned int *a3, double a4)
{
  char **v4; // rbx
  char **v5; // rbx
  char **v6; // rbx
  char **v7; // rbx
  char **exception; // rbx
  char **v9; // rbx
  unsigned int v11; // r13d
  __int64 v13; // rbp
  _QWORD *v14; // rdi
  size_t v15; // rsi
  _QWORD *v16; // rcx
  unsigned int v17; // r12d
  unsigned int v18; // r15d
  __int64 v19; // r13
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // r12
  _QWORD *v26; // rax
  unsigned int v27; // edx
  unsigned int v28; // ebp
  unsigned int *v29; // rax
  unsigned int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // rdx
  __int64 v34; // rax
  _DWORD *v35; // rax
  unsigned int v36; // edx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r12
  __int64 v40; // rdi
  int v41; // ecx
  int v42; // r8d
  int v43; // r9d
  int v44; // edx
  int v45; // eax
  _QWORD *v47; // rcx
  __int64 v48; // rax
  _DWORD *v49; // rax
  _QWORD *v50; // r15
  unsigned int v51; // edx
  __int64 v52; // rax
  _DWORD *v53; // rax
  __int64 v54; // rdi
  __int64 v55; // r9
  __int64 v56; // r10
  __int64 v57; // rdi
  unsigned int v58; // edx
  size_t v59; // rsi
  unsigned int v60; // ebp
  unsigned int *v61; // rax
  unsigned int v62; // eax
  __int64 v63; // rax
  __int64 v64; // rdx
  _DWORD *v65; // rdi
  unsigned int *v66; // r15
  unsigned int v67; // r14d
  unsigned int v68; // r13d
  unsigned int v69; // edx
  size_t v70; // rsi
  unsigned int v71; // ebp
  unsigned int *v72; // rax
  unsigned int v73; // eax
  __int64 v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rdx
  _DWORD *v77; // r15
  _DWORD *v78; // rdi
  _QWORD *v79; // rax
  __int64 v80; // r12
  __int64 v81; // r12
  unsigned int v82; // r12d
  size_t v83; // rsi
  unsigned int *v84; // rax
  __int64 v85; // rax
  unsigned int v86; // r12d
  size_t v87; // rsi
  unsigned int *v88; // rax
  __int64 v89; // rax
  unsigned int v90; // ecx
  size_t v91; // rsi
  unsigned int *v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  _QWORD *v95; // rax
  _QWORD *v96; // rax
  _QWORD *v97; // rax
  _QWORD *v98; // rax
  unsigned int v99; // [rsp+20h] [rbp-C8h]
  _QWORD *v100; // [rsp+20h] [rbp-C8h]
  int v101; // [rsp+20h] [rbp-C8h]
  _QWORD *v102; // [rsp+20h] [rbp-C8h]
  int v103; // [rsp+20h] [rbp-C8h]
  _QWORD *v104; // [rsp+20h] [rbp-C8h]
  unsigned int v105; // [rsp+20h] [rbp-C8h]
  unsigned int v106; // [rsp+28h] [rbp-C0h]
  __int64 v107; // [rsp+30h] [rbp-B8h]
  __int64 v108; // [rsp+40h] [rbp-A8h]
  __int64 v109; // [rsp+48h] [rbp-A0h]
  _BYTE v110[16]; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v111[32]; // [rsp+60h] [rbp-88h] BYREF
  __m128i v112; // [rsp+80h] [rbp-68h] BYREF
  __int64 v113[11]; // [rsp+90h] [rbp-58h] BYREF

  v11 = a2;
  LODWORD(v13) = a2 >> 1;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24), a2 >> 1);
  v14 = *(_QWORD **)(a1 + 24);
  v15 = (unsigned int)v13;
  (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*v14 + 40LL))(v14, (unsigned int)v13, 0);
  if ( (v11 & 1) == 0 )
  {
    v16 = *(_QWORD **)(a1 + 2328);
    v17 = v13 + 1;
    v18 = v11;
    if ( v16 )
      goto LABEL_3;
    goto LABEL_12;
  }
  v13 = (*(unsigned int (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 152) + 40LL))(
          *(_QWORD *)(a1 + 152),
          a3);
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24), v13);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 40LL))(
    *(_QWORD *)(a1 + 24),
    (unsigned int)v13,
    0);
  v47 = *(_QWORD **)(a1 + 2376);
  if ( v47 )
  {
    v48 = *((unsigned int *)v47 - 1);
    if ( (_DWORD)v48 == *((_DWORD *)v47 - 2) )
    {
      v86 = (unsigned int)(3 * v48 + 1) >> 1;
      v87 = 4 * v86 + 8;
      if ( 4 * (int)v48 + 8 >= (unsigned int)v87 || (unsigned int)v48 >= v86 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v112.m128i_i64, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v112);
        sub_233E40((__int64)&v112);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v88 = (unsigned int *)sub_186B300(v47 - 1, v87);
      v47 = v88 + 2;
      *v88 = v86;
      v89 = v88[1];
      *(_QWORD *)(a1 + 2376) = v47;
      v49 = (_DWORD *)v47 + v89;
    }
    else
    {
      v49 = (_DWORD *)v47 + v48;
    }
  }
  else
  {
    v96 = (_QWORD *)sub_186B270(0x10u);
    v47 = v96 + 1;
    *v96 = 2;
    *(_QWORD *)(a1 + 2376) = v96 + 1;
    v49 = v96 + 1;
  }
  v50 = *(_QWORD **)(a1 + 2328);
  *v49 = v13;
  ++*((_DWORD *)v47 - 1);
  if ( v50 )
  {
    v51 = *((_DWORD *)v50 - 1);
    if ( (unsigned int)v13 < v51 )
    {
LABEL_40:
      v50[(unsigned int)v13] = a3;
      goto LABEL_41;
    }
    v17 = v13 + 1;
    if ( v51 >= (int)v13 + 1 )
    {
      *((_DWORD *)v50 - 1) = v17;
      goto LABEL_40;
    }
  }
  else
  {
    v17 = v13 + 1;
    if ( (_DWORD)v13 == -1 )
    {
      MEMORY[0x7FFFFFFF8] = a3;
LABEL_41:
      v52 = *((unsigned int *)v47 - 1);
      if ( (_DWORD)v52 == *((_DWORD *)v47 - 2) )
      {
        v82 = (unsigned int)(3 * v52 + 1) >> 1;
        v83 = 4 * v82 + 8;
        if ( 4 * (int)v52 + 8 >= (unsigned int)v83 || (unsigned int)v52 >= v82 )
        {
          v9 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v112.m128i_i64, "Overflow encountered when expanding vector");
          *v9 = (char *)off_1C63128;
          sub_2333C0(v9 + 1, &v112);
          sub_233E40((__int64)&v112);
          __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v84 = (unsigned int *)sub_186B300(v47 - 1, v83);
        v47 = v84 + 2;
        *v84 = v82;
        v85 = v84[1];
        v17 = v13 + 1;
        *(_QWORD *)(a1 + 2376) = v47;
        v53 = (_DWORD *)v47 + v85;
      }
      else
      {
        v53 = (_DWORD *)v47 + v52;
        v17 = v13 + 1;
      }
      goto LABEL_43;
    }
    v95 = (_QWORD *)sub_186B270(0x18u);
    v51 = 0;
    v50 = v95 + 1;
    *v95 = 2;
    *(_QWORD *)(a1 + 2328) = v95 + 1;
  }
  v65 = v50;
  v103 = v13;
  v66 = a3;
  v67 = v11;
  v68 = v51;
  while ( 1 )
  {
    v73 = *(v65 - 2);
    if ( v73 >= v17 )
      break;
    v69 = (3 * v73 + 1) >> 1;
    v70 = 8 * v69 + 8;
    v71 = v69;
    if ( 8 * v73 + 8 >= (unsigned int)v70 || v73 >= v69 )
    {
      v4 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v112.m128i_i64, "Overflow encountered when expanding vector");
      *v4 = (char *)off_1C63128;
      sub_2333C0(v4 + 1, &v112);
      sub_233E40((__int64)&v112);
      __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v72 = (unsigned int *)sub_186B300(v65 - 2, v70);
    v65 = v72 + 2;
    *v72 = v71;
    *(_QWORD *)(a1 + 2328) = v72 + 2;
  }
  v74 = v68;
  *(v65 - 1) = v17;
  v11 = v67;
  LODWORD(v13) = v103;
  v75 = 8 * v74;
  a3 = v66;
  v47 = *(_QWORD **)(a1 + 2376);
  v76 = 8LL * v17;
  v77 = v65;
  v78 = &v65[(unsigned __int64)v75 / 4];
  if ( v75 != v76 )
  {
    v104 = *(_QWORD **)(a1 + 2376);
    memset(v78, 0, v76 - v75);
    v47 = v104;
  }
  *(_QWORD *)&v77[2 * (unsigned int)v13] = a3;
  if ( v47 )
    goto LABEL_41;
  v79 = (_QWORD *)sub_186B270(0x10u);
  v47 = v79 + 1;
  *v79 = 2;
  *(_QWORD *)(a1 + 2376) = v79 + 1;
  v53 = v79 + 1;
LABEL_43:
  v18 = 2 * v13;
  *v53 = v13;
  v54 = *(_QWORD *)(a1 + 24);
  ++*((_DWORD *)v47 - 1);
  v107 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v11), _mm_cvtsi32_si128((2 * v13) ^ 1)).m128i_u64[0];
  if ( v54 && *(_BYTE *)(v54 + 352) )
  {
    sub_7A4170(a1);
    sub_180C5A0(v110, "tseitin");
    v112.m128i_i32[1] = 2 * v13;
    v112.m128i_i32[0] = v11 ^ 1;
    v109 = sub_7A65F0(a1, (unsigned int)v110, 2, (unsigned int)&v112, 0, 0, 0, 0);
    sub_180C5A0(v110, "tseitin");
    v112.m128i_i64[0] = v107;
    v94 = sub_7A65F0(a1, (unsigned int)v110, 2, (unsigned int)&v112, 0, 0, 0, 0);
    v54 = *(_QWORD *)(a1 + 24);
    v55 = v94;
    v56 = v109;
  }
  else
  {
    v55 = 0;
    v56 = 0;
  }
  v112.m128i_i64[1] = v56;
  v108 = v55;
  v112.m128i_i64[0] = 1;
  sub_11C4C70(v54, v11 ^ 1, v18, &v112);
  v57 = *(_QWORD *)(a1 + 24);
  v112.m128i_i64[0] = 1;
  v112.m128i_i64[1] = v108;
  sub_11C4C70(v57, v11, (2 * (_DWORD)v13) ^ 1u, &v112);
  v112.m128i_i32[1] = 2 * v13;
  v112.m128i_i32[0] = v11 ^ 1;
  sub_7F3170(a1 + 160, 2, &v112);
  v14 = (_QWORD *)(a1 + 160);
  v15 = 2;
  v112.m128i_i64[0] = v107;
  sub_7F3170(a1 + 160, 2, &v112);
  v16 = *(_QWORD **)(a1 + 2328);
  if ( v16 )
  {
LABEL_3:
    v19 = *((unsigned int *)v16 - 1);
    if ( (unsigned int)v19 >= v17 )
    {
      v20 = (unsigned int)v13;
      goto LABEL_5;
    }
    goto LABEL_13;
  }
  if ( !v17 )
  {
    v20 = 0xFFFFFFFFLL;
    LODWORD(v13) = -1;
    v18 = -2;
    goto LABEL_5;
  }
LABEL_12:
  v19 = 0;
  v26 = (_QWORD *)sub_186B270(0x18u);
  v16 = v26 + 1;
  *v26 = 2;
  *(_QWORD *)(a1 + 2328) = v26 + 1;
LABEL_13:
  v99 = v13;
  while ( 1 )
  {
    v30 = *((_DWORD *)v16 - 2);
    if ( v30 >= v17 )
      break;
    v27 = (3 * v30 + 1) >> 1;
    v15 = 8 * v27 + 8;
    v28 = v27;
    if ( 8 * v30 + 8 >= (unsigned int)v15 || v30 >= v27 )
    {
      v5 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v112.m128i_i64, "Overflow encountered when expanding vector");
      *v5 = (char *)off_1C63128;
      sub_2333C0(v5 + 1, &v112);
      sub_233E40((__int64)&v112);
      __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v29 = (unsigned int *)sub_186B300(v16 - 1, v15);
    v16 = v29 + 2;
    *v29 = v28;
    *(_QWORD *)(a1 + 2328) = v29 + 2;
  }
  v31 = 8 * v19;
  *((_DWORD *)v16 - 1) = v17;
  v32 = 8LL * v17;
  v14 = &v16[v19];
  LODWORD(v13) = v99;
  v20 = v99;
  if ( v31 != v32 )
  {
    v15 = 0;
    v100 = v16;
    memset(v14, 0, v32 - v31);
    v16 = v100;
    if ( !v100[v20] )
      goto LABEL_20;
    goto LABEL_6;
  }
LABEL_5:
  if ( !v16[v20] )
    goto LABEL_20;
LABEL_6:
  v21 = *(_QWORD *)(a1 + 1720);
  if ( v21 )
  {
    v22 = *a3;
    if ( (unsigned int)v22 < *(_DWORD *)(v21 - 4) )
    {
      v23 = *(_QWORD *)(v21 + 8 * v22);
      if ( v23 )
      {
        if ( (_DWORD)v13 != *(_DWORD *)(v23 + 28) )
        {
          sub_180B130(v14);
          if ( (unsigned __int8)sub_186A530(a4) )
          {
            sub_186A4C0(a4);
            sub_180B150(v14, v15);
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::_M_insert<unsigned long>();
            std::__ostream_insert<char,std::char_traits<char>>();
            std::__ostream_insert<char,std::char_traits<char>>();
            v24 = std::ostream::_M_insert<unsigned long>();
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_1606360(v110, *(_QWORD *)(*(_QWORD *)(a1 + 2328) + v20 * 8), *(_QWORD *)(a1 + 144), 0, 0, 0);
            v25 = sub_160E8B0(v24, v110);
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_1606360(&v112, a3, *(_QWORD *)(a1 + 144), 0, 0, 0);
            sub_160E8B0(v25, &v112);
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_18572D0(v113);
            sub_18572D0(v111);
            sub_186A500(v111, "\n");
          }
          else
          {
            sub_180B150(v14, v15);
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::_M_insert<unsigned long>();
            std::__ostream_insert<char,std::char_traits<char>>();
            std::__ostream_insert<char,std::char_traits<char>>();
            v80 = std::ostream::_M_insert<unsigned long>();
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_1606360(v110, *(_QWORD *)(*(_QWORD *)(a1 + 2328) + v20 * 8), *(_QWORD *)(a1 + 144), 0, 0, 0);
            v81 = sub_160E8B0(v80, v110);
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_1606360(&v112, a3, *(_QWORD *)(a1 + 144), 0, 0, 0);
            sub_160E8B0(v81, &v112);
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_18572D0(v113);
            sub_18572D0(v111);
          }
        }
        return v18;
      }
    }
  }
LABEL_20:
  v33 = *(_QWORD **)(a1 + 2376);
  if ( v33 )
  {
    v34 = *((unsigned int *)v33 - 1);
    if ( (_DWORD)v34 == *((_DWORD *)v33 - 2) )
    {
      v90 = (unsigned int)(3 * v34 + 1) >> 1;
      v91 = 4 * v90 + 8;
      if ( 4 * (int)v34 + 8 >= (unsigned int)v91 || (unsigned int)v34 >= v90 )
      {
        v7 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v112.m128i_i64, "Overflow encountered when expanding vector");
        *v7 = (char *)off_1C63128;
        sub_2333C0(v7 + 1, &v112);
        sub_233E40((__int64)&v112);
        __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v105 = (unsigned int)(3 * v34 + 1) >> 1;
      v92 = (unsigned int *)sub_186B300(v33 - 1, v91);
      v33 = v92 + 2;
      *v92 = v105;
      v93 = v92[1];
      *(_QWORD *)(a1 + 2376) = v33;
      v16 = *(_QWORD **)(a1 + 2328);
      v35 = (_DWORD *)v33 + v93;
    }
    else
    {
      v35 = (_DWORD *)v33 + v34;
    }
  }
  else
  {
    v98 = (_QWORD *)sub_186B270(0x10u);
    v16 = *(_QWORD **)(a1 + 2328);
    v33 = v98 + 1;
    *v98 = 2;
    *(_QWORD *)(a1 + 2376) = v98 + 1;
    v35 = v98 + 1;
  }
  *v35 = v13;
  ++*((_DWORD *)v33 - 1);
  if ( v16 )
  {
    v36 = *((_DWORD *)v16 - 1);
    if ( (unsigned int)v13 < v36 )
      goto LABEL_25;
    if ( v36 < v17 )
    {
      v101 = v13;
      v106 = *((_DWORD *)v16 - 1);
LABEL_54:
      while ( 1 )
      {
        v62 = *((_DWORD *)v16 - 2);
        if ( v62 >= v17 )
          break;
        v58 = (3 * v62 + 1) >> 1;
        v59 = 8 * v58 + 8;
        v60 = v58;
        if ( 8 * v62 + 8 >= (unsigned int)v59 || v62 >= v58 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v112.m128i_i64, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, &v112);
          sub_233E40((__int64)&v112);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v61 = (unsigned int *)sub_186B300(v16 - 1, v59);
        v16 = v61 + 2;
        *v61 = v60;
        *(_QWORD *)(a1 + 2328) = v61 + 2;
      }
      LODWORD(v13) = v101;
      *((_DWORD *)v16 - 1) = v17;
      v63 = 8LL * v106;
      v64 = 8LL * v17;
      if ( v63 != v64 )
      {
        v102 = v16;
        memset(&v16[(unsigned __int64)v63 / 8], 0, v64 - v63);
        v16 = v102;
      }
      goto LABEL_25;
    }
    *((_DWORD *)v16 - 1) = v17;
  }
  else if ( v17 )
  {
    v97 = (_QWORD *)sub_186B270(0x18u);
    v101 = v13;
    v16 = v97 + 1;
    *v97 = 2;
    *(_QWORD *)(a1 + 2328) = v97 + 1;
    v106 = 0;
    goto LABEL_54;
  }
LABEL_25:
  v37 = *(_QWORD *)(a1 + 1720);
  v16[v20] = a3;
  if ( !v37 || (v38 = *a3, (unsigned int)v38 >= *(_DWORD *)(v37 - 4)) || (v39 = *(_QWORD *)(v37 + 8 * v38)) == 0 )
    v39 = sub_79AF20(a1, (__int64)a3, 0, nullptr);
  v40 = *(_QWORD *)(a1 + 152);
  *(_DWORD *)(v39 + 28) = v13;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v40 + 16LL))(v40, a3) )
    sub_13D8B90(a1 + 1592, v39, 0);
  v44 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 3288LL) + 4LL * v18);
  if ( v44 )
  {
    v112.m128i_i8[8] = 0;
    v45 = v18 ^ 1;
    v112.m128i_i32[0] = 2;
    if ( v44 == 1 )
      v45 = v18;
    v113[0] = (16 * v45) | 1u;
    sub_13D74D0(a1 + 1592, v39, v44, v41, v42, v43, (__int128)_mm_load_si128(&v112), v113[0]);
  }
  return v18;
}

