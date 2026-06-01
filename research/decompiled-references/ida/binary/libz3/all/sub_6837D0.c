__int64 __fastcall sub_6837D0(__int64 a1, unsigned int a2, unsigned int **a3)
{
  int v3; // r13d
  __int64 v6; // rax
  unsigned int *v7; // r12
  __int64 v8; // r13
  unsigned int **v9; // rcx
  unsigned int *v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf
  __int64 v13; // rax
  __int64 v14; // rdx
  _DWORD *v15; // rax
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rax
  unsigned int v22; // r15d
  _QWORD *v23; // rcx
  unsigned int *v24; // rbp
  unsigned int v25; // r13d
  __int64 v26; // r13
  __int64 *v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // rcx
  unsigned int v33; // r15d
  unsigned int v34; // r13d
  unsigned int i; // eax
  unsigned int v36; // edx
  size_t v37; // rsi
  unsigned int v38; // r14d
  unsigned int *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r14
  unsigned int v42; // edx
  size_t v43; // rsi
  unsigned int v44; // r14d
  unsigned int *v45; // rax
  unsigned int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // r14
  __int64 v49; // rax
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  _QWORD *v52; // rbp
  _QWORD *j; // r13
  __int64 v54; // r14
  std::ios_base *v55; // rdi
  unsigned int v56; // r13d
  _QWORD *v57; // rsi
  __int64 *(__fastcall *v58)(__int64 *, __int64); // rax
  signed __int64 v59; // rbp
  _BYTE *v60; // r15
  double *v61; // rax
  double *v62; // rdi
  size_t v63; // xmm0_8
  __m128 v64; // xmm0
  double v65; // rdx
  double *v67; // rdi
  char **v68; // r13
  __int64 v69; // rdx
  char **exception; // r13
  __int64 v71; // rdx
  unsigned int **v72; // [rsp+8h] [rbp-B0h]
  unsigned int *v73; // [rsp+10h] [rbp-A8h]
  __int64 v74; // [rsp+18h] [rbp-A0h]
  __int64 *v75; // [rsp+20h] [rbp-98h]
  unsigned int v76; // [rsp+30h] [rbp-88h]
  unsigned int v77; // [rsp+30h] [rbp-88h]
  _QWORD *v78; // [rsp+30h] [rbp-88h]
  _QWORD *v79; // [rsp+30h] [rbp-88h]
  unsigned int **v80; // [rsp+38h] [rbp-80h]
  unsigned int **v81; // [rsp+40h] [rbp-78h]
  __int64 v82; // [rsp+50h] [rbp-68h] BYREF
  unsigned int *v83; // [rsp+58h] [rbp-60h] BYREF
  void *v84; // [rsp+60h] [rbp-58h] BYREF
  size_t n; // [rsp+68h] [rbp-50h]
  double src[9]; // [rsp+70h] [rbp-48h] BYREF

  v3 = a2;
  v6 = *(_QWORD *)(a1 + 136);
  v83 = nullptr;
  v82 = v6;
  sub_2FCDE0(&v82);
  if ( a2 )
  {
    v72 = a3;
    v7 = nullptr;
    v80 = &a3[a2];
    v75 = (__int64 *)(a1 + 144);
    v81 = (unsigned int **)(a1 + 200);
    while ( 1 )
    {
      v73 = *v72;
      v17 = sub_67B850(v75, *v72);
      v74 = v17;
      if ( *(_WORD *)(v17 + 4) )
        break;
      v18 = *(unsigned int *)(v17 + 24);
      v20 = *(_QWORD **)(*(_QWORD *)(v17 + 16) + 24LL);
      if ( (_DWORD)v18 )
      {
        if ( !v20 )
          break;
        v19 = *(unsigned int *)v20;
        if ( *v20 != 0x800000000LL )
          break;
        if ( (_DWORD)v18 != 1 )
          break;
        v49 = *(_QWORD *)(v74 + 32);
        if ( *(_WORD *)(v49 + 4) )
          break;
        v18 = *(unsigned int *)(v49 + 24);
        if ( (_DWORD)v18 )
          break;
        v20 = *(_QWORD **)(*(_QWORD *)(v49 + 16) + 24LL);
      }
      if ( v20 && *(_DWORD *)v20 != -1 )
        break;
      v24 = (unsigned int *)v74;
LABEL_11:
      ++v24[2];
      if ( !v7 || (v16 = *(v7 - 1), v16 == *(v7 - 2)) )
      {
        v83 = v7;
        sub_23A6F0(&v83);
        v7 = v83;
        v16 = *(v83 - 1);
      }
      ++v72;
      *(_QWORD *)&v7[2 * v16] = v24;
      *(v7 - 1) = v16 + 1;
      if ( v72 == v80 )
      {
        v52 = *(_QWORD **)(a1 + 216);
        if ( v52 )
          goto LABEL_57;
        sub_2FCDE0((__int64 *)(a1 + 208));
        v55 = *(std::ios_base **)(a1 + 1352);
LABEL_60:
        v3 = *(v7 - 1);
        goto LABEL_61;
      }
    }
    v21 = sub_6789D0(v75, v73, v18, v19);
    v22 = *v73;
    v23 = *(_QWORD **)(a1 + 168);
    v24 = (unsigned int *)v21;
    v25 = *v73 + 1;
    if ( v23 )
    {
      v76 = *((_DWORD *)v23 - 1);
      if ( v76 >= v25 )
        goto LABEL_20;
    }
    else
    {
      if ( *v73 == -1 )
        goto LABEL_20;
      v51 = (_QWORD *)sub_186B270(0x18u);
      v76 = 0;
      *v51 = 2;
      v23 = v51 + 1;
      *(_QWORD *)(a1 + 168) = v51 + 1;
    }
    while ( 1 )
    {
      v46 = *((_DWORD *)v23 - 2);
      if ( v46 >= v25 )
        break;
      v42 = (3 * v46 + 1) >> 1;
      v43 = 8 * v42 + 8;
      v44 = v42;
      if ( 8 * v46 + 8 >= (unsigned int)v43 || v46 >= v42 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_107EF6((__int64 *)&v84, "Overflow encountered when expanding vector", v71);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v84);
        sub_233E40((__int64)&v84);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v45 = (unsigned int *)sub_186B300(v23 - 1, v43);
      v23 = v45 + 2;
      *v45 = v44;
      *(_QWORD *)(a1 + 168) = v45 + 2;
    }
    *((_DWORD *)v23 - 1) = v25;
    v47 = 8LL * v25;
    v48 = 8LL * v76;
    if ( v48 != v47 )
    {
      v79 = v23;
      memset(&v23[(unsigned __int64)v48 / 8], 0, v47 - v48);
      v23 = v79;
    }
LABEL_20:
    if ( v24 )
      ++v24[2];
    v26 = v22;
    v27 = &v23[v26];
    v28 = *v27;
    if ( *v27 )
    {
      v29 = *(_QWORD *)(a1 + 160);
      v12 = (*(_DWORD *)(v28 + 8))-- == 1;
      if ( v12 )
      {
        sub_15D7BC0(v29, v28);
        v27 = (__int64 *)(v26 * 8 + *(_QWORD *)(a1 + 168));
      }
    }
    v30 = *(_QWORD *)(a1 + 352);
    *v27 = (__int64)v24;
    if ( !v30 || (v31 = *(unsigned int *)(v30 - 4), (_DWORD)v31 == *(_DWORD *)(v30 - 8)) )
    {
      sub_2FD3F0((unsigned int **)(a1 + 352));
      v30 = *(_QWORD *)(a1 + 352);
      v31 = *(unsigned int *)(v30 - 4);
    }
    *(_DWORD *)(v30 + 4 * v31) = v22;
    v32 = *(_QWORD **)(a1 + 184);
    ++*(_DWORD *)(v30 - 4);
    v33 = *v24;
    v34 = *v24 + 1;
    if ( v32 )
    {
      v77 = *((_DWORD *)v32 - 1);
      if ( v77 < v34 )
      {
        for ( i = *((_DWORD *)v32 - 2); i < v34; i = *((_DWORD *)v32 - 2) )
        {
          v36 = (3 * i + 1) >> 1;
          v37 = 8 * v36 + 8;
          v38 = v36;
          if ( 8 * i + 8 >= (unsigned int)v37 || i >= v36 )
          {
            v68 = (char **)__cxa_allocate_exception(0x28u);
            sub_107EF6((__int64 *)&v84, "Overflow encountered when expanding vector", v69);
            *v68 = (char *)off_1C63128;
            sub_2333C0(v68 + 1, &v84);
            sub_233E40((__int64)&v84);
            __cxa_throw(v68, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v39 = (unsigned int *)sub_186B300(v32 - 1, v37);
          v32 = v39 + 2;
          *v39 = v38;
          *(_QWORD *)(a1 + 184) = v39 + 2;
LABEL_33:
          ;
        }
        *((_DWORD *)v32 - 1) = v34;
        v40 = 8LL * v34;
        v41 = 8LL * v77;
        if ( v41 != v40 )
        {
          v78 = v32;
          memset(&v32[(unsigned __int64)v41 / 8], 0, v40 - v41);
          v32 = v78;
        }
      }
    }
    else if ( *v24 != -1 )
    {
      v50 = (_QWORD *)sub_186B270(0x18u);
      v77 = 0;
      *v50 = 2;
      v32 = v50 + 1;
      *(_QWORD *)(a1 + 184) = v50 + 1;
      goto LABEL_33;
    }
    v8 = v33;
    v9 = (unsigned int **)&v32[v8];
    ++v73[2];
    v10 = *v9;
    if ( *v9 )
    {
      v11 = *(_QWORD *)(a1 + 176);
      v12 = v10[2]-- == 1;
      if ( v12 )
      {
        sub_15D7BC0(v11, v10);
        v9 = (unsigned int **)(v8 * 8 + *(_QWORD *)(a1 + 184));
      }
    }
    *v9 = v73;
    v13 = *(_QWORD *)(a1 + 360);
    if ( !v13 || (v14 = *(unsigned int *)(v13 - 4), (_DWORD)v14 == *(_DWORD *)(v13 - 8)) )
    {
      sub_2FD3F0((unsigned int **)(a1 + 360));
      v13 = *(_QWORD *)(a1 + 360);
      v14 = *(unsigned int *)(v13 - 4);
    }
    *(_DWORD *)(v13 + 4 * v14) = v33;
    ++*(_DWORD *)(v13 - 4);
    v84 = v24;
    ++v24[2];
    sub_6761A0(v81, &v84);
    v15 = (_DWORD *)sub_15E1B70(*(_QWORD *)(a1 + 144));
    v84 = v15;
    if ( v15 )
      ++v15[2];
    sub_6761A0((unsigned int **)(a1 + 216), &v84);
    goto LABEL_11;
  }
  v52 = *(_QWORD **)(a1 + 216);
  v7 = nullptr;
  if ( v52 )
  {
LABEL_57:
    for ( j = &v52[*((unsigned int *)v52 - 1)]; j != v52; ++v52 )
    {
      v54 = *v52;
      sub_E5EBF0(*(_QWORD *)(a1 + 1352), *v52);
      sub_E5EBF0(*(_QWORD *)(a1 + 1360), v54);
    }
    sub_2FCDE0((__int64 *)(a1 + 208));
    v55 = *(std::ios_base **)(a1 + 1352);
    if ( v7 )
      goto LABEL_60;
    v3 = 0;
  }
  else
  {
    sub_2FCDE0((__int64 *)(a1 + 208));
    v55 = *(std::ios_base **)(a1 + 1352);
    v7 = nullptr;
  }
LABEL_61:
  v56 = sub_E60CB0(v55, v3, (int)v7);
  if ( !v56 )
  {
    v57 = *(_QWORD **)(a1 + 1352);
    v58 = *(__int64 *(__fastcall **)(__int64 *, __int64))(*v57 + 48LL);
    if ( v58 != sub_676760 )
    {
      ((void (__fastcall *)(void **))v58)(&v84);
LABEL_68:
      v62 = *(double **)(a1 + 1600);
      v63 = n;
      if ( v62 == (double *)(a1 + 1616) )
      {
        if ( v84 != src )
        {
          *(_QWORD *)(a1 + 1600) = v84;
          *(__m128 *)(a1 + 1608) = _mm_loadh_ps(src);
          goto LABEL_85;
        }
      }
      else if ( v84 != src )
      {
        v64 = _mm_loadh_ps(src);
        v65 = *(double *)(a1 + 1616);
        *(_QWORD *)(a1 + 1600) = v84;
        *(__m128 *)(a1 + 1608) = v64;
        if ( v62 )
        {
          v84 = v62;
          src[0] = v65;
          goto LABEL_72;
        }
LABEL_85:
        v84 = src;
        v62 = src;
LABEL_72:
        n = 0;
        *(_BYTE *)v62 = 0;
        if ( v84 != src )
          operator delete(v84, *(_QWORD *)&src[0] + 1LL);
        goto LABEL_74;
      }
      if ( n )
      {
        if ( n == 1 )
          *(_BYTE *)v62 = LOBYTE(src[0]);
        else
          memcpy(v62, src, n);
        v63 = n;
        v62 = *(double **)(a1 + 1600);
      }
      *(_QWORD *)(a1 + 1608) = v63;
      *((_BYTE *)v62 + v63) = 0;
      v62 = (double *)v84;
      goto LABEL_72;
    }
    v59 = v57[201];
    v84 = src;
    v60 = (_BYTE *)v57[200];
    if ( (unsigned __int64)v59 > 0xF )
    {
      if ( v59 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      if ( v59 + 1 < 0 )
        std::__throw_bad_alloc();
      v84 = (void *)operator new(v59 + 1);
      v67 = (double *)v84;
      *(_QWORD *)&src[0] = v59;
    }
    else
    {
      if ( v59 == 1 )
      {
        LOBYTE(src[0]) = *v60;
        goto LABEL_66;
      }
      if ( !v59 )
      {
LABEL_66:
        v61 = src;
LABEL_67:
        n = v59;
        *((_BYTE *)v61 + v59) = 0;
        goto LABEL_68;
      }
      v67 = src;
    }
    memcpy(v67, v60, v59);
    v61 = (double *)v84;
    goto LABEL_67;
  }
LABEL_74:
  v84 = nullptr;
  sub_1862370(&v84, "simplify.delay", 10000);
  (*(void (__fastcall **)(_QWORD, void **))(**(_QWORD **)(a1 + 1352) + 88LL))(*(_QWORD *)(a1 + 1352), &v84);
  (*(void (__fastcall **)(_QWORD, void **))(**(_QWORD **)(a1 + 1360) + 88LL))(*(_QWORD *)(a1 + 1360), &v84);
  sub_18572D0(&v84);
  v83 = v7;
  sub_2334C0(&v82);
  return v56;
}

