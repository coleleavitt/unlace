__int64 __fastcall sub_B26760(__int64 a1, __int64 a2, __int64 *a3)
{
  char **exception; // r13
  char **v4; // r13
  char **v5; // r13
  __int64 v9; // r15
  _QWORD *v10; // rax
  _QWORD *v11; // r14
  __int64 *v12; // rbx
  __int64 v13; // rax
  int v14; // r8d
  __int64 *v15; // rsi
  unsigned int v16; // edx
  __int64 *v17; // rdi
  __int64 v18; // rdx
  __int64 *v19; // r9
  __int64 *i; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // rsi
  int v25; // eax
  __int64 *v26; // rsi
  _QWORD *v27; // r15
  __int64 v28; // rsi
  __int64 v29; // rax
  _QWORD *v30; // rdi
  unsigned int v31; // r8d
  __int64 v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // r9
  int v35; // eax
  _QWORD *v36; // r9
  __int64 v37; // r9
  __m128i *v38; // rbp
  unsigned int v39; // ecx
  __int64 v40; // r9
  __m128i *v41; // rax
  int v42; // r8d
  __int64 v43; // rdx
  __m128i *v44; // r10
  __m128i *v45; // rdx
  __int64 *v46; // rdi
  __int64 v47; // rcx
  __int64 v48; // r12
  _QWORD *v49; // rbp
  __int64 v50; // r15
  _QWORD *v51; // rax
  _QWORD *v52; // rsi
  __int64 v53; // r8
  int v54; // eax
  _DWORD *v55; // rdx
  __int64 v56; // r8
  unsigned int v57; // eax
  __int64 *v58; // rbp
  __int64 v59; // rsi
  bool v60; // zf
  __int64 result; // rax
  __int64 v62; // rsi
  __int64 v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rax
  unsigned int v66; // r9d
  size_t v67; // rsi
  unsigned int *v68; // rax
  __int64 v69; // rsi
  unsigned int v70; // r9d
  size_t v71; // rsi
  unsigned int *v72; // rax
  __int64 v73; // rsi
  unsigned int v74; // r15d
  size_t v75; // rsi
  unsigned int *v76; // rax
  __int64 v77; // rsi
  __m128i *v78; // rax
  __m128i *v79; // r10
  const __m128i *v80; // r8
  __m128i *v81; // r11
  __int64 v82; // rdx
  __m128i *v83; // rsi
  __m128i *v84; // rdx
  __m128i v85; // xmm0
  _QWORD *v86; // rax
  _QWORD *v87; // rdx
  __int64 v88; // [rsp+0h] [rbp-C8h]
  unsigned int v89; // [rsp+8h] [rbp-C0h]
  __int64 v90; // [rsp+8h] [rbp-C0h]
  unsigned int v91; // [rsp+8h] [rbp-C0h]
  unsigned int v92; // [rsp+8h] [rbp-C0h]
  unsigned int v93; // [rsp+10h] [rbp-B8h]
  __int64 v94; // [rsp+10h] [rbp-B8h]
  __int64 v95; // [rsp+10h] [rbp-B8h]
  unsigned int v96; // [rsp+18h] [rbp-B0h]
  __int64 *v97; // [rsp+20h] [rbp-A8h]
  _QWORD v98[4]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v99[11]; // [rsp+70h] [rbp-58h] BYREF

  sub_162E810(v98, *(_QWORD *)(a1 + 64), *(unsigned int *)(a1 + 192));
  v9 = v98[0];
  v88 = *(_QWORD *)(a1 + 24);
  v98[2] = v88;
  if ( v98[0] )
    ++*(_DWORD *)(v98[0] + 8LL);
  v10 = (_QWORD *)sub_186B270(0x18u);
  v10[1] = v9;
  v11 = v10;
  v12 = v10 + 1;
  *v10 = 0x100000002LL;
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v13 = *(unsigned int *)(a1 + 128);
  v14 = *(_DWORD *)(a2 + 12);
  v11[2] = a2;
  v15 = *(__int64 **)(a1 + 120);
  *((_DWORD *)v11 + 1) = 2;
  v16 = v13 - 1;
  v13 *= 16;
  v17 = (__int64 *)((char *)v15 + v13);
  v18 = 16LL * (v14 & v16);
  v19 = &v15[(unsigned __int64)v18 / 8];
  if ( v18 != v13 )
  {
    for ( i = &v15[(unsigned __int64)v18 / 8]; v17 != i; i += 2 )
    {
      v21 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v21 + 12) == v14 && a2 == v21 )
          goto LABEL_37;
      }
      else if ( !v21 )
      {
        goto LABEL_12;
      }
    }
  }
  for ( ; v19 != v15; v15 += 2 )
  {
    v64 = *v15;
    if ( (unsigned __int64)*v15 > 1 )
    {
      if ( *(_DWORD *)(v64 + 12) == v14 && a2 == v64 )
        goto LABEL_37;
    }
    else if ( !v64 )
    {
      break;
    }
  }
LABEL_12:
  v22 = *(_QWORD **)(a1 + 96);
  ++*(_DWORD *)(a2 + 8);
  if ( v22 )
  {
    v23 = *((_DWORD *)v22 - 1);
    if ( v23 == *((_DWORD *)v22 - 2) )
    {
      v74 = (3 * v23 + 1) >> 1;
      v75 = 8 * v74 + 8;
      if ( 8 * v23 + 8 >= (unsigned int)v75 || v23 >= v74 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v99, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v99);
        sub_233E40((__int64)v99);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v76 = (unsigned int *)sub_186B300(v22 - 1, v75);
      v77 = v76[1];
      v22 = v76 + 2;
      *v76 = v74;
      *(_QWORD *)(a1 + 96) = v76 + 2;
      LODWORD(v76) = v77;
      v26 = &v22[v77];
      v25 = (_DWORD)v76 + 1;
    }
    else
    {
      v24 = v23;
      v25 = v23 + 1;
      v26 = &v22[v24];
    }
  }
  else
  {
    v87 = (_QWORD *)sub_186B270(0x18u);
    *v87 = 2;
    v25 = 1;
    v22 = v87 + 1;
    *(_QWORD *)(a1 + 96) = v22;
    v26 = v22;
  }
  *v26 = a2;
  *((_DWORD *)v22 - 1) = v25;
  v27 = (_QWORD *)sub_186B270(0x10u);
  v28 = a3[1];
  v29 = *a3;
  v27[1] = 0;
  *v27 = v29;
  if ( v28 )
  {
    v30 = nullptr;
    v31 = 0;
    do
    {
      if ( v31 >= *(_DWORD *)(v28 - 4) )
        break;
      v32 = *(_QWORD *)(v28 + 8LL * v31);
      if ( v32 )
        ++*(_DWORD *)(v32 + 8);
      if ( v30 )
      {
        v33 = *((_DWORD *)v30 - 1);
        if ( v33 == *((_DWORD *)v30 - 2) )
        {
          v70 = (3 * v33 + 1) >> 1;
          v71 = 8 * v70 + 8;
          if ( 8 * v33 + 8 >= (unsigned int)v71 || v33 >= v70 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v99, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, v99);
            sub_233E40((__int64)v99);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v96 = (3 * v33 + 1) >> 1;
          v94 = v32;
          v91 = v31;
          v72 = (unsigned int *)sub_186B300(v30 - 1, v71);
          v73 = v72[1];
          v30 = v72 + 2;
          v31 = v91;
          v32 = v94;
          v27[1] = v72 + 2;
          *v72 = v96;
          LODWORD(v72) = v73;
          v36 = &v30[v73];
          v28 = a3[1];
          v35 = (_DWORD)v72 + 1;
        }
        else
        {
          v34 = v33;
          v35 = v33 + 1;
          v36 = &v30[v34];
        }
      }
      else
      {
        v95 = v32;
        v92 = v31;
        v86 = (_QWORD *)sub_186B270(0x18u);
        v30 = v86 + 1;
        *v86 = 2;
        v28 = a3[1];
        v35 = 1;
        v27[1] = v30;
        v31 = v92;
        v36 = v30;
        v32 = v95;
      }
      *v36 = v32;
      ++v31;
      *((_DWORD *)v30 - 1) = v35;
    }
    while ( v28 );
  }
  v37 = *(unsigned int *)(a1 + 128);
  v89 = 2 * v37;
  if ( 3 * (int)v37 < (unsigned int)(4 * (*(_DWORD *)(a1 + 132) + *(_DWORD *)(a1 + 136))) )
  {
    v78 = (__m128i *)sub_186B270(16LL * v89);
    v40 = 16LL * v89;
    v38 = v78;
    v79 = &v78[(unsigned __int64)v40 / 0x10];
    if ( v89 )
    {
      if ( ((16 * (_BYTE)v89) & 0x10) == 0 || (*v78 = 0, ++v78, v79 != v78) )
      {
        do
        {
          *v78 = 0;
          v78 += 2;
          v78[-1] = 0;
        }
        while ( v79 != v78 );
      }
    }
    v80 = *(const __m128i **)(a1 + 120);
    v81 = (__m128i *)&v80[*(unsigned int *)(a1 + 128)];
    v39 = v89 - 1;
    v41 = v79;
    if ( v80 != v81 )
    {
      do
      {
        while ( v80->m128i_i64[0] <= 1uLL )
        {
          if ( v81 == ++v80 )
            goto LABEL_94;
        }
        v82 = 16LL * (*(_DWORD *)(v80->m128i_i64[0] + 12) & v39);
        v83 = &v38[(unsigned __int64)v82 / 0x10];
        if ( v40 == v82 )
        {
LABEL_98:
          if ( v38 == v83 )
          {
LABEL_104:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v84 = v38;
          while ( v84->m128i_i64[0] )
          {
            if ( v83 == ++v84 )
              goto LABEL_104;
          }
        }
        else
        {
          v84 = &v38[(unsigned __int64)v82 / 0x10];
          while ( v84->m128i_i64[0] )
          {
            if ( v79 == ++v84 )
              goto LABEL_98;
          }
        }
        v85 = _mm_loadu_si128(v80++);
        *v84 = v85;
      }
      while ( v81 != v80 );
LABEL_94:
      v81 = *(__m128i **)(a1 + 120);
    }
    if ( v81 )
    {
      v97 = (__int64 *)v79;
      sub_186B220(v81);
      v41 = (__m128i *)v97;
      v40 = 16LL * v89;
      v39 = v89 - 1;
    }
    *(_QWORD *)(a1 + 120) = v38;
    *(_DWORD *)(a1 + 136) = 0;
    *(_DWORD *)(a1 + 128) = v89;
  }
  else
  {
    v38 = *(__m128i **)(a1 + 120);
    v39 = v37 - 1;
    v40 = 16 * v37;
    v41 = &v38[(unsigned __int64)v40 / 0x10];
  }
  v42 = *(_DWORD *)(a2 + 12);
  v43 = 16LL * (v42 & v39);
  v44 = &v38[(unsigned __int64)v43 / 0x10];
  if ( v43 != v40 )
  {
    v45 = &v38[(unsigned __int64)v43 / 0x10];
    v46 = nullptr;
    while ( 1 )
    {
      v47 = v45->m128i_i64[0];
      if ( v45->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v47 + 12) == v42 && a2 == v47 )
        {
          v45->m128i_i64[0] = a2;
          v45->m128i_i64[1] = (__int64)v27;
          goto LABEL_37;
        }
      }
      else
      {
        if ( !v47 )
        {
          if ( v46 )
            goto LABEL_35;
          v46 = (__int64 *)v45;
          goto LABEL_36;
        }
        v46 = (__int64 *)v45;
      }
      if ( ++v45 == v41 )
        goto LABEL_66;
    }
  }
  v46 = nullptr;
  while ( 1 )
  {
LABEL_66:
    if ( v44 == v38 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v65 = v38->m128i_i64[0];
    if ( v38->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v65 + 12) == v42 && a2 == v65 )
    {
      v38->m128i_i64[0] = a2;
      v38->m128i_i64[1] = (__int64)v27;
      goto LABEL_37;
    }
LABEL_65:
    ++v38;
  }
  if ( v65 )
  {
    v46 = (__int64 *)v38;
    goto LABEL_65;
  }
  if ( v46 )
LABEL_35:
    --*(_DWORD *)(a1 + 136);
  else
    v46 = (__int64 *)v38;
LABEL_36:
  *v46 = a2;
  v46[1] = (__int64)v27;
  ++*(_DWORD *)(a1 + 132);
LABEL_37:
  v48 = sub_186B270(0x20u);
  *(_OWORD *)v48 = 0;
  v49 = (_QWORD *)sub_186B270(0x10u);
  v49[1] = 0;
  *v49 = v88;
  if ( *((_DWORD *)v11 + 1) )
  {
    v50 = v11[1];
    if ( v50 )
      ++*(_DWORD *)(v50 + 8);
    v51 = (_QWORD *)sub_186B270(0x18u);
    v52 = v51 + 1;
    *v51 = 2;
    v53 = 0;
    v54 = 1;
    v49[1] = v52;
    v55 = v52;
    while ( 1 )
    {
      *v52 = v50;
      v56 = v53 + 1;
      *(v55 - 1) = v54;
      if ( (unsigned int)v56 >= *((_DWORD *)v11 + 1) )
        break;
      while ( 1 )
      {
        v50 = v11[v56 + 1];
        if ( v50 )
          ++*(_DWORD *)(v50 + 8);
        v57 = *(v55 - 1);
        if ( v57 == *(v55 - 2) )
          break;
        ++v56;
        *(_QWORD *)&v55[2 * v57] = v50;
        *(v55 - 1) = v57 + 1;
        if ( (unsigned int)v56 >= *((_DWORD *)v11 + 1) )
          goto LABEL_46;
      }
      v66 = (3 * v57 + 1) >> 1;
      v67 = 8 * v66 + 8;
      if ( 8 * v57 + 8 >= (unsigned int)v67 || v57 >= v66 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v99, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v99);
        sub_233E40((__int64)v99);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v93 = (3 * v57 + 1) >> 1;
      v90 = v56;
      v68 = (unsigned int *)sub_186B300(v55 - 2, v67);
      v69 = v68[1];
      v55 = v68 + 2;
      v49[1] = v68 + 2;
      v53 = v90;
      *v68 = v93;
      LODWORD(v68) = v69;
      v52 = &v55[2 * v69];
      v54 = (_DWORD)v68 + 1;
    }
  }
LABEL_46:
  *(_QWORD *)(v48 + 16) = v49;
  *(_QWORD *)(v48 + 24) = 0;
  sub_B23930(a1, v48);
  v58 = &v12[*((unsigned int *)v11 + 1)];
  while ( v12 < v58 )
  {
    while ( 1 )
    {
      v59 = *v12;
      if ( *v12 )
      {
        v60 = (*(_DWORD *)(v59 + 8))-- == 1;
        if ( v60 )
          break;
      }
      if ( ++v12 >= v58 )
        goto LABEL_52;
    }
    ++v12;
    sub_15D7BC0(v88, v59);
  }
LABEL_52:
  result = sub_186B220(v11);
  v62 = v98[0];
  if ( v98[0] )
  {
    v63 = v98[1];
    v60 = (*(_DWORD *)(v98[0] + 8LL))-- == 1;
    if ( v60 )
      return sub_15D7BC0(v63, v62);
  }
  return result;
}

