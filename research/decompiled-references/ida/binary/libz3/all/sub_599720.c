_QWORD *__fastcall sub_599720(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int *a4)
{
  char **v4; // r13
  char **v5; // r14
  char **exception; // r13
  char **v7; // r14
  unsigned int *v10; // rbp
  _QWORD *v11; // rbx
  unsigned int *v12; // r15
  unsigned int *v13; // rax
  unsigned int v14; // r14d
  __int64 v15; // rax
  unsigned int v16; // r9d
  size_t v17; // rsi
  unsigned int *v18; // rax
  _BYTE *v19; // r15
  unsigned int v20; // ebp
  __int64 v21; // rax
  _BYTE *v22; // rsi
  unsigned int *v23; // r14
  size_t v24; // rdx
  unsigned int v25; // edx
  unsigned int v26; // r9d
  __int64 v27; // rax
  char *v28; // rsi
  int v29; // ecx
  unsigned int v30; // edx
  _BYTE *v31; // rdi
  _BYTE *v32; // rdx
  _QWORD *v33; // rbp
  unsigned int v34; // r14d
  _QWORD *v35; // rax
  _QWORD *v36; // rsi
  _QWORD *v37; // r9
  size_t v38; // rdx
  unsigned int v39; // eax
  _QWORD *v40; // rsi
  unsigned int v41; // edx
  unsigned int v42; // ecx
  _QWORD *v43; // rax
  _QWORD *v44; // r12
  unsigned int v45; // r13d
  char *v46; // r14
  _QWORD *v47; // rax
  _BYTE *v48; // rax
  char *v49; // r9
  unsigned int v50; // edx
  _DWORD *v51; // rcx
  char v52; // si
  __int64 v53; // rax
  __int64 v54; // rax
  unsigned int v55; // r9d
  size_t v56; // rsi
  unsigned int *v57; // rax
  _QWORD *v58; // rax
  unsigned int v59; // edx
  size_t v60; // rsi
  unsigned int *v61; // rax
  unsigned int v62; // eax
  __int64 v63; // rcx
  __int64 v64; // rdx
  unsigned int v65; // r10d
  size_t v66; // rsi
  unsigned int *v67; // rax
  __int64 v68; // rax
  int v69; // edx
  _QWORD *v70; // rax
  __int64 v71; // rdx
  size_t v72; // rdx
  _QWORD *v74; // rax
  unsigned int v75; // edx
  __int64 v76; // rcx
  __int64 v77; // rsi
  __int64 v78; // rcx
  unsigned int v79; // edx
  __int64 v80; // rcx
  char v81; // si
  __int64 v82; // rcx
  unsigned int v84; // [rsp+0h] [rbp-88h]
  unsigned int v85; // [rsp+0h] [rbp-88h]
  unsigned int v86; // [rsp+0h] [rbp-88h]
  unsigned int v87; // [rsp+8h] [rbp-80h]
  unsigned int v88; // [rsp+8h] [rbp-80h]
  unsigned int v89; // [rsp+8h] [rbp-80h]
  _QWORD *v90; // [rsp+8h] [rbp-80h]
  unsigned int v91; // [rsp+8h] [rbp-80h]
  unsigned int v92; // [rsp+8h] [rbp-80h]
  char *v93; // [rsp+8h] [rbp-80h]
  unsigned int v94; // [rsp+10h] [rbp-78h]
  _QWORD *ptra; // [rsp+18h] [rbp-70h]
  __int64 v97[11]; // [rsp+30h] [rbp-58h] BYREF

  if ( a1 != a2[1] )
    return nullptr;
  if ( a3 )
  {
    v10 = a4;
    v11 = nullptr;
    v12 = &a4[a3];
    do
    {
      v14 = *(_DWORD *)(a2[5] + 4LL * *v10);
      if ( v14 != -1 )
      {
        if ( v11 )
        {
          v15 = *((unsigned int *)v11 - 1);
          if ( (_DWORD)v15 == *((_DWORD *)v11 - 2) )
          {
            v16 = (unsigned int)(3 * v15 + 1) >> 1;
            v17 = 4 * v16 + 8;
            if ( 4 * (int)v15 + 8 >= (unsigned int)v17 || (unsigned int)v15 >= v16 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v97, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v97);
              sub_233E40((__int64)v97);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v87 = (unsigned int)(3 * v15 + 1) >> 1;
            v18 = (unsigned int *)sub_186B300(v11 - 1, v17);
            v11 = v18 + 2;
            *v18 = v87;
            v13 = &v18[v18[1] + 2];
          }
          else
          {
            v13 = (unsigned int *)v11 + v15;
          }
        }
        else
        {
          v74 = (_QWORD *)sub_186B270(0x10u);
          v11 = v74 + 1;
          *v74 = 2;
          v13 = (unsigned int *)(v74 + 1);
        }
        *v13 = v14;
        ++*((_DWORD *)v11 - 1);
      }
      ++v10;
    }
    while ( v10 != v12 );
    v19 = (_BYTE *)a2[4];
    if ( !v19 )
    {
      v94 = -a3;
      v54 = sub_186B270(0xAu);
      v30 = 2;
      *(_QWORD *)v54 = 2;
      v19 = (_BYTE *)(v54 + 8);
      v20 = 0;
      if ( -a3 <= 2 )
      {
        v31 = (_BYTE *)(v54 + 8);
        *(_DWORD *)(v54 + 4) = v94;
        v32 = &v19[v94];
        goto LABEL_29;
      }
      goto LABEL_53;
    }
  }
  else
  {
    v19 = (_BYTE *)a2[4];
    v11 = nullptr;
    if ( !v19 )
    {
      v33 = (_QWORD *)a2[2];
      if ( !v33 )
        goto LABEL_45;
      goto LABEL_31;
    }
  }
  v20 = *((_DWORD *)v19 - 1);
  v88 = *((_DWORD *)v19 - 2);
  v21 = sub_186B270(v88 + 8LL);
  v22 = (_BYTE *)a2[4];
  v23 = (unsigned int *)v21;
  v19 = (_BYTE *)(v21 + 8);
  *(_QWORD *)v21 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v88), _mm_cvtsi32_si128(v20)).m128i_u64[0];
  if ( v22 )
  {
    v24 = *((unsigned int *)v22 - 1);
    if ( v24 <= 1 )
    {
      if ( v24 == 1 )
        *(_BYTE *)(v21 + 8) = *v22;
    }
    else
    {
      memmove((void *)(v21 + 8), v22, v24);
    }
  }
  if ( a3 )
  {
    v25 = 1;
    v26 = v20 - a3;
    v94 = v20 - a3;
    v27 = *a4 + 1;
    v28 = (char *)v23 + v27;
    if ( (unsigned int)v27 < v20 )
    {
      if ( a3 != 1 && (_DWORD)v27 == a4[1] )
        goto LABEL_25;
      while ( 1 )
      {
        v29 = v27;
        LODWORD(v27) = v27 + 1;
        v19[v29 - v25] = v28[8];
        if ( (unsigned int)v27 >= v20 )
          break;
        if ( a3 == v25 )
        {
          v79 = v27 - a3;
          do
          {
            v80 = (unsigned int)v27;
            LODWORD(v27) = v27 + 1;
            v81 = v19[v80];
            v82 = v79++;
            v19[v82] = v81;
          }
          while ( (unsigned int)v27 < v20 );
          break;
        }
        while ( 1 )
        {
          ++v28;
          if ( a3 == v25 || (_DWORD)v27 != a4[v25] )
            break;
LABEL_25:
          LODWORD(v27) = v27 + 1;
          ++v25;
          if ( (unsigned int)v27 >= v20 )
            goto LABEL_26;
        }
      }
    }
LABEL_26:
    if ( v20 < a3 )
    {
      v30 = *v23;
      if ( *v23 >= v26 )
      {
        v23[1] = v26;
        v31 = &v19[v20];
        v32 = &v19[v26];
        goto LABEL_29;
      }
      do
      {
LABEL_53:
        v55 = (3 * v30 + 1) >> 1;
        v56 = v55 + 8;
        if ( v30 + 8 >= (unsigned int)v56 || v30 >= v55 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v97, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v97);
          sub_233E40((__int64)v97);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v92 = (3 * v30 + 1) >> 1;
        v57 = (unsigned int *)sub_186B300(v19 - 8, v56);
        v19 = v57 + 2;
        *v57 = v92;
        v30 = v92;
      }
      while ( v92 < v94 );
      v57[1] = v94;
      v31 = &v19[v20];
      v32 = &v19[v94];
      if ( v94 == v20 )
      {
LABEL_30:
        v33 = (_QWORD *)a2[2];
        if ( v33 )
          goto LABEL_31;
LABEL_59:
        v91 = -a3;
        v58 = (_QWORD *)sub_186B270(0x18u);
        *v58 = 2;
        v33 = v58 + 1;
        v34 = 0;
        goto LABEL_63;
      }
LABEL_29:
      memset(v31, 0, v32 - v31);
      goto LABEL_30;
    }
    v33 = (_QWORD *)a2[2];
    v23[1] = v26;
    if ( !v33 )
      goto LABEL_59;
  }
  else
  {
    v33 = (_QWORD *)a2[2];
    if ( !v33 )
      goto LABEL_66;
  }
LABEL_31:
  v34 = *((_DWORD *)v33 - 1);
  v89 = *((_DWORD *)v33 - 2);
  v35 = (_QWORD *)sub_186B270(8LL * v89 + 8);
  v36 = (_QWORD *)a2[2];
  v37 = v35;
  v33 = v35 + 1;
  *v35 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v89), _mm_cvtsi32_si128(v34)).m128i_u64[0];
  if ( v36 )
  {
    v38 = 8LL * *((unsigned int *)v36 - 1);
    if ( v38 <= 8 )
    {
      if ( v38 == 8 )
        v35[1] = *v36;
    }
    else
    {
      v90 = v35;
      memmove(v35 + 1, v36, v38);
      v37 = v90;
    }
  }
  if ( !a3 )
  {
LABEL_66:
    if ( !v11 )
      goto LABEL_45;
    goto LABEL_67;
  }
  v39 = *a4 + 1;
  v91 = v34 - a3;
  if ( v39 < v34 )
  {
    v40 = &v37[v39 + 1];
    v41 = 1;
    if ( a3 != 1 && v39 == a4[1] )
      goto LABEL_42;
    while ( 1 )
    {
      v42 = v39++;
      v33[v42 - v41] = *v40;
      if ( v39 >= v34 )
        break;
      if ( a3 == v41 )
      {
        v75 = v39 - a3;
        do
        {
          v76 = v39++;
          v77 = v33[v76];
          v78 = v75++;
          v33[v78] = v77;
        }
        while ( v39 < v34 );
        if ( v34 < a3 )
          goto LABEL_63;
        goto LABEL_44;
      }
      while ( 1 )
      {
        ++v40;
        if ( a3 == v41 || v39 != a4[v41] )
          break;
LABEL_42:
        ++v39;
        ++v41;
        if ( v39 >= v34 )
          goto LABEL_43;
      }
    }
  }
LABEL_43:
  if ( v34 < a3 )
  {
LABEL_63:
    while ( 1 )
    {
      v62 = *((_DWORD *)v33 - 2);
      if ( v62 >= v91 )
        break;
      v59 = (3 * v62 + 1) >> 1;
      v60 = 8 * v59 + 8;
      if ( 8 * v62 + 8 >= (unsigned int)v60 || v62 >= v59 )
      {
        v7 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v97, "Overflow encountered when expanding vector");
        *v7 = (char *)off_1C63128;
        sub_2333C0(v7 + 1, v97);
        sub_233E40((__int64)v97);
        __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v84 = (3 * v62 + 1) >> 1;
      v61 = (unsigned int *)sub_186B300(v33 - 1, v60);
      v33 = v61 + 2;
      *v61 = v84;
    }
    *((_DWORD *)v33 - 1) = v91;
    v63 = 8LL * v34;
    v64 = 8LL * v91;
    if ( v63 != v64 )
      memset(&v33[(unsigned __int64)v63 / 8], 0, v64 - v63);
    goto LABEL_66;
  }
LABEL_44:
  *((_DWORD *)v37 + 1) = v34 - a3;
  if ( !v11 )
  {
LABEL_45:
    ptra = (_QWORD *)sub_186B270(8u);
    *ptra = off_1C51EE0;
    goto LABEL_46;
  }
LABEL_67:
  if ( !*((_DWORD *)v11 - 1) )
    goto LABEL_45;
  ptra = (_QWORD *)sub_4C4920(*(_QWORD *)(a1 + 24), a2[8]);
  if ( !ptra )
  {
    if ( v33 )
    {
      v44 = nullptr;
      sub_186B220(v33 - 1);
      if ( v19 )
      {
LABEL_80:
        sub_186B220(v19 - 8);
        goto LABEL_81;
      }
    }
    else if ( v19 )
    {
      sub_186B220(v19 - 8);
    }
    v44 = nullptr;
LABEL_82:
    sub_186B220(v11 - 1);
    return v44;
  }
LABEL_46:
  v43 = (_QWORD *)sub_186B270(0x20u);
  v43[1] = 0;
  v44 = v43;
  *v43 = &off_1C51EB8;
  if ( v33 )
  {
    v43[2] = 0;
    v45 = *((_DWORD *)v33 - 1);
    if ( v45 )
    {
      v46 = v19;
      v47 = (_QWORD *)sub_186B270(0xAu);
      *v47 = 2;
      v48 = v47 + 1;
      v49 = &v19[v45];
      v50 = 1;
      v44[2] = v48;
      v51 = v48;
      while ( 1 )
      {
        v52 = *v46++;
        *v48 = v52;
        *(v51 - 1) = v50;
        if ( v46 == v49 )
          break;
        if ( *(v51 - 2) == v50 )
        {
          v65 = (3 * v50 + 1) >> 1;
          v66 = v65 + 8;
          if ( v50 + 8 >= (unsigned int)v66 || v50 >= v65 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v97, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, v97);
            sub_233E40((__int64)v97);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v93 = v49;
          v85 = (3 * v50 + 1) >> 1;
          v67 = (unsigned int *)sub_186B300(v51 - 2, v66);
          v51 = v67 + 2;
          v49 = v93;
          v44[2] = v67 + 2;
          *v67 = v85;
          v68 = v67[1];
          v69 = v68;
          v48 = (char *)v51 + v68;
          v50 = v69 + 1;
        }
        else
        {
          v53 = v50++;
          v48 = (char *)v51 + v53;
        }
      }
      v45 = *((_DWORD *)v33 - 1);
      v44[3] = ptra;
    }
    else
    {
      v43[3] = ptra;
    }
    v86 = *((_DWORD *)v33 - 2);
    v70 = (_QWORD *)sub_186B270(8LL * v86 + 8);
    v71 = *((unsigned int *)v33 - 1);
    v44[1] = v70 + 1;
    v72 = 8 * v71;
    *v70 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v86), _mm_cvtsi32_si128(v45)).m128i_u64[0];
    if ( v72 <= 8 )
    {
      if ( v72 == 8 )
        v70[1] = *v33;
    }
    else
    {
      memcpy(v70 + 1, v33, v72);
    }
    sub_186B220(v33 - 1);
  }
  else
  {
    v43[2] = 0;
    v43[3] = ptra;
  }
  if ( v19 )
    goto LABEL_80;
LABEL_81:
  if ( v11 )
    goto LABEL_82;
  return v44;
}

