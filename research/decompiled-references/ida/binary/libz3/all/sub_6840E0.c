__int64 __fastcall sub_6840E0(__int64 a1, __int64 *a2, double a3)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // r13d
  __int64 v8; // r12
  unsigned int v9; // eax
  __int64 v10; // rsi
  int v11; // eax
  unsigned int *v12; // rsi
  __int64 v13; // rcx
  unsigned int i; // r13d
  __int64 v15; // r12
  unsigned int v16; // eax
  __int64 v17; // rsi
  int v18; // eax
  _QWORD *v19; // rsi
  __int64 *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdi
  unsigned int j; // r12d
  __int64 v24; // rdi
  unsigned int **v25; // r13
  int v26; // eax
  unsigned int *v27; // rbx
  __int64 v28; // rax
  unsigned int v29; // edx
  __int64 v30; // rax
  __int64 v31; // r12
  bool v32; // zf
  _QWORD *v33; // rbx
  _QWORD *v34; // r15
  __int64 v35; // r14
  _QWORD *v36; // rbx
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rax
  unsigned int **v40; // rdx
  unsigned int v41; // esi
  unsigned int v42; // eax
  unsigned int v43; // ebx
  _QWORD *v44; // rsi
  __int64 *(__fastcall *v45)(__int64 *, __int64); // rax
  signed __int64 v46; // r12
  _BYTE *v47; // r14
  double *v48; // rax
  double *v49; // rdi
  size_t v50; // rdx
  double v51; // rcx
  unsigned int v53; // r15d
  size_t v54; // rsi
  unsigned int *v55; // rax
  __int64 v56; // rcx
  unsigned int v57; // r15d
  size_t v58; // rsi
  unsigned int *v59; // rax
  __int64 v60; // rcx
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  char *v63; // rsi
  unsigned int v64; // r12d
  __int64 v65; // r12
  int v66; // eax
  __int64 v67; // r13
  unsigned int *v68; // r15
  __int64 v69; // rdi
  __int64 v70; // rcx
  unsigned int **v71; // r12
  unsigned int *v72; // rsi
  __int64 v73; // rax
  _DWORD *v74; // rax
  double *v75; // rdi
  char **exception; // rbp
  __int64 v77; // rdx
  char **v78; // r12
  __int64 v79; // rdx
  __int64 v81; // [rsp+10h] [rbp-98h]
  unsigned int **v82; // [rsp+18h] [rbp-90h]
  _QWORD *v83; // [rsp+28h] [rbp-80h]
  unsigned int **v84; // [rsp+30h] [rbp-78h]
  __int64 *v85; // [rsp+38h] [rbp-70h]
  __int64 v86; // [rsp+40h] [rbp-68h] BYREF
  _QWORD *v87; // [rsp+48h] [rbp-60h]
  void *v88; // [rsp+50h] [rbp-58h] BYREF
  size_t n; // [rsp+58h] [rbp-50h]
  double src[9]; // [rsp+60h] [rbp-48h] BYREF

  v4 = 0;
  v85 = (__int64 *)(a1 + 1592);
  v83 = (_QWORD *)(a1 + 416);
  sub_6758D0((_QWORD *)(a1 + 416), (__int64 *)(a1 + 1592));
  v84 = (unsigned int **)(a1 + 1552);
  while ( 1 )
  {
    while ( 1 )
    {
      v87 = nullptr;
      v5 = nullptr;
      v6 = a2[1];
      v86 = *a2;
      if ( v6 )
      {
        v7 = 0;
        do
        {
          if ( v7 >= *(_DWORD *)(v6 - 4) )
            break;
          v8 = *(_QWORD *)(v6 + 8LL * v7);
          if ( v8 )
            ++*(_DWORD *)(v8 + 8);
          if ( v5 )
          {
            v9 = *((_DWORD *)v5 - 1);
            if ( v9 == *((_DWORD *)v5 - 2) )
            {
              v57 = (3 * v9 + 1) >> 1;
              v58 = 8 * v57 + 8;
              if ( 8 * v9 + 8 >= (unsigned int)v58 || v9 >= v57 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_107EF6((__int64 *)&v88, "Overflow encountered when expanding vector", v77);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, &v88);
                sub_233E40((__int64)&v88);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v59 = (unsigned int *)sub_186B300(v5 - 1, v58);
              v60 = v59[1];
              v5 = v59 + 2;
              *v59 = v57;
              v87 = v59 + 2;
              v12 = &v59[2 * v60 + 2];
              v11 = v60 + 1;
              v6 = a2[1];
            }
            else
            {
              v10 = v9;
              v11 = v9 + 1;
              v12 = (unsigned int *)&v5[v10];
            }
          }
          else
          {
            v62 = (_QWORD *)sub_186B270(0x18u);
            v12 = (unsigned int *)(v62 + 1);
            v87 = v62 + 1;
            v5 = v62 + 1;
            *v62 = 2;
            v11 = 1;
            v6 = a2[1];
          }
          *(_QWORD *)v12 = v8;
          ++v7;
          *((_DWORD *)v5 - 1) = v11;
        }
        while ( v6 );
      }
      v13 = *(_QWORD *)(a1 + 1552);
      for ( i = 0; v13; *((_DWORD *)v5 - 1) = v18 )
      {
        if ( i >= *(_DWORD *)(v13 - 4) )
          break;
        v15 = *(_QWORD *)(v13 + 8LL * i);
        if ( v15 )
          ++*(_DWORD *)(v15 + 8);
        if ( v5 )
        {
          v16 = *((_DWORD *)v5 - 1);
          if ( v16 == *((_DWORD *)v5 - 2) )
          {
            v53 = (3 * v16 + 1) >> 1;
            v54 = 8 * v53 + 8;
            if ( 8 * v16 + 8 >= (unsigned int)v54 || v16 >= v53 )
            {
              v78 = (char **)__cxa_allocate_exception(0x28u);
              sub_107EF6((__int64 *)&v88, "Overflow encountered when expanding vector", v79);
              *v78 = (char *)off_1C63128;
              sub_2333C0(v78 + 1, &v88);
              sub_233E40((__int64)&v88);
              __cxa_throw(v78, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v55 = (unsigned int *)sub_186B300(v5 - 1, v54);
            v56 = v55[1];
            v5 = v55 + 2;
            *v55 = v53;
            v87 = v5;
            LODWORD(v55) = v56;
            v19 = &v5[v56];
            v13 = *(_QWORD *)(a1 + 1552);
            v18 = (_DWORD)v55 + 1;
          }
          else
          {
            v17 = v16;
            v18 = v16 + 1;
            v19 = &v5[v17];
          }
        }
        else
        {
          v61 = (_QWORD *)sub_186B270(0x18u);
          v5 = v61 + 1;
          v87 = v61 + 1;
          v19 = v61 + 1;
          *v61 = 2;
          v13 = *(_QWORD *)(a1 + 1552);
          v18 = 1;
        }
        *v19 = v15;
        ++i;
      }
      v20 = &v86;
      if ( !(unsigned __int8)sub_675DC0((__int64)v83, (__int64)&v86, v4) )
      {
        v43 = 1;
        sub_2334C0(&v86);
        return v43;
      }
      v21 = *(_QWORD *)(a1 + 440);
      if ( v21 )
      {
        v22 = *(unsigned int *)(v21 - 4);
        if ( (_DWORD)v22 )
          break;
      }
      ++v4;
      sub_2334C0(&v86);
    }
    if ( !(unsigned int)sub_180B130(v22) )
      goto LABEL_27;
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      for ( j = 0; j < *(_DWORD *)(a1 + 408); ++j )
      {
        v22 = sub_180B150(v22, v20);
        v20 = (__int64 *)" ";
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      sub_180B150(v22, v20);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v24 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v24, ")\n");
LABEL_27:
      v25 = *(unsigned int ***)(a1 + 440);
      if ( !v25 )
        goto LABEL_89;
      goto LABEL_28;
    }
    v63 = (char *)*(unsigned int *)(a1 + 408);
    v64 = 0;
    if ( (_DWORD)v63 )
    {
      do
      {
        v22 = sub_180B150(v22, v63);
        v63 = " ";
        std::__ostream_insert<char,std::char_traits<char>>();
        ++v64;
      }
      while ( v64 < *(_DWORD *)(a1 + 408) );
    }
    sub_180B150(v22, v63);
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v25 = *(unsigned int ***)(a1 + 440);
    if ( !v25 )
      goto LABEL_89;
LABEL_28:
    v26 = *((_DWORD *)v25 - 1);
    v82 = &v25[v26];
    if ( v82 == v25 )
      goto LABEL_56;
    do
    {
      v27 = *v25;
      v81 = *(_QWORD *)(a1 + 136);
      if ( *v25 )
        v27[2] += 2;
      v28 = *(_QWORD *)(a1 + 1552);
      if ( !v28 || (v29 = *(_DWORD *)(v28 - 4), v29 == *(_DWORD *)(v28 - 8)) )
      {
        sub_23A6F0(v84);
        v28 = *(_QWORD *)(a1 + 1552);
        v29 = *(_DWORD *)(v28 - 4);
      }
      *(_QWORD *)(v28 + 8LL * v29) = v27;
      *(_DWORD *)(v28 - 4) = v29 + 1;
      v30 = sub_67B850((__int64 *)(a1 + 144), v27);
      v31 = v30;
      if ( v30 )
        ++*(_DWORD *)(v30 + 8);
      if ( v27 )
      {
        v32 = v27[2]-- == 1;
        if ( v32 )
          sub_15D7BC0(v81, v27);
      }
      sub_E5EBF0(*(_QWORD *)(a1 + 1352), v31);
      sub_E5EBF0(*(_QWORD *)(a1 + 1360), v31);
      v33 = *(_QWORD **)(a1 + 216);
      if ( v33 )
      {
        v34 = &v33[*((unsigned int *)v33 - 1)];
        if ( v33 == v34 )
          goto LABEL_49;
        do
        {
          v35 = *v33;
          sub_E5EBF0(*(_QWORD *)(a1 + 1352), *v33);
          sub_E5EBF0(*(_QWORD *)(a1 + 1360), v35);
          ++v33;
        }
        while ( v34 != v33 );
        v34 = *(_QWORD **)(a1 + 216);
        if ( v34 )
        {
          v36 = &v34[*((unsigned int *)v34 - 1)];
          if ( v34 >= v36 )
            goto LABEL_49;
          do
          {
            while ( 1 )
            {
              v37 = *v34;
              if ( *v34 )
              {
                v38 = *(_QWORD *)(a1 + 208);
                v32 = (*(_DWORD *)(v37 + 8))-- == 1;
                if ( v32 )
                  break;
              }
              if ( ++v34 >= v36 )
                goto LABEL_48;
            }
            sub_15D7BC0(v38, v37);
            ++v34;
          }
          while ( v34 < v36 );
LABEL_48:
          v34 = *(_QWORD **)(a1 + 216);
          if ( v34 )
LABEL_49:
            *((_DWORD *)v34 - 1) = 0;
        }
      }
      if ( v31 )
      {
        v32 = (*(_DWORD *)(v31 + 8))-- == 1;
        if ( v32 )
          sub_15D7BC0(v81, v31);
      }
      ++v25;
    }
    while ( v82 != v25 );
    v39 = *(_QWORD *)(a1 + 440);
    if ( v39 )
    {
      v26 = *(_DWORD *)(v39 - 4);
      goto LABEL_56;
    }
LABEL_89:
    v26 = 0;
LABEL_56:
    *(_DWORD *)(a1 + 120) += v26;
    sub_6758D0(v83, v85);
    v40 = (unsigned int **)a2[1];
    v41 = v40 ? *((_DWORD *)v40 - 1) : 0;
    v42 = sub_6837D0(a1, v41, v40);
    v43 = v42;
    if ( !v42 )
      break;
    if ( v42 == -1 )
    {
      (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 1352) + 24LL))(*(_QWORD *)(a1 + 1352), a2);
      v65 = a2[1];
      if ( !v65 )
        goto LABEL_71;
      v66 = *(_DWORD *)(v65 - 4);
      if ( !v66 )
        goto LABEL_71;
      v67 = 8LL * (unsigned int)(v66 - 1);
      while ( 1 )
      {
        v70 = *(_QWORD *)(a1 + 184);
        v71 = (unsigned int **)(v67 + v65);
        v72 = *v71;
        if ( v70 )
        {
          v73 = *v72;
          if ( (unsigned int)v73 < *(_DWORD *)(v70 - 4) )
          {
            v68 = *(unsigned int **)(v70 + 8 * v73);
            if ( v68 )
              break;
          }
        }
        if ( *((_WORD *)v72 + 2)
          || (v74 = *(_DWORD **)(*((_QWORD *)v72 + 2) + 24LL)) == nullptr
          || *v74
          || v74[1] != 8
          || v72[6] != 1 )
        {
          sub_1872CE0("");
          sub_1873130(114, 365);
        }
        v68 = (unsigned int *)sub_15E1A70(*(_QWORD *)(a1 + 144));
        sub_67B850((__int64 *)(a1 + 144), v68);
        v69 = *a2;
        v71 = (unsigned int **)(v67 + a2[1]);
        v72 = *v71;
        if ( v68 )
          goto LABEL_95;
LABEL_96:
        if ( v72 )
        {
          v32 = v72[2]-- == 1;
          if ( v32 )
            sub_15D7BC0(v69, v72);
        }
        v67 -= 8;
        *v71 = v68;
        if ( v67 == -8 )
          goto LABEL_71;
        v65 = a2[1];
      }
      v69 = *a2;
LABEL_95:
      ++v68[2];
      goto LABEL_96;
    }
    if ( v42 != 1 )
      goto LABEL_71;
    sub_39A840(*(_QWORD **)(a1 + 1352), v85);
    sub_1360B80(*(_QWORD *)(a1 + 1592) + 128LL, 1);
    sub_6758D0(v83, v85);
    v4 = 0;
    sub_2334C0(&v86);
  }
  v44 = *(_QWORD **)(a1 + 1352);
  v45 = *(__int64 *(__fastcall **)(__int64 *, __int64))(*v44 + 48LL);
  if ( v45 == sub_676760 )
  {
    v46 = v44[201];
    v88 = src;
    v47 = (_BYTE *)v44[200];
    if ( (unsigned __int64)v46 > 0xF )
    {
      if ( v46 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      if ( v46 + 1 < 0 )
        std::__throw_bad_alloc();
      v88 = (void *)operator new(v46 + 1);
      v75 = (double *)v88;
      *(_QWORD *)&src[0] = v46;
      goto LABEL_111;
    }
    if ( v46 == 1 )
    {
      LOBYTE(src[0]) = *v47;
LABEL_63:
      v48 = src;
    }
    else
    {
      if ( !v46 )
        goto LABEL_63;
      v75 = src;
LABEL_111:
      memcpy(v75, v47, v46);
      v48 = (double *)v88;
    }
    n = v46;
    *((_BYTE *)v48 + v46) = 0;
  }
  else
  {
    ((void (__fastcall *)(void **))v45)(&v88);
  }
  v49 = *(double **)(a1 + 1600);
  v50 = n;
  if ( v49 == (double *)(a1 + 1616) )
  {
    if ( v88 != src )
    {
      *(_QWORD *)(a1 + 1600) = v88;
      *(__m128 *)(a1 + 1608) = _mm_loadh_ps(src);
      goto LABEL_120;
    }
  }
  else if ( v88 != src )
  {
    v51 = *(double *)(a1 + 1616);
    *(_QWORD *)(a1 + 1600) = v88;
    *(__m128 *)(a1 + 1608) = _mm_loadh_ps(src);
    if ( v49 )
    {
      v88 = v49;
      src[0] = v51;
      goto LABEL_69;
    }
LABEL_120:
    v88 = src;
    v49 = src;
    goto LABEL_69;
  }
  if ( n )
  {
    if ( n == 1 )
      *(_BYTE *)v49 = LOBYTE(src[0]);
    else
      memcpy(v49, src, n);
    v50 = n;
    v49 = *(double **)(a1 + 1600);
  }
  *(_QWORD *)(a1 + 1608) = v50;
  *((_BYTE *)v49 + v50) = 0;
  v49 = (double *)v88;
LABEL_69:
  n = 0;
  *(_BYTE *)v49 = 0;
  if ( v88 != src )
    operator delete(v88, *(_QWORD *)&src[0] + 1LL);
LABEL_71:
  sub_2334C0(&v86);
  return v43;
}

